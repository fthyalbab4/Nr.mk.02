// rea decompile_all
// name: FUN_005e42b4
// address: 0x5e42b4
// body: available
// range: 0x5e42b4-0x5e438e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e42d1 (push 0x5e438f followed by fs-segment stack chaining); handler 0x5e438f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e42b4(void)

{
  undefined1 *puVar1;
  DWORD DVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1b0;
  undefined1 *puStack_1ac;
  undefined1 *puStack_1a8;
  wchar_t *local_1a0;
  undefined1 local_19c;
  undefined4 local_198 [101];

  puStack_1a8 = &stack0xfffffffc;
  local_198[0] = 0;
  puStack_1ac = &LAB_005e438f;
  uStack_1b0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1b0;
  puVar1 = &stack0xfffffffc;
  if (DAT_0077dac4 == (HMODULE)0x0) {
    DAT_0077dac4 = (HMODULE)FUN_0041f0a0(L"WS2_32.DLL",0x8000);
    if (DAT_0077dac4 == (HMODULE)0x0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = (*DAT_0077d8e4)();
      puVar1 = puStack_1a8;
      if (DVar2 == 0) goto LAB_005e4376;
      FreeLibrary(DAT_0077dac4);
      DAT_0077dac4 = (HMODULE)0x0;
    }
    FUN_0040b75c(PTR_PTR_007821f8,local_198);
    local_1a0 = L"WS2_32.DLL";
    local_19c = 0x11;
    FUN_005e4400(&PTR_LAB_005e40fc,1,DVar2,0,&local_1a0,local_198[0]);
    FUN_00406618();
    puVar1 = puStack_1a8;
  }
LAB_005e4376:
  puStack_1a8 = puVar1;
  puVar1 = puStack_1a8;
  *in_FS_OFFSET = uStack_1b0;
  puStack_1a8 = &LAB_005e4396;
  puStack_1ac = (undefined1 *)0x5e438e;
  thunk_FUN_00406e5c(local_198,uStack_1b0,puVar1);
  return;
}
