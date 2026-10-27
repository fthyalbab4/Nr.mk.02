// rea decompile_all
// name: FUN_0042affc
// address: 0x42affc
// body: available
// range: 0x42affc-0x42b05c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42b01b (push 0x42b05d followed by fs-segment stack chaining); handler 0x42b05d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042affc(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;

  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0068ef3c);
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  iVar1 = FUN_00409c34(DAT_0068ef38);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      if (*(int *)(DAT_0068ef38 + iVar1 * 4) != DAT_0067ce98) {
        FUN_00405fdc();
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  *in_FS_OFFSET = uStackY_18;
  uStackY_18 = 0x42b05c;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0068ef3c);
  return;
}
