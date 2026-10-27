// rea decompile_all
// name: FUN_00467330
// address: 0x467330
// body: available
// range: 0x467330-0x467380 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00467330(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;

  uVar3 = *(uint *)(*(int *)(param_1 + 0x1c) + 0x14);
  if (*(uint *)(param_1 + 0x10) < uVar3) {
    uVar3 = *(uint *)(param_1 + 0x10);
  }
  if (uVar3 != 0) {
    FUN_00466a40();
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar3;
    piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 0x10);
    *piVar1 = *piVar1 + uVar3;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar3;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - uVar3;
    piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 0x14);
    *piVar1 = *piVar1 - uVar3;
    iVar2 = *(int *)(param_1 + 0x1c);
    if (*(int *)(iVar2 + 0x14) == 0) {
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 8);
    }
  }
  return;
}
