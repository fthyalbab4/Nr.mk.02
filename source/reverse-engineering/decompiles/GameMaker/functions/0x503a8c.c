// rea decompile_all
// name: FUN_00503a8c
// address: 0x503a8c
// body: available
// range: 0x503a8c-0x503ae4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00503a8c(int param_1,char param_2)

{
  undefined1 uVar1;
  uint uVar2;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;

  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    cVar3 = extraout_DL;
  }
  FUN_00405a4c(param_1,0);
  uVar1 = FUN_0044c25c();
  *(undefined1 *)(param_1 + 5) = uVar1;
  uVar2 = FUN_0041d050(L"comctl32.dll");
  *(bool *)(param_1 + 4) = 0x5ffff < uVar2;
  FUN_00505120(param_1);
  if (cVar3 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}
