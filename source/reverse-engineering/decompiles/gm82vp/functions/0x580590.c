// rea decompile_all
// name: FUN_00580590
// address: 0x580590
// body: available
// range: 0x580590-0x5805b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00580590(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  uVar4 = 0;
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = FUN_00409c3c(uVar1,param_2,param_3,uVar3,0,param_2);
  FUN_00580718(&DAT_0056a1d8,uVar1,uVar2,uVar3,uVar4,param_2);
  return;
}
