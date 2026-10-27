// rea decompile_all
// name: FUN_004d9448
// address: 0x4d9448
// body: available
// range: 0x4d9448-0x4d961c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d946c (push 0x4d961d followed by fs-segment stack chaining); handler 0x4d961d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004d94d5) */
/* WARNING: Removing unreachable block (ram,0x004d94df) */

void FUN_004d9448(int param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
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
  puStack_70 = &LAB_004d961d;
  uStack_74 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_74;
  local_10 = param_3;
  local_c = param_1;
  FUN_00404f08(&local_5c,0x40,0);
  local_5c.dwSize = 0x40;
  local_5c.dwFlags = 0x2001;
  if ((param_4 & 0x400) == 0x400) {
    local_5c.dwFlags = 0x2201;
  }
  local_5c.crText = FUN_0045aa34(*(undefined4 *)(*(int *)(param_2 + 0x40) + 0x18));
  iVar3 = thunk_FUN_004dc3d8(local_c);
  if ((iVar3 != 0) && (cVar2 = FUN_004de108(iVar3), cVar2 != '\0')) {
    param_4 = param_4 | 0x20002;
  }
  FUN_00407f0c(&local_8,local_10);
  if ((param_4 & 0x400) != 0) {
    if (local_8 == (short *)0x0) {
      bVar6 = true;
    }
    else {
      psVar5 = local_8;
      if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
        psVar5 = (short *)FUN_00407048(&local_8,local_8);
      }
      if (*psVar5 == 0x26) {
        psVar5 = local_8;
        if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
          psVar5 = (short *)FUN_00407048(&local_8,local_8);
        }
        bVar6 = psVar5[1] == 0;
      }
      else {
        bVar6 = false;
      }
    }
    if (bVar6) {
      FUN_004082dc(&local_8,&DAT_004d963c);
    }
  }
  FUN_0045bda4(*(undefined4 *)(param_2 + 0x48),1);
  if (*(char *)(local_c + 0x3a) != '\0') {
    local_11 = *(byte *)(*(int *)(*(int *)(param_2 + 0x40) + 0x10) + 0x1d);
    FUN_0045b498(*(int *)(param_2 + 0x40),local_11 | 1);
  }
  uVar4 = FUN_00503a6c();
  local_18 = (HTHEME)FUN_00503b38(uVar4,7);
  hdc = (HDC)FUN_0045ce2c(param_2);
  psVar5 = local_8;
  if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
    psVar5 = (short *)FUN_00407048(&local_8,local_8);
  }
  iVar3 = 0;
  if (psVar5 != (short *)0x0) {
    iVar3 = *(int *)(psVar5 + -2);
  }
  local_1c = *(int *)(&DAT_00778a20 + (uint)*(byte *)(local_c + 0x39) * 4);
  pOptions = &local_5c;
  pszText = (LPCWSTR)FUN_00407f44(local_8);
  DrawThemeTextEx(local_18,hdc,0xe,local_1c,pszText,iVar3,param_4,param_6,pOptions);
  puVar1 = puStack_6c;
  *in_FS_OFFSET = uStack_74;
  puStack_6c = &LAB_004d9624;
  puStack_70 = (undefined1 *)0x4d961c;
  thunk_FUN_00406e5c(&local_8,uStack_74,puVar1);
  return;
}
