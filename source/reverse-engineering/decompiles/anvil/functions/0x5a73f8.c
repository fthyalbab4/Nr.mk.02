// rea decompile_all
// name: FUN_005a73f8
// address: 0x5a73f8
// body: available
// range: 0x5a73f8-0x5a7474 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a73f8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;

  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x30);
  *(undefined4 **)(param_1 + 0x1c4) = puVar1;
  *puVar1 = &LAB_005a6f44;
  puVar1[2] = 0;
  puVar1[10] = *(int *)(param_1 + 0x70) * *(int *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x138) == 2) {
    puVar1[1] = FUN_005a6f58;
    puVar1[3] = FUN_005a71c0;
    uVar2 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,puVar1[10]);
    puVar1[8] = uVar2;
  }
  else {
    puVar1[1] = &LAB_005a7010;
    puVar1[3] = FUN_005a7048;
    puVar1[8] = 0;
  }
  FUN_005a6e8c(param_1);
  return;
}
