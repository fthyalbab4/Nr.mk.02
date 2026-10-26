// rea decompile_all
// name: FUN_00419bc4
// address: 0x419bc4
// body: available
// range: 0x419bc4-0x419d2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x419be9 (push 0x419d2c followed by fs-segment stack chaining); handler 0x419d2c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00419bc4(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  LPCWSTR lpFormat;
  LCID Locale;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  DWORD dwFlags;
  SYSTEMTIME *lpDate;
  WCHAR *lpDateStr;
  int *cchDate;
  undefined4 uStack_234;
  undefined1 *puStack_230;
  undefined1 *puStack_22c;
  undefined4 local_220;
  int local_21c;
  WCHAR local_218 [256];
  SYSTEMTIME local_18;
  undefined4 local_8;

  puStack_22c = &stack0xfffffffc;
  local_220 = 0;
  local_8 = 0;
  puStack_230 = &LAB_00419d2c;
  uStack_234 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_234;
  FUN_00407eb8(param_2,0);
  local_18.wYear = *(WORD *)(param_4 + -2);
  local_18.wMonth = *(WORD *)(param_4 + -4);
  local_18.wDay = *(WORD *)(param_4 + -6);
  FUN_00407f0c(&local_8,&DAT_00419d48);
  cchDate = (int *)0x100;
  lpDateStr = local_218;
  lpFormat = (LPCWSTR)FUN_00407f44(local_8);
  lpDate = &local_18;
  dwFlags = 4;
  Locale = GetThreadLocale();
  iVar2 = GetDateFormatW(Locale,dwFlags,lpDate,lpFormat,lpDateStr,(int)cchDate);
  if (iVar2 != 0) {
    cchDate = (int *)0x419c63;
    FUN_004080c8(param_2,local_218,0x100);
    if (param_1 == 1) {
      if (DAT_00785d50 == 4) {
        if (DAT_00785d54 == 1) {
          local_21c = *param_2;
          uVar3 = 0;
          if (local_21c != 0) {
            uVar3 = *(undefined4 *)(local_21c + -4);
          }
          cchDate = (int *)0x419cc3;
          iVar2 = FUN_0041d388(*param_2,uVar3);
          if (iVar2 == 4) {
            iVar2 = FUN_0041d678(*param_2,3);
            FUN_00408074(&local_220,local_218 + iVar2 + -1);
            uVar3 = FUN_0041d790(local_220,2);
            cchDate = (int *)0x419d0b;
            FUN_00407ff4(param_2,local_218 + iVar2 + -1,uVar3);
          }
        }
      }
      else if (DAT_00785d50 == 0x11) {
        cchDate = param_2;
        uVar3 = FUN_0041d790(*param_2,1);
        FUN_004086a8(*param_2,1,uVar3);
      }
    }
  }
  puVar1 = puStack_230;
  *in_FS_OFFSET = cchDate;
  puStack_230 = &LAB_00419d33;
  uStack_234 = 0x419d23;
  thunk_FUN_00406e5c(&local_220,cchDate,puVar1);
  uStack_234 = 0x419d2b;
  thunk_FUN_00406e5c(&local_8);
  return;
}
