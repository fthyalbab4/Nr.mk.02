// rea decompile_all
// name: FUN_1011f750
// address: 0x1011f750
// body: available
// range: 0x1011f750-0x1011f7a4 inclusive
// range: 0x1011f7b0-0x1011f84a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1011f750(undefined8 *param_1,LPCWSTR param_2)

{
  wchar_t *_Str;
  uint uVar1;
  LPWSTR *hMem;
  size_t sVar2;
  int iVar3;
  int iVar4;
  int local_3c;
  uint local_34;
  int iStack_30;
  uint local_2c;
  undefined8 *local_28;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;

  hMem = CommandLineToArgvW(param_2,&local_24);
  if (hMem == (LPWSTR *)0x0) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 4;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    local_34 = 0;
    iStack_30 = 4;
    local_2c = 0;
    local_28 = param_1;
    if (local_24 != 0) {
      iVar4 = local_24 << 2;
      iVar3 = 0;
      local_3c = 4;
      do {
        uVar1 = local_2c;
        _Str = hMem[local_2c];
        sVar2 = wcslen(_Str);
        FUN_10093310(&local_20,(ushort *)_Str,sVar2);
        if (uVar1 == local_34) {
          FUN_10135f30(&local_34);
          local_3c = iStack_30;
        }
        local_2c = uVar1 + 1;
        *(undefined8 *)(local_3c + 8 + iVar3) = local_18;
        *(undefined8 *)(local_3c + iVar3) = local_20;
        iVar3 = iVar3 + 0x10;
        iVar4 = iVar4 + -4;
      } while (iVar4 != 0);
    }
    LocalFree(hMem);
    *local_28 = CONCAT44(iStack_30,local_34);
    *(uint *)(local_28 + 1) = local_2c;
  }
  return;
}
