// rea decompile_all
// name: FUN_00418691
// address: 0x418691
// body: available
// range: 0x416700-0x416737 inclusive
// range: 0x418691-0x4186b7 inclusive
// range: 0x418700-0x41891b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x418879 to 0x41660c FUN_0041660c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00418691(byte param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  undefined1 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  ushort uVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  char cVar10;
  uint uVar11;
  undefined3 uVar12;
  uint extraout_ECX;
  short sVar13;
  int iVar14;
  uint uVar15;
  int unaff_EBP;
  ushort *puVar16;
  ushort *puVar17;
  code *pcVar18;
  float10 fVar19;
  float10 fVar20;
  uint local_8;

  uVar12 = (undefined3)((uint)param_3 >> 8);
  uVar11 = CONCAT31(uVar12,param_1) & 0xffffffdf;
  uVar7 = 1;
  iVar14 = *(int *)(unaff_EBP + -0xc);
  if (*(int *)(unaff_EBP + 0xc) < iVar14) goto LAB_00418702;
  *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0xc) + 1;
  puVar9 = (ulonglong *)(*(int *)(unaff_EBP + 0x10) + iVar14 * 8);
  puVar8 = *(ulonglong **)puVar9;
  cVar10 = (char)uVar11;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)((int)puVar9 + 4)) {
  case 0:
    puVar17 = (ushort *)(unaff_EBP + -0x86);
    uVar11 = *(uint *)(unaff_EBP + -0x20);
    if (0x10 < uVar11) {
      uVar11 = 0;
    }
    uVar15 = CONCAT31(uVar12,cVar10 + -0x44);
    if ((((char)(cVar10 + -0x44) == '\0') || (uVar15 = 0x10, (param_1 & 0xdf) == 0x58)) ||
       (uVar15 = 10, (param_1 & 0xdf) == 0x55)) {
      puVar16 = puVar17;
      if ((char)uVar15 == '\0') {
        if ((int)puVar8 < 0) {
          FUN_00416628(-(int)puVar8);
          *(undefined2 *)(unaff_EBP + -0x88) = 0x2d;
          return;
        }
        uVar15 = 10;
      }
      do {
        puVar9 = (ulonglong *)((uint)puVar8 / uVar15);
        sVar13 = (short)((uint)puVar8 % uVar15);
        uVar6 = sVar13 + 0x30;
        puVar16 = puVar16 + -1;
        if (0x39 < uVar6) {
          uVar6 = sVar13 + 0x37;
        }
        *puVar16 = uVar6;
        puVar8 = puVar9;
      } while (puVar9 != (ulonglong *)0x0);
      uVar15 = (uint)((int)puVar17 - (int)puVar16) >> 1;
      iVar14 = uVar11 - uVar15;
      if (uVar15 <= uVar11 && iVar14 != 0) {
        iVar3 = -iVar14;
        while (iVar14 = iVar14 + -1, iVar14 != 0) {
          (puVar16 + iVar3)[iVar14] = 0x30;
        }
        puVar16[iVar3] = 0x30;
      }
      return;
    }
    break;
  case 2:
    if (cVar10 != 'S') break;
    uVar11 = 1;
    goto LAB_004187da;
  case 3:
    uVar2 = 0;
    uVar5 = 0;
    goto LAB_00418884;
  case 4:
    if (cVar10 != 'S') break;
    uVar11 = (uint)(byte)*puVar8;
    puVar9 = (ulonglong *)((int)puVar8 + 1);
LAB_004187da:
    pcVar18 = FUN_00407b78;
LAB_004187f6:
    local_8 = 0x418804;
    (*(pcVar18 + *(int *)(unaff_EBP + -4)))(unaff_EBP + -0x10,puVar9,uVar11);
    puVar8 = *(ulonglong **)(unaff_EBP + -0x10);
    goto LAB_00418829;
  case 5:
    if (cVar10 == 'P') {
      FUN_0041660c(puVar8,8,0x10);
      return;
    }
    break;
  case 6:
    pcVar18 = FUN_00407bac;
    goto LAB_004187ed;
  case 9:
    if (cVar10 == 'S') {
      return;
    }
    break;
  case 10:
    if (cVar10 == 'S') {
      iVar14 = *(int *)(unaff_EBP + -0x20);
      if (iVar14 != 0) {
        do {
          if (iVar14 == 0) {
            return;
          }
          iVar14 = iVar14 + -1;
          uVar4 = *puVar8;
          puVar8 = (ulonglong *)((int)puVar8 + 2);
        } while ((ushort)uVar4 != 0);
      }
      return;
    }
    break;
  case 0xb:
    pcVar18 = FUN_00407c34;
LAB_004187ed:
    puVar9 = puVar8;
    if (cVar10 != 'S') break;
    goto LAB_004187f6;
  case 0xc:
    uVar2 = 1;
    uVar5 = 1;
LAB_00418884:
    if ((cVar10 == 'G') || (uVar5 = uVar2, cVar10 == 'E')) {
      uVar2 = uVar5;
      local_8 = *(uint *)(unaff_EBP + -0x20);
      uVar11 = 3;
      if (0x12 < local_8) {
        local_8 = 0xf;
      }
    }
    else {
      if (((cVar10 != 'F') && (cVar10 != 'N')) && (cVar10 != 'M')) break;
      local_8 = 0x12;
      uVar11 = *(uint *)(unaff_EBP + -0x20);
      if ((0x12 < uVar11) && (uVar11 = 2, cVar10 == 'M')) {
        uVar11 = (uint)*(byte *)(*(int *)(unaff_EBP + 8) + 6);
      }
    }
    uVar7 = FUN_00417c68(unaff_EBP + -0xa6,puVar8,uVar2,*(undefined4 *)(unaff_EBP + 8),uVar11);
    FUN_00407b88(unaff_EBP + -0x10,unaff_EBP + -0xa6,uVar7);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      return;
    }
    return;
  case 0xd:
    if (cVar10 != 'S') break;
    if ((ushort)*puVar8 < 2) {
      return;
    }
    FUN_00418130(unaff_EBP + -0x10,puVar8);
    puVar8 = *(ulonglong **)(unaff_EBP + -0x10);
    goto LAB_00418829;
  case 0xf:
    if (cVar10 != 'S') break;
