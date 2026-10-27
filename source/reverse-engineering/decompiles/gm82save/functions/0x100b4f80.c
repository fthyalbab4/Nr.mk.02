// rea decompile_all
// name: FUN_100b4f80
// address: 0x100b4f80
// body: available
// range: 0x100b4f80-0x100b51b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_100b4f80(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 uStack_35;
  undefined8 *puStack_34;
  byte bStack_30;
  byte bStack_2f;
  int local_2c;
  undefined8 *puStack_28;
  undefined *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  undefined1 *puStack_10;

  iVar5 = *param_1;
  local_2c = iVar5 + 0x11;
  bStack_30 = (**(code **)(*(int *)((int)param_2 + 4) + 0xc))
                        (*(undefined4 *)param_2,&DAT_101530dc,6);
  puStack_34 = param_2;
  bStack_2f = 0;
  FUN_10095660(&puStack_34,0x1014fd95,0xd,iVar5,&LAB_100b51f0);
  puVar1 = puStack_34;
  bVar3 = 1;
  if (bStack_30 == '\0') {
    if ((*(byte *)((int)puStack_34 + 10) & 0x80) == 0) {
      pcVar6 = " { ";
      if (bStack_2f != 0) {
        pcVar6 = ", a\\\x15\x10i";
      }
      cVar2 = (**(code **)(*(int *)((int)puStack_34 + 4) + 0xc))
                        (*(undefined4 *)puStack_34,pcVar6,bStack_2f ^ 3);
      bVar3 = 1;
      if (((cVar2 == '\0') &&
          (cVar2 = (**(code **)(*(int *)((int)puVar1 + 4) + 0xc))
                             (*(undefined4 *)puVar1,"compare_contents",0x10), cVar2 == '\0')) &&
         (cVar2 = (**(code **)(*(int *)((int)puVar1 + 4) + 0xc))(*(undefined4 *)puVar1,": ",2),
         cVar2 == '\0')) {
        if (*(char *)(iVar5 + 0x10) == '\0') {
          pcVar6 = "false";
          puVar7 = (undefined1 *)0x5;
        }
        else {
          pcVar6 = "true";
          puVar7 = &DAT_00000004;
        }
        bVar3 = FUN_10093f00((undefined4 *)puVar1,(undefined1 (*) [16])pcVar6,puVar7);
      }
    }
    else {
      if (bStack_2f == 0) {
        cVar2 = (**(code **)(*(int *)((int)puStack_34 + 4) + 0xc))
                          (*(undefined4 *)puStack_34," {\n",3);
        bVar3 = 1;
        if (cVar2 != '\0') goto LAB_100b512a;
      }
      uStack_35 = 1;
      puStack_10 = &uStack_35;
      uStack_18 = *puVar1;
      uStack_20 = *(undefined4 *)(puVar1 + 1);
      uStack_1c = *(undefined4 *)((int)puVar1 + 0xc);
      puStack_24 = &DAT_101454b4;
      puStack_28 = &uStack_18;
      uVar8 = FUN_10094960((undefined4 *)&uStack_18,0x1014fda2,0x10);
      if (((char)uVar8 == '\0') &&
         (uVar8 = FUN_10094960((undefined4 *)&uStack_18,0x10155dea,2), (char)uVar8 == '\0')) {
        if (*(char *)(iVar5 + 0x10) == '\x01') {
          cVar2 = FUN_10093f00(&puStack_28,(undefined1 (*) [16])"true",&DAT_00000004);
        }
        else {
          cVar2 = FUN_10093f00(&puStack_28,(undefined1 (*) [16])"false",(undefined1 *)0x5);
        }
        if (cVar2 == '\0') {
          uVar8 = FUN_10094960((undefined4 *)&uStack_18,0x10144ed0,2);
          bVar3 = (byte)uVar8;
          goto LAB_100b512a;
        }
      }
      bVar3 = 1;
    }
  }
LAB_100b512a:
  bStack_2f = 1;
  bStack_30 = bVar3;
  FUN_10095660(&puStack_34,0x1014fdb2,0xf,&local_2c,&LAB_100b51c0);
  if (((~bStack_2f | bStack_30) & 1) == 0) {
    if ((*(byte *)((int)puStack_34 + 10) & 0x80) == 0) {
      iVar5 = *(int *)((int)puStack_34 + 4);
      uVar8 = 2;
      pcVar6 = " }";
    }
    else {
      iVar5 = *(int *)((int)puStack_34 + 4);
      uVar8 = 1;
      pcVar6 = "}";
    }
    uVar4 = (**(code **)(iVar5 + 0xc))(*(undefined4 *)puStack_34,pcVar6,uVar8);
  }
  else {
    uVar4 = (uint)(bStack_2f | bStack_30);
  }
  return uVar4 & 0xffffff01;
}
