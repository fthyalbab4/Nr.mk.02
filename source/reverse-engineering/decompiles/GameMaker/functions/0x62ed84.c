// rea decompile_all
// name: FUN_0062ed84
// address: 0x62ed84
// body: available
// range: 0x62ed84-0x62eeda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062ed84(int *param_1)

{
  int iVar1;

  if (param_1[0xea] < 1) {
    param_1[0xea] = 1;
  }
  if (3 < param_1[0xea]) {
    param_1[0xea] = 3;
  }
  FUN_004ee6d8(param_1[0xe2],param_1[0xee]);
  FUN_004ee5c0(param_1[0xe2],0 < param_1[0xea]);
  FUN_00530760(param_1[0xe3],param_1[0xeb]);
  FUN_004ee5c0(param_1[0xe3],0 < param_1[0xea]);
  FUN_004ee6d8(param_1[0xe4],param_1[0xef]);
  FUN_004ee5c0(param_1[0xe4],1 < param_1[0xea]);
  FUN_00530760(param_1[0xe5],param_1[0xec]);
  FUN_004ee5c0(param_1[0xe5],1 < param_1[0xea]);
  FUN_004ee6d8(param_1[0xe6],param_1[0xf0]);
  FUN_004ee5c0(param_1[0xe6],2 < param_1[0xea]);
  FUN_00530760(param_1[0xe7],param_1[0xed]);
  FUN_004ee5c0(param_1[0xe7],2 < param_1[0xea]);
  iVar1 = (**(code **)(*param_1 + 0x110))();
  if (iVar1 == 1) {
    param_1[0xeb] = *(int *)(param_1[0xe3] + 0x2a0);
    param_1[0xec] = *(int *)(param_1[0xe5] + 0x2a0);
    param_1[0xed] = *(int *)(param_1[0xe7] + 0x2a0);
  }
  return;
}
