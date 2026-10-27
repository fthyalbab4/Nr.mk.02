// rea decompile_all
// name: FUN_004d02b8
// address: 0x4d02b8
// body: available
// range: 0x4d02b8-0x4d0339 inclusive
// range: 0x4d0341-0x4d034e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d02f0 (push 0x4d033a followed by fs-segment stack chaining); handler 0x4d033a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HGLOBAL FUN_004d02b8(HGLOBAL param_1)

{
  SIZE_T dwBytes;
  LPVOID pvVar1;
  LPVOID pvVar2;
  HGLOBAL pvVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  HGLOBAL local_c;

  if (param_1 == (HGLOBAL)0x0) {
    local_c = (HGLOBAL)0x0;
  }
  else {
    dwBytes = GlobalSize(param_1);
    uStack_20 = 0x4d02dc;
    local_c = GlobalAlloc(0x42,dwBytes);
    if (local_c != (HGLOBAL)0x0) {
      uStack_20 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_20;
      pvVar1 = GlobalLock(param_1);
      pvVar2 = GlobalLock(local_c);
      if ((pvVar1 != (LPVOID)0x0) && (pvVar2 != (LPVOID)0x0)) {
        FUN_0040450c(pvVar1,pvVar2,dwBytes);
      }
      *in_FS_OFFSET = uStack_20;
      uStack_20 = 0x4d0330;
      GlobalUnlock(param_1);
      uStack_20 = 0x4d0339;
      pvVar3 = (HGLOBAL)GlobalUnlock(local_c);
      return pvVar3;
    }
  }
  return local_c;
}
