// rea decompile_all
// name: FUN_004f95a4
// address: 0x4f95a4
// body: available
// range: 0x4f95a4-0x4f95f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f95a4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  if ((char)param_2 == '\0') {
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffffdfff;
  }
  else {
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x2000;
  }
  if ((*(int *)(param_1 + 0x1e0) != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x1e0) + 8), -1 < iVar2 + -1)) {
    iVar3 = 0;
    do {
      uVar1 = FUN_0043b048(*(undefined4 *)(param_1 + 0x1e0),iVar3);
      FUN_004f95a4(uVar1,param_2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}
