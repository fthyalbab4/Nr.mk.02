// rea decompile_all
// name: FUN_1010d41e
// address: 0x1010d41e
// body: available
// range: 0x1010d41e-0x1010d532 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1010d41e(undefined4 param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int local_2c;
  undefined1 *local_28;
  code *local_24;
  char local_20 [4];
  code *local_1c;
  byte local_18 [8];

  cVar1 = DAT_101633a4;
  local_28 = (undefined1 *)&local_2c;
  LOCK();
  DAT_101633a4 = 1;
  UNLOCK();
  local_2c = param_2;
  if (cVar1 != '\0') {
    local_18[0] = 0;
    local_18[1] = 0;
    local_18[2] = 0;
    local_18[3] = 0;
    local_18[4] = 0;
    local_24 = (code *)&LAB_10096fc0;
    local_28 = (undefined1 *)&local_2c;
    FUN_10107090((undefined8 *)local_20,local_18,(ushort *)&DAT_101580a4,(uint)&local_28);
    FUN_10003b60(local_20[0],(int *)local_1c);
    return;
  }
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  local_18[4] = 0;
  local_24 = (code *)&LAB_10096fc0;
  FUN_10107090((undefined8 *)local_20,local_18,(ushort *)&DAT_10158054,(uint)&local_28);
  FUN_10003b60(local_20[0],(int *)local_1c);
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  local_18[4] = 0;
  FUN_10107a70();
  bVar2 = FUN_101079b0();
  if (bVar2 == 0) {
    local_2c = (uint)local_2c._1_3_ << 8;
LAB_1010d4f5:
    local_24 = FUN_10107e20;
    local_28 = (undefined1 *)&local_2c;
    FUN_10107090((undefined8 *)local_20,local_18,(ushort *)&DAT_10157158,(uint)&local_28);
  }
  else {
    if (bVar2 == 1) {
      local_2c = CONCAT31(local_2c._1_3_,1);
      goto LAB_1010d4f5;
    }
    if (bVar2 != 2) goto LAB_1010d520;
    FUN_10107090((undefined8 *)&local_28,local_18,
                 (ushort *)
                 "note: run with `RUST_BACKTRACE=1` environment variable to display a backtrace\n",
                 0x9d);
    local_20[0] = (char)local_28;
    local_1c = local_24;
  }
  FUN_10003b60(local_20[0],(int *)local_1c);
LAB_1010d520:
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_101633ac);
  return;
}
