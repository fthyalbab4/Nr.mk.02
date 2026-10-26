// rea decompile_all
// name: FUN_0074dcb0
// address: 0x74dcb0
// body: available
// range: 0x74dcb0-0x74dd19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074dcb0(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;

  cVar2 = FUN_0074eb4c(param_1);
  if (cVar2 == '\0') {
    *param_3 = 0;
    param_3[1] = 0;
  }
  else if (*(char *)(param_1 + 0x65) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x28);
    *param_3 = *(undefined4 *)(iVar1 + 0x78 + (param_2 & 0xffff) * 8);
    param_3[1] = *(undefined4 *)(iVar1 + 0x7c + (param_2 & 0xffff) * 8);
  }
  else if (*(char *)(param_1 + 0x65) == '\x02') {
    iVar1 = *(int *)(param_1 + 0x28);
    *param_3 = *(undefined4 *)(iVar1 + 0x88 + (param_2 & 0xffff) * 8);
    param_3[1] = *(undefined4 *)(iVar1 + 0x8c + (param_2 & 0xffff) * 8);
  }
  else {
    *param_3 = 0;
    param_3[1] = 0;
  }
  return;
}
