// rea decompile_all
// name: FUN_00467fd0
// address: 0x467fd0
// body: available
// range: 0x467fd0-0x468080 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00467fd0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  if ((param_1 == 0) || (*(int *)(param_1 + 0x1c) == 0)) {
    return 0xfffffffe;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
  if (((iVar1 != 0x2a) && (((iVar1 != 0x45 && (iVar1 != 0x49)) && (iVar1 != 0x5b)))) &&
     (((iVar1 != 0x67 && (iVar1 != 0x71)) && (iVar1 != 0x29a)))) {
    return 0xfffffffe;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 8);
  if (iVar2 != 0) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar2);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x44);
  if (iVar2 != 0) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar2);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x40);
  if (iVar2 != 0) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar2);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
  if (iVar2 != 0) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar2);
  }
  (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (iVar1 == 0x71) {
    uVar3 = 0xfffffffd;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
