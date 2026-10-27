// rea decompile_all
// name: FUN_0041aa38
// address: 0x41aa38
// body: available
// range: 0x41aa38-0x41aaea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41aa59 (push 0x41aaeb followed by fs-segment stack chaining); handler 0x41aaeb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041aa38(int param_1,int *param_2)

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

  puStack_1c = (undefined1 *)0x41aa4e;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_20 = &LAB_0041aaeb;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  while( true ) {
    FUN_00407058(&local_8);
    iVar4 = FUN_00408238();
    puVar3 = puStack_1c;
    if ((iVar4 < *param_2) || ((ushort)(*(short *)(local_8 + -2 + *param_2 * 2) - 0x30U) < 10))
    break;
    iVar4 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar4 = FUN_00407048(&local_8,local_8);
    }
    uVar1 = *(ushort *)(iVar4 + -2 + *param_2 * 2);
    if ((uVar1 < 0xd800) || (0xdfff < uVar1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      iVar4 = FUN_0041d88c(local_8,*param_2);
      *param_2 = iVar4;
    }
    else {
      *param_2 = *param_2 + 1;
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0041aaf2;
  puStack_20 = (undefined1 *)0x41aaea;
  thunk_FUN_00406e5c(&local_8,uStack_24,puVar3);
  return;
}
