// rea decompile_all
// name: FUN_004d3de8
// address: 0x4d3de8
// body: available
// range: 0x4d3de8-0x4d3e36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004d3de8(undefined4 param_1,int param_2)

{
  int iVar1;
  HIMAGELIST himl;
  HICON hicon;

  if (param_2 == 0) {
    iVar1 = FUN_004d3c00(param_1,0,0);
  }
  else {
    FUN_004d4d68(param_1,param_2);
    himl = (HIMAGELIST)FUN_004d3a48(param_1);
    hicon = (HICON)FUN_00464f58(param_2);
    iVar1 = ImageList_ReplaceIcon(himl,-1,hicon);
  }
  FUN_00406268(param_1);
  return iVar1;
}
