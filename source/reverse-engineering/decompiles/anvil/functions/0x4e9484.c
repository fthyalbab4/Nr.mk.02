// rea decompile_all
// name: FUN_004e9484
// address: 0x4e9484
// body: available
// range: 0x4e9484-0x4e9527 inclusive
// range: 0x4e952f-0x4e9538 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4e94c1 (push 0x4e9528 followed by fs-segment stack chaining); handler 0x4e9528 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004e9484(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  tagLOGFONTW local_68;
  HDC local_c;
  int local_8;

  if (*(int *)(param_1 + 0x34) == 0) {
    local_8 = param_1;
    uVar1 = FUN_0043c790(&PTR_FUN_00430700,1);
    *(undefined4 *)(local_8 + 0x34) = uVar1;
    local_c = GetDC((HWND)0x0);
    uVar1 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffff8c;
    (**(code **)(**(int **)(local_8 + 0x34) + 0x38))(*(int **)(local_8 + 0x34),L"Default");
    FUN_00404f38(&local_68,0x5c,0);
    local_68.lfCharSet = '\x01';
    EnumFontFamiliesExW(local_c,&local_68,FUN_004e8338,*(LPARAM *)(local_8 + 0x34),0);
    FUN_0043c6cc(*(undefined4 *)(local_8 + 0x34),1);
    *in_FS_OFFSET = uVar1;
    iVar2 = ReleaseDC((HWND)0x0,local_c);
    return iVar2;
  }
  return *(int *)(param_1 + 0x34);
}
