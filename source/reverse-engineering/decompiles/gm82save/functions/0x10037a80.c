// rea decompile_all
// name: FUN_10037a80
// address: 0x10037a80
// body: available
// range: 0x10037a80-0x10037b12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10037a80(undefined8 *param_1,byte *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined1 local_25;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;

  local_18 = &local_24;
  local_10 = 0x60000020;
  local_c = 0;
  local_24 = 0;
  uStack_20 = 1;
  local_1c = 0;
  local_14 = &PTR_FUN_10143aa0;
  cVar2 = FUN_1007f4d0(param_2,&local_18);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 1) = local_1c;
    *param_1 = CONCAT44(uStack_20,local_24);
    FUN_10005ca0(param_2);
    return;
  }
  FUN_10136c40("a Display implementation returned an error unexpectedlyC:\\Users\\runneradmin\\.rustup\\toolchains\\nightly-x86_64-pc-windows-msvc\\lib\\rustlib\\src\\rust\\library\\alloc\\src\\string.rs"
               ,0x37,&local_25,&DAT_101402f8,&DAT_10155a68);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
