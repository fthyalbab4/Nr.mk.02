// rea decompile_all
// name: FUN_0060e96c
// address: 0x60e96c
// body: available
// range: 0x60e96c-0x60ed65 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
FUN_0060e96c(int param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)

{
  double dVar1;
  double dVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int extraout_EDX_02;
  undefined1 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined2 uStack_9e;
  undefined1 local_90 [16];
  int local_80;
  undefined1 local_7c [16];
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  double local_2c;
  double local_24;
  double local_1c;
  double local_14;
  undefined1 local_6;
  char local_5;

  local_6 = 0;
  if ((double)CONCAT44(param_7,param_6) <= (double)CONCAT44(param_11,param_10)) {
    local_14 = (double)CONCAT44(param_7,param_6);
  }
  else {
    local_14 = (double)CONCAT44(param_11,param_10);
  }
  if (local_14 < (double)(*(int *)(param_1 + 0xc0) + 1)) {
    if ((double)CONCAT44(param_11,param_10) <= (double)CONCAT44(param_7,param_6)) {
      local_1c = (double)CONCAT44(param_7,param_6);
    }
    else {
      local_1c = (double)CONCAT44(param_11,param_10);
    }
    if ((double)*(int *)(param_1 + 0xb8) <= local_1c) {
      if ((double)CONCAT44(param_5,param_4) <= (double)CONCAT44(param_9,param_8)) {
        local_24 = (double)CONCAT44(param_5,param_4);
      }
      else {
        local_24 = (double)CONCAT44(param_9,param_8);
      }
      local_80 = *(int *)(param_1 + 0xc4) + 1;
      if (local_24 < (double)local_80) {
        if ((double)CONCAT44(param_9,param_8) <= (double)CONCAT44(param_5,param_4)) {
          local_2c = (double)CONCAT44(param_5,param_4);
        }
        else {
          local_2c = (double)CONCAT44(param_9,param_8);
        }
        if (((double)*(int *)(param_1 + 0xbc) <= local_2c) && (*(char *)(param_1 + 0x108) == '\0'))
        {
          local_5 = param_2;
          iVar6 = FUN_004048b8();
          uVar5 = (undefined2)extraout_EDX;
          uStack_9e = (undefined2)((uint)extraout_EDX >> 0x10);
          iVar7 = FUN_004048b8();
          if (extraout_EDX_00 != CONCAT22(uStack_9e,uVar5) || iVar7 != iVar6) {
            iVar6 = FUN_004048b8(CONCAT22(uStack_9e,uVar5),iVar6);
            uVar5 = (undefined2)extraout_EDX_01;
            uStack_9e = (undefined2)((uint)extraout_EDX_01 >> 0x10);
            iVar7 = FUN_004048b8();
            if ((extraout_EDX_02 != CONCAT22(uStack_9e,uVar5) || iVar7 != iVar6) &&
               (*(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x28) != 0.0)) {
              if ((double)CONCAT44(param_7,param_6) <= (double)CONCAT44(param_11,param_10)) {
                local_34 = CONCAT44(param_7,param_6);
              }
              else {
                local_34 = CONCAT44(param_11,param_10);
              }
              if ((double)CONCAT44(param_5,param_4) <= (double)CONCAT44(param_9,param_8)) {
                local_3c = CONCAT44(param_5,param_4);
              }
              else {
                local_3c = CONCAT44(param_9,param_8);
              }
              if ((double)CONCAT44(param_11,param_10) <= (double)CONCAT44(param_7,param_6)) {
                local_44 = CONCAT44(param_7,param_6);
              }
              else {
                local_44 = CONCAT44(param_11,param_10);
              }
              dVar2 = (double)CONCAT44(param_9,param_8);
              dVar1 = (double)CONCAT44(param_5,param_4);
              if (dVar2 < dVar1 || (dVar2 == dVar1) != 0) {
                local_4c = CONCAT44(param_5,param_4);
              }
              else {
                local_4c = CONCAT44(param_9,param_8);
              }
              uVar5 = FUN_004048b8(CONCAT22(uStack_9e,
                                            (ushort)(dVar2 < dVar1) << 8 |
                                            (ushort)(NAN(dVar2) || NAN(dVar1)) << 10 |
                                            (ushort)(dVar2 == dVar1) << 0xe),iVar6);
              puVar16 = local_7c;
              uVar8 = FUN_004048b8();
              uVar9 = FUN_004048b8();
              uVar10 = FUN_004048b8();
              FUN_00436ad0(uVar10,uVar9,uVar8,puVar16,uVar5);
              if (((((((double)CONCAT44(param_11,param_10) + (double)CONCAT44(param_7,param_6)) /
                      2.0 < (double)*(int *)(param_1 + 0xb8)) ||
                    ((double)*(int *)(param_1 + 0xc0) <
                     ((double)CONCAT44(param_11,param_10) + (double)CONCAT44(param_7,param_6)) / 2.0
                    )) && ((((double)CONCAT44(param_9,param_8) + (double)CONCAT44(param_5,param_4))
                            / 2.0 < (double)*(int *)(param_1 + 0xbc) ||
                           ((double)*(int *)(param_1 + 0xc4) <
                            ((double)CONCAT44(param_9,param_8) + (double)CONCAT44(param_5,param_4))
                            / 2.0)))) &&
                  (((cVar3 = FUN_0060e8bc(local_7c,*(undefined4 *)(param_1 + 0xb8),
                                          *(undefined4 *)(param_1 + 0xbc)), cVar3 == '\0' &&
                    (cVar3 = FUN_0060e8bc(local_7c,*(undefined4 *)(param_1 + 0xb8),
                                          *(undefined4 *)(param_1 + 0xc4)), cVar3 == '\0')) &&
                   (cVar3 = FUN_0060e8bc(local_7c,*(undefined4 *)(param_1 + 0xc0),
                                         *(undefined4 *)(param_1 + 0xbc)), cVar3 == '\0')))) &&
                 (cVar3 = FUN_0060e8bc(local_7c,*(undefined4 *)(param_1 + 0xc0),
                                       *(undefined4 *)(param_1 + 0xc4)), cVar3 == '\0')) {
                return local_6;
              }
              if (local_5 == '\0') {
                return 1;
              }
              if (*(int *)(param_1 + 0x44) < 0) {
                iVar6 = FUN_005799a0(*(undefined4 *)(param_1 + 8));
              }
              else {
                iVar6 = FUN_005799a0();
              }
              if (iVar6 == 0) {
                return local_6;
              }
              if (*(int *)(iVar6 + 4) == 0) {
                return local_6;
              }
              uVar8 = FUN_004102e4();
              if ((double)CONCAT44(param_7,param_6) <= (double)CONCAT44(param_11,param_10)) {
                local_54 = CONCAT44(param_7,param_6);
              }
              else {
                local_54 = CONCAT44(param_11,param_10);
              }
              if ((double)CONCAT44(param_5,param_4) <= (double)CONCAT44(param_9,param_8)) {
                local_5c = CONCAT44(param_5,param_4);
              }
              else {
                local_5c = CONCAT44(param_9,param_8);
              }
              if ((double)CONCAT44(param_11,param_10) <= (double)CONCAT44(param_7,param_6)) {
                local_64 = CONCAT44(param_7,param_6);
              }
              else {
                local_64 = CONCAT44(param_11,param_10);
              }
              if ((double)CONCAT44(param_9,param_8) <= (double)CONCAT44(param_5,param_4)) {
                local_6c = CONCAT44(param_5,param_4);
              }
              else {
                local_6c = CONCAT44(param_9,param_8);
              }
              uVar5 = FUN_004048b8();
              uVar11 = FUN_004048b8();
              uVar9 = *(undefined4 *)(param_1 + 0x24);
              uVar10 = *(undefined4 *)(param_1 + 0x20);
              uVar20 = *(undefined4 *)(param_1 + 0x2c);
              uVar19 = *(undefined4 *)(param_1 + 0x28);
              uVar18 = *(undefined4 *)(param_1 + 0x34);
              uVar17 = *(undefined4 *)(param_1 + 0x30);
              uVar12 = FUN_004048b8();
              puVar16 = local_90;
              uVar13 = FUN_004048b8();
              uVar14 = FUN_004048b8();
              uVar15 = FUN_004048b8();
              FUN_00436ad0(uVar15,uVar14,uVar13,puVar16,uVar12);
              uVar4 = FUN_00623f98(iVar6,uVar8,param_1 + 0xb8,local_90,uVar17,uVar18,uVar19,uVar20,
                                   uVar10,uVar9,uVar11,uVar5);
              return uVar4;
            }
          }
          local_6 = FUN_0060e6a4(param_1,local_5);
        }
      }
    }
  }
  return local_6;
}
