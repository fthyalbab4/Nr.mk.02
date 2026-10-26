// rea decompile_all
// name: FUN_0071d8ec
// address: 0x71d8ec
// body: available
// range: 0x71d8ec-0x71dabb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0071d8ec(void)

{
  DAT_0079a9e8 = *(int *)(*(int *)PTR_DAT_00781a58 + 0x5b4);
  DAT_0079a9ec = *(int *)(*(int *)PTR_DAT_00781a58 + 0x514);
  FUN_004ae12c(*(undefined4 *)(DAT_0079a9e8 + 0x2d8));
  FUN_004ae12c(*(undefined4 *)(DAT_0079a9ec + 0x2d8));
  FUN_005a9bfc();
  DAT_0079a9bc = FUN_0071cbd8(L"Sprites",1,2,1,0);
  DAT_0079a9c0 = FUN_0071cbd8(L"Sounds",1,3,1,0);
  DAT_0079a9c8 = FUN_0071cbd8(L"Backgrounds",1,6,1,0);
  DAT_0079a9cc = FUN_0071cbd8(L"Paths",1,8,*PTR_DAT_0078258c,0);
  DAT_0079a9d0 = FUN_0071cbd8(L"Scripts",1,7,*PTR_DAT_0078258c,0);
  DAT_0079a9d4 = FUN_0071cbd8(L"Fonts",1,9,*PTR_DAT_0078258c,0);
  DAT_0079a9d8 = FUN_0071cbd8(L"Timeliness",1,0xc,*PTR_DAT_0078258c,0);
  DAT_0079a9b8 = FUN_0071cbd8(L"Objects",1,1,1,0);
  DAT_0079a9c4 = FUN_0071cbd8(L"Rooms",1,4,1,0);
  DAT_0079a9dc = FUN_0071cbd8(L"Informationation",3,10,1,0);
  DAT_0079a9e0 = FUN_0071cbd8(L"Game Settingsettings",3,0xb,1,0);
  DAT_0079a9e4 = FUN_0071cbd8(L"ExtensionsPackages",3,0xd,*PTR_DAT_0078258c,0);
  DAT_0077f5f4 = 0;
  return;
}
