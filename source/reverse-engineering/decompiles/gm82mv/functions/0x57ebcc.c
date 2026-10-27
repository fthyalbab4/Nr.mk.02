// rea decompile_all
// name: FUN_0057ebcc
// address: 0x57ebcc
// body: available
// range: 0x57ebcc-0x57ec76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x57ebf5 (push 0x57ec77 followed by fs-segment stack chaining); handler 0x57ec77 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057ebcc(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  UINT CodePage;
  LPCWSTR lpWideCharStr;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  LPSTR lpMultiByteStr;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  LPSTR local_c;
  undefined4 local_8;

  local_c = (LPSTR)0x0;
  puStack_24 = (undefined1 *)0x57ebea;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_28 = &LAB_0057ec77;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  CodePage = FUN_0057d92c(*(undefined4 *)(param_2 + 0x10));
  lpUsedDefaultChar = (LPBOOL)0x0;
  lpDefaultChar = (LPCSTR)0x0;
  cbMultiByte = 0;
  lpMultiByteStr = (LPSTR)0x0;
  iVar2 = -1;
  lpWideCharStr = (LPCWSTR)FUN_00408220(local_8);
  iVar2 = WideCharToMultiByte(CodePage,0,lpWideCharStr,iVar2,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  FUN_00408e0c(&local_c,CodePage,1);
  FUN_00407c34(&local_c,iVar2 + -1,0);
  WideCharToMultiByte(CodePage,0,lpWideCharStr,-1,local_c,iVar2,(LPCSTR)0x0,(LPBOOL)0x0);
  FUN_0040732c(param_3,local_c);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0057ec7e;
  puStack_28 = (undefined1 *)0x57ec6e;
  FUN_004072d8(&local_c,uStack_2c,puVar1);
  puStack_28 = (undefined1 *)0x57ec76;
  thunk_FUN_004072d8(&local_8);
  return;
}
