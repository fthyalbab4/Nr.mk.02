// rea decompile_all
// name: FUN_0064e7e0
// address: 0x64e7e0
// body: available
// range: 0x64e7e0-0x64e979 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0064e7e0(undefined4 param_1)

{
  LPVOID *ppvVar1;
  uint uVar2;
  undefined4 uVar3;

  uVar3 = 0;
  if (DAT_0077f2b0 != (int *)0x0) {
    FUN_0064ea0c();
  }
  FUN_00409be0(&DAT_0078a1ac,&DAT_0064e5c0,1,0);
  DAT_0077f2ac = 0;
  DAT_0077f2b0 = (int *)FUN_005ab278(&PTR_LAB_005aa1a4,1,0);
  FUN_004ee5c0(DAT_0077f2b0,0);
  (**(code **)(*DAT_0077f2b0 + 0x78))(DAT_0077f2b0,param_1);
  DAT_0077f2b4 = FUN_0048e048(&PTR_FUN_0048ab50,1,0);
  FUN_0048e1e4(DAT_0077f2b4,0);
  FUN_00405a4c(&DAT_0064e640,1);
  FUN_0048e204(DAT_0077f2b4);
  FUN_0040b140(&DAT_0077f2a4);
  ppvVar1 = (LPVOID *)FUN_0040b140(&DAT_0077f2a4);
  uVar2 = CoCreateInstance((IID *)PTR_DAT_007823b8,(LPUNKNOWN)0x0,3,(IID *)&DAT_0064e97c,ppvVar1);
  if ((uVar2 & 0x80000000) == 0) {
    FUN_0040b140(&DAT_0077f2a8);
    ppvVar1 = (LPVOID *)FUN_0040b140(&DAT_0077f2a8);
    uVar2 = CoCreateInstance((IID *)PTR_DAT_00781804,(LPUNKNOWN)0x0,3,(IID *)&DAT_0064e9fc,ppvVar1);
    if ((uVar2 & 0x80000000) == 0) {
      FUN_004f76a8(param_1);
      uVar2 = (**(code **)(*DAT_0077f2a4 + 0xb0))();
      if ((uVar2 & 0x80000000) == 0) {
        Sleep(100);
        uVar3 = 1;
      }
      else {
        FUN_004d43f8(L"No sound device detected. Sounds might not play.");
        FUN_0040b140(&DAT_0077f2a4);
        FUN_0040b140(&DAT_0077f2a8);
      }
    }
    else {
      FUN_004d43f8(L"No sound device detected. Sounds might not play.");
      FUN_0040b140(&DAT_0077f2a4);
      FUN_0040b140(&DAT_0077f2a8);
    }
  }
  else {
    FUN_004d43f8(L"No sound device detected. Sounds might not play.");
    FUN_0040b140(&DAT_0077f2a4);
  }
  return uVar3;
}
