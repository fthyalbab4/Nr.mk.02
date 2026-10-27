// rea decompile_all
// name: FUN_100a3520
// address: 0x100a3520
// body: available
// range: 0x100a3520-0x100a36a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_100a3520(int *param_1,uint **param_2)

{
  uint *puVar1;
  byte extraout_AL;
  byte bVar2;
  byte extraout_AL_00;
  undefined4 uVar3;
  undefined3 uVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint *puVar5;
  code *pcVar6;
  uint *puVar7;
  char *pcVar8;
  undefined1 uStack_31;
  code *local_30;
  uint **ppuStack_2c;
  undefined4 uStack_28;
  uint *puStack_24;
  uint *puStack_20;
  uint *local_1c;
  uint *puStack_18;
  undefined1 *puStack_14;

  puVar5 = (uint *)(param_1 + 1);
  if (*param_1 != 1) {
    local_1c = puVar5;
    bVar2 = (*(code *)param_2[1][3])(*param_2,"General",7);
    uStack_28._0_2_ = (ushort)bVar2;
    ppuStack_2c = param_2;
    FUN_10095660(&ppuStack_2c,0x1014f5ab,3,&local_1c,&LAB_100a3230);
    if (((~uStack_28._1_1_ | (byte)uStack_28) & 1) == 0) {
      if ((*(byte *)((int)ppuStack_2c + 10) & 0x80) == 0) {
        puVar5 = ppuStack_2c[1];
        uVar3 = 2;
        pcVar8 = " }";
      }
      else {
        puVar5 = ppuStack_2c[1];
        uVar3 = 1;
        pcVar8 = "}";
      }
      (*(code *)puVar5[3])(*ppuStack_2c,pcVar8,uVar3);
      bVar2 = extraout_AL;
      uVar4 = extraout_var;
    }
    else {
      bVar2 = uStack_28._1_1_ | (byte)uStack_28;
      uVar4 = 0;
    }
    goto LAB_100a3674;
  }
  puVar1 = param_2[1];
  puVar7 = *param_2;
  local_30 = (code *)puVar1[3];
  uVar3 = (*local_30)(puVar7,"NeedsDictionary",0xf);
  uVar4 = (undefined3)((uint)uVar3 >> 8);
  bVar2 = 1;
  if ((char)uVar3 != '\0') goto LAB_100a3674;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    uVar3 = (*local_30)(puVar7,"(",1);
    if ((char)uVar3 == '\0') {
      uVar3 = FUN_100a36b0(puVar5,param_2);
      uVar4 = (undefined3)((uint)uVar3 >> 8);
      bVar2 = 1;
      if ((char)uVar3 != '\0') goto LAB_100a3674;
      puVar7 = *param_2;
      pcVar6 = (code *)param_2[1][3];
LAB_100a369d:
      (*pcVar6)(puVar7,")",1);
      bVar2 = extraout_AL_00;
      uVar4 = extraout_var_00;
      goto LAB_100a3674;
    }
  }
  else {
    uVar3 = (*local_30)(puVar7,"(\n { .. }",2);
    if ((char)uVar3 == '\0') {
      puStack_14 = &uStack_31;
      puStack_20 = param_2[3];
      uStack_31 = 1;
      puStack_24 = param_2[2];
      ppuStack_2c = &local_1c;
      uStack_28 = &DAT_101454b4;
      local_1c = puVar7;
      puStack_18 = puVar1;
      uVar3 = FUN_100a36b0(puVar5,&ppuStack_2c);
      if ((char)uVar3 == '\0') {
        uVar3 = (**(code **)(uStack_28 + 0xc))(ppuStack_2c,",\n",2);
        uVar4 = (undefined3)((uint)uVar3 >> 8);
        bVar2 = 1;
        pcVar6 = local_30;
        if ((char)uVar3 != '\0') goto LAB_100a3674;
        goto LAB_100a369d;
      }
    }
  }
  uVar4 = (undefined3)((uint)uVar3 >> 8);
  bVar2 = 1;
LAB_100a3674:
  return CONCAT31(uVar4,bVar2) & 0xffffff01;
}
