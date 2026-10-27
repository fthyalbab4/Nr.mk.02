// rea decompile_all
// name: FUN_00574fd8
// address: 0x574fd8
// body: available
// range: 0x574fd8-0x5750e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x574ff4 (push 0x5750e4 followed by fs-segment stack chaining); handler 0x5750e4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00574fd8(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_005750e4;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_8 = param_2;
  FUN_00574f14(param_1);
  iVar2 = FUN_0050bbe0(local_8);
  if ((699 < iVar2) && (iVar2 < 0x2bd)) {
    FUN_0050bc1c(local_8,&local_c);
    FUN_00408194(param_1 + 4,local_c);
    uVar3 = FUN_0050bbe0(local_8);
    *(undefined4 *)(param_1 + 8) = uVar3;
    FUN_0050bc1c(local_8,&local_10);
    FUN_00408194(param_1 + 0xc,local_10);
    FUN_0050bc1c(local_8,&local_14);
    FUN_00408194(param_1 + 0x10,local_14);
    uVar3 = FUN_0050bbe0(local_8);
    FUN_00574da8(param_1,uVar3);
    iVar2 = *(int *)(param_1 + 0x18);
    if (-1 < iVar2 + -1) {
      iVar4 = 0;
      do {
        FUN_00574c80(*(undefined4 *)(*(int *)(param_1 + 0x14) + iVar4 * 4),local_8);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uVar3 = FUN_0050bbe0(local_8);
    FUN_00574e30(param_1,uVar3);
    iVar2 = *(int *)(param_1 + 0x20);
    if (-1 < iVar2 + -1) {
      iVar4 = 0;
      do {
        FUN_00574ae0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4 * 4),local_8);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_005750eb;
  puStack_28 = (undefined1 *)0x5750e3;
  thunk_FUN_004072fc(&local_14,3,puVar1);
  return;
}
