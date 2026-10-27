// rea decompile_all
// name: FUN_004907e0
// address: 0x4907e0
// body: available
// range: 0x4907e0-0x490847 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004907e0(int *param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  if (param_2 != (char)param_1[0x71]) {
    *(char *)(param_1 + 0x71) = param_2;
    cVar1 = (**(code **)(*param_1 + 0x5c))();
    if ((cVar1 == '\0') && (param_1[0x73] != 0)) {
      if ((char)param_1[0x71] == '\0') {
        uVar3 = 0;
        uVar2 = FUN_00490580(param_1);
        FUN_004bcb48(param_1[0x73],0x401,uVar2,uVar3);
      }
      else {
        uVar3 = 1;
        uVar2 = FUN_00490580(param_1);
        FUN_004bcb48(param_1[0x73],0x401,uVar2,uVar3);
      }
    }
  }
  return;
}
