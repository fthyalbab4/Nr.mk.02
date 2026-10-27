// rea decompile_all
// name: FUN_0061b008
// address: 0x61b008
// body: available
// range: 0x61b008-0x61b0d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x61b026 (push 0x61b0d8 followed by fs-segment stack chaining); handler 0x61b0d8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061b008(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = (undefined1 *)0x61b01b;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_18 = &LAB_0061b0d8;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_00407058(&local_8);
  iVar2 = FUN_00408238();
  if (1 < iVar2) {
    iVar3 = FUN_00407058(&local_8);
    iVar2 = 0;
    if ((iVar3 == 0) || (*(int *)(iVar3 + -4) == 0)) {
      iVar3 = thunk_FUN_00404478();
      iVar2 = extraout_EDX;
    }
    if (*(short *)(iVar3 + -2 + (iVar2 + 1) * 2) == 0x22) {
      FUN_00407058(&local_8);
      iVar2 = FUN_00408238();
      iVar3 = FUN_00407058(&local_8);
      if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= iVar2 - 1U)) {
        iVar3 = thunk_FUN_00404478();
      }
      if (*(short *)(iVar3 + -2 + iVar2 * 2) == 0x22) {
        FUN_00407058(&local_8);
        iVar2 = FUN_00408238();
        if (SBORROW4(iVar2,2)) {
          FUN_00405944();
        }
        FUN_004086a8(local_8,2);
        uStack_20 = param_2;
        goto LAB_0061b0c2;
      }
    }
  }
  uStack_20 = 0x61b0c2;
  FUN_00407eb8(param_2,local_8);
LAB_0061b0c2:
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0061b0df;
  uStack_1c = 0x61b0d7;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
