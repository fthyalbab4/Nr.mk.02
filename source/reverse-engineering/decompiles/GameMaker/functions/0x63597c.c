// rea decompile_all
// name: FUN_0063597c
// address: 0x63597c
// body: available
// range: 0x63597c-0x6359ae inclusive
// range: 0x635a13-0x6362be inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063597c(int param_1)

{
  double dVar1;
  double dVar2;
  int *piVar3;
  char cVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;

  iVar9 = FUN_00701cf4(&DAT_00700d94,1,*(undefined4 *)(param_1 + 0x654));
  switch(*(undefined4 *)(param_1 + 0x660)) {
  case 1:
    FUN_005b02d4(iVar9);
    break;
  case 2:
    FUN_005b0590(iVar9,*(undefined4 *)(*(int *)(param_1 + 0x3c0) + 0x290));
    FUN_005b0650(iVar9,*(undefined4 *)(*(int *)(param_1 + 0x3cc) + 0x290));
    break;
  case 3:
    FUN_005b0330(iVar9);
    break;
  case 4:
    uVar10 = FUN_005a540c(*(undefined4 *)
                           (*(int *)(*(int *)(*(int *)(param_1 + 0x3b8) + 0x1b4) + 0x10) + 0x14),
                          0xff);
    FUN_005b0710(iVar9,uVar10,*(undefined4 *)(*(int *)(param_1 + 0x3dc) + 0x290));
    break;
  case 5:
    uVar10 = (**(code **)(**(int **)(param_1 + 0x5dc) + 0xec))();
    FUN_005b08f4(iVar9,*(undefined4 *)(*(int *)(param_1 + 0x3f0) + 0x290),uVar10);
    break;
  case 6:
    cVar4 = (**(code **)(**(int **)(param_1 + 0x46c) + 0xec))();
    if (cVar4 != '\0') {
      FUN_005af90c(iVar9);
    }
    cVar4 = (**(code **)(**(int **)(param_1 + 0x470) + 0xec))();
    if (cVar4 != '\0') {
      FUN_005af984(iVar9);
    }
    break;
  case 8:
    cVar4 = (**(code **)(**(int **)(param_1 + 0x404) + 0xec))();
    if (cVar4 == '\0') {
      FUN_005b0374(iVar9,*(undefined4 *)(*(int *)(param_1 + 0x3fc) + 0x290));
    }
    else {
      FUN_005b03d4(iVar9,*(undefined4 *)(*(int *)(param_1 + 0x3fc) + 0x290));
    }
    break;
  case 9:
    cVar4 = (**(code **)(**(int **)(param_1 + 0x418) + 0xec))();
    if (cVar4 == '\0') {
      iVar11 = *(int *)(*(int *)(param_1 + 0x420) + 0x290);
      iVar14 = *(int *)(*(int *)(param_1 + 0x42c) + 0x290);
      FUN_005b0448(iVar9,iVar11 - iVar14,iVar11 + iVar14,
                   (short)*(undefined4 *)(*(int *)(param_1 + 0x414) + 0x290));
    }
    else {
      iVar11 = *(int *)(*(int *)(param_1 + 0x420) + 0x290);
      iVar14 = *(int *)(*(int *)(param_1 + 0x42c) + 0x290);
      FUN_005b04e0(iVar9,iVar11 - iVar14,iVar11 + iVar14,
                   (short)*(undefined4 *)(*(int *)(param_1 + 0x414) + 0x290));
    }
    break;
  case 10:
    uVar6 = (undefined2)*(undefined4 *)PTR_DAT_007819d0;
    uVar7 = (**(code **)(**(int **)(param_1 + 0x640) + 0xec))();
    uVar8 = (**(code **)(**(int **)(param_1 + 0x644) + 0xec))();
    uVar5 = FUN_00410500();
    uVar10 = FUN_00410500();
    FUN_005af828(iVar9,uVar10,uVar5,uVar8,uVar7,uVar6);
    break;
  case 0xb:
    uVar10 = FUN_005a540c(*(undefined4 *)
                           (*(int *)(*(int *)(*(int *)(param_1 + 0x43c) + 0x1b4) + 0x10) + 0x14),
                          *(undefined1 *)(*(int *)(param_1 + 0x448) + 0x290));
    FUN_00702dfc(iVar9,uVar10,0);
    break;
  case 0xc:
    uVar10 = FUN_005a540c(*(undefined4 *)
                           (*(int *)(*(int *)(*(int *)(param_1 + 0x488) + 0x1b4) + 0x10) + 0x14),
                          0xff);
    FUN_005b0b44(iVar9,uVar10,*(undefined4 *)(*(int *)(param_1 + 0x498) + 0x290));
    break;
  case 0xd:
    cVar4 = (**(code **)(**(int **)(param_1 + 0x4a0) + 0xec))();
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(**(int **)(param_1 + 0x4a4) + 0xec))();
      if (cVar4 == '\0') {
        uVar7 = (**(code **)(**(int **)(param_1 + 0x574) + 0xec))();
        uVar8 = (**(code **)(**(int **)(param_1 + 0x578) + 0xec))();
        FUN_005b229c(iVar9,3,0,uVar8,uVar7);
      }
      else {
        uVar7 = (**(code **)(**(int **)(param_1 + 0x574) + 0xec))();
        uVar8 = (**(code **)(**(int **)(param_1 + 0x578) + 0xec))();
        FUN_005b229c(iVar9,2,0,uVar8,uVar7);
      }
    }
    else {
      uVar7 = (**(code **)(**(int **)(param_1 + 0x574) + 0xec))();
      uVar8 = (**(code **)(**(int **)(param_1 + 0x578) + 0xec))();
      FUN_005b229c(iVar9,1,0,uVar8,uVar7);
    }
    break;
  case 0xe:
    dVar1 = (double)*(int *)(*(int *)(param_1 + 0x4b4) + 0x290);
    uVar5 = SUB82(dVar1,0);
    uVar6 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uVar8 = 0;
    uVar7 = (undefined2)*(undefined4 *)PTR_DAT_007819d0;
    uVar10 = (**(code **)(**(int **)(param_1 + 0x4bc) + 0xec))();
    FUN_005afbd4(iVar9,uVar10,3,uVar7,uVar8,uVar5,uVar6);
    break;
  case 0xf:
    cVar4 = (**(code **)(**(int **)(param_1 + 0x4dc) + 0xec))();
    if (cVar4 == '\0') {
      iVar11 = 100;
    }
    else {
      iVar11 = *(int *)(*(int *)(param_1 + 0x4d4) + 0x290);
    }
    cVar4 = (**(code **)(**(int **)(param_1 + 0x4e8) + 0xec))();
    if (cVar4 == '\0') {
      iVar14 = 100;
    }
    else {
      iVar14 = *(int *)(*(int *)(param_1 + 0x4d4) + 0x290);
    }
    if ((iVar11 < 100) || (iVar14 < 100)) {
      FUN_005b0004(iVar9,3,5,*(undefined4 *)PTR_DAT_007819d0,0,
                   SUB82((double)((float)iVar14 / 100.0),0),
                   (short)((ulonglong)(double)((float)iVar14 / 100.0) >> 0x20),
                   SUB82((double)((float)iVar11 / 100.0),0),
                   (short)((ulonglong)(double)((float)iVar11 / 100.0) >> 0x20));
    }
    else {
      uVar5 = 5;
      uVar8 = (undefined2)*(undefined4 *)PTR_DAT_007819d0;
      uVar7 = FUN_00404878();
      uVar10 = FUN_00404878();
      FUN_00701e94(iVar9,uVar10,uVar7,uVar8,uVar5);
      FUN_0070205c(iVar9,*(undefined4 *)(*(int *)(param_1 + 0x654) + 4),
                   *(undefined4 *)(*(int *)(param_1 + 0x654) + 8),3);
    }
    break;
  case 0x10:
    uVar10 = FUN_005a540c(*(undefined4 *)
                           (*(int *)(*(int *)(*(int *)(param_1 + 0x4f4) + 0x1b4) + 0x10) + 0x14),
                          0xff);
    uVar7 = (**(code **)(**(int **)(param_1 + 0x4fc) + 0xec))();
    uVar8 = (**(code **)(**(int **)(param_1 + 0x500) + 0xec))();
    uVar5 = (**(code **)(**(int **)(param_1 + 0x504) + 0xec))();
    uVar6 = FUN_00410500();
    FUN_005b0dc4(iVar9,uVar10,0,uVar6,uVar5,uVar8,uVar7);
    FUN_005b0b94(iVar9);
    break;
  case 0x11:
    FUN_005b0b94(iVar9);
    break;
  case 0x12:
    FUN_005b08d0(iVar9);
    break;
  case 0x13:
    uVar10 = FUN_005a540c(*(undefined4 *)
                           (*(int *)(*(int *)(*(int *)(param_1 + 0x51c) + 0x1b4) + 0x10) + 0x14),
                          *(undefined1 *)(*(int *)(param_1 + 0x570) + 0x290));
    uVar7 = (**(code **)(**(int **)(param_1 + 0x5e0) + 0xec))();
    uVar12 = FUN_00410500();
    FUN_005b0fa4(iVar9,uVar10,uVar12,uVar7);
    break;
  case 0x14:
    uVar10 = FUN_005a540c(*(undefined4 *)
                           (*(int *)(*(int *)(*(int *)(param_1 + 0x538) + 0x1b4) + 0x10) + 0x14),
                          *(undefined1 *)(*(int *)(param_1 + 0x560) + 0x290));
    uVar7 = FUN_00410500();
    uVar8 = (**(code **)(**(int **)(param_1 + 0x564) + 0xec))();
    uVar12 = FUN_00410500();
    FUN_005b1534(iVar9,uVar10,uVar12,uVar8,uVar7);
    break;
  case 0x15:
    dVar1 = (double)((float)*(int *)(*(int *)(param_1 + 0x588) + 0x290) / 100.0);
    dVar2 = (double)((float)*(int *)(*(int *)(param_1 + 0x590) + 0x290) / 100.0);
    FUN_005b0044(iVar9,3,*(undefined4 *)PTR_DAT_007819d0,SUB82(dVar2,0),
                 (short)((ulonglong)dVar2 >> 0x20),SUB82(dVar1,0),(short)((ulonglong)dVar1 >> 0x20))
    ;
    break;
  case 0x16:
    uVar10 = FUN_005a540c(*(undefined4 *)
                           (*(int *)(*(int *)(*(int *)(param_1 + 0x5a0) + 0x1b4) + 0x10) + 0x14),
                          *(undefined1 *)(*(int *)(param_1 + 0x5bc) + 0x290));
    uVar7 = (**(code **)(**(int **)(param_1 + 0x5c0) + 0xec))();
    uVar12 = FUN_00410500();
    FUN_005b1820(iVar9,uVar10,uVar12,uVar7);
    break;
  case 0x17:
    cVar4 = (**(code **)(**(int **)(param_1 + 0x5c8) + 0xec))();
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(**(int **)(param_1 + 0x5cc) + 0xec))();
      if (cVar4 == '\0') {
        uVar7 = (**(code **)(**(int **)(param_1 + 0x5d8) + 0xec))();
        uVar10 = (**(code **)(**(int **)(param_1 + 0x5d4) + 0xec))();
        FUN_005b2614(iVar9,3,uVar10,uVar7);
      }
      else {
        uVar7 = (**(code **)(**(int **)(param_1 + 0x5d8) + 0xec))();
        uVar10 = (**(code **)(**(int **)(param_1 + 0x5d4) + 0xec))();
        FUN_005b2614(iVar9,2,uVar10,uVar7);
      }
    }
    else {
      uVar7 = (**(code **)(**(int **)(param_1 + 0x5d8) + 0xec))();
      uVar10 = (**(code **)(**(int **)(param_1 + 0x5d4) + 0xec))();
      FUN_005b2614(iVar9,1,uVar10,uVar7);
    }
    break;
  case 0x18:
    uVar10 = FUN_005b4788(*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar9 + 8),
                          *(undefined4 *)
                           (*(int *)(*(int *)(*(int *)(param_1 + 0x5ec) + 0x1b4) + 0x10) + 0x14),
                          (short)*(undefined4 *)(param_1 + 0x664),
                          (short)*(undefined4 *)
                                  (*(int *)(*(int *)(*(int *)(param_1 + 0x5fc) + 0x1b4) + 0x10) +
                                  0x14));
    iVar11 = *(int *)(*(int *)(param_1 + 0x5f8) + 0x290);
    if (iVar11 != 0xff) {
      FUN_005b08f4(uVar10,iVar11,0);
    }
    uVar7 = (**(code **)(**(int **)(param_1 + 0x63c) + 0xec))();
    uVar8 = (**(code **)(**(int **)(param_1 + 0x638) + 0xec))();
    FUN_005b1c18(iVar9,uVar10,0,uVar8,uVar7);
    FUN_00405a7c(uVar10);
  }
  uVar10 = FUN_00701c94(&DAT_00700d94,1,200,(short)*(undefined4 *)PTR_DAT_007827c4,200);
  iVar11 = FUN_005b5764(*(undefined4 *)(*(int *)(param_1 + 0x654) + 4),
                        *(undefined4 *)(*(int *)(param_1 + 0x654) + 8));
  FUN_007034e0(iVar11,0,0,1,(short)iVar9);
  uVar13 = 200 - *(int *)(iVar11 + 8);
  iVar14 = (int)uVar13 >> 1;
  if (iVar14 < 0) {
    iVar14 = iVar14 + (uint)((uVar13 & 1) != 0);
  }
  uVar13 = 200 - *(int *)(iVar11 + 4);
  iVar15 = (int)uVar13 >> 1;
  if (iVar15 < 0) {
    iVar15 = iVar15 + (uint)((uVar13 & 1) != 0);
  }
  FUN_007034e0(uVar10,iVar15,iVar14,0,(short)iVar11);
  FUN_00405a7c(iVar9);
  uVar12 = FUN_0070399c(uVar10);
  FUN_00405a7c(iVar11);
  FUN_00405a7c(uVar10);
  piVar3 = *(int **)(*(int *)(param_1 + 0x38c) + 0x1b0);
  (**(code **)(*piVar3 + 8))(piVar3,uVar12);
  FUN_004eed28(*(undefined4 *)(param_1 + 0x38c));
  FUN_00405a7c(uVar12);
  return;
}
