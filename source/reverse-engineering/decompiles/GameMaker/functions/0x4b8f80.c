// rea decompile_all
// name: FUN_004b8f80
// address: 0x4b8f80
// body: available
// range: 0x4b8f80-0x4b90be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b8f80(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  HWND hWnd;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_2c;

  bVar2 = false;
  if (param_2 == 0) {
    if (param_3 != *(int *)(param_1 + 0xc)) {
      bVar2 = true;
      *(int *)(param_1 + 0xc) = param_3;
      if (*(char *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x2b4) == '\0') {
        local_48 = 2;
        local_2c = 0xffffffff;
        local_44 = FUN_004b920c(param_1);
        local_40 = 0;
        hWnd = (HWND)FUN_004b8b7c(param_1);
        SendMessageW(hWnd,0x104c,0,(LPARAM)&local_48);
      }
    }
  }
  else if (param_2 == 1) {
    if (param_3 != *(int *)(param_1 + 0x18)) {
      bVar2 = true;
      *(int *)(param_1 + 0x18) = param_3;
      if (*(char *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x2b4) == '\0') {
        uVar5 = 0xf00;
        uVar3 = FUN_004b920c(param_1,0,param_3,0xf00);
        uVar4 = FUN_004b8b7c(param_1);
        FUN_0040fa48(uVar4,uVar3,(*(int *)(param_1 + 0x18) + 1) * 0x100,uVar5);
      }
    }
  }
  else if ((param_2 == 2) && (param_3 != *(int *)(param_1 + 0x1c))) {
    bVar2 = true;
    *(int *)(param_1 + 0x1c) = param_3;
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
    iVar6 = param_3;
    if ((*(char *)(iVar1 + 0x2dc) != '\0') && (param_3 == -1)) {
      iVar6 = 0;
    }
    if (*(char *)(iVar1 + 0x2b4) == '\0') {
      uVar5 = 0xf000;
      uVar3 = FUN_004b920c(param_1,0,param_3,0xf000);
      uVar4 = FUN_004b8b7c(param_1);
      FUN_0040fa48(uVar4,uVar3,(iVar6 + 1) * 0x1000,uVar5);
    }
  }
  if ((bVar2) && (*(char *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x2b4) == '\0')) {
    uVar3 = FUN_004b920c(param_1);
    uVar4 = FUN_004b920c(param_1);
    uVar5 = FUN_004b8b50(param_1);
    FUN_004bb61c(uVar5,uVar4,uVar3);
  }
  return;
}
