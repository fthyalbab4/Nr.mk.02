// rea decompile_all
// name: FUN_10112d70
// address: 0x10112d70
// body: available
// range: 0x10112d70-0x10112eea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __fastcall FUN_10112d70(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  byte local_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  byte local_a4 [8];
  undefined8 local_9c;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  byte local_2c [8];
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;

  if ((((*(size_t *)((int)param_1 + 4) == *(size_t *)((int)param_2 + 4)) &&
       (*(char *)((int)param_1 + 0x1c) == *(char *)((int)param_2 + 0x1c))) &&
      (*(char *)((int)param_1 + 0x1d) == '\x02')) &&
     (((*(char *)((int)param_2 + 0x1d) == '\x02' &&
       (*(byte *)(param_2 + 1) < 3 == *(byte *)(param_1 + 1) < 3)) &&
      (iVar2 = memcmp(*(void **)param_1,*(void **)param_2,*(size_t *)((int)param_1 + 4)), iVar2 == 0
      )))) {
    return true;
  }
  local_58 = param_1[2];
  local_70 = param_2[3];
  local_50 = param_1[3];
  local_68 = *param_1;
  local_60 = param_1[1];
  local_88 = *param_2;
  local_78 = param_2[2];
  local_80 = param_2[1];
  while( true ) {
    FUN_101102a0(local_c0,(int *)&local_68);
    if (local_c0[0] == 0xff) {
      FUN_101102a0((byte *)&local_48,(int *)&local_88);
      return (char)local_48 == -1;
    }
    FUN_101102a0(local_a4,(int *)&local_88);
    if (local_a4[0] == 0xff) break;
    local_48 = (ulonglong)local_c0[0];
    local_40 = local_b8;
    local_30 = local_a8;
    local_38 = local_b0;
    local_1c = local_94;
    local_14 = local_8c;
    local_24 = local_9c;
    bVar1 = FUN_1010b070((byte *)&local_48,local_2c);
    if (!bVar1) {
      return false;
    }
  }
  return false;
}
