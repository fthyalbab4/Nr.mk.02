// rea decompile_all
// name: FUN_0048fd5c
// address: 0x48fd5c
// body: available
// range: 0x48fd5c-0x48ffdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048fd5c(int param_1)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  HDC pHVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  tagRECT *ptVar8;
  tagRECT *ptVar9;
  undefined4 uVar10;
  UINT UVar11;
  undefined4 uVar12;
  UINT UVar13;
  tagRECT *ptVar14;
  tagRECT *ptVar15;
  tagRECT local_28;
  undefined1 local_18 [12];

  ptVar9 = &local_28;
  ptVar8 = &local_28;
  if (*(int *)(param_1 + 0x1cc) != 0) {
    if ((((*(char *)(param_1 + 0x1c6) == '\x02') &&
         (*(char *)(*(int *)(param_1 + 0x1cc) + 0x2aa) == '\0')) &&
        (*(char *)(*(int *)(param_1 + 0x1cc) + 0x361) == '\0')) &&
       (iVar4 = FUN_0048b734(), iVar4 == 0x50050)) {
      uVar7 = *(undefined4 *)(param_1 + 0x1a8);
      if (*(char *)(param_1 + 0x1b2) == '\0') {
        FUN_0040c354(*(int *)(param_1 + 0x48) + -0xe,1,*(int *)(param_1 + 0x48),&local_28,
                     *(undefined4 *)(param_1 + 0x4c));
        UVar13 = 0xe;
        UVar11 = 1;
        pHVar5 = (HDC)FUN_0045d4ec(uVar7);
        DrawEdge(pHVar5,ptVar9,UVar11,UVar13);
        local_28.top = 0;
        UVar13 = 1;
        UVar11 = 6;
        ptVar9 = &local_28;
        pHVar5 = (HDC)FUN_0045d4ec(uVar7);
        DrawEdge(pHVar5,ptVar9,UVar11,UVar13);
      }
      else {
        FUN_0040c354(*(int *)(param_1 + 0x48) + -0xd,0xffffffff,*(int *)(param_1 + 0x48),&local_28,
                     *(undefined4 *)(param_1 + 0x4c));
        UVar13 = 0xe;
        UVar11 = 10;
        pHVar5 = (HDC)FUN_0045d4ec(uVar7);
        DrawEdge(pHVar5,ptVar8,UVar11,UVar13);
        UVar13 = 1;
        UVar11 = 6;
        ptVar9 = &local_28;
        pHVar5 = (HDC)FUN_0045d4ec(uVar7);
        DrawEdge(pHVar5,ptVar9,UVar11,UVar13);
      }
    }
    ptVar14 = &local_28;
    ptVar9 = &local_28;
    ptVar15 = &local_28;
    ptVar8 = &local_28;
    if (*(char *)(param_1 + 0x1c6) == '\x04') {
      uVar7 = *(undefined4 *)(param_1 + 0x1a8);
      uVar1 = *(uint *)(param_1 + 0x48);
      iVar4 = (int)uVar1 >> 1;
      if (iVar4 < 0) {
        iVar4 = iVar4 + (uint)((uVar1 & 1) != 0);
      }
      FUN_0040c354(iVar4 + -1,0,uVar1,&local_28,*(undefined4 *)(param_1 + 0x4c));
      FUN_004d08e8();
      cVar3 = FUN_004d09f4();
      if (cVar3 == '\0') {
        UVar13 = 1;
        UVar11 = 6;
        pHVar5 = (HDC)FUN_0045d4ec(uVar7);
        DrawEdge(pHVar5,ptVar9,UVar11,UVar13);
      }
      else {
        uVar6 = FUN_004d08e8();
        FUN_004d1770(uVar6,0x1a,local_18);
        uVar7 = FUN_0045d4ec(uVar7);
        uVar6 = FUN_004d08e8();
        FUN_004d0b88(uVar6,uVar7,local_18,ptVar14);
      }
    }
    if ((*(byte *)(param_1 + 0x1c) & 0x10) != 0) {
      if ((byte)(*(char *)(param_1 + 0x1c6) - 3U) < 2) {
        piVar2 = *(int **)(param_1 + 0x1a8);
        FUN_0045c02c(piVar2[0x11],2);
        FUN_0045c014(piVar2[0x11],0xe);
        FUN_0045bf10(piVar2[0x11],0xffd8ce);
        FUN_0045c464(piVar2[0x12],1);
        uVar7 = FUN_004baf44(param_1);
        uVar6 = FUN_004baf84(param_1);
        (**(code **)(*piVar2 + 0x74))(piVar2,0,0,uVar6,uVar7);
      }
      else {
        if (*(char *)(*(int *)(param_1 + 0x1cc) + 0x2aa) == '\0') {
          FUN_004d08e8();
          cVar3 = FUN_004d09f4();
          if (cVar3 == '\0') {
            return;
          }
        }
        if (*(char *)(param_1 + 0x1b2) == '\0') {
          FUN_0040c354(0,0,*(undefined4 *)(param_1 + 0x48),&local_28,*(undefined4 *)(param_1 + 0x4c)
                      );
          FUN_004d08e8();
          cVar3 = FUN_004d09f4();
          if (cVar3 == '\0') {
            UVar13 = 0xf;
            UVar11 = 4;
            pHVar5 = (HDC)FUN_0045d4ec(*(undefined4 *)(param_1 + 0x1a8));
            DrawEdge(pHVar5,ptVar8,UVar11,UVar13);
          }
          else {
            uVar7 = FUN_004d08e8();
            FUN_004d1770(uVar7,3,local_18);
            uVar12 = 4;
            uVar10 = 0xf;
            uVar7 = FUN_0045d4ec(*(undefined4 *)(param_1 + 0x1a8));
            uVar6 = FUN_004d08e8();
            FUN_004d0af0(uVar6,uVar7,local_18,uVar10,uVar12,ptVar15);
          }
        }
      }
    }
  }
  return;
}
