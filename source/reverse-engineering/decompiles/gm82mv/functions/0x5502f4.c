// rea decompile_all
// name: FUN_005502f4
// address: 0x5502f4
// body: available
// range: 0x5502f4-0x5503bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x550320 (push 0x5503c0 followed by fs-segment stack chaining); handler 0x5503c0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005502f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  char cVar2;
  LPCWSTR lpFileName;
  undefined4 *in_FS_OFFSET;
  LPCWSTR lpExtension;
  DWORD DVar3;
  WCHAR *lpBuffer;
  LPWSTR *lpFilePart;
  undefined4 uStack_234;
  undefined1 *puStack_230;
  undefined1 *puStack_22c;
  undefined4 local_21c;
  undefined4 local_218;
  WCHAR local_212 [261];
  LPWSTR local_8;

  puStack_22c = &stack0xfffffffc;
  local_218 = 0;
  local_21c = 0;
  puStack_230 = &LAB_005503c0;
  uStack_234 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_234;
  FUN_00417028(param_3,&local_21c);
  FUN_00538844(local_21c,&local_218);
  FUN_00408678(param_4,local_218,param_2);
  cVar2 = FUN_00538a14(*param_4);
  if (cVar2 == '\0') {
    local_8 = (LPWSTR)0x0;
    lpFilePart = &local_8;
    lpBuffer = local_212;
    DVar3 = 0x105;
    lpExtension = (LPCWSTR)0x0;
    lpFileName = (LPCWSTR)FUN_00408220(param_2);
    DVar3 = SearchPathW((LPCWSTR)0x0,lpFileName,lpExtension,DVar3,lpBuffer,lpFilePart);
    if (DVar3 == 0) {
      FUN_00408194(param_4,param_2);
    }
    else {
      FUN_004083a4(param_4,local_212,0x105);
    }
  }
  puVar1 = puStack_22c;
  *in_FS_OFFSET = uStack_234;
  puStack_22c = &LAB_005503c7;
  puStack_230 = (undefined1 *)0x5503bf;
  thunk_FUN_004072fc(&local_21c,2,puVar1);
  return;
}
