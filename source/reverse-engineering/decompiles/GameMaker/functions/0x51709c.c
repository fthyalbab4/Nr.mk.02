// rea decompile_all
// name: FUN_0051709c
// address: 0x51709c
// body: available
// range: 0x51709c-0x5170ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0051709c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;

  if (((*(char *)(param_1 + 0x29e) == '\x02') && (*(int *)(param_1 + 0x37c) != 0)) &&
     (iVar1 = FUN_0051c6a0(DAT_007882f0), -1 < iVar1 + -1)) {
    iVar3 = 0;
    do {
      iVar2 = FUN_0051c68c(DAT_007882f0,iVar3);
      if ((*(char *)(iVar2 + 0x29e) == '\x01') && (param_2 = param_2 + -1, param_2 < 0)) {
        return iVar2;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}
