// rea decompile_all
// name: FUN_0041d224
// address: 0x41d224
// body: available
// range: 0x41d224-0x41d2f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41d246 (push 0x41d2f1 followed by fs-segment stack chaining); handler 0x41d2f1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041d224(int param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_8;

  puStack_20 = (undefined1 *)0x41d23b;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_24 = &LAB_0041d2f1;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if (param_2 < 1) {
    bVar2 = true;
    puStack_20 = &stack0xfffffffc;
  }
  else {
    iVar5 = local_8;
    puStack_20 = &stack0xfffffffc;
    if ((local_8 != 0) && (puStack_20 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
      puStack_20 = &stack0xfffffffc;
      iVar5 = FUN_00407488(&local_8,local_8);
    }
    iVar4 = 0;
    if (iVar5 != 0) {
      iVar4 = *(int *)(iVar5 + -4);
    }
    bVar2 = iVar4 < param_2;
  }
  if ((!bVar2) && (iVar5 = 1, 0 < param_2)) {
    do {
      iVar4 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar4 = FUN_00407488(&local_8,local_8);
      }
      uVar1 = *(ushort *)(iVar4 + -2 + iVar5 * 2);
      if ((uVar1 < 0xd800) || (0xdfff < uVar1)) {
        iVar5 = iVar5 + 1;
      }
      else {
        iVar5 = FUN_0041d720(local_8,iVar5);
      }
    } while (iVar5 <= param_2);
  }
  puVar3 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0041d2f8;
  puStack_24 = (undefined1 *)0x41d2f0;
  thunk_FUN_004072d8(&local_8,uStack_28,puVar3);
  return;
}
