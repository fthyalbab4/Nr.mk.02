// rea decompile_all
// name: FUN_00574c80
// address: 0x574c80
// body: available
// range: 0x574c80-0x574d59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x574c9b (push 0x574d5a followed by fs-segment stack chaining); handler 0x574d5a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00574c80(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;

  puStack_20 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_00574d5a;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  uStack_8 = 0;
  FUN_00574be4(param_1);
  iVar2 = FUN_0050bbe0(param_2);
  if ((699 < iVar2) && (iVar2 < 0x2bd)) {
    FUN_0050bc1c(param_2,&local_c);
    FUN_00408194(param_1 + 4,local_c);
    FUN_0050bc1c(param_2,&local_10);
    FUN_00408194(param_1 + 8,local_10);
    uVar3 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    uVar3 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    uVar3 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    iVar2 = 0;
    do {
      uVar3 = FUN_0050bbe0(param_2);
      *(undefined4 *)(param_1 + 0x18 + iVar2 * 4) = uVar3;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x11);
    uVar3 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    if ((*(int *)(param_1 + 0x5c) < 1) || (2 < *(int *)(param_1 + 0x5c))) {
      *(undefined4 *)(param_1 + 0x5c) = 2;
    }
    uStack_8 = CONCAT13(1,(undefined3)uStack_8);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00574d61;
  puStack_24 = (undefined1 *)0x574d59;
  thunk_FUN_004072fc(&local_10,2,puVar1);
  return;
}
