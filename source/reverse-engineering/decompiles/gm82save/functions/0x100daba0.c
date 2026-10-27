// rea decompile_all
// name: FUN_100daba0
// address: 0x100daba0
// body: available
// range: 0x100daba0-0x100dad22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100daba0(uint *param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 in_stack_ffffff98;
  uint local_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;

  FUN_100db030(&local_60,param_2,0);
  if (local_60 == 0xfffffffe) {
    iVar1 = param_2[1];
    local_60 = *(uint *)(iVar1 + 0x1c);
    if (local_60 != 1) {
      FUN_101369ea(0,&local_60,&DAT_1015738c,0,in_stack_ffffff98,
                   &PTR_s_C__Users_runneradmin__cargo_regi_10152748);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    puVar2 = *(undefined8 **)(iVar1 + 0x18);
    if (*(char *)((int)puVar2 + 0xc) == '\x01') {
      FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10152738);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    local_18 = *(undefined4 *)(puVar2 + 1);
    local_20 = *puVar2;
    FUN_100db200(&local_60,*param_2,iVar1,(int *)&local_20);
    if (local_60 == 0xfffffffe) {
      uVar3 = param_2[2];
      param_1[1] = uStack_5c;
      param_1[2] = uVar3;
      *param_1 = 0xfffffffe;
    }
    else {
      *(undefined8 *)(param_1 + 0xc) = local_30;
      *(undefined8 *)(param_1 + 10) = local_38;
      *(undefined8 *)(param_1 + 0xe) = local_28;
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 6) = local_48;
      *(undefined8 *)(param_1 + 4) = local_50;
      *(undefined8 *)(param_1 + 2) = local_58;
      *param_1 = local_60;
      param_1[1] = uStack_5c;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0xc) = local_30;
    *(undefined8 *)(param_1 + 10) = local_38;
    *(undefined8 *)(param_1 + 0xe) = local_28;
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 6) = local_48;
    *(undefined8 *)(param_1 + 4) = local_50;
    *(ulonglong *)param_1 = CONCAT44(uStack_5c,local_60);
    *(undefined8 *)(param_1 + 2) = local_58;
  }
  return;
}
