// rea decompile_all
// name: FUN_10124250
// address: 0x10124250
// body: available
// range: 0x10124250-0x1012445b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10124250(int param_1)

{
  int iVar1;

  iVar1 = -0x478;
  do {
    *(undefined2 *)(param_1 + 0x528 + iVar1) = 0;
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0);
  *(undefined2 *)(param_1 + 0x9ac) = 0;
  *(undefined2 *)(param_1 + 0x9b0) = 0;
  *(undefined2 *)(param_1 + 0x9b4) = 0;
  *(undefined2 *)(param_1 + 0x9b8) = 0;
  *(undefined2 *)(param_1 + 0x9bc) = 0;
  *(undefined2 *)(param_1 + 0x9c0) = 0;
  *(undefined2 *)(param_1 + 0x9c4) = 0;
  *(undefined2 *)(param_1 + 0x9c8) = 0;
  *(undefined2 *)(param_1 + 0x9cc) = 0;
  *(undefined2 *)(param_1 + 0x9d0) = 0;
  *(undefined2 *)(param_1 + 0x9d4) = 0;
  *(undefined2 *)(param_1 + 0x9d8) = 0;
  *(undefined2 *)(param_1 + 0x9dc) = 0;
  *(undefined2 *)(param_1 + 0x9e0) = 0;
  *(undefined2 *)(param_1 + 0x9e4) = 0;
  *(undefined2 *)(param_1 + 0x9e8) = 0;
  *(undefined2 *)(param_1 + 0x9ec) = 0;
  *(undefined2 *)(param_1 + 0x9f0) = 0;
  *(undefined2 *)(param_1 + 0x9f4) = 0;
  *(undefined2 *)(param_1 + 0x9f8) = 0;
  *(undefined2 *)(param_1 + 0x9fc) = 0;
  *(undefined2 *)(param_1 + 0xa00) = 0;
  *(undefined2 *)(param_1 + 0xa04) = 0;
  *(undefined2 *)(param_1 + 0xa08) = 0;
  *(undefined2 *)(param_1 + 0xa0c) = 0;
  *(undefined2 *)(param_1 + 0xa10) = 0;
  *(undefined2 *)(param_1 + 0xa14) = 0;
  *(undefined2 *)(param_1 + 0xa18) = 0;
  *(undefined2 *)(param_1 + 0xa1c) = 0;
  *(undefined2 *)(param_1 + 0xa20) = 0;
  *(undefined2 *)(param_1 + 0xaa8) = 0;
  *(undefined2 *)(param_1 + 0xaac) = 0;
  *(undefined2 *)(param_1 + 0xab0) = 0;
  *(undefined2 *)(param_1 + 0xab4) = 0;
  *(undefined2 *)(param_1 + 0xab8) = 0;
  *(undefined2 *)(param_1 + 0xabc) = 0;
  *(undefined2 *)(param_1 + 0xac0) = 0;
  *(undefined2 *)(param_1 + 0xac4) = 0;
  *(undefined2 *)(param_1 + 0xac8) = 0;
  *(undefined2 *)(param_1 + 0xacc) = 0;
  *(undefined2 *)(param_1 + 0xad0) = 0;
  *(undefined2 *)(param_1 + 0xad4) = 0;
  *(undefined2 *)(param_1 + 0xad8) = 0;
  *(undefined2 *)(param_1 + 0xadc) = 0;
  *(undefined2 *)(param_1 + 0xae0) = 0;
  *(undefined2 *)(param_1 + 0xae4) = 0;
  *(undefined2 *)(param_1 + 0xae8) = 0;
  *(undefined2 *)(param_1 + 0xaec) = 0;
  *(undefined2 *)(param_1 + 0xaf0) = 0;
  *(undefined2 *)(param_1 + 0x4b0) = 1;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  memset(*(void **)(param_1 + 0x40),0,*(size_t *)(param_1 + 0x44));
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  return;
}
