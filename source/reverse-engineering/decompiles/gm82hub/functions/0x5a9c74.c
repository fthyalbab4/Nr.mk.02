// rea decompile_all
// name: FUN_005a9c74
// address: 0x5a9c74
// body: available
// range: 0x5a9c74-0x5a9d36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a9c74(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_18;
  undefined4 local_14;

  iVar1 = *(int *)(param_1 + 0x1a8);
  local_18 = 0;
  local_14 = *(int *)(param_1 + 0xd8);
  for (; local_18 < *(int *)(param_1 + 0x24); local_18 = local_18 + 1) {
    uVar6 = *(int *)(local_14 + 0xc) * *(int *)(local_14 + 0x24);
    iVar3 = (int)uVar6 / *(int *)(param_1 + 0x13c);
    uVar5 = *(uint *)(local_14 + 0x2c) % uVar6;
    if (uVar5 == 0) {
      uVar5 = uVar6;
    }
    if (local_18 == 0) {
      *(int *)(iVar1 + 0x48) = (int)(uVar5 - 1) / iVar3 + 1;
    }
    iVar2 = *(int *)(*(int *)(iVar1 + 0x38 + *(int *)(iVar1 + 0x40) * 4) + local_18 * 4);
    for (iVar4 = 0; iVar4 < iVar3 * 2; iVar4 = iVar4 + 1) {
      *(undefined4 *)(iVar2 + (iVar4 + uVar5) * 4) = *(undefined4 *)(iVar2 + -4 + uVar5 * 4);
    }
    local_14 = local_14 + 0x54;
  }
  return;
}
