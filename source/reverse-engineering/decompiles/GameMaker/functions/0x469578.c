// rea decompile_all
// name: FUN_00469578
// address: 0x469578
// body: available
// range: 0x469578-0x46967b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00469578(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  iVar1 = *(int *)(param_1 + 0x1c);
  if (*(int *)(iVar1 + 0x34) == 0) {
    iVar2 = (**(code **)(param_1 + 0x20))
                      (*(undefined4 *)(param_1 + 0x28),
                       1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f),1);
    *(int *)(iVar1 + 0x34) = iVar2;
    if (iVar2 == 0) {
      return 1;
    }
  }
  if (*(int *)(iVar1 + 0x28) == 0) {
    *(int *)(iVar1 + 0x28) = 1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f);
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  uVar3 = param_2 - *(int *)(param_1 + 0x10);
  if (uVar3 < *(uint *)(iVar1 + 0x28)) {
    uVar4 = *(int *)(iVar1 + 0x28) - *(int *)(iVar1 + 0x30);
    if (uVar3 < uVar4) {
      uVar4 = uVar3;
    }
    FUN_00466a10();
    if (uVar3 - uVar4 == 0) {
      *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + uVar4;
      if (*(int *)(iVar1 + 0x30) == *(int *)(iVar1 + 0x28)) {
        *(undefined4 *)(iVar1 + 0x30) = 0;
      }
      if (*(uint *)(iVar1 + 0x2c) < *(uint *)(iVar1 + 0x28)) {
        *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + uVar4;
      }
    }
    else {
      FUN_00466a10();
      *(uint *)(iVar1 + 0x30) = uVar3 - uVar4;
      *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x28);
    }
  }
  else {
    FUN_00466a10();
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x28);
  }
  return 0;
}
