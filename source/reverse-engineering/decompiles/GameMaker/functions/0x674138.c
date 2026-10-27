// rea decompile_all
// name: FUN_00674138
// address: 0x674138
// body: available
// range: 0x674138-0x6741e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00674138(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  uVar2 = 0;
  iVar3 = 0;
  if ((*(char *)(param_1 + 0x65) == '\0') || (iVar1 = FUN_00672408(param_1), iVar1 == 0)) {
    iVar1 = FUN_00673fd0(param_1);
    if ((iVar1 != 0) && (iVar1 = FUN_00673fd0(param_1), *(int *)(iVar1 + 0x5c) != 0)) {
      iVar3 = FUN_00673fd0(param_1);
      iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x3c);
    }
  }
  else {
    iVar3 = FUN_00673fc4(param_1);
    if (*(char *)(iVar3 + 0x29) == '\0') {
      FUN_00672408(param_1);
      iVar3 = FUN_00671654();
      iVar3 = *(int *)(iVar3 + 0xa4);
      if (iVar3 == 0) {
        FUN_00672408(param_1);
        iVar3 = FUN_00671654();
        iVar3 = *(int *)(iVar3 + 0x3c);
      }
    }
    else {
      FUN_00672408(param_1);
      iVar3 = FUN_00671654();
      iVar3 = *(int *)(iVar3 + 0x3c);
    }
  }
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x5c);
    if ((iVar1 < 0) || (iVar3 = FUN_00507098(iVar3), iVar3 <= iVar1)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}
