// rea decompile_all
// name: FUN_0040ad90
// address: 0x40ad90
// body: available
// range: 0x40ad90-0x40adeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0040ad90(void)

{
  char cVar1;
  LANGID LVar2;
  undefined4 extraout_EDX;
  undefined4 uVar3;
  int in_stack_00000004;
  LCTYPE LCType;
  LPWSTR lpLCData;
  int iVar4;

  uVar3 = 1;
  iVar4 = *(int *)(in_stack_00000004 + -0x214);
  lpLCData = *(LPWSTR *)(in_stack_00000004 + -0x210);
  LCType = 3;
  LVar2 = GetUserDefaultUILanguage();
  GetLocaleInfoW((uint)LVar2,LCType,lpLCData,iVar4);
  iVar4 = in_stack_00000004;
  cVar1 = FUN_0040aca8();
  if (cVar1 == '\0') {
    *(undefined2 *)(*(int *)(in_stack_00000004 + -0x210) + 4) = 0;
    cVar1 = FUN_0040aca8(in_stack_00000004,extraout_EDX,iVar4,in_stack_00000004);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
  }
  return uVar3;
}
