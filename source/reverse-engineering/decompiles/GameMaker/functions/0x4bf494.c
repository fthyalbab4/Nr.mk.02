// rea decompile_all
// name: FUN_004bf494
// address: 0x4bf494
// body: available
// range: 0x4bf494-0x4bf4ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_004bf494(int *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;

  iVar3 = (**(code **)(*param_1 + 0x4c))();
  if (iVar3 == 0) {
    bVar2 = *(byte *)(param_1 + 0xad) ^ 1;
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0x4c))();
    cVar1 = FUN_00405c98(uVar4,&PTR_FUN_00490648);
    if (cVar1 == '\0') {
      return 1;
    }
    bVar2 = 0;
  }
  return bVar2;
}
