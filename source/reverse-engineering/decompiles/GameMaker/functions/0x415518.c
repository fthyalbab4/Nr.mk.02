// rea decompile_all
// name: FUN_00415518
// address: 0x415518
// body: available
// range: 0x415518-0x41558b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x415534 (push 0x41558c followed by fs-segment stack chaining); handler 0x41558c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00415518(undefined4 param_1,undefined4 param_2)

{
  LPCOLESTR lpsz;
  uint uVar1;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  LPCLSID pclsid;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;

  local_8 = 0;
  pclsid = (LPCLSID)*in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffdc;
  FUN_00408144(&local_8,param_1,0,param_2);
  lpsz = (LPCOLESTR)FUN_00407c60(local_8);
  uVar1 = CLSIDFromString(lpsz,pclsid);
  if ((uVar1 & 0x80000000) != 0) {
    local_c = 0x11;
    local_10 = param_1;
    FUN_004154ec(PTR_PTR_00782534,&local_10,0);
  }
  *in_FS_OFFSET = &LAB_0041558c;
  FUN_00407a78(&local_8,&LAB_0041558c,unaff_ESI);
  return;
}
