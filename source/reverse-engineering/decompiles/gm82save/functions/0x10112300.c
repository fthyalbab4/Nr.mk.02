// rea decompile_all
// name: FUN_10112300
// address: 0x10112300
// body: available
// range: 0x10112300-0x101123c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10112300(undefined1 *param_1,HANDLE param_2,int *param_3,undefined4 param_4)

{
  code *pcVar1;
  HANDLE pvVar2;
  undefined4 uVar3;
  byte abStack_3c [4];
  uint uStack_38;
  undefined1 *puStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;

  puStack_34 = (undefined1 *)&local_20;
  local_1c = 0;
  local_20 = 0x103;
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = param_4;
  piStack_30 = param_3;
  uStack_38 = 0;
  abStack_3c[0] = 0;
  abStack_3c[1] = 0;
  abStack_3c[2] = 0;
  abStack_3c[3] = 0;
  pvVar2 = (HANDLE)NtReadFile();
  if (pvVar2 == (HANDLE)0x103) {
    WaitForSingleObject(param_2,0xffffffff);
    pvVar2 = param_2;
  }
  if (pvVar2 == (HANDLE)0xc0000011) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    if (pvVar2 == (HANDLE)0x103) {
      abStack_3c[0] = 0;
      abStack_3c[1] = 0;
      abStack_3c[2] = 0;
      abStack_3c[3] = 0;
      uStack_38 = uStack_38 & 0xffffff00;
      FUN_10107090((undefined8 *)&puStack_34,abStack_3c,
                   (ushort *)
                   "fatal runtime error: I/O error: operation failed to complete synchronously, aborting\n"
                   ,0xab);
      FUN_10003b60((char)puStack_34,piStack_30);
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((int)pvVar2 < 0) {
      uVar3 = RtlNtStatusToDosError(pvVar2);
      *param_1 = 0;
      *(undefined4 *)(param_1 + 4) = uVar3;
      return;
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *param_1 = 0xff;
  return;
}
