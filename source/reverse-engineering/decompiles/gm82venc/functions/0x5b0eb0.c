// rea decompile_all
// name: FUN_005b0eb0
// address: 0x5b0eb0
// body: available
// range: 0x5b0eb0-0x5b0f77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b0eb0(int param_1,int param_2)

{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x24);
  *(undefined4 **)(param_1 + 0x148) = puVar1;
  *puVar1 = FUN_005b0c90;
  puVar1[1] = FUN_005b0e2c;
  puVar1[2] = FUN_005b0e54;
  puVar1[4] = 0;
  FUN_005b0448(param_1);
  if (*(int *)(param_1 + 0xa8) == 0) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 1;
  }
  else {
    FUN_005b060c(param_1);
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    *(undefined4 *)(param_1 + 0xb4) = 1;
  }
  if (param_2 == 0) {
    puVar1[5] = 0;
  }
  else if (*(int *)(param_1 + 0xb4) == 0) {
    puVar1[5] = 2;
  }
  else {
    puVar1[5] = 1;
  }
  puVar1[8] = 0;
  puVar1[6] = 0;
  if (*(int *)(param_1 + 0xb4) == 0) {
    puVar1[7] = *(undefined4 *)(param_1 + 0xa4);
  }
  else {
    puVar1[7] = *(int *)(param_1 + 0xa4) * 2;
  }
  return;
}
