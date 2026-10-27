// rea decompile_all
// name: FUN_0068c9e4
// address: 0x68c9e4
// body: available
// range: 0x68c9e4-0x68caa0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068c9e4(int param_1)

{
  uint uVar1;
  undefined1 *local_1c;
  int local_18;
  int local_14;

  *(undefined4 *)(param_1 + 0x1650) = 0;
  *(undefined4 *)(param_1 + 0x1654) = 0;
  *(undefined1 *)(param_1 + 0x1688) = 1;
  while (*(float *)(param_1 + 0x165c) != 1.0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x3c0) + 0x48);
    local_18 = (int)uVar1 >> 1;
    if (local_18 < 0) {
      local_18 = local_18 + (uint)((uVar1 & 1) != 0);
    }
    uVar1 = *(uint *)(*(int *)(param_1 + 0x3c0) + 0x4c);
    local_14 = (int)uVar1 >> 1;
    if (local_14 < 0) {
      local_14 = local_14 + (uint)((uVar1 & 1) != 0);
    }
    local_1c = (undefined1 *)&local_1c;
    FUN_00690ac4(param_1,0);
  }
  *(undefined1 *)(param_1 + 0x1688) = 0;
  FUN_006902e4(param_1);
  if (*(int *)(param_1 + 0x61c) != 0) {
    FUN_00691508(param_1,0);
    FUN_0068f9f8(param_1);
  }
  return;
}
