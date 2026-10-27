// rea decompile_all
// name: FUN_0071dc58
// address: 0x71dc58
// body: available
// range: 0x71dc58-0x71ddf4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0071dc58(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  iVar1 = FUN_0052f024(param_1);
  if ((499 < iVar1) && (iVar1 < 0x2bd)) {
    FUN_0071c90c(param_1);
    FUN_004ae12c(*(undefined4 *)(DAT_0079a9e8 + 0x2d8));
    FUN_004ae12c(*(undefined4 *)(DAT_0079a9ec + 0x2d8));
    DAT_0079a9bc = FUN_0071ca60(param_1,1);
    DAT_0079a9c0 = FUN_0071ca60(param_1,1);
    DAT_0079a9c8 = FUN_0071ca60(param_1,1);
    DAT_0079a9cc = FUN_0071ca60(param_1,*PTR_DAT_0078258c);
    DAT_0079a9d0 = FUN_0071ca60(param_1,*PTR_DAT_0078258c);
    if (iVar1 < 0x21c) {
      DAT_0079a9d4 = FUN_0071cbd8(L"Fonts",1,9,*PTR_DAT_0078258c,0);
      FUN_0071ca60(param_1,0);
    }
    else {
      DAT_0079a9d4 = FUN_0071ca60(param_1,*PTR_DAT_0078258c);
    }
    DAT_0079a9d8 = FUN_0071ca60(param_1,*PTR_DAT_0078258c);
    DAT_0079a9b8 = FUN_0071ca60(param_1,1);
    DAT_0079a9c4 = FUN_0071ca60(param_1,1);
    DAT_0079a9dc = FUN_0071ca60(param_1,1);
    DAT_0079a9e0 = FUN_0071ca60(param_1,1);
    FUN_004ac910(DAT_0079a9e0,L"Game Settingsettings");
    if (iVar1 < 700) {
      DAT_0079a9e4 = FUN_0071cbd8(L"ExtensionsPackages",3,0xd,*PTR_DAT_0078258c,0);
    }
    else {
      DAT_0079a9e4 = FUN_0071ca60(param_1,*PTR_DAT_0078258c);
    }
    DAT_0077f5f4 = 0;
    uVar2 = 1;
  }
  return uVar2;
}
