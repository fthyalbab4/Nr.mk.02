// rea decompile_all
// name: FUN_004a64f8
// address: 0x4a64f8
// body: available
// range: 0x4a64f8-0x4a66cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4a651c (push 0x4a66cd followed by fs-segment stack chaining); handler 0x4a66cd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004a6585) */
/* WARNING: Removing unreachable block (ram,0x004a658f) */

void FUN_004a64f8(int param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                 LPRECT param_6)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  HDC hdc;
  short *psVar5;
  LPCWSTR pszText;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  DTTOPTS *pOptions;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  DTTOPTS local_5c;
  int local_1c;
  HTHEME local_18;
  byte local_11;
  undefined4 local_10;
  int local_c;
  short *local_8;

  puStack_6c = &stack0xfffffffc;
  local_8 = (short *)0x0;
  puStack_70 = &LAB_004a66cd;
  uStack_74 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_74;
  local_10 = param_3;
  local_c = param_1;
  FUN_00404f38(&local_5c,0x40,0);
  local_5c.dwSize = 0x40;
  local_5c.dwFlags = 0x2001;
  if ((param_4 & 0x400) == 0x400) {
    local_5c.dwFlags = 0x2201;
  }
  local_5c.crText = FUN_0045b0f4(*(undefined4 *)(*(int *)(param_2 + 0x40) + 0x18));
  iVar3 = thunk_FUN_004a9488(local_c);
  if ((iVar3 != 0) && (cVar2 = FUN_004ab1b8(iVar3), cVar2 != '\0')) {
    param_4 = param_4 | 0x20002;
  }
  FUN_004081e8(&local_8,local_10);
  if ((param_4 & 0x400) != 0) {
    if (local_8 == (short *)0x0) {
      bVar6 = true;
    }
    else {
      psVar5 = local_8;
      if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
        psVar5 = (short *)FUN_00407488(&local_8,local_8);
      }
      if (*psVar5 == 0x26) {
        psVar5 = local_8;
        if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
          psVar5 = (short *)FUN_00407488(&local_8,local_8);
        }
        bVar6 = psVar5[1] == 0;
      }
      else {
        bVar6 = false;
      }
    }
    if (bVar6) {
      FUN_004085b8(&local_8,&DAT_004a66ec);
    }
  }
  FUN_0045c464(*(undefined4 *)(param_2 + 0x48),1);
  if (*(char *)(local_c + 0x3a) != '\0') {
    local_11 = *(byte *)(*(int *)(*(int *)(param_2 + 0x40) + 0x10) + 0x1d);
    FUN_0045bb58(*(int *)(param_2 + 0x40),local_11 | 1);
  }
  uVar4 = FUN_004d08e8();
  local_18 = (HTHEME)FUN_004d09b4(uVar4,7);
  hdc = (HDC)FUN_0045d4ec(param_2);
  psVar5 = local_8;
  if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
    psVar5 = (short *)FUN_00407488(&local_8,local_8);
  }
  iVar3 = 0;
  if (psVar5 != (short *)0x0) {
    iVar3 = *(int *)(psVar5 + -2);
  }
  local_1c = *(int *)(&DAT_006817b8 + (uint)*(byte *)(local_c + 0x39) * 4);
  pOptions = &local_5c;
  pszText = (LPCWSTR)FUN_00408220(local_8);
  DrawThemeTextEx(local_18,hdc,0xe,local_1c,pszText,iVar3,param_4,param_6,pOptions);
  puVar1 = puStack_6c;
  *in_FS_OFFSET = uStack_74;
  puStack_6c = &LAB_004a66d4;
  puStack_70 = (undefined1 *)0x4a66cc;
  thunk_FUN_004072d8(&local_8,uStack_74,puVar1);
  return;
}
