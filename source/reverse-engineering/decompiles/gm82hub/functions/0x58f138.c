// rea decompile_all
// name: FUN_0058f138
// address: 0x58f138
// body: available
// range: 0x58f138-0x58f928 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058f138(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  undefined *puVar6;
  char cVar7;
  undefined2 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int unaff_EBP;
  int iVar12;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  float10 fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  undefined4 uVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined2 uVar27;
  double local_10c;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  int local_60;
  int local_5c;
  double local_54;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  char local_24;
  int local_1c;
  int local_18;
  int local_14;

  puVar6 = PTR_DAT_0068939c;
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  iVar4 = param_1[3];
  FUN_00563a8c();
  if (*(char *)(*(int *)puVar6 + 0x1c) != '\0') {
    FUN_00566200(*(undefined4 *)(*(int *)puVar6 + 0x18));
  }
  FUN_00563ab8();
  iVar12 = 0;
  do {
    iVar9 = FUN_00608fc4(*(undefined4 *)puVar6,iVar12);
    if (((*(char *)(iVar9 + 4) != '\0') && (*(char *)(iVar9 + 5) == '\0')) &&
       (cVar7 = FUN_005700dc(*(undefined4 *)(iVar9 + 8)), cVar7 != '\0')) {
      uVar20 = *(undefined8 *)(iVar9 + 0x10);
      uVar23 = *(undefined8 *)(iVar9 + 0x18);
      uVar27 = (undefined2)*(undefined4 *)(iVar9 + 0x3c);
      uVar11 = *(undefined4 *)(iVar9 + 0x38);
      uVar24 = *(undefined4 *)(iVar9 + 0x44);
      uVar25 = *(undefined4 *)(iVar9 + 0x40);
      dVar21 = (double)iVar1;
      dVar18 = (double)iVar2;
      local_1c = iVar3 - iVar1;
      uVar17 = SUB84((double)local_1c,0);
      uVar8 = (undefined2)((ulonglong)(double)local_1c >> 0x20);
      local_18 = iVar4 - iVar2;
      dVar16 = (double)local_18;
      uVar26 = *(undefined4 *)(iVar9 + 0x48);
      uVar15 = *(undefined4 *)(iVar9 + 0x54);
      uVar14 = *(undefined4 *)(iVar9 + 0x50);
      in_ST7 = in_ST6;
      uVar10 = FUN_005701d8(*(undefined4 *)(iVar9 + 8));
      FUN_0056fd50(uVar10,*(undefined1 *)(iVar9 + 0x20),*(undefined1 *)(iVar9 + 0x21),uVar14,uVar15,
                   uVar26,dVar16,uVar17,uVar8,dVar18,dVar21,uVar25,uVar24,uVar11,uVar27,uVar23,
                   uVar20);
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 != 8);
  iVar9 = 0;
  iVar12 = 0;
  FUN_0058ea1c();
  local_10c = (double)in_ST0;
  while (((iVar9 < *(int *)(*(int *)puVar6 + 0x88) || (iVar12 < *(int *)(*(int *)puVar6 + 0x68))) ||
         (-100000000.0 < local_10c))) {
    if (iVar9 < *(int *)(*(int *)puVar6 + 0x88)) {
      FUN_00609014(*(undefined4 *)puVar6,iVar9,&local_7c);
    }
    if (iVar12 < *(int *)(*(int *)puVar6 + 0x68)) {
      unaff_EBP = FUN_00608fec(*(undefined4 *)puVar6,iVar12);
    }
    if ((iVar12 < *(int *)(*(int *)puVar6 + 0x68)) && (*(char *)(unaff_EBP + 0x108) != '\0')) {
      iVar12 = iVar12 + 1;
    }
    else if (((*(uint *)PTR_DAT_00689414 & 0xfffff) == 0x686 ||
              (*(uint *)PTR_DAT_00689414 & 0xfffff) * 4 < 0x1a18) ||
            ((*(int *)PTR_DAT_00688fdc == 0x5bb65c62 &&
             ((*(uint *)PTR_DAT_00688e18 & 0x3fffffff) == 0x10118)))) {
      if ((iVar12 < *(int *)(*(int *)puVar6 + 0x68)) && (*(char *)(unaff_EBP + 200) == '\0')) {
        iVar12 = iVar12 + 1;
      }
      else if ((iVar9 < *(int *)(*(int *)puVar6 + 0x88)) && (local_24 == '\0')) {
        iVar9 = iVar9 + 1;
      }
      else if (((iVar12 < *(int *)(*(int *)puVar6 + 0x68)) &&
               (local_10c < *(double *)(unaff_EBP + 0x48))) ||
              (((iVar9 < *(int *)(*(int *)puVar6 + 0x88) && (local_10c < local_54)) ||
               (local_10c <= -100000000.0)))) {
        if ((*(int *)(*(int *)puVar6 + 0x68) <= iVar12) ||
           ((iVar9 < *(int *)(*(int *)puVar6 + 0x88) && (*(double *)(unaff_EBP + 0x48) < local_54)))
           ) {
          FUN_00563ab8();
          if ((double)local_60 * (double)CONCAT44(uStack_40,local_44) +
              (double)CONCAT44(uStack_78,local_7c) <= (double)CONCAT44(uStack_78,local_7c)) {
            dVar21 = (double)local_60 * (double)CONCAT44(uStack_40,local_44) +
                     (double)CONCAT44(uStack_78,local_7c);
          }
          else {
            dVar21 = (double)CONCAT44(uStack_78,local_7c);
          }
          if ((double)CONCAT44(uStack_78,local_7c) <=
              (double)local_60 * (double)CONCAT44(uStack_40,local_44) +
              (double)CONCAT44(uStack_78,local_7c)) {
            dVar18 = (double)local_60 * (double)CONCAT44(uStack_40,local_44) +
                     (double)CONCAT44(uStack_78,local_7c);
          }
          else {
            dVar18 = (double)CONCAT44(uStack_78,local_7c);
          }
          if ((double)local_5c * (double)CONCAT44(uStack_38,local_3c) +
              (double)CONCAT44(uStack_70,local_74) <= (double)CONCAT44(uStack_70,local_74)) {
            dVar16 = (double)local_5c * (double)CONCAT44(uStack_38,local_3c) +
                     (double)CONCAT44(uStack_70,local_74);
          }
          else {
            dVar16 = (double)CONCAT44(uStack_70,local_74);
          }
          if ((double)CONCAT44(uStack_70,local_74) <=
              (double)local_5c * (double)CONCAT44(uStack_38,local_3c) +
              (double)CONCAT44(uStack_70,local_74)) {
            dVar5 = (double)local_5c * (double)CONCAT44(uStack_38,local_3c) +
                    (double)CONCAT44(uStack_70,local_74);
          }
          else {
            dVar5 = (double)CONCAT44(uStack_70,local_74);
          }
          if (((dVar21 <= (double)iVar3) && (dVar16 <= (double)iVar4)) &&
             (((double)iVar1 <= dVar18 &&
              (((double)iVar2 <= dVar5 && (cVar7 = FUN_005700dc(local_6c), cVar7 != '\0')))))) {
            uVar11 = FUN_005701d8(local_6c);
            FUN_0056fc8c(uVar11,local_34);
          }
          iVar9 = iVar9 + 1;
        }
        else {
          FUN_00563ab8();
          cVar7 = FUN_0060faa8(*(undefined4 *)(unaff_EBP + 0xd0),8);
          if (cVar7 == '\0') {
            cVar7 = FUN_005798a4(*(undefined4 *)(unaff_EBP + 8));
            if (cVar7 != '\0') {
              if ((((*(double *)(unaff_EBP + 0x20) == 1.0) && (*(double *)(unaff_EBP + 0x28) == 1.0)
                   ) && (*(double *)(unaff_EBP + 0x30) == 0.0)) &&
                 ((*(int *)(unaff_EBP + 0x40) == 0xffffff && (*(double *)(unaff_EBP + 0x38) == 1.0))
                 )) {
                uVar8 = FUN_004102e4();
                uVar11 = FUN_005799a0(*(undefined4 *)(unaff_EBP + 8));
                FUN_00624ac4(uVar11,uVar8);
              }
              else {
                uVar20 = *(undefined8 *)(unaff_EBP + 0x50);
                uVar23 = *(undefined8 *)(unaff_EBP + 0x58);
                uVar27 = (undefined2)*(undefined4 *)(unaff_EBP + 0x24);
                uVar11 = *(undefined4 *)(unaff_EBP + 0x20);
                uVar24 = *(undefined4 *)(unaff_EBP + 0x2c);
                uVar25 = *(undefined4 *)(unaff_EBP + 0x28);
                uVar22 = *(undefined8 *)(unaff_EBP + 0x30);
                uVar19 = *(undefined8 *)(unaff_EBP + 0x38);
                uVar8 = FUN_004102e4();
                uVar26 = FUN_005799a0(*(undefined4 *)(unaff_EBP + 8));
                FUN_00624b78(uVar26,uVar8,*(undefined4 *)(unaff_EBP + 0x40),uVar19,uVar22,uVar25,
                             uVar24,uVar11,uVar27,uVar23,uVar20);
              }
            }
          }
          else {
            FUN_0058a738(unaff_EBP,unaff_EBP,8);
          }
          iVar12 = iVar12 + 1;
        }
      }
      else {
        fVar13 = in_ST7;
        FUN_00563ab8();
        FUN_0058eb14();
        FUN_0058ea88();
        local_10c = (double)in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
        in_ST6 = in_ST7;
        in_ST7 = fVar13;
      }
    }
    else {
      iVar12 = iVar12 + 1;
      iVar9 = iVar9 + 1;
    }
  }
  FUN_00563ab8();
  iVar12 = 0;
  do {
    iVar9 = FUN_00608fc4(*(undefined4 *)puVar6,iVar12);
    if (((*(char *)(iVar9 + 4) != '\0') && (*(char *)(iVar9 + 5) != '\0')) &&
       (cVar7 = FUN_005700dc(*(undefined4 *)(iVar9 + 8)), cVar7 != '\0')) {
      uVar20 = *(undefined8 *)(iVar9 + 0x10);
      uVar23 = *(undefined8 *)(iVar9 + 0x18);
      uVar27 = (undefined2)*(undefined4 *)(iVar9 + 0x3c);
      uVar11 = *(undefined4 *)(iVar9 + 0x38);
      uVar24 = *(undefined4 *)(iVar9 + 0x44);
      uVar25 = *(undefined4 *)(iVar9 + 0x40);
      dVar21 = (double)iVar1;
      dVar18 = (double)iVar2;
      local_18 = iVar3 - iVar1;
      uVar17 = SUB84((double)local_18,0);
      uVar8 = (undefined2)((ulonglong)(double)local_18 >> 0x20);
      local_14 = iVar4 - iVar2;
      dVar16 = (double)local_14;
      uVar26 = *(undefined4 *)(iVar9 + 0x48);
      uVar15 = *(undefined4 *)(iVar9 + 0x54);
      uVar14 = *(undefined4 *)(iVar9 + 0x50);
      local_1c = iVar1;
      uVar10 = FUN_005701d8(*(undefined4 *)(iVar9 + 8));
      FUN_0056fd50(uVar10,*(undefined1 *)(iVar9 + 0x20),*(undefined1 *)(iVar9 + 0x21),uVar14,uVar15,
                   uVar26,dVar16,uVar17,uVar8,dVar18,dVar21,uVar25,uVar24,uVar11,uVar27,uVar23,
                   uVar20);
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 != 8);
  FUN_00563ab8();
  cVar7 = FUN_005798a4(*(undefined4 *)PTR_DAT_00688ff0);
  if (cVar7 != '\0') {
    local_1c = FUN_00563448();
    dVar21 = (double)local_1c;
    local_18 = FUN_0056348c();
    dVar18 = (double)local_18;
    uVar8 = 0;
    uVar26 = 0;
    uVar25 = 0x3ff00000;
    uVar24 = 0;
    uVar23 = 0;
    uVar20 = 0x3ff0000000000000;
    uVar11 = FUN_005799a0(*(undefined4 *)PTR_DAT_00688ff0);
    FUN_00624b78(uVar11,*(undefined4 *)PTR_DAT_00688a0c,0xffffff,uVar20,uVar23,uVar24,uVar25,uVar26,
                 uVar8,dVar18,dVar21);
  }
  FUN_0058eedc();
  return;
}
