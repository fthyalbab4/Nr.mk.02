// rea decompile_all
// name: FUN_00567828
// address: 0x567828
// body: available
// range: 0x567828-0x56788b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00567828(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,double param_6,double param_7,double param_8,double param_9)

{
  int iVar1;
  undefined4 uVar2;

  if (DAT_00686450 < 0x3e9) {
    iVar1 = DAT_00686450 * 0x18;
    *(float *)(&DAT_0083f4a0 + iVar1) = (float)param_9;
    *(float *)(&DAT_0083f4a4 + iVar1) = (float)param_8;
    *(float *)(&DAT_0083f4a8 + iVar1) = (float)*(double *)PTR_DAT_00689120;
    uVar2 = FUN_0056382c(param_1,param_2,param_3,param_4,param_5);
    *(undefined4 *)(&DAT_0083f4ac + iVar1) = uVar2;
    *(float *)(&DAT_0083f4b0 + iVar1) = (float)param_7;
    *(float *)(&DAT_0083f4b4 + iVar1) = (float)param_6;
    DAT_00686450 = DAT_00686450 + 1;
  }
  return;
}
