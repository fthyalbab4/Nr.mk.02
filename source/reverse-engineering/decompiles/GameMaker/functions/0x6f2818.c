// rea decompile_all
// name: FUN_006f2818
// address: 0x6f2818
// body: available
// range: 0x6f2818-0x6f28f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006f2818(int param_1)

{
  int iVar1;

  iVar1 = FUN_006f5b30(param_1);
  DAT_0079016c[0x108] = iVar1;
  DAT_0079016c[0x10b] = param_1;
  iVar1 = FUN_005b325c(&DAT_005b27dc,1);
  DAT_0079016c[0x109] = iVar1;
  FUN_005b33a8(iVar1,DAT_0079016c[0x108]);
  *(undefined1 *)(DAT_0079016c + 0x10a) = 0;
  *(undefined1 *)((int)DAT_0079016c + 0x429) = 0;
  DAT_0079016c[0x110] = 100;
  FUN_004ee5c0(DAT_0079016c[0x107],1);
  FUN_004ee5c0(DAT_0079016c[0x105],1);
  FUN_006f2a9c(DAT_0079016c);
  (**(code **)(*DAT_0079016c + 0x110))();
  if (*(char *)((int)DAT_0079016c + 0x429) == '\0') {
    FUN_005b33a8(DAT_0079016c[0x108],DAT_0079016c[0x109]);
  }
  FUN_00405a7c(DAT_0079016c[0x109]);
  if ((*(char *)((int)DAT_0079016c + 0x429) != '\0') && ((char)DAT_0079016c[0x10a] != '\0')) {
    return 1;
  }
  return 0;
}
