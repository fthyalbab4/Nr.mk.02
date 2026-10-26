// rea decompile_all
// name: FUN_005ae8e4
// address: 0x5ae8e4
// body: available
// range: 0x5ae8e4-0x5ae954 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ae8e4(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;

  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0xac);
  *(undefined4 **)(param_1 + 0x1b8) = puVar1;
  *puVar1 = FUN_005ae8ac;
  puVar2 = puVar1 + 8;
  puVar1[1] = FUN_005ae410;
  puVar1[2] = FUN_005ae720;
  puVar1[7] = FUN_005ae1c4;
  puVar1[0x18] = 0;
  iVar3 = 0;
  do {
    *puVar2 = FUN_005ae1c4;
    puVar2[0x11] = 0;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 0x10);
  puVar1[8] = FUN_005add5c;
  puVar1[0x16] = FUN_005add5c;
  FUN_005ae8ac(param_1);
  return;
}
