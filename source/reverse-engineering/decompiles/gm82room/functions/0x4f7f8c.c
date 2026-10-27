// rea decompile_all
// name: FUN_004f7f8c
// address: 0x4f7f8c
// body: available
// range: 0x4f7f8c-0x4f7fd2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f7f8c(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined3 uVar3;

  if (*(int *)(*(int *)(param_1 + 0x138) + 8) != 0) {
    uVar2 = FUN_004f211c(*(undefined4 *)(param_1 + 0x138),0);
    uVar2 = FUN_004061f8(uVar2,&PTR_LAB_004efe54);
    if ((char)uVar2 != '\0') {
      uVar3 = (undefined3)((uint)uVar2 >> 8);
      uVar1 = 1;
      goto LAB_004f7fc9;
    }
  }
  uVar1 = 0;
  uVar3 = 0;
LAB_004f7fc9:
  return CONCAT31(uVar3,uVar1);
}
