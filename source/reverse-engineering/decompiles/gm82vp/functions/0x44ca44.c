// rea decompile_all
// name: FUN_0044ca44
// address: 0x44ca44
// body: available
// range: 0x44ca44-0x44cb25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44ca6c (push 0x44cb26 followed by fs-segment stack chaining); handler 0x44cb26 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044ca44(byte param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  LPCSTR lpProcName;
  FARPROC pFVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  puStack_1c = (undefined1 *)0x44ca61;
  local_8 = param_3;
  thunk_FUN_00407ad0(param_3);
  puStack_20 = &LAB_0044cb26;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  if ((&DAT_0068f0c8)[param_1] == '\0') {
    if (DAT_0068f0c4 == (HMODULE)0x0) {
      pFVar2 = (FARPROC)0x0;
      puStack_1c = &stack0xfffffffc;
    }
    else {
      puStack_1c = &stack0xfffffffc;
      if (((param_1 == 0) && (puStack_1c = &stack0xfffffffc, DAT_0068f0d0 == '\0')) &&
         (puStack_1c = &stack0xfffffffc,
         DAT_0068f0b0 = FUN_0044ca44(4,DAT_0068f0b0,&PTR_DAT_0044cb44), DAT_0068f0d0 == '\0')) {
        FUN_004081e8(&local_8,0);
      }
      FUN_004083e8(&local_c,local_8,0);
      lpProcName = (LPCSTR)FUN_00407ae0(local_c);
      pFVar2 = GetProcAddress(DAT_0068f0c4,lpProcName);
    }
    if ((pFVar2 != (FARPROC)0x0) && (param_1 != 0)) {
      DAT_0068f0d0 = '\x01';
    }
    (&DAT_0068f0c8)[param_1] = 1;
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0044cb2d;
  puStack_20 = (undefined1 *)0x44cb1d;
  FUN_004072d8(&local_c,uStack_24,puVar1);
  puStack_20 = (undefined1 *)0x44cb25;
  thunk_FUN_004072d8(&local_8);
  return;
}
