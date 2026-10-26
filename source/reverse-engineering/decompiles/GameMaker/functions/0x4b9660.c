// rea decompile_all
// name: FUN_004b9660
// address: 0x4b9660
// body: available
// range: 0x4b9660-0x4b97e3 inclusive
// range: 0x4b9821-0x4b9826 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b97aa (push 0x4b97e4 followed by fs-segment stack chaining); handler 0x4b97e4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b9660(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  HWND pHVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  UINT UVar7;
  WPARAM WVar8;
  LPARAM LVar9;

  if (param_2 == '\0') {
    if (*(int *)(param_1 + 8) == 0) {
      FUN_004bd958(*(int *)(param_1 + 4),*(undefined1 *)(*(int *)(param_1 + 4) + 0x2f8));
      iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x2ac) + 8) + 8);
      if (-1 < iVar5 + -1) {
        iVar6 = 0;
        do {
          iVar2 = FUN_004b8198(*(undefined4 *)(*(int *)(param_1 + 4) + 0x2ac),iVar6);
          if (*(int *)(iVar2 + 0x20) < 0) {
            FUN_004b7ff4(iVar2,*(int *)(iVar2 + 0x20));
            *(undefined4 *)(iVar2 + 0x20) = 0;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      *(undefined1 *)(param_1 + 0xc) = 1;
      uVar3 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffffe0;
      LVar9 = 0;
      WVar8 = 1;
      UVar7 = 0xb;
      pHVar4 = (HWND)FUN_004b9528(param_1);
      SendMessageW(pHVar4,UVar7,WVar8,LVar9);
      (**(code **)(**(int **)(param_1 + 4) + 0x90))();
      *in_FS_OFFSET = uVar3;
      *(undefined1 *)(param_1 + 0xc) = 0;
      return;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 4);
    *(undefined1 *)(iVar5 + 0x2f8) = *(undefined1 *)(iVar5 + 0x299);
    FUN_004bd958(iVar5,0);
    iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x2ac) + 8) + 8);
    if (-1 < iVar5 + -1) {
      iVar6 = 0;
      do {
        iVar2 = FUN_004b8198(*(undefined4 *)(*(int *)(param_1 + 4) + 0x2ac),iVar6);
        if (*(int *)(iVar2 + 0x24) < 0) {
          *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x24);
          uVar3 = FUN_004b7f58(iVar2);
          *(undefined4 *)(iVar2 + 0x24) = uVar3;
          FUN_004b7dec(iVar2);
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    LVar9 = 0;
    WVar8 = 0;
    UVar7 = 0xb;
    pHVar4 = (HWND)FUN_004b9528(param_1);
    SendMessageW(pHVar4,UVar7,WVar8,LVar9);
    cVar1 = FUN_004bbe00(*(undefined4 *)(param_1 + 4));
    if (cVar1 != '\0') {
      cVar1 = FUN_004bbe0c(*(undefined4 *)(param_1 + 4));
      if (cVar1 != '\0') {
        SendMessageW(*(HWND *)(*(int *)(param_1 + 4) + 0x2cc),0xb,0,0);
      }
    }
  }
  return;
}
