// rea decompile_all
// name: FUN_00540e54
// address: 0x540e54
// body: available
// range: 0x540e54-0x540eb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x540e80 (push 0x540eb7 followed by fs-segment stack chaining); handler 0x540eb7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00540e54(undefined4 param_1,HDC param_2)

{
  undefined1 *puVar1;
  RGBQUAD *prgbq;
  UINT UVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = (undefined1 *)0x540e68;
  FUN_00540b44(param_1);
  puStack_14 = (undefined1 *)0x540e72;
  prgbq = (RGBQUAD *)FUN_0040431c(0x400);
  puStack_18 = &LAB_00540eb7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  UVar2 = GetDIBColorTable(param_2,0,0x100,prgbq);
  FUN_00540de4(param_1,prgbq,UVar2);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00540ebe;
  puStack_18 = (undefined1 *)0x540eb6;
  FUN_00404338(prgbq,uStack_1c,puVar1);
  return;
}
