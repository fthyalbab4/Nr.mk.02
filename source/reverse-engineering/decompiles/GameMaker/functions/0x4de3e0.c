// rea decompile_all
// name: FUN_004de3e0
// address: 0x4de3e0
// body: available
// range: 0x4de3e0-0x4de488 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004de3e0(undefined4 param_1,HMENU param_2,UINT param_3,UINT param_4,int param_5,
                LPWSTR param_6)

{
  char cVar1;
  UINT UVar2;
  HMENU pHVar3;
  int iVar4;
  undefined4 local_8;

  cVar1 = FUN_004dd7fc(param_1);
  if (cVar1 == '\0') {
    iVar4 = GetMenuStringW(param_2,param_3,param_6,param_5,param_4);
  }
  else {
    local_8 = 0;
    UVar2 = GetMenuState(param_2,param_3,param_4);
    if ((UVar2 & 0x10) == 0) {
      UVar2 = GetMenuItemID(param_2,param_3);
      if (UVar2 != 0xffffffff) {
        local_8 = FUN_004dd678(param_1,UVar2,0);
      }
    }
    else {
      pHVar3 = GetSubMenu(param_2,param_3);
      local_8 = FUN_004dd678(param_1,pHVar3,1);
    }
    if (local_8 == 0) {
      iVar4 = 0;
    }
    else {
      *param_6 = L'\0';
      FUN_00417834(param_6,*(undefined4 *)(local_8 + 0x34),param_5);
      iVar4 = FUN_00417670(param_6);
    }
  }
  return iVar4;
}
