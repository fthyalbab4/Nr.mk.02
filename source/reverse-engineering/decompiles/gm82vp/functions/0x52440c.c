// rea decompile_all
// name: FUN_0052440c
// address: 0x52440c
// body: available
// range: 0x52440c-0x52448d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0052440c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 local_c;

  local_c = param_3;
  FUN_00524344(*param_1,param_2,&local_c);
  if (*(char *)(param_1 + 4) == '\0') {
    iVar2 = param_1[2];
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        return iVar2;
      }
      pcVar1 = (char *)(param_1[1] + iVar2 * 3);
    } while (((*pcVar1 != (char)local_c) || (pcVar1[1] != local_c._1_1_)) ||
            (pcVar1[2] != local_c._2_1_));
  }
  else {
    for (iVar2 = 0; iVar2 < (int)param_1[2]; iVar2 = iVar2 + 1) {
      pcVar1 = (char *)(param_1[1] + iVar2 * 3);
      if (((*pcVar1 == (char)local_c) && (pcVar1[1] == local_c._1_1_)) &&
         (pcVar1[2] == local_c._2_1_)) {
        return iVar2;
      }
    }
    iVar2 = -1;
  }
  return iVar2;
}
