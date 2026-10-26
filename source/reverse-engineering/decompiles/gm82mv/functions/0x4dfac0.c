// rea decompile_all
// name: FUN_004dfac0
// address: 0x4dfac0
// body: available
// range: 0x4dfac0-0x4dfb27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004dfac0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;

  if (*(char *)(param_1 + 0x59) != '\0') {
    cVar1 = *(char *)(param_1 + 0x5d);
    if ((cVar1 == '\0') || (cVar1 == '\x03')) {
      if ((*(char *)(param_1 + 0x5d) == '\x03') || ((*(byte *)(param_1 + 99) & 5) == 1)) {
        iVar3 = *(int *)(*(int *)(param_4 + -8) + 0xc) + *(int *)(param_1 + 0x40) +
                *(int *)(param_1 + 0x48);
        iVar2 = *(int *)(param_4 + -4);
        if (*(int *)(param_4 + -4) <= iVar3) {
          iVar2 = iVar3;
        }
        *(int *)(param_4 + -4) = iVar2;
      }
    }
    else if (cVar1 == '\x04') {
      *(int *)(param_4 + -0xc) = *(int *)(param_4 + -0xc) + *(int *)(param_1 + 0x48);
    }
  }
  return;
}
