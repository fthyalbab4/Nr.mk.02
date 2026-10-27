// rea decompile_all
// name: FUN_00738670
// address: 0x738670
// body: available
// range: 0x738670-0x738726 inclusive
// range: 0x73872e-0x73873f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7386bd (push 0x738727 followed by fs-segment stack chaining); handler 0x738727 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


BOOL FUN_00738670(LPVOID param_1,undefined4 param_2,SIZE_T param_3,SIZE_T *param_4)

{
  BOOL BVar1;
  HANDLE hProcess;
  undefined4 *in_FS_OFFSET;
  LPVOID lpBaseAddress;
  SIZE_T dwSize;
  undefined4 uVar2;
  DWORD local_14;
  DWORD local_10;
  SIZE_T local_c;
  LPVOID local_8;

  *param_4 = 0;
  local_c = param_3;
  if (param_3 != 0) {
    local_10 = 0;
    local_8 = param_1;
    BVar1 = VirtualProtect(param_1,param_3,0x40,&local_10);
    if (BVar1 != 0) {
      uVar2 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffffdc;
      FUN_0040450c(param_2,local_8,local_c);
      *param_4 = local_c;
      if ((((local_10 == 0x10) || (local_10 == 0x20)) || (local_10 == 0x40)) || (local_10 == 0x80))
      {
        lpBaseAddress = local_8;
        dwSize = local_c;
        hProcess = GetCurrentProcess();
        FlushInstructionCache(hProcess,lpBaseAddress,dwSize);
      }
      *in_FS_OFFSET = uVar2;
      local_14 = 0;
      BVar1 = VirtualProtect(local_8,local_c,local_10,&local_14);
      return BVar1;
    }
  }
  return CONCAT31((int3)(*param_4 >> 8),*param_4 == local_c);
}
