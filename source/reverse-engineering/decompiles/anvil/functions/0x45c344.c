// rea decompile_all
// name: FUN_0045c344
// address: 0x45c344
// body: available
// range: 0x45c344-0x45c425 inclusive
// range: 0x45c42d-0x45c436 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45c37c (push 0x45c426 followed by fs-segment stack chaining); handler 0x45c426 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


LPCRITICAL_SECTION FUN_0045c344(int param_1)

{
  byte bVar1;
  int *piVar2;
  HBRUSH pHVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  LOGBRUSH local_1c;
  int local_10;
  int local_c;
  int local_8;

  local_8 = *(int *)(param_1 + 0x10);
  if (*(int *)(local_8 + 8) == 0) {
    local_c = DAT_0068f158;
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_0068f158 + 8));
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    if (*(int *)(local_8 + 8) == 0) {
      piVar2 = *(int **)(local_8 + 0x18);
      if (piVar2 == (int *)0x0) {
        local_1c.lbHatch = 0;
        bVar1 = *(byte *)(local_8 + 0x1c);
        if (bVar1 == 0) {
          local_1c.lbStyle = 0;
        }
        else if (bVar1 == 1) {
          local_1c.lbStyle = 1;
        }
        else {
          local_1c.lbStyle = 2;
          local_1c.lbHatch = (bVar1 & 0x7f) - 2;
        }
      }
      else {
        local_1c.lbStyle = 3;
        (**(code **)(*piVar2 + 0x78))(piVar2,1);
        local_1c.lbHatch = (**(code **)(**(int **)(local_8 + 0x18) + 0x70))();
      }
      local_1c.lbColor = FUN_0045b0f4(*(undefined4 *)(local_8 + 0x14));
      pHVar3 = CreateBrushIndirect(&local_1c);
      *(HBRUSH *)(local_8 + 8) = pHVar3;
    }
    *in_FS_OFFSET = uStack_28;
    local_10 = DAT_0068f158;
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_0068f158 + 8);
    uStack_28 = 0x45c425;
    LeaveCriticalSection(lpCriticalSection);
    return lpCriticalSection;
  }
  return *(LPCRITICAL_SECTION *)(local_8 + 8);
}
