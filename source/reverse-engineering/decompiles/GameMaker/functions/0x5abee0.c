// rea decompile_all
// name: FUN_005abee0
// address: 0x5abee0
// body: available
// range: 0x5abee0-0x5abf19 inclusive
// range: 0x5abf3e-0x5abf9e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005abee0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char local_c;
  undefined3 uStack_b;

  _local_c = CONCAT31((int3)((uint)param_3 >> 8),1);
  FUN_00405d08(param_1,*(undefined1 *)(param_1 + 0x312),&local_c);
  if (local_c != '\0') {
    switch(*(undefined1 *)(param_1 + 0x312)) {
    case 0:
      FUN_005ac6a4(param_1);
      break;
    case 1:
      FUN_005ac920(param_1);
      break;
    case 2:
      FUN_005ac88c(param_1);
      break;
    case 3:
      FUN_005acab4(param_1);
      break;
    case 4:
      FUN_005acc38(param_1);
      break;
    case 5:
      FUN_005acdf0(param_1);
      break;
    case 6:
      FUN_005acecc(param_1);
      break;
    case 7:
      FUN_005ac7b4(param_1);
      break;
    case 8:
      FUN_005acf90(param_1);
    }
    FUN_005abfa0(param_1,*(undefined1 *)(param_1 + 0x312));
  }
  return;
}
