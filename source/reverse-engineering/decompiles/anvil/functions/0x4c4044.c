// rea decompile_all
// name: FUN_004c4044
// address: 0x4c4044
// body: available
// range: 0x4c4044-0x4c40f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c4044(int *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  HWND pHVar3;
  BOOL BVar4;
  HWND pHVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  UINT UVar10;
  undefined4 local_20;
  undefined4 uStack_1c;

  cVar2 = FUN_004c4988(param_1);
  if (cVar2 != '\0') {
    pHVar3 = (HWND)FUN_004c45dc(param_1);
    BVar4 = IsWindowVisible(pHVar3);
    if (BVar4 != 0) {
      bVar1 = true;
      goto LAB_004c4073;
    }
  }
  bVar1 = false;
LAB_004c4073:
  if (bVar1) {
    UVar10 = 0x97;
    iVar9 = 0;
    iVar8 = 0;
    iVar7 = 0;
    iVar6 = 0;
    pHVar5 = (HWND)0x0;
    pHVar3 = (HWND)FUN_004c45dc(param_1);
    SetWindowPos(pHVar3,pHVar5,iVar6,iVar7,iVar8,iVar9,UVar10);
  }
  FUN_004baee8(param_1,&local_20);
  FUN_00406268(param_1,param_2,param_3);
  iVar6 = param_1[0x13];
  (**(code **)(*param_1 + 0x98))(param_1,local_20,uStack_1c,iVar6,param_1[0x12]);
  if ((char)iVar6 != '\0') {
    UVar10 = 0x57;
    iVar9 = 0;
    iVar8 = 0;
    iVar7 = 0;
    iVar6 = 0;
    pHVar5 = (HWND)0x0;
    pHVar3 = (HWND)FUN_004c45dc(param_1);
    SetWindowPos(pHVar3,pHVar5,iVar6,iVar7,iVar8,iVar9,UVar10);
  }
  return;
}
