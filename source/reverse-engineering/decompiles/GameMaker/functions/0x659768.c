// rea decompile_all
// name: FUN_00659768
// address: 0x659768
// body: available
// range: 0x659768-0x65999b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00659768(int param_1,int *param_2,char param_3,float param_4,int param_5,int param_6)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  byte bVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 *puVar20;
  undefined2 uVar21;
  undefined2 uStack_5e;
  undefined1 local_4c [16];
  char local_3c;
  char local_3b;
  undefined4 local_38;
  int local_34;
  int local_30;
  byte local_2c;
  byte local_2b;
  char local_20;
  undefined8 local_1c;
  undefined8 local_14;
  int *local_c;
  int local_8;

  bVar12 = 0;
  local_c = param_2;
  local_8 = param_1;
  if (param_3 == '\0') {
    if (*(char *)(param_1 + 0x24) == '\0') {
      if (*PTR_DAT_00781720 != '\0') {
        iVar3 = FUN_00462a64(param_2);
        FUN_0045bc24(*(undefined4 *)(iVar3 + 0x48),*(undefined4 *)PTR_DAT_00781c3c);
        iVar3 = FUN_00410538();
        uVar2 = (undefined2)(iVar3 - param_5);
        puVar20 = local_4c;
        iVar3 = FUN_00410538();
        FUN_0040c114(-param_6,-param_5,iVar3 - param_6,puVar20,uVar2);
        uVar2 = SUB42(local_4c,0);
        uStack_5e = (undefined2)((uint)local_4c >> 0x10);
        piVar4 = (int *)FUN_00462a64(local_c);
        (**(code **)(*piVar4 + 0x4c))(piVar4,CONCAT22(uStack_5e,uVar2));
      }
    }
    else {
      iVar3 = FUN_00462a64(param_2);
      FUN_0045bc24(*(undefined4 *)(iVar3 + 0x48),*(undefined4 *)(local_8 + 0x20));
      iVar3 = FUN_00410538();
      uVar2 = (undefined2)(iVar3 - param_5);
      puVar20 = local_4c;
      iVar3 = FUN_00410538();
      FUN_0040c114(-param_6,-param_5,iVar3 - param_6,puVar20,uVar2);
      uVar2 = SUB42(local_4c,0);
      uStack_5e = (undefined2)((uint)local_4c >> 0x10);
      piVar4 = (int *)FUN_00462a64(local_c);
      (**(code **)(*piVar4 + 0x4c))(piVar4,CONCAT22(uStack_5e,uVar2));
    }
  }
  iVar3 = 0;
  do {
    puVar10 = (undefined4 *)(local_8 + 0x28 + iVar3 * 0x20);
    pcVar11 = &local_3c;
    for (iVar9 = 8; uVar8 = local_38, iVar9 != 0; iVar9 = iVar9 + -1) {
      *(undefined4 *)pcVar11 = *puVar10;
      puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
      pcVar11 = pcVar11 + ((uint)bVar12 * -2 + 1) * 4;
    }
    if ((param_3 == local_3b) && (local_3c != '\0')) {
      cVar1 = FUN_0064de18(local_38);
      if (cVar1 != '\0') {
        FUN_0064e048(uVar8);
        iVar9 = FUN_0062db94();
        if (0 < iVar9) {
          FUN_0064e048(uVar8);
          iVar9 = FUN_0062db9c();
          if (0 < iVar9) {
            if (local_20 == '\0') {
              local_14 = 1.0;
              local_1c = 1.0;
            }
            else {
              FUN_0064e048(uVar8);
              iVar9 = FUN_0062db94();
              local_14 = (double)(((float)*(int *)(local_8 + 0xc) / (float)iVar9) * param_4);
              FUN_0064e048(uVar8);
              iVar9 = FUN_0062db9c();
              local_1c = (double)(((float)*(int *)(local_8 + 0x10) / (float)iVar9) * param_4);
            }
            uVar21 = (undefined2)(local_30 - param_5);
            uVar5 = (**(code **)(*local_c + 0x30))();
            uVar2 = (**(code **)(*local_c + 0x24))();
            uVar19 = 0;
            uVar18 = 0;
            uVar6 = (uint)local_2c;
            uVar7 = (uint)local_2b;
            fVar13 = param_4;
            uVar14 = (undefined4)local_1c;
            uVar15 = local_1c._4_4_;
            uVar16 = (undefined4)local_14;
            uVar17 = local_14._4_4_;
            uVar8 = FUN_0064e048(uVar8);
            FUN_0062deb4(uVar8,local_c,local_34 - param_6,fVar13,uVar14,uVar15,uVar16,uVar17,uVar7,
                         uVar6,uVar18,uVar19,uVar2,uVar5,uVar21);
          }
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 8);
  return;
}
