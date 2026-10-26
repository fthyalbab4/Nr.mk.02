// rea decompile_all
// name: FUN_0071ac54
// address: 0x71ac54
// body: available
// range: 0x71ac54-0x71acd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0071ac54(int param_1)

{
  DAT_0079a874 = 0;
  DAT_0079a878 = 0x800000;
  DAT_0079a87c = 0xff0000;
  DAT_0079a880 = 0x8000;
  DAT_0079a884 = 0x80;
  DAT_0079a888 = 0x80;
  DAT_0079a88c = 0x80;
  DAT_0079a890 = &DAT_00800080;
  DAT_0079a894 = 0x8080;
  DAT_0079a898 = 0xffffff;
  DAT_0079a89c = 0xe0fafa;
  DAT_0079a8a0 = 0xa06850;
  (**(code **)(**(int **)(param_1 + 0x454) + 0xf0))(*(int **)(param_1 + 0x454),0);
  FUN_0045bc24(*(undefined4 *)(*(int *)(param_1 + 0x450) + 0x1b4),DAT_0079a874);
  return;
}
