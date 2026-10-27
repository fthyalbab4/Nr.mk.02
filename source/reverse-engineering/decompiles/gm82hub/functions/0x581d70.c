// rea decompile_all
// name: FUN_00581d70
// address: 0x581d70
// body: available
// range: 0x581d70-0x581db1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00581d70(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  if (((-1 < param_1) && (param_1 < DAT_00686af4)) &&
     (iVar1 = *(int *)(DAT_00686aec + param_1 * 4), iVar1 != 0)) {
    FUN_00405fdc(iVar1);
    *(undefined4 *)(DAT_00686aec + param_1 * 4) = 0;
    FUN_00408194(DAT_00686af0 + param_1 * 4,0);
    uVar2 = 1;
  }
  return uVar2;
}
