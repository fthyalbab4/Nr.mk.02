// rea decompile_all
// name: FUN_005af980
// address: 0x5af980
// body: available
// range: 0x5af980-0x5afa59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005af980(int *param_1)

{
  int iVar1;
  uint uVar2;

  if ((param_1[5] == 0x65) || (param_1[5] == 0x66)) {
    if ((uint)param_1[0x37] < (uint)param_1[8]) {
      *(undefined4 *)(*param_1 + 0x14) = 0x43;
      (**(code **)*param_1)();
    }
    (**(code **)(param_1[0x52] + 8))();
  }
  else if (param_1[5] != 0x67) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x14;
    *(int *)(iVar1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  while (*(int *)(param_1[0x52] + 0x10) == 0) {
    (**(code **)param_1[0x52])();
    for (uVar2 = 0; uVar2 < (uint)param_1[0x3b]; uVar2 = uVar2 + 1) {
      iVar1 = param_1[2];
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 4) = uVar2;
        *(int *)(iVar1 + 8) = param_1[0x3b];
        (**(code **)param_1[2])();
      }
      iVar1 = (**(code **)(param_1[0x55] + 4))(param_1,0);
      if (iVar1 == 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x18;
        (**(code **)*param_1)();
      }
    }
    (**(code **)(param_1[0x52] + 8))();
  }
  (**(code **)(param_1[0x56] + 0xc))();
  (**(code **)(param_1[6] + 0x10))();
  FUN_005aead4(param_1);
  return;
}
