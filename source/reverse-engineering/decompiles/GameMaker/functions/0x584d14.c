// rea decompile_all
// name: FUN_00584d14
// address: 0x584d14
// body: available
// range: 0x584d14-0x584d7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00584d14(int param_1)

{
  undefined4 *puVar1;
  int iVar2;

  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x60);
  iVar2 = 0;
  *(undefined4 **)(param_1 + 0x1aa) = puVar1;
  *puVar1 = FUN_00584ce4;
  puVar1[1] = FUN_00584860;
  puVar1[2] = FUN_00584b58;
  puVar1[3] = FUN_0058461c;
  do {
    *(code **)(*(int *)(param_1 + 0x1aa) + 0x10 + iVar2 * 4) = FUN_0058461c;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  iVar2 = *(int *)(param_1 + 0x1aa);
  *(code **)(iVar2 + 0x10) = FUN_0058399c;
  *(code **)(iVar2 + 0x48) = FUN_00583c20;
  FUN_00584ce4(param_1);
  return;
}
