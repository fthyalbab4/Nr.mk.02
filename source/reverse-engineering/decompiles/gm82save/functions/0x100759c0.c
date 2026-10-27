// rea decompile_all
// name: FUN_100759c0
// address: 0x100759c0
// body: available
// range: 0x100759c0-0x10075acc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100759c0(undefined1 *param_1,void *param_2,SIZE_T param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34 [2];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined5 local_20;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 local_18;
  undefined4 uStack_17;

  local_34[0] = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 7;
  local_20 = 0;
  uStack_1a = 0;
  uStack_17 = 0;
  uStack_1b = 1;
  local_18 = 1;
  uStack_19 = 1;
  FUN_1011b760((undefined8 *)&local_44,local_34,(int)param_2,param_3);
  if ((char)local_44 == -1) {
    pvVar2 = FUN_10107380(0,0x2000);
    if (pvVar2 == (LPVOID)0x0) {
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *(undefined4 *)(param_1 + 4) = 0x2000;
    *(LPVOID *)(param_1 + 8) = pvVar2;
    *(undefined4 *)(param_1 + 0xc) = 0;
    param_1[0x10] = 0;
    *(undefined4 *)(param_1 + 0x14) = local_40;
    *param_1 = 0xff;
  }
  else {
    if (param_3 == 0) {
      pvVar2 = (LPVOID)0x1;
      local_38 = local_44;
      local_3c = local_40;
    }
    else {
      local_3c = local_40;
      local_38 = local_44;
      pvVar2 = FUN_10107380(0,param_3);
      if (pvVar2 == (LPVOID)0x0) {
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      memcpy(pvVar2,param_2,param_3);
    }
    *(SIZE_T *)(param_1 + 0xc) = param_3;
    *(LPVOID *)(param_1 + 0x10) = pvVar2;
    *(SIZE_T *)(param_1 + 0x14) = param_3;
    param_1[0x18] = 0;
    *param_1 = 1;
    *(undefined4 *)(param_1 + 4) = local_38;
    *(undefined4 *)(param_1 + 8) = local_3c;
  }
  return;
}
