// rea decompile_all
// name: FUN_10095660
// address: 0x10095660
// body: available
// range: 0x10095660-0x100957b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __fastcall
FUN_10095660(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4,undefined *param_5)

{
  byte bVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 local_2d;
  undefined8 *local_2c;
  undefined *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  undefined1 *local_14;

  uVar4 = 1;
  if (*(char *)(param_1 + 1) == '\0') {
    puVar2 = (undefined8 *)*param_1;
    bVar1 = *(byte *)((int)param_1 + 5);
    if ((*(byte *)((int)puVar2 + 10) & 0x80) == 0) {
      pcVar6 = " { ";
      if (bVar1 != 0) {
        pcVar6 = ", a\\\x15\x10i";
      }
      cVar3 = (**(code **)(*(int *)((int)puVar2 + 4) + 0xc))(*(undefined4 *)puVar2,pcVar6,bVar1 ^ 3)
      ;
      uVar4 = 1;
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*(int *)((int)puVar2 + 4) + 0xc))
                          (*(undefined4 *)puVar2,param_2,param_3);
        if (cVar3 == '\0') {
          cVar3 = (**(code **)(*(int *)((int)puVar2 + 4) + 0xc))(*(undefined4 *)puVar2,": ",2);
          if (cVar3 == '\0') {
            uVar4 = (*(code *)param_5)(param_4,puVar2);
          }
        }
      }
    }
    else {
      if (bVar1 == 0) {
        cVar3 = (**(code **)(*(int *)((int)puVar2 + 4) + 0xc))(*(undefined4 *)puVar2," {\n",3);
        uVar4 = 1;
        if (cVar3 != '\0') goto LAB_10095788;
      }
      local_2d = 1;
      local_14 = &local_2d;
      local_1c = *puVar2;
      local_24 = *(undefined4 *)(puVar2 + 1);
      local_20 = *(undefined4 *)((int)puVar2 + 0xc);
      local_28 = &DAT_101454b4;
      local_2c = &local_1c;
      uVar5 = FUN_10094960((undefined4 *)&local_1c,param_2,param_3);
      if ((char)uVar5 == '\0') {
        uVar5 = FUN_10094960((undefined4 *)&local_1c,0x10155dea,2);
        if ((char)uVar5 == '\0') {
          cVar3 = (*(code *)param_5)(param_4,&local_2c);
          if (cVar3 == '\0') {
            uVar4 = (**(code **)(local_28 + 0xc))(local_2c,",\n",2);
            goto LAB_10095788;
          }
        }
      }
      uVar4 = 1;
    }
  }
LAB_10095788:
  *(undefined1 *)(param_1 + 1) = uVar4;
  *(undefined1 *)((int)param_1 + 5) = 1;
  return param_1;
}
