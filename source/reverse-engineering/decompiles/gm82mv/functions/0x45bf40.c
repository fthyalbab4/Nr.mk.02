// rea decompile_all
// name: FUN_0045bf40
// address: 0x45bf40
// body: available
// range: 0x45bf40-0x45bfdd inclusive
// range: 0x45bfe5-0x45bfee inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45bf78 (push 0x45bfde followed by fs-segment stack chaining); handler 0x45bfde lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


LPCRITICAL_SECTION FUN_0045bf40(int param_1)

{
  HPEN pHVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  LOGPEN local_20;
  int local_10;
  int local_c;
  int local_8;

  local_8 = *(int *)(param_1 + 0x10);
  if (*(int *)(local_8 + 8) == 0) {
    local_c = DAT_0068f154;
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_0068f154 + 8));
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    if (*(int *)(local_8 + 8) == 0) {
      local_20.lopnStyle = (UINT)*(ushort *)(&DAT_0067d4e0 + (uint)*(byte *)(local_8 + 0x1c) * 2);
      local_20.lopnWidth.x = *(LONG *)(local_8 + 0x18);
      local_20.lopnColor = FUN_0045b0f4(*(undefined4 *)(local_8 + 0x14));
      pHVar1 = CreatePenIndirect(&local_20);
      *(HPEN *)(local_8 + 8) = pHVar1;
    }
    *in_FS_OFFSET = uStack_2c;
    local_10 = DAT_0068f154;
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_0068f154 + 8);
    uStack_2c = 0x45bfdd;
    LeaveCriticalSection(lpCriticalSection);
    return lpCriticalSection;
  }
  return *(LPCRITICAL_SECTION *)(local_8 + 8);
}
