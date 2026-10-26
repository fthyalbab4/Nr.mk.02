// rea decompile_all
// name: FUN_00740660
// address: 0x740660
// body: available
// range: 0x740660-0x7406bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00740660(int *param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;

  iVar1 = *param_1;
  if ((iVar1 != 0) && (*(short *)(iVar1 + -10) != 2)) {
    iVar1 = FUN_00407048(param_1,*param_1);
  }
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + -4);
  }
  if (0 < iVar3) {
    thunk_FUN_004089c0(param_1);
    puVar2 = (ushort *)FUN_00407f44(*param_1);
    if (0 < iVar3) {
      do {
        *puVar2 = (&DAT_007a6448)[(uint)*puVar2 + param_2];
        puVar2 = puVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}
