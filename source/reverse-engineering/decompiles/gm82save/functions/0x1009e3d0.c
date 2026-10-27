// rea decompile_all
// name: FUN_1009e3d0
// address: 0x1009e3d0
// body: available
// range: 0x1009e3d0-0x1009e57b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1009e3d0(void *param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  LPVOID pvVar5;
  LPVOID pvVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint local_370 [7];
  undefined1 local_354 [836];

  pvVar5 = FUN_10107380(8,0x4000);
  if (pvVar5 == (LPVOID)0x0) {
    FUN_1013679e(4,0x4000);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  pvVar6 = FUN_10107380(8,0x800);
  if (pvVar6 != (LPVOID)0x0) {
    memset(local_354,0,0x340);
    if (DAT_101633c0 == 0) {
      FUN_1013c860(local_370);
      sVar4 = (short)local_370[0];
      uVar3 = DAT_101633c0;
      uVar2 = local_370[0];
    }
    else {
      sVar4 = (short)DAT_101633c0;
      uVar3 = DAT_101633c0;
      uVar2 = local_370[0];
    }
    local_370[0] = uVar3;
    puVar8 = &LAB_101061e0;
    DAT_101633c0 = local_370[0];
    if (-1 < sVar4) {
      if (local_370[0] == 0) {
        local_370[0] = uVar2;
        FUN_1013c860(local_370);
      }
      puVar8 = (undefined1 *)0x0;
      if ((local_370[0] >> 9 & 1) != 0) {
        puVar8 = &LAB_101061c0;
      }
    }
    *(undefined4 *)((int)param_1 + 0x35c) = 1;
    puVar7 = &LAB_10106200;
    if (puVar8 != (undefined1 *)0x0) {
      puVar7 = puVar8;
    }
    *(undefined1 **)((int)param_1 + 0x358) = puVar7;
    *(undefined4 *)((int)param_1 + 0x360) = 0;
    *(undefined4 *)((int)param_1 + 0x364) = 2;
    *(undefined4 *)((int)param_1 + 0x368) = 0;
    *(undefined4 *)((int)param_1 + 0x36c) = 0;
    *(undefined4 *)((int)param_1 + 0x370) = 2;
    *(undefined4 *)((int)param_1 + 0x374) = 0;
    *(LPVOID *)((int)param_1 + 0x378) = pvVar5;
    *(LPVOID *)((int)param_1 + 0x37c) = pvVar6;
    *(undefined4 *)((int)param_1 + 0x380) = 0;
    *(undefined1 *)((int)param_1 + 900) = 0;
    memcpy(param_1,local_354,0x340);
    *(undefined4 *)((int)param_1 + 0x388) = 0;
    *(undefined4 *)((int)param_1 + 0x394) = 0;
    *(undefined8 *)((int)param_1 + 0x340) = 0;
    *(undefined8 *)((int)param_1 + 0x348) = 0;
    *(undefined8 *)((int)param_1 + 0x350) = 0;
    *(undefined4 *)((int)param_1 + 0x3a0) = 0;
    *(undefined4 *)((int)param_1 + 0x3a3) = 0;
    return;
  }
  FUN_1013679e(4,0x800);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
