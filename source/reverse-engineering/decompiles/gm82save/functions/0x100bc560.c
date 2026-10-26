// rea decompile_all
// name: FUN_100bc560
// address: 0x100bc560
// body: available
// range: 0x100bc560-0x100bcb1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_100bc560(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 uVar6;
  undefined3 extraout_var_06;
  int iVar5;
  byte bVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined1 uStack_37;
  byte bStack_36;
  byte bStack_35;
  undefined8 *puStack_34;
  undefined *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 *puStack_24;
  char cStack_20;
  byte bStack_1f;
  byte bStack_1c;
  byte bStack_1b;
  byte bStack_1a;
  byte bStack_19;
  undefined8 uStack_18;
  undefined1 *puStack_10;

  cStack_20 = (**(code **)(*(int *)((int)param_2 + 4) + 0xc))
                        (*(undefined4 *)param_2,&DAT_10150a1c,9);
  bVar1 = *param_1;
  bVar7 = param_1[1];
  bStack_35 = param_1[2];
  bStack_36 = param_1[3];
  bStack_1f = 0;
  puStack_24 = param_2;
  bStack_1c = bVar1;
  bStack_1b = bVar7;
  bStack_1a = bStack_35;
  bStack_19 = bStack_36;
  puVar4 = FUN_10095660(&puStack_24,0x10150a25,4,&bStack_1c,&LAB_100bcb20);
  puVar2 = puStack_24;
  if (cStack_20 != '\0') goto LAB_100bc5d2;
  if ((*(byte *)((int)puStack_24 + 10) & 0x80) == 0) {
    pcVar8 = " { ";
    if (bStack_1f != 0) {
      pcVar8 = ", a\\\x15\x10i";
    }
    puVar4 = (undefined4 *)
             (**(code **)(*(int *)((int)puStack_24 + 4) + 0xc))
                       (*(undefined4 *)puStack_24,pcVar8,bStack_1f ^ 3);
    if ((((char)puVar4 != '\0') ||
        (puVar4 = (undefined4 *)
                  (**(code **)(*(int *)((int)puVar2 + 4) + 0xc))
                            (*(undefined4 *)puVar2,&DAT_10150a29,8), (char)puVar4 != '\0')) ||
       (puVar4 = (undefined4 *)
                 (**(code **)(*(int *)((int)puVar2 + 4) + 0xc))(*(undefined4 *)puVar2,": ",2),
       (char)puVar4 != '\0')) goto LAB_100bc5d2;
    if ((bVar1 & 0x20) == 0) {
      pcVar8 = "true";
      puVar9 = &DAT_00000004;
    }
    else {
      pcVar8 = "false";
      puVar9 = (undefined1 *)0x5;
    }
    cVar3 = FUN_10093f00((undefined4 *)puVar2,(undefined1 (*) [16])pcVar8,puVar9);
    puVar4 = (undefined4 *)CONCAT31(extraout_var_00,cVar3);
    puVar2 = puStack_24;
  }
  else {
    if ((bStack_1f == 0) &&
       (puVar4 = (undefined4 *)
                 (**(code **)(*(int *)((int)puStack_24 + 4) + 0xc))
                           (*(undefined4 *)puStack_24," {\n",3), (char)puVar4 != '\0'))
    goto LAB_100bc5d2;
    uStack_37 = 1;
    puStack_10 = &uStack_37;
    uStack_18 = *puVar2;
    uStack_2c = *(undefined4 *)(puVar2 + 1);
    uStack_28 = *(undefined4 *)((int)puVar2 + 0xc);
    puStack_30 = &DAT_101454b4;
    puStack_34 = &uStack_18;
    puVar4 = (undefined4 *)FUN_10094960((undefined4 *)&uStack_18,0x10150a29,8);
    if (((char)puVar4 != '\0') ||
       (puVar4 = (undefined4 *)FUN_10094960((undefined4 *)&uStack_18,0x10155dea,2),
       (char)puVar4 != '\0')) goto LAB_100bc5d2;
    if ((bVar1 & 0x20) == 0) {
      pcVar8 = "true";
      puVar9 = &DAT_00000004;
    }
    else {
      pcVar8 = "false";
      puVar9 = (undefined1 *)0x5;
    }
    cVar3 = FUN_10093f00(&puStack_34,(undefined1 (*) [16])pcVar8,puVar9);
    puVar4 = (undefined4 *)CONCAT31(extraout_var,cVar3);
    if (cVar3 != '\0') goto LAB_100bc5d2;
    puVar4 = (undefined4 *)FUN_10094960((undefined4 *)&uStack_18,0x10144ed0,2);
    cVar3 = (char)puVar4;
    puVar2 = puStack_24;
  }
  if (cVar3 != '\0') goto LAB_100bc5d2;
  bVar7 = bVar7 >> 5;
  puStack_24 = puVar2;
  if ((*(byte *)((int)puVar2 + 10) & 0x80) == 0) {
    puVar4 = (undefined4 *)
             (**(code **)(*(int *)((int)puVar2 + 4) + 0xc))(*(undefined4 *)puVar2,&DAT_10155ce2,2);
    if ((((char)puVar4 != '\0') ||
        (puVar4 = (undefined4 *)
                  (**(code **)(*(int *)((int)puVar2 + 4) + 0xc))
                            (*(undefined4 *)puVar2,&DAT_10150a31,7), (char)puVar4 != '\0')) ||
       (puVar4 = (undefined4 *)
                 (**(code **)(*(int *)((int)puVar2 + 4) + 0xc))(*(undefined4 *)puVar2,": ",2),
       (char)puVar4 != '\0')) goto LAB_100bc5d2;
    bStack_35 = bStack_35 >> 5;
    if ((bVar7 & 1) == 0) {
      pcVar8 = "false";
      puVar9 = (undefined1 *)0x5;
    }
    else {
      pcVar8 = "true";
      puVar9 = &DAT_00000004;
    }
    cVar3 = FUN_10093f00((undefined4 *)puVar2,(undefined1 (*) [16])pcVar8,puVar9);
    puVar4 = (undefined4 *)CONCAT31(extraout_var_02,cVar3);
    if (cVar3 != '\0') goto LAB_100bc5d2;
  }
  else {
    uStack_2c = *(undefined4 *)(puVar2 + 1);
    uStack_28 = *(undefined4 *)((int)puVar2 + 0xc);
    uStack_18 = *puVar2;
    puStack_10 = &uStack_37;
    uStack_37 = 1;
    puStack_30 = &DAT_101454b4;
    puStack_34 = &uStack_18;
    puVar4 = (undefined4 *)FUN_10094960((undefined4 *)&uStack_18,0x10150a31,7);
    if (((char)puVar4 != '\0') ||
       (puVar4 = (undefined4 *)FUN_10094960((undefined4 *)&uStack_18,0x10155dea,2),
       (char)puVar4 != '\0')) goto LAB_100bc5d2;
    if ((bVar7 & 1) == 0) {
      pcVar8 = "false";
      puVar9 = (undefined1 *)0x5;
    }
    else {
      pcVar8 = "true";
      puVar9 = &DAT_00000004;
    }
    cVar3 = FUN_10093f00(&puStack_34,(undefined1 (*) [16])pcVar8,puVar9);
    puVar4 = (undefined4 *)CONCAT31(extraout_var_01,cVar3);
    if ((cVar3 != '\0') ||
       (puVar4 = (undefined4 *)FUN_10094960((undefined4 *)&uStack_18,0x10144ed0,2),
       (char)puVar4 != '\0')) goto LAB_100bc5d2;
    bStack_35 = bStack_35 >> 5;
  }
  puVar2 = puStack_24;
  if ((*(byte *)((int)puStack_24 + 10) & 0x80) == 0) {
    puVar4 = (undefined4 *)
             (**(code **)(*(int *)((int)puStack_24 + 4) + 0xc))
                       (*(undefined4 *)puStack_24,&DAT_10155ce2,2);
    if ((((char)puVar4 != '\0') ||
        (puVar4 = (undefined4 *)
                  (**(code **)(*(int *)((int)puVar2 + 4) + 0xc))
                            (*(undefined4 *)puVar2,&DAT_10150a38,8), (char)puVar4 != '\0')) ||
       (puVar4 = (undefined4 *)
                 (**(code **)(*(int *)((int)puVar2 + 4) + 0xc))(*(undefined4 *)puVar2,": ",2),
       (char)puVar4 != '\0')) goto LAB_100bc5d2;
    bStack_36 = bStack_36 >> 5;
    if ((bStack_35 & 1) == 0) {
      pcVar8 = "false";
      puVar9 = (undefined1 *)0x5;
    }
    else {
      pcVar8 = "true";
      puVar9 = &DAT_00000004;
    }
    cVar3 = FUN_10093f00((undefined4 *)puVar2,(undefined1 (*) [16])pcVar8,puVar9);
    if (cVar3 != '\0') {
      return CONCAT31(extraout_var_04,1);
    }
  }
  else {
    uStack_2c = *(undefined4 *)(puStack_24 + 1);
    uStack_28 = *(undefined4 *)((int)puStack_24 + 0xc);
    uStack_18 = *puStack_24;
    puStack_10 = &uStack_37;
    uStack_37 = 1;
    puStack_30 = &DAT_101454b4;
    puStack_34 = &uStack_18;
    puVar4 = (undefined4 *)FUN_10094960((undefined4 *)&uStack_18,0x10150a38,8);
    if (((char)puVar4 != '\0') ||
       (puVar4 = (undefined4 *)FUN_10094960((undefined4 *)&uStack_18,0x10155dea,2),
       (char)puVar4 != '\0')) goto LAB_100bc5d2;
    if ((bStack_35 & 1) == 0) {
      pcVar8 = "false";
      puVar9 = (undefined1 *)0x5;
    }
    else {
      pcVar8 = "true";
      puVar9 = &DAT_00000004;
    }
    cVar3 = FUN_10093f00(&puStack_34,(undefined1 (*) [16])pcVar8,puVar9);
    puVar4 = (undefined4 *)CONCAT31(extraout_var_03,cVar3);
    if (cVar3 != '\0') goto LAB_100bc5d2;
    uVar10 = FUN_10094960((undefined4 *)&uStack_18,0x10144ed0,2);
    if ((char)uVar10 != '\0') {
      return CONCAT31((int3)((uint)uVar10 >> 8),1);
    }
    bStack_36 = bStack_36 >> 5;
  }
  puVar2 = puStack_24;
  if ((*(byte *)((int)puStack_24 + 10) & 0x80) == 0) {
    puVar4 = (undefined4 *)
             (**(code **)(*(int *)((int)puStack_24 + 4) + 0xc))
                       (*(undefined4 *)puStack_24,&DAT_10155ce2,2);
    if ((((char)puVar4 == '\0') &&
        (puVar4 = (undefined4 *)
                  (**(code **)(*(int *)((int)puVar2 + 4) + 0xc))
                            (*(undefined4 *)puVar2,&DAT_10150a40,8), (char)puVar4 == '\0')) &&
       (puVar4 = (undefined4 *)
                 (**(code **)(*(int *)((int)puVar2 + 4) + 0xc))(*(undefined4 *)puVar2,": ",2),
       (char)puVar4 == '\0')) {
      if ((bStack_36 & 1) == 0) {
        pcVar8 = "false";
        puVar9 = (undefined1 *)0x5;
      }
      else {
        pcVar8 = "true";
        puVar9 = &DAT_00000004;
      }
      cVar3 = FUN_10093f00((undefined4 *)puVar2,(undefined1 (*) [16])pcVar8,puVar9);
      uVar6 = extraout_var_06;
joined_r0x100bcad3:
      if (cVar3 != '\0') {
        return CONCAT31(uVar6,1);
      }
      if ((*(byte *)((int)puVar2 + 10) & 0x80) == 0) {
        iVar5 = *(int *)((int)puVar2 + 4);
        uVar10 = 2;
        pcVar8 = " }";
      }
      else {
        iVar5 = *(int *)((int)puVar2 + 4);
        uVar10 = 1;
        pcVar8 = "}";
      }
      uVar10 = (**(code **)(iVar5 + 0xc))(*(undefined4 *)puVar2,pcVar8,uVar10);
      return uVar10;
    }
  }
  else {
    uStack_2c = *(undefined4 *)(puStack_24 + 1);
    uStack_28 = *(undefined4 *)((int)puStack_24 + 0xc);
    uStack_18 = *puStack_24;
    puStack_10 = &uStack_37;
    uStack_37 = 1;
    puStack_30 = &DAT_101454b4;
    puStack_34 = &uStack_18;
    puVar4 = (undefined4 *)FUN_10094960((undefined4 *)&uStack_18,0x10150a40,8);
    if (((char)puVar4 == '\0') &&
       (puVar4 = (undefined4 *)FUN_10094960((undefined4 *)&uStack_18,0x10155dea,2),
       (char)puVar4 == '\0')) {
      if ((bStack_36 & 1) == 0) {
        pcVar8 = "false";
        puVar9 = (undefined1 *)0x5;
      }
      else {
        pcVar8 = "true";
        puVar9 = &DAT_00000004;
      }
      cVar3 = FUN_10093f00(&puStack_34,(undefined1 (*) [16])pcVar8,puVar9);
      puVar4 = (undefined4 *)CONCAT31(extraout_var_05,cVar3);
      if (cVar3 == '\0') {
        uVar10 = FUN_10094960((undefined4 *)&uStack_18,0x10144ed0,2);
        uVar6 = (undefined3)((uint)uVar10 >> 8);
        cVar3 = (char)uVar10;
        goto joined_r0x100bcad3;
      }
    }
  }
LAB_100bc5d2:
  return CONCAT31((int3)((uint)puVar4 >> 8),1);
}
