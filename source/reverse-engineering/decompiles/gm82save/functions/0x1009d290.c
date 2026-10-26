// rea decompile_all
// name: FUN_1009d290
// address: 0x1009d290
// body: available
// range: 0x1009d290-0x1009d3ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_1009d290(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ushort *puVar7;
  undefined8 *local_30;
  undefined1 *local_2c;
  undefined8 *local_28;
  code *local_24;
  undefined8 local_20;

  if ((*(byte *)*param_1 & 1) == 0) {
    local_30 = (undefined8 *)param_1[1];
    iVar6 = param_2[1];
    uVar5 = *param_2;
    puVar7 = (ushort *)&DAT_10144f6a;
  }
  else {
    local_20 = *(undefined8 *)((byte *)*param_1 + 8);
    local_30 = (undefined8 *)param_1[1];
    iVar6 = param_2[1];
    uVar5 = *param_2;
    local_28 = &local_20;
    local_24 = FUN_1009d3f0;
    puVar7 = (ushort *)&DAT_10144f67;
  }
  local_2c = &LAB_10093d10;
  uVar2 = FUN_10093d70(uVar5,iVar6,puVar7,(uint)&local_30);
  uVar4 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  if ((char)uVar2 == '\0') {
    uVar3 = *(uint *)param_1[2];
    if (uVar3 != 0) {
      if (9 < uVar3) {
        FUN_10136a50(0,uVar3,9,&PTR_s_C__Users_runneradmin__rustup_too_10144fbc);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_20 = CONCAT44(uVar3,param_1[3]);
      if ((*(byte *)((int)param_2 + 0xb) & 0x10) == 0) {
        uVar3 = *(uint *)param_1[4];
        if (0xffff < uVar3) {
          FUN_101369c0("Formatting argument out of range",0x41,
                       &PTR_s_C__Users_runneradmin__rustup_too_10144fac);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
      else {
        uVar3 = (uint)*(ushort *)((int)param_2 + 0xe);
      }
      local_30 = &local_20;
      local_2c = &LAB_10093d10;
      local_28 = (undefined8 *)0x0;
      local_24 = (code *)CONCAT22(local_24._2_2_,(short)uVar3);
      uVar2 = FUN_10093d70(uVar5,iVar6,(ushort *)&DAT_10144f81,(uint)&local_30);
      if ((char)uVar2 != '\0') {
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
    }
    local_30 = (undefined8 *)param_1[5];
    local_2c = &LAB_10093d10;
    uVar4 = FUN_10093d70(uVar5,iVar6,(ushort *)&DAT_10157158,(uint)&local_30);
  }
  return uVar4;
}
