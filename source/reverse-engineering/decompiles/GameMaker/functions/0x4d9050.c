// rea decompile_all
// name: FUN_004d9050
// address: 0x4d9050
// body: available
// range: 0x4d9050-0x4d90af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d9050(undefined4 param_1,int param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = FUN_004dbe08(param_1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      if (iVar3 < param_2) {
        iVar2 = FUN_004dbe18(param_1,iVar3);
        if (param_3 < *(byte *)(iVar2 + 0x3f)) {
          FUN_004d7f74(PTR_PTR_0078192c);
        }
      }
      else {
        iVar2 = FUN_004dbe18(param_1,iVar3);
        if (*(byte *)(iVar2 + 0x3f) < param_3) {
          iVar2 = FUN_004dbe18(param_1,iVar3);
          *(byte *)(iVar2 + 0x3f) = param_3;
        }
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}
