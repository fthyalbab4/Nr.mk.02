// rea decompile_all
// name: FUN_1010c100
// address: 0x1010c100
// body: available
// range: 0x1010c100-0x1010c1b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_1010c100(undefined1 *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  HANDLE hHandle;
  code *pcVar1;
  HANDLE pvVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  byte abStack_40 [4];
  uint uStack_3c;
  undefined1 *puStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;

  puStack_38 = (undefined1 *)&local_24;
  hHandle = (HANDLE)*param_2;
  local_20 = 0;
  local_24 = 0x103;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = param_4;
  piStack_34 = param_3;
  uStack_3c = 0;
  abStack_40[0] = 0;
  abStack_40[1] = 0;
  abStack_40[2] = 0;
  abStack_40[3] = 0;
  pvVar2 = (HANDLE)NtWriteFile();
  if (pvVar2 == (HANDLE)0x103) {
    WaitForSingleObject(hHandle,0xffffffff);
    pvVar2 = hHandle;
    if (hHandle == (HANDLE)0x103) {
      abStack_40[0] = 0;
      abStack_40[1] = 0;
      abStack_40[2] = 0;
      abStack_40[3] = 0;
      uStack_3c = uStack_3c & 0xffffff00;
      FUN_10107090((undefined8 *)&puStack_38,abStack_40,
                   (ushort *)
                   "fatal runtime error: I/O error: operation failed to complete synchronously, aborting\n"
                   ,0xab);
      FUN_10003b60((char)puStack_38,piStack_34);
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  if ((int)pvVar2 < 0) {
    uVar4 = 0;
    uVar3 = RtlNtStatusToDosError(pvVar2);
  }
  else {
    uVar3 = 0;
    uVar4 = 0xff;
  }
  *(undefined4 *)(param_1 + 4) = uVar3;
  *param_1 = uVar4;
  return;
}