LAB_00418829:
    if (puVar8 == (ulonglong *)0x0) {
      return;
    }
    uVar11 = *(uint *)((int)puVar8 + -4) >> 1;
LAB_00418832:
    if (*(uint *)(unaff_EBP + -0x20) < uVar11) {
      return;
    }
    return;
  case 0x10:
    goto switchD_004186b1_caseD_10;
  case 0x11:
    if (cVar10 != 'S') break;
    if (puVar8 == (ulonglong *)0x0) {
      return;
    }
    uVar11 = *(uint *)((int)puVar8 + -4);
    goto LAB_00418832;
  }
  do {
    uVar7 = 0;
LAB_00418702:
    uVar7 = FUN_0041891c(uVar7);
    puVar8 = (ulonglong *)
             FUN_004180b0(uVar7,*(int *)(unaff_EBP + -0x14),
                          (uint)(*(int *)(unaff_EBP + -0x24) - *(int *)(unaff_EBP + -0x14)) >> 1);
    uVar11 = extraout_ECX;
switchD_004186b1_caseD_10:
    uVar15 = *(uint *)(unaff_EBP + -0x20);
    if (0x20 < uVar15) {
      uVar15 = 0;
    }
    cVar10 = (char)uVar11;
    sVar13 = (short)CONCAT31((int3)(uVar11 >> 8),cVar10 + -0x44);
  } while ((((char)(cVar10 + -0x44) != '\0') && (sVar13 = 0x10, cVar10 != 'X')) &&
          (sVar13 = 10, cVar10 != 'U'));
  if (((char)sVar13 == '\0') && (sVar13 = 10, (*puVar8 & 0x8000000000000000) != 0)) {
    local_8 = -(int)*puVar8;
    FUN_00416738(&local_8);
    *(undefined2 *)(unaff_EBP + -0x68) = 0x2d;
    return;
  }
  fVar1 = (float10)1;
  if ((*puVar8 & 0x8000000000000000) == 0) {
    fVar20 = (float10)(longlong)*puVar8;
  }
  else {
    fVar20 = (float10)0x7fffffffffffffff + fVar1 + (float10)(*puVar8 & 0x7fffffffffffffff);
  }
  fVar19 = (float10)sVar13;
  puVar17 = (ushort *)(unaff_EBP + -0x66);
  do {
    puVar17 = puVar17 + -1;
    *puVar17 = (short)ROUND(fVar20 - (float10)(unkint10)(fVar20 / fVar19) * fVar19);
    fVar20 = fVar20 / fVar19;
    uVar6 = *puVar17 + 0x30;
    if (0x39 < uVar6) {
      uVar6 = *puVar17 + 0x37;
    }
    *puVar17 = uVar6;
  } while (fVar1 <= fVar20);
  ffree(fVar1);
  ffree(fVar20);
  ffree(fVar19);
  ffree(fVar20);
  uVar11 = (uint)((unaff_EBP + -0x66) - (int)puVar17) >> 1;
  if ((-1 < (int)uVar15) && (iVar14 = uVar15 - uVar11, uVar11 <= uVar15 && iVar14 != 0)) {
    iVar3 = -iVar14;
    while (iVar14 = iVar14 + -1, iVar14 != 0) {
      (puVar17 + iVar3)[iVar14] = 0x30;
    }
    puVar17[iVar3] = 0x30;
  }
  return;
}
