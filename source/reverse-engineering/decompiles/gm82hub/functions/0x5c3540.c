// rea decompile_all
// name: FUN_005c3540
// address: 0x5c3540
// body: available
// range: 0x5c3540-0x5c35ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c3540(int param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int *local_14;
  int local_10;

  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x6c);
  while (param_4 = param_4 + -1, -1 < param_4) {
    local_10 = 0;
    local_14 = param_2;
    if (0 < iVar1) {
      do {
        puVar4 = (undefined1 *)(*param_5 + local_10);
        puVar3 = *(undefined1 **)(*local_14 + param_3 * 4);
        for (iVar5 = iVar2; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + iVar1;
        }
        local_10 = local_10 + 1;
        local_14 = local_14 + 1;
      } while (local_10 < iVar1);
    }
    param_3 = param_3 + 1;
    param_5 = param_5 + 1;
  }
  return;
}
