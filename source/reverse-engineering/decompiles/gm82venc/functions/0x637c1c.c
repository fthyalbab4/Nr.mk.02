// rea decompile_all
// name: FUN_00637c1c
// address: 0x637c1c
// body: available
// range: 0x637c1c-0x637ca0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00637c1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;

  for (iVar2 = 0; (iVar2 < DAT_00688818 && (*(int *)(DAT_00688814 + iVar2 * 4) != 0));
      iVar2 = iVar2 + 1) {
  }
  if (iVar2 == DAT_00688818) {
    FUN_00409dfc(&DAT_00688814,&DAT_00637bf4,1,DAT_00688818 + 1);
    DAT_00688818 = DAT_00688818 + 1;
  }
  uVar1 = FUN_00636f94(&DAT_00636b8c,1,param_1,param_4,param_5,param_6,param_3,param_2);
  *(undefined4 *)(DAT_00688814 + iVar2 * 4) = uVar1;
  return iVar2;
}
