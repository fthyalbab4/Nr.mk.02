// rea decompile_all
// name: FUN_00645c1c
// address: 0x645c1c
// body: available
// range: 0x645c1c-0x645caf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00645c1c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  FUN_00525ba8(param_2,1);
  iVar1 = *(int *)(param_2 + 0xc);
  iVar2 = *(int *)(param_1 + 0x738);
  if ((((iVar2 == 0xf) || (iVar2 == 0x10)) || (iVar2 == 0x11)) &&
     (((iVar1 == 0xf || (iVar1 == 0x10)) || (iVar1 == 0x11)))) {
    if (iVar1 == 0xf) {
      FUN_0063c828(*(undefined4 *)(param_1 + 0x768),1);
    }
    if (iVar1 == 0x10) {
      FUN_0063c828(*(undefined4 *)(param_1 + 0x768),2);
    }
    if (iVar1 == 0x11) {
      FUN_0063c828(*(undefined4 *)(param_1 + 0x768),3);
    }
    *(int *)(param_1 + 0x738) = iVar1;
  }
  else {
    FUN_00643eac(param_1);
    FUN_00643c30(param_1,iVar1);
  }
  return;
}
