// rea decompile_all
// name: FUN_00644e5c
// address: 0x644e5c
// body: available
// range: 0x644e5c-0x645290 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00644e5c(int param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  undefined1 *puVar14;
  undefined2 uVar15;
  undefined2 uStack_6e;
  int local_64;
  int local_60;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];

  iVar11 = *param_2;
  local_64 = param_2[1];
  iVar12 = param_2[2];
  local_60 = param_2[3];
  FUN_00644964(param_1);
  iVar12 = iVar12 - iVar11;
  local_60 = local_60 - local_64;
  iVar5 = local_60;
  if ((0 < iVar12) && (0 < local_60)) {
    iVar2 = FUN_00410538();
    iVar3 = FUN_00410538();
    iVar4 = FUN_00410500();
    iVar4 = iVar4 + 1;
    iVar5 = FUN_00410500();
    iVar5 = iVar5 + 1;
    if (iVar11 < iVar2) {
      iVar12 = iVar11 + (iVar12 - iVar2);
      iVar11 = iVar2;
    }
    if (iVar4 + iVar2 < iVar12 + iVar11) {
      iVar12 = (iVar4 + iVar2) - iVar11;
    }
    if (0 < iVar12) {
      if (local_64 < iVar3) {
        local_60 = (local_60 - iVar3) + local_64;
        local_64 = iVar3;
      }
      if (iVar3 + iVar5 < local_64 + local_60) {
        iVar5 = (iVar5 + iVar3) - local_64;
        local_60 = iVar5;
      }
      if (0 < local_60) {
        iVar5 = *(int *)(param_1 + 0x710);
        iVar2 = (iVar11 * iVar5) / 100 - *(int *)(param_1 + 0x6f4);
        iVar3 = (local_64 * iVar5) / 100 - *(int *)(param_1 + 0x6f8);
        iVar6 = (int)((longlong)iVar12 * (longlong)iVar5);
        fVar13 = (float10)iVar6 / (float10)100.0;
        iVar6 = FUN_00410500(iVar6,(int)((ulonglong)((longlong)iVar12 * (longlong)iVar5) >> 0x20),
                             iVar5,SUB104(fVar13,0),(int)((unkuint10)fVar13 >> 0x20),
                             (short)((unkuint10)fVar13 >> 0x40));
        lVar1 = (longlong)local_60 * (longlong)*(int *)(param_1 + 0x710);
        iVar5 = FUN_00410500((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
        piVar7 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
        FUN_00463dc0(piVar7,7);
        (**(code **)(*piVar7 + 0x44))(piVar7,iVar6);
        (**(code **)(*piVar7 + 0x38))(piVar7,iVar5);
        FUN_00438c38(iVar2,iVar3,iVar2 + iVar6,auStack_30,(short)(iVar3 + iVar5));
        uVar15 = SUB42(auStack_30,0);
        FUN_00438c38(0,0,iVar6,auStack_20,iVar5);
        puVar14 = auStack_20;
        uVar8 = FUN_00462a64(*(undefined4 *)(param_1 + 0x708));
        uVar9 = FUN_00462a64(piVar7);
        FUN_0045c400(uVar9,puVar14,uVar8,uVar15);
        FUN_00703cd8(*(undefined4 *)(param_1 + 0x704),piVar7,0,1,local_60,iVar12,local_64,iVar11,
                     iVar5,iVar6,0);
        FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x5dc) + 0x1b0));
        piVar10 = (int *)FUN_00462a64();
        uVar15 = SUB42(piVar7,0);
        uStack_6e = (undefined2)((uint)piVar7 >> 0x10);
        (**(code **)(*piVar10 + 0x3c))(piVar10,iVar2,iVar3);
        FUN_00405a7c(piVar10);
        iVar5 = *(int *)(param_1 + 0x710);
        if (((399 < *(int *)PTR_DAT_007828c8 * iVar5) && (399 < *(int *)PTR_DAT_007827a8 * iVar5))
           && (*(char *)(param_1 + 0x714) != '\0')) {
          FUN_0045b850(*(undefined4 *)(CONCAT22(uStack_6e,uVar15) + 0x44),
                       *(undefined4 *)PTR_DAT_00782478);
          if (*PTR_DAT_007824b8 == '\0') {
            iVar5 = FUN_0045b954(*(undefined4 *)(CONCAT22(uStack_6e,uVar15) + 0x44),4);
          }
          else {
            iVar5 = FUN_0045b954(*(undefined4 *)(CONCAT22(uStack_6e,uVar15) + 0x44),0xe);
          }
          iVar12 = iVar12 + iVar11 + -1;
          if (iVar11 <= iVar12) {
            iVar12 = (iVar12 - iVar11) + 1;
            do {
              iVar5 = iVar11 / *(int *)PTR_DAT_007828c8;
              if (iVar11 % *(int *)PTR_DAT_007828c8 == 0) {
                (**(code **)(*(int *)CONCAT22(uStack_6e,uVar15) + 0x5c))
                          ((int *)CONCAT22(uStack_6e,uVar15),
                           (*(int *)(param_1 + 0x710) * iVar11) / 100 - *(int *)(param_1 + 0x6f4),
                           iVar2);
                iVar5 = (**(code **)(*(int *)CONCAT22(uStack_6e,uVar15) + 0x58))
                                  ((int *)CONCAT22(uStack_6e,uVar15),
                                   (*(int *)(param_1 + 0x710) * iVar11) / 100 -
                                   *(int *)(param_1 + 0x6f4),iVar2 + iVar6);
              }
              iVar11 = iVar11 + 1;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          iVar11 = (int)piVar7 + local_64 + -1;
          if ((int)piVar7 <= iVar11) {
            iVar11 = (iVar11 - (int)piVar7) + 1;
            do {
              iVar5 = (int)piVar7 / *(int *)PTR_DAT_007827a8;
              if ((int)piVar7 % *(int *)PTR_DAT_007827a8 == 0) {
                (**(code **)(*(int *)CONCAT22(uStack_6e,uVar15) + 0x5c))
                          ((int *)CONCAT22(uStack_6e,uVar15),iVar4,
                           (*(int *)(param_1 + 0x710) * (int)piVar7) / 100 -
                           *(int *)(param_1 + 0x6f8));
                iVar5 = (**(code **)(*(int *)CONCAT22(uStack_6e,uVar15) + 0x58))
                                  ((int *)CONCAT22(uStack_6e,uVar15),iVar4 + iVar3,
                                   (*(int *)(param_1 + 0x710) * (int)piVar7) / 100 -
                                   *(int *)(param_1 + 0x6f8));
              }
              piVar7 = (int *)((int)piVar7 + 1);
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
        }
      }
    }
  }
  return iVar5;
}
