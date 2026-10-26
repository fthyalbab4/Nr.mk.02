// rea decompile_all
// name: FUN_004babd0
// address: 0x4babd0
// body: available
// range: 0x4babd0-0x4bad67 inclusive
// range: 0x4bad6f-0x4baeb5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4bac5c (push 0x4bad68 followed by fs-segment stack chaining); handler 0x4bad68 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004babd0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  HWND hWnd;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar5;
  undefined1 *puVar6;

  puVar6 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  FUN_004f33c4(param_1);
  FUN_004bb63c(param_1);
  FUN_004bbaa4(param_1,*(undefined4 *)(param_1 + 0x6c));
  FUN_004bba78(param_1,*(undefined4 *)(*(int *)(param_1 + 100) + 0x18));
  FUN_004bbaf0(param_1,*(undefined4 *)(param_1 + 0x2d0));
  FUN_004bf314(param_1,*(undefined4 *)(param_1 + 0x2e4));
  if (*(int *)(param_1 + 0x2b0) != 0) {
    FUN_004b9648(*(undefined4 *)(param_1 + 0x29c));
    *(undefined1 *)(param_1 + 0x2f9) = 1;
    uVar4 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffe8;
    FUN_0043cc30(*(undefined4 *)(param_1 + 0x2ac));
    FUN_0043f254(*(undefined4 *)(param_1 + 0x2b0));
    FUN_0043f5ec(*(undefined4 *)(param_1 + 0x2b0),param_1);
    (**(code **)(**(int **)(param_1 + 0x2b0) + -4))(*(int **)(param_1 + 0x2b0),1);
    *(undefined4 *)(param_1 + 0x2b0) = 0;
    if (*(char *)(param_1 + 0x2b4) != '\0') {
      FUN_004b95e8(*(undefined4 *)(param_1 + 0x29c),*(undefined4 *)(param_1 + 0x314));
    }
    if (*(char *)(param_1 + 0x2dc) != '\0') {
      FUN_004bb744(param_1);
    }
    FUN_004bab1c();
    FUN_004ee79c(param_1,*(undefined4 *)(param_1 + 100),puVar5);
    if (*(int *)(param_1 + 0x284) != -1) {
      uVar2 = FUN_004b9534(*(undefined4 *)(param_1 + 0x29c),*(int *)(param_1 + 0x284));
      FUN_004bdea8(param_1,uVar2);
      iVar3 = FUN_004bde90(param_1);
      if (iVar3 != 0) {
        uVar2 = FUN_004bde90(param_1);
        FUN_004b8b90(uVar2,0);
      }
    }
    FUN_004bf420(param_1);
    *in_FS_OFFSET = uVar4;
    FUN_004b9828(*(undefined4 *)(param_1 + 0x29c),uVar4,puVar6);
    *(undefined1 *)(param_1 + 0x2f9) = 0;
    return;
  }
  FUN_004b8204(*(undefined4 *)(param_1 + 0x2ac));
  hWnd = (HWND)FUN_004f76a8(param_1);
  SendMessageW(hWnd,0x109d,-(uint)(*(char *)(param_1 + 0x3fc) != '\0'),0);
  FUN_004be2a4(param_1);
  if (*(int *)(param_1 + 0x280) != 0) {
    cVar1 = FUN_005069fc(*(int *)(param_1 + 0x280));
    if (cVar1 != '\0') {
      uVar4 = FUN_00506bcc(*(undefined4 *)(param_1 + 0x280));
      FUN_004baf80(param_1,uVar4,0);
    }
  }
  if (*(int *)(param_1 + 0x288) != 0) {
    cVar1 = FUN_005069fc(*(int *)(param_1 + 0x288));
    if (cVar1 != '\0') {
      uVar4 = FUN_00506bcc(*(undefined4 *)(param_1 + 0x288));
      FUN_004baf80(param_1,uVar4,1);
    }
  }
  if (*(int *)(param_1 + 0x28c) != 0) {
    cVar1 = FUN_005069fc(*(int *)(param_1 + 0x28c));
    if (cVar1 != '\0') {
      uVar4 = FUN_00506bcc(*(undefined4 *)(param_1 + 0x28c));
      FUN_004baf80(param_1,uVar4,2);
    }
  }
  if (*(int *)(param_1 + 0x290) != 0) {
    cVar1 = FUN_005069fc(*(int *)(param_1 + 0x290));
    if (cVar1 != '\0') {
      uVar4 = FUN_00506bcc(*(undefined4 *)(param_1 + 0x290));
      FUN_004baf80(param_1,uVar4,3);
    }
  }
  FUN_004be9a0(param_1);
  FUN_00503a6c();
  cVar1 = FUN_00503b78();
  if ((cVar1 != '\0') && (5 < *(int *)PTR_DAT_00781bfc)) {
    FUN_004f76a8(param_1);
    (**(code **)PTR_DAT_00782970)();
  }
  return;
}
