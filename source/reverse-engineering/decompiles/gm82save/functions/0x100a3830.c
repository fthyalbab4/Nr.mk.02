// rea decompile_all
// name: FUN_100a3830
// address: 0x100a3830
// body: available
// range: 0x100a3830-0x100a3b81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100a3830(undefined8 *param_1,int param_2)

{
  code *pcVar1;
  LPVOID pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_40 [12];

  if (param_2 + 1U < 0xb) {
    pvVar2 = FUN_10107380(0,0x5cc00);
    if (pvVar2 != (LPVOID)0x0) {
      uVar3 = (uint)pvVar2 & 0xffffffc0;
      *(LPVOID *)(uVar3 + 0x3c) = pvVar2;
      puVar6 = (undefined4 *)(uVar3 + 0x40);
      iVar5 = 6;
      if (param_2 != -1) {
        iVar5 = param_2;
      }
      memset((void *)(uVar3 + 0xbc0),0,0x40000);
      *(undefined1 *)(uVar3 + 0x41) = 0;
      *(char *)(uVar3 + 0x44) = (char)iVar5;
      *(undefined8 *)(uVar3 + 0x45) = 0;
      *(undefined8 *)(uVar3 + 0x4c) = 0;
      *(uint *)(uVar3 + 0x54) = uVar3 + 0xbc0;
      *(undefined4 *)(uVar3 + 0x58) = 0x10000;
      *(undefined4 *)(uVar3 + 0x5c) = 0xf;
      *(undefined4 *)(uVar3 + 0x60) = 0x8000;
      *(undefined4 *)(uVar3 + 100) = 0;
      *(uint *)(uVar3 + 0x68) = uVar3 + 0x10bc0;
      *(undefined4 *)(uVar3 + 0x6c) = 0x8000;
      *(uint *)(uVar3 + 0x70) = uVar3 + 0x20bc0;
      *(undefined4 *)(uVar3 + 0x7c) = 0;
      *(undefined4 *)(uVar3 + 0x74) = 0;
      *(undefined4 *)(uVar3 + 0x77) = 0;
      *(uint *)(uVar3 + 0x80) = uVar3 + 0x50bc0;
      *(undefined4 *)(uVar3 + 0x84) = 0xc000;
      *(undefined4 *)(uVar3 + 0x88) = 0;
      *(undefined4 *)(uVar3 + 0x8c) = 0x4000;
      *(undefined4 *)(uVar3 + 0x90) = 0;
      *(uint *)(uVar3 + 0x98) = uVar3 + 0x40bc0;
      *(undefined4 *)(uVar3 + 0x9c) = 0x10000;
      *(undefined4 *)(uVar3 + 0xa0) = 0;
      *(undefined8 *)(uVar3 + 0xb8) = 0;
      *(undefined8 *)(uVar3 + 0xc0) = 0;
      *(undefined8 *)(uVar3 + 200) = 0;
      *(undefined8 *)(uVar3 + 0xd0) = 0;
      *(undefined8 *)(uVar3 + 0xd8) = 0;
      *(undefined4 *)(uVar3 + 0xe0) = 0;
      *(uint *)(uVar3 + 0xe4) = uVar3 + 0x40;
      *(undefined4 *)(uVar3 + 0xe8) = 0x5cbc0;
      memcpy((void *)(uVar3 + 0xec),&PTR_DAT_1015d108,0x8fc);
      memcpy((void *)(uVar3 + 0x9e8),&PTR_DAT_1015da08,0xfc);
      memcpy((void *)(uVar3 + 0xae4),&PTR_DAT_1015cfcc,0xa4);
      *(undefined4 *)(uVar3 + 0xa4) = 0;
      *puVar6 = 0x1fe01;
      *(undefined ***)(uVar3 + 0xec) = &PTR_DAT_1015cc8c;
      *(undefined ***)(uVar3 + 0x9e8) = &PTR_DAT_1015ccc8;
      *(undefined **)(uVar3 + 0xae4) = &DAT_1015ccf8;
      *(undefined4 *)(uVar3 + 0xac) = 0;
      *(undefined4 *)(uVar3 + 0xa8) = 0;
      *(undefined1 *)(uVar3 + 0xb0) = 0;
      FUN_10124250((int)puVar6);
      *(int *)(uVar3 + 0x90) = *(int *)(uVar3 + 0x60) * 2;
      memset(*(void **)(uVar3 + 0x70),0,0x20000);
      uVar4 = (uint)*(char *)(uVar3 + 0x44);
      if (uVar4 < 10) {
        *(undefined2 *)(uVar3 + 0x78) = *(undefined2 *)(&DAT_1015f31e + uVar4 * 0xc);
        *(undefined2 *)(uVar3 + 0x48) = *(undefined2 *)(&DAT_1015f31c + uVar4 * 0xc);
        *(undefined2 *)(uVar3 + 0x4a) = *(undefined2 *)(&DAT_1015f320 + uVar4 * 0xc);
        *(undefined2 *)(uVar3 + 0x76) = *(undefined2 *)(&DAT_1015f322 + uVar4 * 0xc);
        *(bool *)(uVar3 + 0x46) = *(char *)(uVar3 + 0x44) == '\t';
        *(undefined4 *)(uVar3 + 0x50) = 0;
        *(undefined4 *)(uVar3 + 0x7c) = 0;
        *(undefined4 *)(uVar3 + 100) = 0;
        *(undefined4 *)(uVar3 + 0xc0) = 0;
        *(undefined2 *)(uVar3 + 0x74) = 0;
        *(undefined1 *)(uVar3 + 0x47) = 0;
        *(undefined2 *)(uVar3 + 0x4c) = 0;
        *(undefined4 *)(uVar3 + 0xc4) = 0;
        *(undefined8 *)((int)param_1 + 0x2c) = 0;
        param_1[3] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        param_1[4] = 0;
        *(undefined4 *)(param_1 + 5) = 0;
        *(undefined4 *)((int)param_1 + 0x34) = 0;
        *(undefined4 *)(param_1 + 7) = 0;
        *(undefined4 **)((int)param_1 + 0x3c) = puVar6;
        *(undefined1 **)(param_1 + 8) = &LAB_10121080;
        *(undefined **)((int)param_1 + 0x44) = &DAT_101210f0;
        *(undefined4 *)(param_1 + 9) = 0;
        *(undefined4 *)((int)param_1 + 0x4c) = 2;
        *(undefined4 *)(param_1 + 10) = 1;
        *(undefined4 *)((int)param_1 + 0x54) = 0;
        return;
      }
      FUN_10136b52(uVar4,10,&PTR_s_C__Users_runneradmin__cargo_regi_1015cfa0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_40[0] = 0xfffffffc;
  }
  else {
    local_40[0] = 0xfffffffe;
  }
  FUN_1013d611(local_40,&PTR_s_C__Users_runneradmin__cargo_regi_1015bb58);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
