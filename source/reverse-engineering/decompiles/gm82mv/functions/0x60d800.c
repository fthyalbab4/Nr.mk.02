// rea decompile_all
// name: FUN_0060d800
// address: 0x60d800
// body: available
// range: 0x60d800-0x60db05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060d800(int param_1,undefined4 param_2)

{
  int iVar1;

  FUN_0050bce8(param_2,*(undefined4 *)(param_1 + 4));
  FUN_0050bce8(param_2,*(undefined4 *)(param_1 + 8));
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bce8(param_2,*(undefined4 *)(param_1 + 0x40));
  FUN_0050bce8(param_2,*(undefined4 *)(param_1 + 0x44));
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bce8(param_2,*(undefined4 *)(param_1 + 0xb8));
  FUN_0050bce8(param_2,*(undefined4 *)(param_1 + 0xc0));
  FUN_0050bce8(param_2,*(undefined4 *)(param_1 + 0xbc));
  FUN_0050bce8(param_2,*(undefined4 *)(param_1 + 0xc4));
  FUN_0050bdfc(param_2,*(undefined1 *)(param_1 + 200));
  FUN_0050bdfc(param_2,*(undefined1 *)(param_1 + 0xc9));
  FUN_0050bdfc(param_2,*(undefined1 *)(param_1 + 0xca));
  FUN_0050bce8(param_2,*(undefined4 *)(param_1 + 0xcc));
  iVar1 = 0;
  do {
    FUN_0050bce8(param_2,*(undefined4 *)(param_1 + 0xd4 + iVar1 * 4));
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xc);
  FUN_0050bdfc(param_2,*(undefined1 *)(param_1 + 0x108));
  FUN_0050bdfc(param_2,*(undefined1 *)(param_1 + 0x109));
  FUN_0050bce8(param_2,*(undefined4 *)(param_1 + 0x10c));
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bce8(param_2,*(undefined4 *)(param_1 + 0x138));
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bce8(param_2,*(undefined4 *)(param_1 + 0x150));
  FUN_0050bcfc(param_2);
  FUN_0050bcfc(param_2);
  FUN_0050bdfc(param_2,*(undefined1 *)(param_1 + 0x168));
  FUN_0050bdfc(param_2,*(undefined1 *)(param_1 + 0x169));
  FUN_0050bd24(param_2,*(undefined4 *)(param_1 + 0x16c));
  FUN_0056df28(*(undefined4 *)(param_1 + 0x104),param_2);
  return;
}
