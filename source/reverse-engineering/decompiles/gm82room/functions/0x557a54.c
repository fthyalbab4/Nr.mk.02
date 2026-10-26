// rea decompile_all
// name: FUN_00557a54
// address: 0x557a54
// body: available
// range: 0x557a54-0x557a8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00557a54(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  iVar1 = (*DAT_00711868)(param_1);
  uVar2 = FUN_005578c4();
  FUN_005578c8(iVar1,*(undefined4 *)(param_1 + 0xc),1,uVar2);
  iVar3 = FUN_0040bfac();
  if (*(int *)(iVar3 + 0x4c) != 0) {
    iVar1 = *(int *)(iVar3 + 0x4c);
  }
  return iVar1;
}
