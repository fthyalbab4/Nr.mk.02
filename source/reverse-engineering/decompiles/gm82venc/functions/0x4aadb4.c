// rea decompile_all
// name: FUN_004aadb4
// address: 0x4aadb4
// body: available
// range: 0x4aadb4-0x4aaeac inclusive
// range: 0x4aaeb4-0x4aaeb9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4aae29 (push 0x4aaead followed by fs-segment stack chaining); handler 0x4aaead lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004aadb4(int *param_1)

{
  char cVar1;
  HMENU hmenu;
  BOOL BVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_e8;
  undefined1 *puStack_e4;
  undefined1 *puStack_e0;
  WCHAR local_d4 [80];
  tagMENUITEMINFOW local_34;

  if ((PTR_DAT_00689688[0xd] != '\0') && (param_1[0xf] != 0)) {
    puStack_e0 = (undefined1 *)0x4aade1;
    hmenu = (HMENU)(**(code **)(*param_1 + 0x38))();
    local_34.fMask = 0x10;
    local_34.cch = 0x50;
    if ((*(int *)PTR_DAT_0068966c == 1) && (*(int *)PTR_DAT_00688cd4 < 5)) {
      local_34.cbSize = 0x2c;
    }
    else {
      local_34.cbSize = 0x30;
    }
    local_34.dwTypeData = local_d4;
    puStack_e4 = &LAB_004aaead;
    uStack_e8 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_e8;
    puStack_e0 = &stack0xfffffffc;
    BVar2 = GetMenuItemInfoW(hmenu,0,-1,&local_34);
    if (BVar2 != 0) {
      cVar1 = FUN_004ab1b8(param_1);
      if ((bool)cVar1 == ((local_34.fType & 0x6000) != 0)) {
        FUN_00406ba8();
        return;
      }
      uVar3 = FUN_004ab1b8(param_1);
      local_34.fType = (uVar3 & 0x7f) * 0x6000 | local_34.fType & 0xffff9fff;
      local_34.fMask = 0x10;
      BVar2 = SetMenuItemInfoW(hmenu,0,-1,&local_34);
      if (BVar2 != 0) {
        DrawMenuBar((HWND)param_1[0xf]);
      }
    }
    *in_FS_OFFSET = uStack_e8;
    return;
  }
  return;
}
