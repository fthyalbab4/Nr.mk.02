// rea decompile_all
// name: FUN_00550d60
// address: 0x550d60
// body: available
// range: 0x550d60-0x550e0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00550d60(int *param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = param_1[0x6d];
  if (*(int *)(iVar1 + 0x14) == 0) {
    iVar2 = (**(code **)(param_1[0x6e] + 4))();
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        if (*(int *)(iVar1 + 0x18) == 0) {
          if (*(int *)(iVar1 + 0x10) == 0) {
            *(undefined4 *)(*param_1 + 0x14) = 0x23;
            (**(code **)*param_1)();
          }
          FUN_00550d18(param_1);
        }
        else {
          FUN_0055092c(param_1);
          *(undefined4 *)(iVar1 + 0x18) = 0;
        }
      }
      else if (iVar2 == 2) {
        *(undefined4 *)(iVar1 + 0x14) = 1;
        if (*(int *)(iVar1 + 0x18) == 0) {
          if (param_1[0x24] < param_1[0x26]) {
            param_1[0x26] = param_1[0x24];
          }
        }
        else if (*(int *)(param_1[0x6e] + 0x10) != 0) {
          *(undefined4 *)(*param_1 + 0x14) = 0x3b;
          (**(code **)*param_1)();
        }
      }
    }
  }
  else {
    iVar2 = 2;
  }
  return iVar2;
}
