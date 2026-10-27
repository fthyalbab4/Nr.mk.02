// rea decompile_all
// name: FUN_004bdc48
// address: 0x4bdc48
// body: available
// range: 0x4bdc48-0x4bdcbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bdc48(int *param_1,int param_2,uint param_3)

{
  uint local_10;

  local_10 = param_3 & 0xffffff00;
  if (*(short *)((int)param_1 + 0x15a) != 0) {
    (*(code *)param_1[0x56])(param_1[0x57],param_1,*(undefined4 *)(param_2 + 8),&local_10);
  }
  if ((char)local_10 == '\0') {
    (**(code **)(*param_1 + 0x44))(param_1,*(undefined4 *)(param_2 + 8),&local_10);
  }
  if ((char)local_10 == '\0') {
    if ((**(short **)(param_2 + 8) == 0) && (param_1[0xd] != 0)) {
      FUN_004bcb48(param_1[0xd],0xb052,0,*(undefined4 *)(param_2 + 8));
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = 1;
  }
  return;
}
