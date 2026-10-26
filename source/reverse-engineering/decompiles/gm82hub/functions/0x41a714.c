// rea decompile_all
// name: FUN_0041a714
// address: 0x41a714
// body: available
// range: 0x41a714-0x41a7c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41a735 (push 0x41a7c7 followed by fs-segment stack chaining); handler 0x41a7c7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041a714(int param_1,int *param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_8;

  puStack_1c = (undefined1 *)0x41a72a;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_20 = &LAB_0041a7c7;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  while( true ) {
    FUN_00407498(&local_8);
    iVar4 = FUN_00408514();
    puVar3 = puStack_1c;
    if ((iVar4 < *param_2) || ((ushort)(*(short *)(local_8 + -2 + *param_2 * 2) - 0x30U) < 10))
    break;
    iVar4 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar4 = FUN_00407488(&local_8,local_8);
    }
    uVar1 = *(ushort *)(iVar4 + -2 + *param_2 * 2);
    if ((uVar1 < 0xd800) || (0xdfff < uVar1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      iVar4 = FUN_0041d720(local_8,*param_2);
      *param_2 = iVar4;
    }
    else {
      *param_2 = *param_2 + 1;
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0041a7ce;
  puStack_20 = (undefined1 *)0x41a7c6;
  thunk_FUN_004072d8(&local_8,uStack_24,puVar3);
  return;
}
