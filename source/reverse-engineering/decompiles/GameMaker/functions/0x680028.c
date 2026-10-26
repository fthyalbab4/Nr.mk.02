// rea decompile_all
// name: FUN_00680028
// address: 0x680028
// body: available
// range: 0x680028-0x680263 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00680028(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  HDC pHVar5;
  LPCWSTR pWVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  tagRECT *ptVar10;
  UINT UVar11;
  tagRECT local_20;

  FUN_004f9978(param_1);
  (**(code **)(*param_1 + 0x54))(param_1,&local_20);
  (**(code **)(*param_1 + 0x110))(param_1,&local_20);
  FUN_0045bda4(*(undefined4 *)(param_1[0x9c] + 0x48),1);
  iVar3 = (**(code **)(*param_1 + 0x11c))();
  if (((*(char *)(param_1[0xa7] + 0x20) != '\0') && (param_1[0xa1] != 0)) &&
     (*(int *)(param_1[0xa1] + 0xc) != 0)) {
    cVar2 = (**(code **)(**(int **)(param_1[0xa1] + 0xc) + 0x20))();
    if (cVar2 == '\0') {
      cVar2 = FUN_0067eb78(param_1[0xa7]);
      if (cVar2 != '\0') {
        bVar1 = true;
        goto LAB_006800b5;
      }
    }
  }
  bVar1 = false;
LAB_006800b5:
  if (bVar1) {
    (**(code **)(**(int **)(param_1[0xa1] + 0xc) + 0x40))(*(int **)(param_1[0xa1] + 0xc),1);
    (**(code **)(*(int *)param_1[0x9c] + 0x3c))
              ((int *)param_1[0x9c],8,iVar3,*(undefined4 *)(param_1[0xa1] + 0xc));
  }
  FUN_0045b0d0(*(undefined4 *)(param_1[0x9c] + 0x40),0xff000008);
  cVar2 = FUN_0067eb78(param_1[0xa7]);
  if (cVar2 == '\0') {
    cVar2 = FUN_0067ff8c(param_1);
    if (cVar2 != '\0') {
      iVar4 = FUN_0045bea4(param_1[0x9c],*(undefined4 *)(param_1[0xa7] + 0x40));
      (**(code **)(*param_1 + 0x54))(param_1,&local_20);
      local_20.left = 0x10;
      local_20.top = iVar3;
      pHVar5 = (HDC)FUN_0045ce2c(param_1[0x9c]);
      UVar11 = 0;
      ptVar10 = &local_20;
      iVar9 = -1;
      pWVar6 = (LPCWSTR)FUN_00407f44(*(undefined4 *)(param_1[0xa7] + 0x40));
      DrawTextW(pHVar5,pWVar6,iVar9,ptVar10,UVar11);
      iVar3 = iVar3 + iVar4 + 8;
    }
  }
  (**(code **)(*param_1 + 0x54))(param_1,&local_20);
  FUN_0045b498(*(undefined4 *)(param_1[0x9c] + 0x40),0);
  iVar4 = local_20.left + 0x10;
  local_20.right = local_20.right + -0x10;
  if (bVar1) {
    iVar9 = FUN_0045fde4(param_1[0xa1]);
    iVar4 = iVar4 + iVar9;
  }
  local_20.bottom = local_20.top;
  local_20.left = iVar4;
  pHVar5 = (HDC)FUN_0045ce2c(param_1[0x9c]);
  UVar11 = 0x410;
  ptVar10 = &local_20;
  iVar4 = -1;
  pWVar6 = (LPCWSTR)FUN_00407f44(param_1[0xa0]);
  DrawTextW(pHVar5,pWVar6,iVar4,ptVar10,UVar11);
  local_20.top = local_20.top + iVar3;
  local_20.bottom = local_20.bottom + iVar3;
  pHVar5 = (HDC)FUN_0045ce2c(param_1[0x9c]);
  UVar11 = 0x10;
  ptVar10 = &local_20;
  iVar3 = -1;
  pWVar6 = (LPCWSTR)FUN_00407f44(param_1[0xa0]);
  DrawTextW(pHVar5,pWVar6,iVar3,ptVar10,UVar11);
  (**(code **)(*param_1 + 0x118))();
  uVar7 = FUN_004edfcc(param_1);
  ptVar10 = &local_20;
  uVar8 = FUN_004edf8c(param_1);
  FUN_0040c114(0,0,uVar8,ptVar10,uVar7);
  (**(code **)(*param_1 + 0x114))(param_1,&local_20);
  return;
}
