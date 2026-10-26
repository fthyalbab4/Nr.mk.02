// rea decompile_all
// name: FUN_006cdc54
// address: 0x6cdc54
// body: available
// range: 0x6cdc54-0x6cddaa inclusive
// range: 0x6cddce-0x6cde5b inclusive
// range: 0x6cde70-0x6ce18f inclusive
// range: 0x6ce1b0-0x6ce1df inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6cdc90 (push 0x6ce1e0 followed by fs-segment stack chaining); handler 0x6ce1e0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6cdd93 (push 0x6cddab followed by fs-segment stack chaining); handler 0x6cddab lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ce178 (push 0x6ce190 followed by fs-segment stack chaining); handler 0x6ce190 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cdc54(undefined4 param_1,undefined4 param_2,undefined1 param_3,char param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  LPCWSTR lpFileName;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar10;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar11;
  undefined4 local_90;
  undefined1 *puStackY_8c;
  undefined1 *puVar12;
  undefined1 *puVar13;
  wchar_t *pwStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  int local_50;
  uint local_4c;
  char local_40;
  char local_3f;
  char local_3e;
  char local_3d;
  undefined4 local_3c;
  undefined4 local_38;
  double local_34;
  uint local_28;
  int *local_24;
  undefined4 local_20;
  undefined1 local_19;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  puVar12 = &stack0xfffffffc;
  puVar13 = &stack0xfffffffc;
  local_68 = 0;
  local_6c = 0;
  local_60 = 0;
  local_64 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_7c = (undefined1 *)0x6cdc85;
  local_19 = param_3;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_80 = &LAB_006ce1e0;
  pwStack_84 = (wchar_t *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pwStack_84;
  puStack_7c = &stack0xfffffffc;
  piVar2 = (int *)FUN_006cf758(&PTR_LAB_006ced70,1,0);
  FUN_006cfa98(piVar2,&DAT_006ce214,"typper");
  FUN_006cfa98(piVar2,"Signature","mikerussell");
  FUN_004199b0();
  local_34 = (double)in_ST0;
  fVar11 = (float10)local_34;
  local_38 = FUN_00404878();
  local_90 = SUB104((float10)local_34,0);
  puStackY_8c = (undefined1 *)((unkuint10)(float10)local_34 >> 0x20);
  FUN_004047e4();
  local_34 = (double)fVar11 * 86400.0;
  local_3c = FUN_00404878();
  local_3d = FUN_0071b5fc();
  local_3f = FUN_005ceb84(piVar2);
  local_20 = 0;
  FUN_00417398(local_8,&local_14);
  local_24 = (int *)FUN_00405a4c(&LAB_0052e8fc,1);
  (**(code **)(*piVar2 + -4))(piVar2,1);
  FUN_00520290(*(undefined4 *)PTR_DAT_00782280,&local_64);
  FUN_0041735c(local_64,&local_60);
  FUN_0040839c(&local_c,local_60,L"rundata");
  cVar1 = FUN_00416e40(local_c);
  if (cVar1 == '\0') {
    local_20 = 1;
    FUN_00405a7c(local_24);
    goto LAB_006ce1b8;
  }
  puStackY_8c = &LAB_006cddab;
  local_90 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_90;
  FUN_0043ff44(local_24,local_c);
  *in_FS_OFFSET = local_90;
  (**(code **)*local_24)(local_24,(undefined4 *)*local_24,puVar12);
  if (extraout_EDX != 0) {
    local_20 = 1;
    FUN_00405a7c(local_24);
    goto LAB_006ce1b8;
  }
  if ((DAT_0077f434 != 0) && (iVar3 = FUN_0052f6a0(local_24), iVar3 != DAT_0077f434)) {
    local_20 = 1;
    FUN_00405a7c(local_24);
    goto LAB_006ce1b8;
  }
  iVar3 = FUN_0071b5bc(&DAT_006ce278);
  local_3e = iVar3 == 1;
  local_40 = FUN_005ceb84(*(undefined4 *)PTR_DAT_00782474);
  puVar4 = (undefined4 *)FUN_0052f2e4(local_24);
  (**(code **)*puVar4)();
  FUN_005342d4(0,&local_18);
  FUN_0043fe70(puVar4,local_18);
  FUN_00405a7c(puVar4);
  cVar1 = FUN_006ccba0(local_18,*(undefined4 *)PTR_DAT_00782444);
  if (cVar1 == '\0') {
    FUN_004d43f8(L"Failed to replace the icon");
  }
  FUN_0043fef4(local_24);
  FUN_0043ff44(local_24,local_18);
  lpFileName = (LPCWSTR)FUN_00407f44(local_18);
  puStackY_8c = (undefined1 *)0x6cdeca;
  DeleteFileW(lpFileName);
  FUN_006cd410(local_24);
  FUN_0041735c(local_8,&local_10);
  if ((local_10 != 0) && (cVar1 = FUN_00526f50(local_10), cVar1 == '\0')) {
    local_20 = 4;
    FUN_00405a7c(local_24);
    goto LAB_006ce1b8;
  }
  local_28 = 0xd;
  local_4c = (**(code **)*local_24)();
  local_50 = (int)DAT_0077f430 >> 0x1f;
  local_54 = DAT_0077f430;
  local_5c = local_4c;
  local_58 = extraout_EDX_00;
  if (extraout_EDX_00 == local_50) {
    if (local_4c <= DAT_0077f430) {
LAB_006cdf60:
      local_5c = DAT_0077f430;
      local_58 = local_50;
    }
  }
  else if (extraout_EDX_00 <= local_50) goto LAB_006cdf60;
  iVar3 = local_5c + 4;
  (**(code **)(*local_24 + 0x14))(local_24,iVar3,0);
  if (iVar3 <= (int)(iVar3 + local_28)) {
    iVar3 = ((iVar3 + local_28) - iVar3) + 1;
    do {
      iVar5 = FUN_004047b0(0x80);
      iVar6 = FUN_004047b0(0x80);
      iVar7 = FUN_004047b0(0x80);
      iVar8 = FUN_004047b0(0x80);
      FUN_0052f12c(local_24,iVar5 + iVar6 * 0x100 + iVar7 * 0x10000 + iVar8 * 0x1000000);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar10 = local_28 & 0xff00ff00;
  FUN_0052f12c(local_24,local_28 & 0xff00ff | 0xf7000000);
  FUN_0052f12c(local_24,uVar10 | 0x140067);
  iVar3 = FUN_0043f234(local_24);
  FUN_0052f12c(local_24,*(undefined4 *)PTR_DAT_00781e7c);
  FUN_0052f12c(local_24,0);
  FUN_0052f12c(local_24,local_28 ^ 0x32a);
  if ((local_3d == '\x01') &&
     (((local_3e != '\x01' || (local_40 == local_3f)) || (local_40 != '\x01')))) {
    param_4 = '\x01';
  }
  if (param_4 == '\0') {
    FUN_0052f12c(local_24,0);
    FUN_0052f240(local_24,local_19);
    FUN_0052f12c(local_24,0);
  }
  else {
    FUN_0052f12c(local_24,local_38);
    FUN_0052f240(local_24,local_19);
    FUN_0052f12c(local_24,local_3c);
  }
  cVar1 = FUN_00709974(local_24,1);
  if (cVar1 != '\0') {
    pwStack_84 = L"D3DX8.dll";
    puStackY_8c = (undefined1 *)0x6ce0cc;
    FUN_00520290(*(undefined4 *)PTR_DAT_00782280,&local_6c);
    puStackY_8c = (undefined1 *)0x6ce0d7;
    FUN_0041735c(local_6c,&local_68);
    puStackY_8c = (undefined1 *)0x6ce0e4;
    FUN_004082dc(&local_68,L"dxdata");
    puStackY_8c = (undefined1 *)0x6ce0f1;
    cVar1 = FUN_006cda50(local_24,local_68,1);
    if (cVar1 == '\0') {
      local_20 = 2;
    }
    else {
      puStackY_8c = (undefined1 *)0x6ce109;
      cVar1 = FUN_006cdb40(local_24);
      if (cVar1 == '\0') {
        local_20 = 3;
      }
      else {
        iVar5 = local_24[1];
        puStackY_8c = (undefined1 *)0x6ce126;
        iVar6 = (**(code **)*local_24)();
        uVar9 = FUN_0052fb8c(local_24,iVar3 + 0xc + iVar5,iVar6 - (iVar3 + 0xc));
        *(char *)(iVar5 + 4 + iVar3) = (char)uVar9;
        *(char *)(iVar5 + 5 + iVar3) = (char)((uint)uVar9 >> 8);
        *(char *)(iVar5 + 6 + iVar3) = (char)((uint)uVar9 >> 0x10);
        *(char *)(iVar5 + 7 + iVar3) = (char)((uint)uVar9 >> 0x18);
        FUN_0052fc0c(local_24,iVar3);
        puStackY_8c = &LAB_006ce190;
        local_90 = *in_FS_OFFSET;
        *in_FS_OFFSET = &local_90;
        FUN_0043fe70(local_24,local_8);
        *in_FS_OFFSET = local_90;
        FUN_00405a7c(local_24,local_90,puVar13);
      }
    }
  }
LAB_006ce1b8:
  puVar12 = puStack_7c;
  *in_FS_OFFSET = pwStack_84;
  puStack_7c = &LAB_006ce1e7;
  puStack_80 = (undefined1 *)0x6ce1d2;
  thunk_FUN_00406e80(&local_6c,4,puVar12);
  puStack_80 = (undefined1 *)0x6ce1df;
  thunk_FUN_00406e80(&local_18,5);
  return;
}
