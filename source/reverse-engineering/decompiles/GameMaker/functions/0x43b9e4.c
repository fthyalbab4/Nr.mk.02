// rea decompile_all
// name: FUN_0043b9e4
// address: 0x43b9e4
// body: available
// range: 0x43b9e4-0x43ba46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43ba08 (push 0x43ba47 followed by fs-segment stack chaining); handler 0x43ba47 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043b9e4(void)

{
  int iVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;

  iVar1 = FUN_00406058();
  FUN_0043bb30(iVar1);
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  FUN_00405a7c(*(undefined4 *)(iVar1 + 4));
  FUN_00405a6c(iVar1,extraout_DL & 0xfc);
  *in_FS_OFFSET = uStackY_18;
  FUN_0043bba0(iVar1,uStackY_18,&stack0xfffffffc);
  uStackY_18 = 0x43ba46;
  DeleteCriticalSection((LPCRITICAL_SECTION)(iVar1 + 8));
  return;
}
