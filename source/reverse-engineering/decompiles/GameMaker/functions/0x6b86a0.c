// rea decompile_all
// name: FUN_006b86a0
// address: 0x6b86a0
// body: available
// range: 0x6b86a0-0x6b871c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b86a0(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;

  cVar2 = FUN_006b288c(param_1);
  if (cVar2 != '\0') {
    FUN_006b1018(param_1,4,0,100000,0,100000);
    FUN_006b8720(param_1);
    FUN_006b2a38(param_1);
    uVar1 = *(undefined4 *)(param_1 + 0x2d8);
    uVar3 = FUN_00409a20(uVar1);
    FUN_006ab1d0(uVar1,uVar3);
    FUN_006b30f0(param_1);
    if (*(short *)(param_1 + 0x2d2) != 0) {
      (**(code **)(param_1 + 0x2d0))(*(undefined4 *)(param_1 + 0x2d4),param_1);
    }
    FUN_006b281c(param_1);
    FUN_004eed28(param_1);
  }
  return;
}
