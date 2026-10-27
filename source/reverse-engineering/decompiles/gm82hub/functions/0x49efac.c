// rea decompile_all
// name: FUN_0049efac
// address: 0x49efac
// body: available
// range: 0x49efac-0x49eff0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049efac(undefined4 param_1,undefined4 param_2)

{
  LPVOID *ppv;
  IID local_2c;
  IID local_1c;

  local_2c.Data1 = *(ulong *)PTR_DAT_006893f4;
  local_2c._4_4_ = *(undefined4 *)(PTR_DAT_006893f4 + 4);
  local_2c.Data4._0_4_ = *(undefined4 *)(PTR_DAT_006893f4 + 8);
  local_2c.Data4._4_4_ = *(undefined4 *)(PTR_DAT_006893f4 + 0xc);
  ppv = (LPVOID *)FUN_0040b268(param_2);
  FUN_00415378(L"{D57C7288-D4AD-4768-BE02-9D969532D960}",&local_1c);
  CoCreateInstance(&local_2c,(LPUNKNOWN)0x0,1,&local_1c,ppv);
  return;
}
