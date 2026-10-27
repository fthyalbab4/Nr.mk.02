// rea decompile_all
// name: FUN_0055d474
// address: 0x55d474
// body: available
// range: 0x55d474-0x55d509 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055d474(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;

  iVar1 = *(int *)(param_1 + 0x14c);
  while( true ) {
    if (*(uint *)(param_1 + 0xec) <= *(uint *)(iVar1 + 8)) {
      return;
    }
    if (*(uint *)(iVar1 + 0xc) < 8) {
      (**(code **)(*(int *)(param_1 + 0x150) + 4))
                (param_1,param_2,param_3,8,iVar1 + 0xc,iVar1 + 0x18,param_4);
    }
    if (*(int *)(iVar1 + 0xc) != 8) break;
    iVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 4))(param_1,iVar1 + 0x18);
    if (iVar2 == 0) {
      if (*(int *)(iVar1 + 0x10) != 0) {
        return;
      }
      *param_3 = *param_3 + -1;
      *(undefined4 *)(iVar1 + 0x10) = 1;
      return;
    }
    if (*(int *)(iVar1 + 0x10) != 0) {
      *param_3 = *param_3 + 1;
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  return;
}
