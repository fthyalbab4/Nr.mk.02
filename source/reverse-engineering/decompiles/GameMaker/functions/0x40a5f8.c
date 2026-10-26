// rea decompile_all
// name: FUN_0040a5f8
// address: 0x40a5f8
// body: available
// range: 0x40a5f8-0x40a6fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x40a60e (push 0x40a6fd followed by fs-segment stack chaining); handler 0x40a6fd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040a5f8(uint param_1,int *param_2)

{
  undefined1 *puVar1;
  LANGID LVar2;
  BOOL BVar3;
  LPCWSTR lpString2;
  LANGID LVar4;
  undefined4 *in_FS_OFFSET;
  int iMaxLength;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0040a6fd;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00785b5c);
  LVar4 = (LANGID)param_1;
  if (LVar4 == DAT_00785b74) {
    FUN_004080c8(param_2,&DAT_00785b78,0x55);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00785b5c);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00785b5c);
    FUN_00407eb8(param_2,0);
    BVar3 = IsValidLocale(param_1 & 0xffff,2);
    if (BVar3 != 0) {
      if (DAT_00785b58 == '\0') {
        FUN_0040a2d8(param_1,param_2);
        LVar2 = GetSystemDefaultUILanguage();
        if (LVar4 != LVar2) {
          if (*param_2 != 0) {
            FUN_004082dc(param_2,&DAT_0040a718);
          }
          LVar2 = GetSystemDefaultUILanguage();
          FUN_0040a2d8(LVar2,&local_8);
          FUN_004082dc(param_2,local_8);
        }
      }
      else {
        FUN_0040a4d8(param_1,param_2);
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00785b5c);
    iMaxLength = 0xaa;
    DAT_00785b74 = LVar4;
    lpString2 = (LPCWSTR)FUN_00407f44(*param_2);
    lstrcpynW((LPWSTR)&DAT_00785b78,lpString2,iMaxLength);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00785b5c);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0040a704;
  puStack_18 = (undefined1 *)0x40a6fc;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
