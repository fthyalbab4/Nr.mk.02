// rea decompile_all
// name: FUN_0045d15c
// address: 0x45d15c
// body: available
// range: 0x45d15c-0x45d1f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45d179 (push 0x45d1f8 followed by fs-segment stack chaining); handler 0x45d1f8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045d15c(void)

{
  undefined1 *puVar1;
  DWORD DVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_218;
  undefined1 *puStack_214;
  undefined1 *puStack_210;
  undefined4 local_208;
  WCHAR local_204 [256];

  puStack_210 = &stack0xfffffffc;
  local_208 = 0;
  puStack_214 = &LAB_0045d1f8;
  uStack_218 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_218;
  DVar2 = GetLastError();
  if (DVar2 != 0) {
    DVar2 = FormatMessageW(0x1000,(LPCVOID)0x0,DVar2,0x400,local_204,0x100,(va_list *)0x0);
    if (DVar2 != 0) {
      FUN_004080c8(&local_208,local_204,0x100);
      FUN_0041beb8(&PTR_LAB_0042efc8,1,local_208);
      FUN_00406618();
      goto LAB_0045d1df;
    }
  }
  FUN_0045d108();
LAB_0045d1df:
  puVar1 = puStack_210;
  *in_FS_OFFSET = uStack_218;
  puStack_210 = &LAB_0045d1ff;
  puStack_214 = (undefined1 *)0x45d1f7;
  thunk_FUN_00406e5c(&local_208,uStack_218,puVar1);
  return;
}
