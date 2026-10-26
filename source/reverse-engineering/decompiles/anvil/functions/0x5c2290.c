// rea decompile_all
// name: FUN_005c2290
// address: 0x5c2290
// body: available
// range: 0x5c2290-0x5c2303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c2290(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;

  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x40);
  *(undefined4 **)(param_1 + 0x1ae) = puVar1;
  *puVar1 = FUN_005c1538;
  iVar2 = 0;
  puVar1 = puVar1 + 0xb;
  do {
    iVar2 = iVar2 + 1;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 4);
  puVar1 = (undefined4 *)
           (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x20) << 8);
  *(undefined4 **)(param_1 + 0x9c) = puVar1;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x20); iVar2 = iVar2 + 1) {
    iVar3 = 0;
    do {
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40);
  }
  return;
}
