// rea decompile_all
// name: FUN_0044fe34
// address: 0x44fe34
// body: available
// range: 0x44fe34-0x44ff15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44fe5c (push 0x44ff16 followed by fs-segment stack chaining); handler 0x44ff16 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044fe34(byte param_1,undefined4 param_2,undefined4 param_3)

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
  puStack_1c = (undefined1 *)0x44fe51;
  local_8 = param_3;
  thunk_FUN_00407660(param_3);
  puStack_20 = &LAB_0044ff16;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  if ((&DAT_007880c8)[param_1] == '\0') {
    if (DAT_007880c4 == (HMODULE)0x0) {
      pFVar2 = (FARPROC)0x0;
      puStack_1c = &stack0xfffffffc;
    }
    else {
      puStack_1c = &stack0xfffffffc;
      if (((param_1 == 0) && (puStack_1c = &stack0xfffffffc, DAT_007880d0 == '\0')) &&
         (puStack_1c = &stack0xfffffffc,
         DAT_007880b0 = FUN_0044fe34(4,DAT_007880b0,L"GetMonitorInfoA"), DAT_007880d0 == '\0')) {
        FUN_00407f0c(&local_8,0);
      }
      FUN_0040810c(&local_c,local_8,0);
      lpProcName = (LPCSTR)FUN_00407670(local_c);
      pFVar2 = GetProcAddress(DAT_007880c4,lpProcName);
    }
    if ((pFVar2 != (FARPROC)0x0) && (param_1 != 0)) {
      DAT_007880d0 = '\x01';
    }
    (&DAT_007880c8)[param_1] = 1;
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0044ff1d;
  puStack_20 = (undefined1 *)0x44ff0d;
  FUN_00406e5c(&local_c,uStack_24,puVar1);
  puStack_20 = (undefined1 *)0x44ff15;
  thunk_FUN_00406e5c(&local_8);
  return;
}
