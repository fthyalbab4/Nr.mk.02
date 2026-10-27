// rea decompile_all
// name: FUN_0059b08c
// address: 0x59b08c
// body: available
// range: 0x59b08c-0x59b237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059b08c(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  HWND pHVar3;
  int iVar4;
  RECT *pRVar5;
  RECT *pRVar6;
  HRGN pHVar7;
  LPRECT ptVar8;
  undefined4 uVar9;
  UINT UVar10;
  undefined1 local_2c [16];
  RECT local_1c;
  UINT local_c;
  int local_8;

  local_c = 2;
  if (*(char *)(param_1 + 0x2fc) == '\0') {
    local_c = 6;
  }
  local_8 = param_2;
  if (param_3 == 0) {
    cVar1 = FUN_00406268(param_1);
    if (cVar1 == '\0') {
      FUN_0040c354(*(undefined4 *)(param_4 + 4),0,*(undefined4 *)(param_4 + 0xc),&local_1c,
                   *(undefined4 *)(param_4 + 0x3c));
    }
    else {
      uVar9 = *(undefined4 *)(param_4 + 0x3c);
      pRVar6 = &local_1c;
      iVar2 = FUN_004baf44(param_1);
      iVar2 = iVar2 - *(int *)(param_4 + 4);
      iVar4 = FUN_004baf44(param_1);
      FUN_0040c354(iVar4 - *(int *)(param_4 + 0xc),0,iVar2,pRVar6,uVar9);
      local_8 = -local_8;
    }
    ptVar8 = (LPRECT)0x0;
    pHVar7 = (HRGN)0x0;
    pRVar6 = &local_1c;
    pRVar5 = &local_1c;
    iVar4 = 0;
    iVar2 = local_8;
    UVar10 = local_c;
    pHVar3 = (HWND)FUN_004c45dc(param_1);
    ScrollWindowEx(pHVar3,iVar2,iVar4,pRVar5,pRVar6,pHVar7,ptVar8,UVar10);
  }
  else if (param_2 == 0) {
    FUN_0040c354(0,*(undefined4 *)(param_4 + 0x34),*(undefined4 *)(param_4 + 0xc),&local_1c,
                 *(undefined4 *)(param_4 + 0x3c));
    ptVar8 = (LPRECT)0x0;
    pHVar7 = (HRGN)0x0;
    pRVar6 = &local_1c;
    pRVar5 = &local_1c;
    iVar2 = 0;
    UVar10 = local_c;
    pHVar3 = (HWND)FUN_004c45dc(param_1);
    ScrollWindowEx(pHVar3,iVar2,param_3,pRVar5,pRVar6,pHVar7,ptVar8,UVar10);
  }
  else {
    FUN_0040c354(*(undefined4 *)(param_4 + 4),0,*(undefined4 *)(param_4 + 0xc),&local_1c,
                 *(undefined4 *)(param_4 + 0x34));
    ptVar8 = (LPRECT)0x0;
    pHVar7 = (HRGN)0x0;
    pRVar6 = &local_1c;
    pRVar5 = &local_1c;
    iVar4 = 0;
    iVar2 = local_8;
    UVar10 = local_c;
    pHVar3 = (HWND)FUN_004c45dc(param_1);
    ScrollWindowEx(pHVar3,iVar2,iVar4,pRVar5,pRVar6,pHVar7,ptVar8,UVar10);
    FUN_0040c354(0,*(undefined4 *)(param_4 + 0x34),*(undefined4 *)(param_4 + 4),&local_1c,
                 *(undefined4 *)(param_4 + 0x3c));
    ptVar8 = (LPRECT)0x0;
    pHVar7 = (HRGN)0x0;
    pRVar6 = &local_1c;
    pRVar5 = &local_1c;
    iVar4 = 0;
    iVar2 = param_3;
    UVar10 = local_c;
    pHVar3 = (HWND)FUN_004c45dc(param_1);
    ScrollWindowEx(pHVar3,iVar4,iVar2,pRVar5,pRVar6,pHVar7,ptVar8,UVar10);
    FUN_0040c354(*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_4 + 0x34),
                 *(undefined4 *)(param_4 + 0xc),&local_1c,*(undefined4 *)(param_4 + 0x3c));
    ptVar8 = (LPRECT)0x0;
    pHVar7 = (HRGN)0x0;
    pRVar6 = &local_1c;
    pRVar5 = &local_1c;
    iVar2 = local_8;
    UVar10 = local_c;
    pHVar3 = (HWND)FUN_004c45dc(param_1);
    ScrollWindowEx(pHVar3,iVar2,param_3,pRVar5,pRVar6,pHVar7,ptVar8,UVar10);
  }
  if ((*(byte *)(param_1 + 0x2b5) & 0x10) != 0) {
    FUN_0059cc50(param_1,local_2c);
    FUN_0059a734(param_1,local_2c);
  }
  return;
}
