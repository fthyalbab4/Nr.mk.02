// rea decompile_all
// name: FUN_10003040
// address: 0x10003040
// body: available
// range: 0x10003040-0x100031ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10003040(undefined8 *param_1,int param_2,SIZE_T param_3,undefined4 param_4,undefined2 param_5)

{
  code *pcVar1;
  SIZE_T SVar2;
  LPVOID pvVar3;
  SIZE_T SVar4;
  uint uVar5;
  uint uVar6;
  SIZE_T SVar7;
  SIZE_T local_50;
  LPVOID pvStack_4c;
  uint local_48;
  LPVOID local_44;
  int local_40;
  undefined8 *local_3c;
  int local_38;
  SIZE_T local_34;
  SIZE_T local_30;
  undefined4 local_2c;
  int local_28;
  SIZE_T local_24;
  undefined4 local_20;
  SIZE_T local_1c;
  undefined4 local_18;
  undefined1 local_14;

  if ((int)param_3 < 0) {
    FUN_101367b0();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_3c = param_1;
  if (param_3 == 0) {
    pvVar3 = (LPVOID)0x1;
  }
  else {
    pvVar3 = FUN_10107380(0,param_3);
    if (pvVar3 == (LPVOID)0x0) {
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  local_50 = param_3;
  local_48 = 0;
  local_2c = param_4;
  local_24 = param_3;
  local_20 = 0;
  local_1c = param_3;
  local_18 = param_4;
  local_14 = 1;
  SVar4 = 0;
  pvStack_4c = pvVar3;
  local_40 = param_2;
  local_28 = param_2;
  while (uVar6 = local_48, FUN_10090ba0(&local_38,(int)&local_2c), SVar2 = local_30, local_38 == 1)
  {
    uVar5 = local_34 - SVar4;
    local_44 = pvVar3;
    if (local_50 - uVar6 < uVar5) {
      FUN_101359e0(&local_50,uVar6,uVar5,(LPVOID)0x1,1);
      local_44 = pvStack_4c;
      uVar6 = local_48;
LAB_100030f7:
      SVar7 = local_50;
      memcpy((void *)((int)local_44 + uVar6),(void *)(SVar4 + local_40),uVar5);
    }
    else {
      SVar7 = local_50;
      if (local_34 != SVar4) goto LAB_100030f7;
    }
    local_48 = uVar6 + uVar5;
    pvVar3 = local_44;
    if (SVar7 - local_48 < 2) {
      FUN_101359e0(&local_50,local_48,2,(LPVOID)0x1,1);
      pvVar3 = pvStack_4c;
    }
    *(undefined2 *)((int)pvVar3 + local_48) = param_5;
    local_48 = local_48 + 2;
    SVar4 = SVar2;
  }
  uVar5 = param_3 - SVar4;
  if (local_50 - uVar6 < uVar5) {
    FUN_101359e0(&local_50,uVar6,uVar5,(LPVOID)0x1,1);
    pvVar3 = pvStack_4c;
    uVar6 = local_48;
  }
  else if (param_3 == SVar4) goto LAB_100031a4;
  memcpy((void *)((int)pvVar3 + uVar6),(void *)(local_40 + SVar4),uVar5);
LAB_100031a4:
  *(uint *)(local_3c + 1) = uVar6 + uVar5;
  *local_3c = CONCAT44(pvStack_4c,local_50);
  return;
}
