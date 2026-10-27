// rea decompile_all
// name: FUN_0075a4a8
// address: 0x75a4a8
// body: available
// range: 0x75a4a8-0x75a504 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0075a4a8(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int local_18;
  undefined4 local_14;

  local_14 = FUN_0075a428(param_1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 4) + 5));
  uVar2 = 0;
  local_18 = 0;
  uVar3 = 0xffffffff;
  while( true ) {
    cVar1 = FUN_0075a6e0(param_1,&local_14,&local_18);
    if ((cVar1 == '\0') || (uVar2 = uVar2 + local_18, param_2 < uVar2)) break;
    FUN_0075a6e0(param_1,&local_14,&local_18);
    uVar3 = uVar2;
  }
  return uVar3;
}
