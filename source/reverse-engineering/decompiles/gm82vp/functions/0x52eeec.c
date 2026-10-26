// rea decompile_all
// name: FUN_0052eeec
// address: 0x52eeec
// body: available
// range: 0x52eeec-0x52f75c inclusive
// range: 0x52f78e-0x52f7a8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52ef26 (push 0x52f7a9 followed by fs-segment stack chaining); handler 0x52f7a9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52ef57 (push 0x52f787 followed by fs-segment stack chaining); handler 0x52f787 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52efa0 (push 0x52f75d followed by fs-segment stack chaining); handler 0x52f75d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052eeec(int *param_1,byte param_2,char param_3)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  BOOL BVar9;
  uint uVar10;
  int iVar11;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined4 uStack_bc;
  undefined1 *puStack_b8;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  undefined1 *puStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 *puStack_9c;
  undefined1 *puStack_98;
  undefined4 uStack_94;
  undefined1 *puStack_90;
  undefined1 *puStack_8c;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [16];
  tagRECT local_48;
  RECT local_38;
  RECT local_28;
  int local_14;
  int local_10;
  char local_a;
  byte local_9;
  int *local_8;

  puStack_8c = &stack0xfffffffc;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  puStack_90 = &LAB_0052f7a9;
  uStack_94 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_94;
  puStack_98 = (undefined1 *)0x52ef31;
  local_a = param_3;
  local_9 = param_2;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x20))();
  puVar12 = puStack_8c;
  if (cVar1 != '\0') {
    *in_FS_OFFSET = uStack_94;
    puStack_8c = &LAB_0052f7b0;
    puStack_90 = (undefined1 *)0x52f7a8;
    thunk_FUN_004072fc(&local_7c,9,puVar12);
    return;
  }
  puStack_98 = (undefined1 *)0x52ef41;
  FUN_00530d20(local_8);
  puStack_98 = (undefined1 *)0x52ef4c;
  FUN_004399ac(local_8[0xe]);
  puStack_9c = &LAB_0052f787;
  uStack_a0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_a0;
  uStack_a4 = 0;
  uStack_a8 = 0;
  puStack_ac = (undefined1 *)0x0;
  puStack_b0 = local_58;
  puStack_b4 = (undefined1 *)0x52ef6f;
  puStack_98 = &stack0xfffffffc;
  FUN_00436ad0(0,0,0);
  puStack_ac = local_58;
  puStack_b0 = (undefined1 *)0x52ef80;
  FUN_0040b9d0(&LAB_0051ec2c,&local_5c);
  puStack_b0 = (undefined1 *)local_5c;
  puStack_b4 = (undefined1 *)0x52ef95;
  FUN_00406268(local_8,local_8,0);
  puStack_b8 = &LAB_0052f75d;
  uStack_bc = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_bc;
  local_10 = 0;
  puStack_b4 = &stack0xfffffffc;
  local_14 = FUN_00524d94(local_8[0xb]);
  local_14 = local_14 * 6;
  if ((local_9 & 8) != 0) {
    iVar5 = FUN_00530654(local_8);
    if (0 < *(int *)(iVar5 + 8)) {
      piVar6 = (int *)FUN_00530654(local_8);
      (**(code **)(*piVar6 + 0x18))();
    }
    iVar5 = FUN_00524d94(local_8[0xb]);
    if (-1 < iVar5 + -1) {
      iVar11 = 0;
      do {
        local_10 = local_10 + 1;
        iVar7 = FUN_0052c584(local_8[0xb],iVar11);
        if (0 < *(int *)(*(int *)(iVar7 + 0x20) + 8)) {
          iVar7 = FUN_0052c584(local_8[0xb],iVar11);
          (**(code **)(**(int **)(iVar7 + 0x20) + 0x18))();
          iVar7 = MulDiv(local_10,100,local_14);
          uVar13 = 0;
          FUN_00436ad0(0,0,0,local_58,0);
          puVar12 = local_58;
          FUN_0040b9d0(&LAB_0051ec2c,&local_60);
          FUN_00406268(local_8,local_8,1,local_60,puVar12,uVar13,iVar7);
        }
        iVar11 = iVar11 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if ((local_9 & 4) == 0) {
    iVar5 = FUN_00524d94(local_8[0xb]);
    local_10 = local_10 + iVar5 * 2;
  }
  else {
    iVar5 = FUN_00524d94(local_8[0xb]);
    if (-1 < iVar5 + -1) {
      iVar11 = 0;
      do {
        local_10 = local_10 + 1;
        iVar7 = FUN_0052c584(local_8[0xb],iVar11);
        if (*(char *)(iVar7 + 0x34) != '\0') {
          iVar7 = FUN_0052c584(local_8[0xb],iVar11);
          uVar13 = *(undefined4 *)(iVar7 + 0x1c);
          iVar7 = FUN_0052c584(local_8[0xb],iVar11);
          uVar8 = FUN_0052b664(*(undefined4 *)(iVar7 + 0x38));
          iVar7 = FUN_0052c584(local_8[0xb],iVar11);
          cVar1 = FUN_0052eed4(*(undefined4 *)(iVar7 + 0x18),uVar8,uVar13);
          if (cVar1 == '\0') {
            iVar7 = FUN_0052c584(local_8[0xb],iVar11);
            FUN_0052b614(*(undefined4 *)(iVar7 + 0x38),0);
            iVar7 = MulDiv(local_10,100,local_14);
            uVar13 = 0;
            FUN_00436ad0(0,0,0,local_58,0);
            puVar12 = local_58;
            FUN_0040b9d0(&LAB_0051ec2c,&local_64);
            FUN_00406268(local_8,local_8,1,local_64,puVar12,uVar13,iVar7);
          }
        }
        iVar11 = iVar11 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = FUN_00524d94(local_8[0xb]);
    if (-1 < iVar5 + -2) {
      iVar5 = iVar5 + -1;
      iVar11 = 0;
      do {
        local_10 = local_10 + 1;
        iVar7 = FUN_0052c584(local_8[0xb],iVar11);
        if (*(int *)(iVar7 + 0x38) != 0) {
          iVar7 = FUN_0052c584(local_8[0xb],iVar11);
          cVar1 = FUN_0052b710(*(undefined4 *)(iVar7 + 0x38));
          if (((byte)(cVar1 - 2U) < 2) &&
             (iVar7 = FUN_0052c584(local_8[0xb],iVar11 + 1), *(char *)(iVar7 + 0x34) == '\0')) {
            uVar13 = FUN_0052c584(local_8[0xb],iVar11);
            FUN_00528e2c(uVar13,&local_28);
            uVar13 = FUN_0052c584(local_8[0xb],iVar11 + 1);
            FUN_00528e2c(uVar13,&local_38);
            BVar9 = IntersectRect(&local_48,&local_28,&local_38);
            if (BVar9 != 0) {
              BVar9 = EqualRect(&local_48,&local_38);
              if (BVar9 != 0) {
                iVar7 = FUN_0052c584(local_8[0xb],iVar11);
                FUN_0052b720(*(undefined4 *)(iVar7 + 0x38),0);
              }
              iVar7 = MulDiv(local_10,100,local_14);
              uVar13 = 0;
              FUN_00436ad0(0,0,0,local_58,0);
              puVar12 = local_58;
              FUN_0040b9d0(&LAB_0051ec2c,&local_68);
              FUN_00406268(local_8,local_8,1,local_68,puVar12,uVar13,iVar7);
            }
          }
        }
        iVar11 = iVar11 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if ((local_9 & 2) == 0) {
    iVar5 = FUN_00524d94(local_8[0xb]);
    local_10 = local_10 + iVar5;
  }
  else {
    iVar5 = FUN_00524d94(local_8[0xb]);
    iVar5 = iVar5 + -1;
    if (0 < iVar5) {
      do {
        local_10 = local_10 + 1;
        iVar11 = iVar5;
        do {
          iVar11 = iVar11 + -1;
          if ((iVar11 < 1) ||
             (iVar7 = FUN_0052c584(local_8[0xb],iVar11), *(int *)(iVar7 + 0x38) == 0)) break;
          iVar7 = FUN_0052c584(local_8[0xb],iVar11);
          cVar1 = FUN_0052b710(*(undefined4 *)(iVar7 + 0x38));
        } while (cVar1 == '\x03');
        uVar13 = FUN_0052c584(local_8[0xb],iVar11);
        uVar8 = FUN_0052c584(local_8[0xb],iVar5);
        FUN_0052ad28(uVar8,uVar13);
        iVar11 = MulDiv(local_10,100,local_14);
        uVar13 = 0;
        FUN_00436ad0(0,0,0,local_58,0);
        puVar12 = local_58;
        FUN_0040b9d0(&LAB_0051ec2c,&local_6c);
        FUN_00406268(local_8,local_8,1,local_6c,puVar12,uVar13,iVar11);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if ((local_9 & 1) == 0) {
    iVar5 = FUN_00524d94(local_8[0xb]);
    local_10 = local_10 + iVar5;
  }
  else {
    iVar5 = FUN_00524d94(local_8[0xb]);
    iVar5 = iVar5 + -1;
    if (-1 < iVar5) {
      do {
        local_10 = local_10 + 1;
        FUN_0052c584(local_8[0xb],iVar5);
        cVar1 = FUN_00527f54();
        if ((cVar1 == '\0') &&
           (iVar11 = FUN_0052c584(local_8[0xb],iVar5), *(char *)(iVar11 + 0x34) != '\0')) {
          iVar11 = FUN_0052c584(local_8[0xb],iVar5);
          sVar3 = FUN_0052b6e8(*(undefined4 *)(iVar11 + 0x38));
          FUN_0052c584(local_8[0xb],iVar5);
          FUN_0052a9c8();
          FUN_0052c584(local_8[0xb],iVar5);
          cVar1 = FUN_00527f54();
          if (cVar1 != '\0') {
            if ((0 < iVar5) &&
               (iVar11 = FUN_0052c584(local_8[0xb],iVar5 + -1), *(char *)(iVar11 + 0x34) != '\0')) {
              iVar11 = FUN_0052c584(local_8[0xb],iVar5 + -1);
              sVar4 = FUN_0052b6e8(*(undefined4 *)(iVar11 + 0x38));
              uVar10 = (uint)(ushort)(sVar4 + sVar3);
              iVar11 = FUN_0052c584(local_8[0xb],iVar5 + -1);
              FUN_0052b6f0(*(undefined4 *)(iVar11 + 0x38),uVar10);
            }
            FUN_00524dc4(local_8[0xb],iVar5);
          }
          iVar11 = MulDiv(local_10,100,local_14);
          uVar13 = 0;
          FUN_00436ad0(0,0,0,local_58,0);
          puVar12 = local_58;
          FUN_0040b9d0(&LAB_0051ec2c,&local_70);
          FUN_00406268(local_8,local_8,1,local_70,puVar12,uVar13,iVar11);
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != -1);
    }
  }
  iVar5 = FUN_00524d94(local_8[0xb]);
  local_10 = local_10 + iVar5;
  if ((local_9 & 4) == 0) {
    if (((local_9 & 0x10) != 0) && (local_a == '\t')) {
      FUN_0040b9d0(&LAB_0051ebfc,&local_78);
      FUN_0051eddc(local_78);
    }
  }
  else {
    iVar5 = FUN_00524d94(local_8[0xb]);
    iVar5 = iVar5 + -1;
    if (-1 < iVar5) {
      do {
        iVar11 = FUN_0052c584(local_8[0xb],iVar5);
        iVar11 = FUN_00524d94(*(undefined4 *)(iVar11 + 0x30));
        iVar11 = iVar11 + -1;
        if (-1 < iVar11) {
          do {
            iVar7 = FUN_0052c584(local_8[0xb],iVar5);
            uVar13 = FUN_00527c98(*(undefined4 *)(iVar7 + 0x30),iVar11);
            cVar1 = FUN_004061f8(uVar13,&PTR_FUN_0051c790);
            if (cVar1 == '\0') {
              iVar7 = FUN_0052c584(local_8[0xb],iVar5);
              uVar13 = FUN_00527c98(*(undefined4 *)(iVar7 + 0x30),iVar11);
              cVar1 = FUN_004061f8(uVar13,&LAB_0051c39c);
              if (cVar1 != '\0') goto LAB_0052f5b8;
              iVar7 = FUN_0052c584(local_8[0xb],iVar5);
              uVar13 = FUN_00527c98(*(undefined4 *)(iVar7 + 0x30),iVar11);
              cVar1 = FUN_004061f8(uVar13,&LAB_0051cf74);
              if (cVar1 != '\0') goto LAB_0052f5b8;
              iVar7 = FUN_0052c584(local_8[0xb],iVar5);
              uVar13 = FUN_00527c98(*(undefined4 *)(iVar7 + 0x30),iVar11);
              cVar1 = FUN_004061f8(uVar13,&LAB_0051d110);
              if ((cVar1 != '\0') &&
                 ((0 < iVar5 || (iVar7 = FUN_00524d94(local_8[0xb]), iVar7 == 1))))
              goto LAB_0052f5b8;
            }
            else {
LAB_0052f5b8:
              iVar7 = FUN_0052c584(local_8[0xb],iVar5);
              FUN_00524dc4(*(undefined4 *)(iVar7 + 0x30),iVar11);
            }
            iVar11 = iVar11 + -1;
          } while (iVar11 != -1);
        }
        iVar11 = FUN_0052c584(local_8[0xb],iVar5);
        if (*(int *)(iVar11 + 0x38) != 0) {
          iVar11 = FUN_0052c584(local_8[0xb],iVar5);
          uVar13 = *(undefined4 *)(iVar11 + 0x38);
          sVar3 = FUN_0052b6e8(uVar13);
          if ((((sVar3 == 0) || (iVar11 = FUN_00524d94(local_8[0xb]), iVar11 == 1)) &&
              (cVar1 = FUN_0052b60c(uVar13), cVar1 == '\0')) &&
             ((cVar1 = FUN_0052b6f8(uVar13), cVar1 == '\0' &&
              ((bVar2 = FUN_0052b710(uVar13), bVar2 < 2 ||
               (iVar11 = FUN_00524d94(local_8[0xb]), iVar11 == 1)))))) {
            FUN_00405fdc(uVar13);
          }
        }
        FUN_0052c584(local_8[0xb],iVar5);
        cVar1 = FUN_00527f54();
        if (cVar1 != '\0') {
          iVar11 = FUN_0052c584(local_8[0xb],iVar5);
          iVar11 = FUN_00524d94(*(undefined4 *)(iVar11 + 0x30));
          if (iVar11 == 0) {
            FUN_0052c584(local_8[0xb],iVar5);
            FUN_00405fdc();
          }
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != -1);
    }
    iVar5 = MulDiv(local_10,100,local_14);
    uVar13 = 0;
    FUN_00436ad0(0,0,0,local_58,0);
    puVar12 = local_58;
    FUN_0040b9d0(&LAB_0051ec2c,&local_74);
    FUN_00406268(local_8,local_8,1,local_74,puVar12,uVar13,iVar5);
  }
  puVar12 = puStack_b4;
  *in_FS_OFFSET = uStack_bc;
  puStack_b4 = &LAB_0052f764;
  puStack_b8 = (undefined1 *)0x52f715;
  iVar5 = FUN_004043a8(0,uStack_bc,puVar12);
  if (iVar5 == 0) {
    puStack_b8 = (undefined1 *)0x64;
  }
  else {
    puStack_b8 = (undefined1 *)0x0;
  }
  uStack_bc = 0;
  FUN_00436ad0(0,0,0,local_58,0);
  puVar12 = local_58;
  FUN_0040b9d0(&LAB_0051ec2c,&local_7c);
  FUN_00406268(local_8,local_8,2,local_7c,puVar12);
  return;
}
