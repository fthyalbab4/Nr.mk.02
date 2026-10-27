// rea decompile_all
// name: FUN_005ab8e0
// address: 0x5ab8e0
// body: available
// range: 0x5ab8e0-0x5ab96c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ab8e0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;

  param_4 = (undefined4 *)*param_4;
  local_18 = param_4;
  local_14 = param_3;
  for (local_10 = 0; local_10 < *(int *)(param_1 + 0x138); local_10 = local_10 + 2) {
    puVar2 = (undefined1 *)*local_18;
    puVar4 = puVar2 + *(int *)(param_1 + 0x70);
    puVar3 = (undefined1 *)*local_14;
    for (; puVar2 < puVar4; puVar2 = puVar2 + 2) {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      *puVar2 = uVar1;
      puVar2[1] = uVar1;
    }
    FUN_005aea68(param_4,local_10,param_4,*(undefined4 *)(param_1 + 0x70),1,local_10 + 1);
    local_14 = local_14 + 1;
    local_18 = local_18 + 2;
  }
  return;
}
