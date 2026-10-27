// rea decompile_all
// name: FUN_0075dad4
// address: 0x75dad4
// body: available
// range: 0x75dad4-0x75db48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0075dad4(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;

  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_00404338();
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar2 = FUN_00758868();
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    uVar2 = FUN_00758864();
    *(undefined4 *)(param_1 + 0x38) = uVar2;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 < *(uint *)(param_1 + 0x2c)) {
    iVar3 = *(uint *)(param_1 + 0x2c) - uVar1;
    uVar2 = FUN_0040431c(iVar3);
    *(undefined4 *)(param_1 + 0x34) = uVar2;
    FUN_0040450c(uVar1,*(undefined4 *)(param_1 + 0x34),iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x34) - uVar1;
  *(int *)(param_1 + 0x48) = iVar3;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar3;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x48);
  return;
}
