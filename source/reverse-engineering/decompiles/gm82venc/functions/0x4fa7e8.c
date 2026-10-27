// rea decompile_all
// name: FUN_004fa7e8
// address: 0x4fa7e8
// body: available
// range: 0x4fa7e8-0x4fa844 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004fa7e8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;

  iVar2 = *(int *)(*(int *)(param_1 + 4) + 8) + -1;
  if (-1 < iVar2) {
    do {
      iVar1 = FUN_00438ec4(*(undefined4 *)(param_1 + 4),iVar2);
      if ((param_2 == *(int *)(iVar1 + 0x38)) && (*(int *)(iVar1 + 0x34) == param_3)) {
        return iVar1;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  iVar2 = FUN_004fa648(&PTR_FUN_004f9f54,1,param_2,param_3);
  FUN_00438d04(*(undefined4 *)(param_1 + 4),iVar2);
  return iVar2;
}
