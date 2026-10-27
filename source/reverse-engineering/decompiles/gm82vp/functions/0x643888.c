// rea decompile_all
// name: FUN_00643888
// address: 0x643888
// body: available
// range: 0x643888-0x643905 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00643888(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_stack_0000000c;

  FUN_004083c0(PTR_PTR_006888a0,*(undefined4 *)(in_stack_0000000c + 0x10));
  uVar1 = FUN_004048b8();
  *(undefined4 *)PTR_DAT_00688954 = uVar1;
  iVar2 = FUN_004048b8();
  if (iVar2 == 0) {
    *PTR_PTR_00688d48 = 0;
  }
  else if (iVar2 == 1) {
    *PTR_PTR_00688d48 = 1;
  }
  else if (iVar2 == 2) {
    *PTR_PTR_00688d48 = 2;
  }
  else if (iVar2 == 3) {
    *PTR_PTR_00688d48 = 3;
  }
  return;
}
