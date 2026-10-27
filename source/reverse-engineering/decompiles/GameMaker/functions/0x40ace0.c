// rea decompile_all
// name: FUN_0040ace0
// address: 0x40ace0
// body: available
// range: 0x40ace0-0x40ad7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x40acff (push 0x40ad7d followed by fs-segment stack chaining); handler 0x40ad7d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040ace0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  char cVar2;
  LPCWSTR lpString2;
  LPCWSTR pWVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_8;

  puStack_1c = (undefined1 *)0x40acf4;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_20 = &LAB_0040ad7d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  lpString2 = (LPCWSTR)FUN_00407f44(local_8);
  do {
    pWVar3 = lpString2;
    if (*lpString2 == L'\0') break;
    for (; (*pWVar3 != L',' && (*pWVar3 != L'\0')); pWVar3 = pWVar3 + 1) {
    }
    if (*pWVar3 == L',') {
      *pWVar3 = L'\0';
      pWVar3 = pWVar3 + 1;
    }
    lstrcpynW(*(LPWSTR *)(param_4 + -0x210),lpString2,*(int *)(param_4 + -0x214));
    cVar2 = FUN_0040aca8();
    lpString2 = pWVar3;
  } while (cVar2 == '\0');
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0040ad84;
  puStack_20 = (undefined1 *)0x40ad7c;
  thunk_FUN_00406e5c(&local_8,uStack_24,puVar1);
  return;
}
