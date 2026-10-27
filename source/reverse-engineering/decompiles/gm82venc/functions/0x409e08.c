// rea decompile_all
// name: FUN_00409e08
// address: 0x409e08
// body: available
// range: 0x409e08-0x409e41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00409e08(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;

  iVar3 = *param_1;
  if (iVar3 != 0) {
    *param_1 = 0;
    LOCK();
    piVar1 = (int *)(iVar3 + -8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      puVar2 = *(undefined4 **)(*(byte *)(param_2 + 1) + 6 + param_2);
      if ((puVar2 != (undefined4 *)0x0) && (*(int *)(iVar3 + -4) != 0)) {
        iVar3 = FUN_00409120(iVar3,*puVar2);
      }
      FUN_00404340(iVar3 + -8);
    }
  }
  return param_1;
}
