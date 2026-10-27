// rea decompile_all
// name: FUN_004080e0
// address: 0x4080e0
// body: available
// range: 0x4080e0-0x408130 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004080e0(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;

  uVar3 = 0;
  if (0 < (int)param_2) {
    uVar3 = FUN_00407da8(param_2,param_2,param_3,param_3);
    iVar1 = *param_1;
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = *(uint *)(iVar1 + -4) >> 1;
    }
    if (uVar2 != 0) {
      if ((int)param_2 < (int)uVar2) {
        uVar2 = param_2;
      }
      FUN_00404514(iVar1,uVar3,uVar2 * 2);
    }
  }
  FUN_00407dc0(param_1,uVar3);
  return;
}
