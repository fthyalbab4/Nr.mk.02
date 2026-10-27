// rea decompile_all
// name: FUN_1010b070
// address: 0x1010b070
// body: available
// range: 0x1010b070-0x1010b10f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __fastcall FUN_1010b070(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  void *_Buf1;
  void *_Buf2;
  size_t _Size;

  bVar1 = *param_1;
  bVar2 = *param_2;
  iVar3 = bVar1 - 5;
  iVar4 = bVar2 - 5;
  if (bVar1 < 6) {
    iVar3 = 0;
  }
  if (bVar2 < 6) {
    iVar4 = 0;
  }
  if (iVar3 != iVar4) {
    return false;
  }
  if (iVar3 != 4) {
    if (iVar3 != 0) {
      return true;
    }
    if (bVar1 != bVar2) {
      return false;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar1) {
    case 1:
    case 4:
      if (*(size_t *)(param_1 + 8) != *(size_t *)(param_2 + 8)) {
        return false;
      }
      iVar3 = memcmp(*(void **)(param_1 + 4),*(void **)(param_2 + 4),*(size_t *)(param_1 + 8));
      if (iVar3 != 0) {
        return false;
      }
      _Size = *(size_t *)(param_1 + 0x10);
      if (_Size != *(size_t *)(param_2 + 0x10)) {
        return false;
      }
      _Buf2 = *(void **)(param_2 + 0xc);
      _Buf1 = *(void **)(param_1 + 0xc);
      goto LAB_1010b0f1;
    case 2:
    case 5:
      return param_1[1] == param_2[1];
    }
  }
  _Size = *(size_t *)(param_1 + 8);
  if (_Size != *(size_t *)(param_2 + 8)) {
    return false;
  }
  _Buf2 = *(void **)(param_2 + 4);
  _Buf1 = *(void **)(param_1 + 4);
LAB_1010b0f1:
  iVar3 = memcmp(_Buf1,_Buf2,_Size);
  return iVar3 == 0;
}
