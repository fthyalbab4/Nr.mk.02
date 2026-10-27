// rea decompile_all
// name: FUN_00441aa0
// address: 0x441aa0
// body: available
// range: 0x441aa0-0x441b06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00441aa0(ushort param_1,char param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = FUN_00409a18(*(undefined4 *)(param_4 + -4));
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      if (param_2 == '\0') {
        iVar1 = *(int *)(*(int *)(param_4 + -4) + iVar3 * 4);
        *(ushort *)(iVar1 + 0x1c) = ~param_1 & *(ushort *)(iVar1 + 0x1c);
      }
      else {
        iVar1 = *(int *)(*(int *)(param_4 + -4) + iVar3 * 4);
        *(ushort *)(iVar1 + 0x1c) = *(ushort *)(iVar1 + 0x1c) | param_1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}
