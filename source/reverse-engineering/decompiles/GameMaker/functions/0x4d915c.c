// rea decompile_all
// name: FUN_004d915c
// address: 0x4d915c
// body: available
// range: 0x4d915c-0x4d93d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d9180 (push 0x4d93d2 followed by fs-segment stack chaining); handler 0x4d93d2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004d91a8) */
/* WARNING: Removing unreachable block (ram,0x004d91b2) */

void FUN_004d915c(int param_1,int param_2,undefined4 param_3,uint param_4,char param_5,
                 LPRECT param_6)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  HDC pHVar4;
  short *psVar5;
  LPCWSTR pWVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar11;
  bool bVar12;
  byte bVar13;
  undefined4 auStackY_1800 [1516];
  tagRECT *qrc;
  UINT edge;
  LPRECT lprc;
  UINT grfFlags;
  uint format;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  tagRECT local_24;
  byte local_11;
  undefined4 local_10;
  int local_c;
  short *local_8;

  bVar13 = 0;
  puStack_34 = &stack0xfffffffc;
  local_8 = (short *)0x0;
  puStack_38 = &LAB_004d93d2;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_10 = param_3;
  local_c = param_2;
  iVar3 = thunk_FUN_004dc3d8(param_1);
  if ((iVar3 != 0) && (cVar2 = FUN_004de108(iVar3), cVar2 != '\0')) {
    param_4 = param_4 | 0x20002;
  }
  FUN_00407f0c(&local_8,local_10);
  uVar11 = (param_4 & 0x400) == 0;
  if (!(bool)uVar11) {
    if (local_8 == (short *)0x0) {
      bVar12 = true;
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
        bVar12 = psVar5[1] == 0;
      }
      else {
        bVar12 = false;
      }
    }
    uVar11 = !bVar12;
    if (!(bool)uVar11) {
      FUN_004082dc(&local_8,&DAT_004d93f0);
    }
  }
  FUN_00408640(local_8,&DAT_004d9400);
  if ((bool)uVar11) {
    if ((param_4 & 0x400) == 0) {
      puVar8 = (undefined4 *)((int)param_6 + (uint)bVar13 * -8 + 4);
      local_24.left = param_6->left;
      puVar10 = (undefined4 *)((int)&local_24 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
      puVar9 = puVar8 + (uint)bVar13 * -2 + 1;
      *(undefined4 *)((int)&local_24 + (uint)bVar13 * -8 + 4) = *puVar8;
      *puVar10 = *puVar9;
      puVar10[(uint)bVar13 * -2 + 1] = puVar9[(uint)bVar13 * -2 + 1];
      local_24.top = local_24.top + 4;
      grfFlags = 2;
      edge = 6;
      qrc = &local_24;
      pHVar4 = (HDC)FUN_0045ce2c(local_c);
      DrawEdge(pHVar4,qrc,edge,grfFlags);
    }
    goto LAB_004d93bc;
  }
  FUN_0045bda4(*(undefined4 *)(local_c + 0x48),1);
  if (*(char *)(param_1 + 0x3a) != '\0') {
    local_11 = *(byte *)(*(int *)(*(int *)(local_c + 0x40) + 0x10) + 0x1d);
    FUN_0045b498(*(int *)(local_c + 0x40),local_11 | 1);
  }
  if (*(char *)(param_1 + 0x39) == '\0') {
    if (param_5 == '\0') {
      FUN_0040c268(param_6,1,1);
      FUN_0045b0d0(*(undefined4 *)(local_c + 0x40),0xff000014);
      pHVar4 = (HDC)FUN_0045ce2c(local_c);
      psVar5 = local_8;
      if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
        psVar5 = (short *)FUN_00407048(&local_8,local_8);
      }
      iVar3 = 0;
      if (psVar5 != (short *)0x0) {
        iVar3 = *(int *)(psVar5 + -2);
      }
      lprc = param_6;
      format = param_4;
      pWVar6 = (LPCWSTR)FUN_00407f44(local_8);
      DrawTextW(pHVar4,pWVar6,iVar3,lprc,format);
      FUN_0040c268(param_6,0xffffffff,0xffffffff);
    }
    if (param_5 != '\0') {
      iVar3 = FUN_0045aa34(0xff00000d);
      iVar7 = FUN_0045aa34(0xff000010);
      if (iVar3 == iVar7) {
        FUN_0045b0d0(*(undefined4 *)(local_c + 0x40),0xff000014);
        goto LAB_004d9375;
      }
    }
    FUN_0045b0d0(*(undefined4 *)(local_c + 0x40),0xff000010);
  }
LAB_004d9375:
  pHVar4 = (HDC)FUN_0045ce2c(local_c);
  psVar5 = local_8;
  if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
    psVar5 = (short *)FUN_00407048(&local_8,local_8);
  }
  iVar3 = 0;
  if (psVar5 != (short *)0x0) {
    iVar3 = *(int *)(psVar5 + -2);
  }
  pWVar6 = (LPCWSTR)FUN_00407f44(local_8);
  DrawTextW(pHVar4,pWVar6,iVar3,param_6,param_4);
LAB_004d93bc:
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_004d93d9;
  puStack_38 = (undefined1 *)0x4d93d1;
  thunk_FUN_00406e5c(&local_8,uStack_3c,puVar1);
  return;
}
