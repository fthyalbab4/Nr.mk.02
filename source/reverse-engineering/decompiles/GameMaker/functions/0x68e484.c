// rea decompile_all
// name: FUN_0068e484
// address: 0x68e484
// body: available
// range: 0x68e484-0x68e814 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068e484(int param_1,undefined4 param_2,char param_3,int *param_4)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int extraout_ECX;
  int extraout_EDX;
  uint uVar9;
  int iVar10;
  float10 fVar11;
  undefined2 uVar12;
  undefined2 uStack_7e;
  undefined1 local_6c [16];
  char local_5c;
  char local_5b;
  undefined4 local_58;
  int local_54;
  int local_50;
  char local_4c;
  char local_4b;
  char local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  undefined8 local_14;
  char local_9;
  undefined4 local_8;

  local_3c = *param_4;
  local_38 = param_4[1];
  iStack_34 = param_4[2];
  iStack_30 = param_4[3];
  local_9 = param_3;
  local_8 = param_2;
  if (param_3 == '\0') {
    if (*(char *)(*(int *)(param_1 + 0x61c) + 0x24) == '\0') {
      if (*PTR_DAT_00781720 != '\0') {
        iVar4 = FUN_00462a64(param_2);
        FUN_0045bc24(*(undefined4 *)(iVar4 + 0x48),*(undefined4 *)PTR_DAT_00781c3c);
        uVar2 = FUN_00410538();
        uVar3 = SUB42(local_6c,0);
        iVar4 = -local_3c;
        uVar5 = FUN_00410538();
        FUN_00438c38(iVar4,-local_38,uVar5,uVar3,uVar2);
        uVar2 = SUB42(local_6c,0);
        uStack_7e = (undefined2)((uint)local_6c >> 0x10);
        piVar6 = (int *)FUN_00462a64(local_8);
        (**(code **)(*piVar6 + 0x4c))(piVar6,CONCAT22(uStack_7e,uVar2));
      }
    }
    else {
      iVar4 = FUN_00462a64(param_2);
      FUN_0045bc24(*(undefined4 *)(iVar4 + 0x48),*(undefined4 *)(*(int *)(param_1 + 0x61c) + 0x20));
      uVar2 = FUN_00410538();
      uVar3 = SUB42(local_6c,0);
      iVar4 = -local_3c;
      uVar5 = FUN_00410538();
      FUN_00438c38(iVar4,-local_38,uVar5,uVar3,uVar2);
      uVar2 = SUB42(local_6c,0);
      uStack_7e = (undefined2)((uint)local_6c >> 0x10);
      piVar6 = (int *)FUN_00462a64(local_8);
      (**(code **)(*piVar6 + 0x4c))(piVar6,CONCAT22(uStack_7e,uVar2));
    }
  }
  iVar4 = 0;
  do {
    FUN_0065751c(*(undefined4 *)(param_1 + 0x61c),iVar4,&local_5c);
    uVar5 = local_58;
    if ((local_5b == local_9) && (local_5c != '\0')) {
      cVar1 = FUN_0064de18(local_58);
      if (cVar1 != '\0') {
        FUN_0064e048(uVar5);
        iVar7 = FUN_0062db94();
        if (0 < iVar7) {
          FUN_0064e048(uVar5);
          iVar7 = FUN_0062db9c();
          if (0 < iVar7) {
            local_14 = (double)*(float *)(param_1 + 0x165c);
            local_1c = (double)*(float *)(param_1 + 0x165c);
            if (local_40 != '\0') {
              FUN_0064e048(uVar5);
              iVar7 = FUN_0062db94();
              local_14 = (double)(((float)*(int *)(*(int *)(param_1 + 0x61c) + 0xc) / (float)iVar7)
                                 * *(float *)(param_1 + 0x165c));
              FUN_0064e048(uVar5);
              iVar7 = FUN_0062db9c();
              local_1c = (double)(((float)*(int *)(*(int *)(param_1 + 0x61c) + 0x10) / (float)iVar7)
                                 * *(float *)(param_1 + 0x165c));
            }
            uVar5 = FUN_0064e048(uVar5);
            local_20 = FUN_00410538();
            iVar8 = 0;
            local_28 = 0;
            iVar7 = extraout_ECX;
            iVar10 = extraout_EDX;
            if (local_4c != '\0') {
              local_20 = FUN_00410538();
              iVar7 = FUN_0062db94(uVar5);
              uVar9 = local_54 - iVar7 >> 0x1f;
              iVar7 = (local_54 - iVar7 ^ uVar9) - uVar9;
              uVar2 = (undefined2)iVar7;
              uStack_7e = (undefined2)((uint)iVar7 >> 0x10);
              iVar7 = FUN_0062db94(uVar5);
              iVar8 = CONCAT22(uStack_7e,uVar2) / iVar7;
              iVar10 = CONCAT22(uStack_7e,uVar2) % iVar7;
              local_28 = iVar10;
            }
            fVar11 = (float10)local_50 * (float10)*(float *)(param_1 + 0x165c) - (float10)local_38;
            local_24 = FUN_00410538(iVar8,iVar10,iVar7,SUB102(fVar11,0),
                                    (short)((unkuint10)fVar11 >> 0x20),
                                    (short)((unkuint10)fVar11 >> 0x40));
            local_2c = 0;
            if (local_4b != '\0') {
              local_24 = FUN_00410538();
              iVar7 = FUN_0062db9c(uVar5);
              uVar9 = local_50 - iVar7 >> 0x1f;
              iVar7 = (local_50 - iVar7 ^ uVar9) - uVar9;
              uVar2 = (undefined2)iVar7;
              uStack_7e = (undefined2)((uint)iVar7 >> 0x10);
              local_2c = FUN_0062db9c(uVar5);
              local_2c = CONCAT22(uStack_7e,uVar2) % local_2c;
            }
            uVar12 = (undefined2)local_24;
            uVar2 = FUN_00410538();
            uVar3 = FUN_00410538();
            FUN_0062deb4(uVar5,local_8,local_20,*(undefined4 *)(param_1 + 0x165c),
                         (undefined4)local_1c,local_1c._4_4_,(undefined4)local_14,local_14._4_4_,
                         local_4b,local_4c,local_2c,local_28,uVar3,uVar2,uVar12);
          }
        }
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 8);
  return;
}
