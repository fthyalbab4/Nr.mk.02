// rea decompile_all
// name: FUN_0041a7d8
// address: 0x41a7d8
// body: available
// range: 0x41a7d8-0x41a829 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0041a7d8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;

  iVar6 = 7;
  piVar4 = &DAT_0068cd5c;
  puVar5 = &DAT_0068cd78;
  while( true ) {
    if (*piVar4 == 0) {
      return 0;
    }
    uVar1 = FUN_00408220(param_1);
    uVar2 = FUN_00408220(*piVar4);
    iVar3 = FUN_0041daa4(uVar2,uVar1);
    if (iVar3 != 0) break;
    puVar5 = puVar5 + 1;
    piVar4 = piVar4 + 1;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      return 0;
    }
  }
  return *puVar5;
}
