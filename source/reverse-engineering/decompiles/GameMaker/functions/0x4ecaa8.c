// rea decompile_all
// name: FUN_004ecaa8
// address: 0x4ecaa8
// body: available
// range: 0x4ecaa8-0x4ecb1a inclusive
// range: 0x4ecb38-0x4ecb61 inclusive
// range: 0x4ecb69-0x4ecb6c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ecac6 (push 0x4ecb62 followed by fs-segment stack chaining); handler 0x4ecb62 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ecb04 (push 0x4ecb31 followed by fs-segment stack chaining); handler 0x4ecb31 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ecaa8(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_30;
  undefined1 *puStackY_2c;
  undefined1 *puStackY_28;
  undefined4 uStackY_24;
  int local_10;
  int local_8;

  iVar2 = FUN_0043bb30(DAT_007882a0);
  uStackY_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_24;
  local_10 = *(int *)(iVar2 + 8);
  if (-1 < local_10 + -1) {
    local_8 = 0;
    do {
      puStackY_28 = (undefined1 *)0x4ecaea;
      uVar3 = FUN_0043b048(iVar2,local_8);
      puStackY_28 = (undefined1 *)0x4ecaf5;
      cVar1 = FUN_0045bee4(uVar3);
      if (cVar1 != '\0') {
        puStackY_2c = &LAB_004ecb31;
        uStackY_30 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStackY_30;
        puStackY_28 = &stack0xfffffffc;
        FUN_004ecd04(uVar3);
        FUN_0040670c();
        puStackY_28 = (undefined1 *)0x4ecb19;
        FUN_0040670c();
        return;
      }
      local_8 = local_8 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  *in_FS_OFFSET = uStackY_24;
  uStackY_24 = 0x4ecb61;
  LeaveCriticalSection((LPCRITICAL_SECTION)(DAT_007882a0 + 8));
  return;
}
