// rea decompile_all
// name: FUN_00560228
// address: 0x560228
// body: available
// range: 0x560228-0x560269 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00560228(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;

  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x6c);
  iVar3 = 0;
  *(undefined4 **)(param_1 + 0x168) = puVar1;
  *puVar1 = &LAB_0055f798;
  puVar2 = puVar1 + 0x13;
  do {
    iVar3 = iVar3 + 1;
    *puVar2 = 0;
    puVar2[4] = 0;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 4);
  puVar1[0x10] = 0;
  return;
}
