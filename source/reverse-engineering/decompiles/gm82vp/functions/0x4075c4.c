// rea decompile_all
// name: FUN_004075c4
// address: 0x4075c4
// body: available
// range: 0x4075c4-0x4075ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4075fb to 0x4074ec FUN_004074ec (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004075c4(undefined4 param_1,short *param_2)

{
  uint uVar1;
  short *psVar2;

  LOCK();
  UNLOCK();
  uVar1 = 0;
  psVar2 = param_2;
  if (param_2 != (short *)0x0) {
    for (; *psVar2 != 0; psVar2 = psVar2 + 4) {
      if (psVar2[1] == 0) {
LAB_004075f1:
        psVar2 = psVar2 + 1;
        break;
      }
      if (psVar2[2] == 0) {
LAB_004075ee:
        psVar2 = psVar2 + 1;
        goto LAB_004075f1;
      }
      if (psVar2[3] == 0) {
        psVar2 = psVar2 + 1;
        goto LAB_004075ee;
      }
    }
    uVar1 = (uint)((int)psVar2 - (int)param_2) >> 1;
  }
  FUN_004074ec(param_1,param_2,uVar1);
  return;
}
