// rea decompile_all
// name: FUN_005287d4
// address: 0x5287d4
// body: available
// range: 0x5287d4-0x528b49 inclusive
// range: 0x528b8f-0x528ba4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5287ef (push 0x528ba5 followed by fs-segment stack chaining); handler 0x528ba5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52880c (push 0x528b78 followed by fs-segment stack chaining); handler 0x528b78 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5288e5 (push 0x528b67 followed by fs-segment stack chaining); handler 0x528b67 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52899a (push 0x528b4a followed by fs-segment stack chaining); handler 0x528b4a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005287d4(int param_1)

{
  longlong lVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  HBITMAP pHVar9;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar10;
  UINT nPlanes;
  UINT nBitCount;
  byte *lpBits;
  undefined4 uStack_98;
  undefined1 *puStack_94;
  undefined1 *puStack_90;
  undefined4 uStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined4 local_4c;
  undefined1 local_48 [16];
  uint local_38;
  byte local_31;
  int local_2c;
  byte *local_28;
  byte *local_24;
  byte *local_20;
  char local_1b;
  char local_1a;
  char local_19;
  char *local_18;
  undefined4 local_14;
  undefined4 *local_10;
  uint local_c;
  int *local_8;

  puStack_5c = &stack0xfffffffc;
  local_4c = 0;
  puStack_60 = &LAB_00528ba5;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_64;
  puStack_68 = (undefined1 *)0x5287fe;
  local_8 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
  puStack_6c = &LAB_00528b78;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  uStack_74 = 0x52881b;
  puStack_68 = &stack0xfffffffc;
  uVar4 = FUN_005281b8(param_1,3);
  uStack_74 = 0x52882a;
  uVar5 = FUN_005281b8(param_1,4);
  if (500000 < (uVar4 & 0xffff) * (uVar5 & 0xffff)) {
    uStack_74 = 0x528842;
    FUN_0051f0e4(local_8,1);
  }
  uStack_74 = 0x528849;
  cVar2 = FUN_00527f54(param_1);
  if (cVar2 == '\0') {
    uStack_74 = 3;
    uStack_78 = 0x5288ac;
    uStack_78 = FUN_005281b8(param_1,3);
    uStack_78 = uStack_78 & 0xffff;
    uStack_7c = 0x5288bc;
    uStack_7c = FUN_005281b8(param_1,4);
    uStack_7c = uStack_7c & 0xffff;
    uStack_80 = 0x5288c7;
    uStack_80 = FUN_00527f90(param_1);
    puStack_84 = (undefined1 *)0x5288d7;
    local_10 = (undefined4 *)FUN_0051f674(&PTR_FUN_0051f36c,1,local_8);
    puStack_88 = &LAB_00528b67;
    uStack_8c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_8c;
    if ((*(char *)(param_1 + 0x10) == '\0') || (*(char *)(param_1 + 0x34) == '\0')) {
      local_1a = '\0';
    }
    else {
      local_1a = '\x01';
    }
    local_1b = '\0';
    *(undefined1 *)(param_1 + 0x10) = 0;
    local_19 = '\0';
    puStack_84 = &stack0xfffffffc;
    if ((*(int *)(param_1 + 0xc) == 0) && (puStack_84 = &stack0xfffffffc, local_1a != '\0')) {
      local_1a = '\x01';
      puStack_90 = (undefined1 *)0x528921;
      puStack_84 = &stack0xfffffffc;
      local_19 = FUN_0052b664(*(undefined4 *)(param_1 + 0x38));
    }
    if (local_1a == '\0') {
      local_20 = (byte *)0x0;
      local_2c = 0;
    }
    else {
      puStack_90 = (undefined1 *)0x528936;
      uVar4 = FUN_005281b8(param_1,3);
      local_2c = ((uVar4 & 0xffff) + 0xf >> 4) * 2;
      puStack_90 = (undefined1 *)0x528950;
      uVar4 = FUN_005281b8(param_1,4);
      lVar1 = (longlong)(int)(uVar4 & 0xffff) * (longlong)local_2c;
      puStack_90 = (undefined1 *)0x52895b;
      local_20 = (byte *)FUN_00404324((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
      puStack_90 = (undefined1 *)0x52896a;
      uVar4 = FUN_005281b8(param_1,4);
      puStack_90 = (undefined1 *)0x52897b;
      FUN_00404f38(local_20,(uVar4 & 0xffff) * local_2c,0);
      local_1a = local_20 != (byte *)0x0;
    }
    puStack_94 = &LAB_00528b4a;
    uStack_98 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_98;
    local_c = 0;
    local_18 = *(char **)(param_1 + 0x18);
    local_28 = local_20;
    puStack_90 = &stack0xfffffffc;
    while (uVar4 = FUN_005281b8(param_1,4), (int)local_c < (int)(uVar4 & 0xffff)) {
      local_14 = (**(code **)*local_10)(local_10,local_c);
      if ((local_c & 0x1f) == 0) {
        uVar4 = FUN_005281b8(param_1,4);
        iVar7 = MulDiv(local_c,100,uVar4 & 0xffff);
        uVar6 = 0;
        FUN_00436ad0(0,0,0,local_48,0);
        puVar10 = local_48;
        FUN_0040b9d0(&LAB_0051ec1c,&local_4c);
        FUN_00406268(*(undefined4 *)(param_1 + 4),param_1,1,local_4c,puVar10,uVar6,iVar7);
      }
      uVar3 = FUN_005281b8(param_1,3);
      FUN_00404514(local_18,local_14,uVar3);
      local_c = local_c + 1;
      if (local_1a == '\0') {
        uVar4 = FUN_005281b8(param_1,3);
        local_18 = local_18 + (uVar4 & 0xffff);
      }
      else {
        uVar8 = 0x80;
        local_24 = local_28;
        local_31 = 0;
        uVar5 = FUN_005281b8(param_1,3);
        uVar4 = uVar5 & 0xffff;
        if (-1 < (int)((uVar5 & 0xffff) - 1)) {
          do {
            local_38 = uVar4;
            if (*local_18 == local_19) {
              local_31 = local_31 | (byte)uVar8;
            }
            uVar8 = uVar8 >> 1;
            if ((char)uVar8 == '\0') {
              uVar8 = 0x80;
              if ((local_1b == '\0') && (local_31 == 0)) {
                local_1b = '\0';
              }
              else {
                local_1b = '\x01';
              }
              *local_24 = local_31;
              local_24 = local_24 + 1;
              local_31 = 0;
            }
            local_18 = local_18 + 1;
            local_38 = local_38 - 1;
            uVar4 = local_38;
          } while (local_38 != 0);
        }
        if (local_31 != 0) {
          local_1b = '\x01';
          *local_24 = local_31;
        }
        local_28 = local_28 + local_2c;
      }
    }
    if ((local_1a != '\0') && (local_1b != '\0')) {
      nBitCount = 1;
      nPlanes = 1;
      lpBits = local_20;
      uVar4 = FUN_005281b8(param_1,4);
      uVar4 = uVar4 & 0xffff;
      uVar5 = FUN_005281b8(param_1,3);
      pHVar9 = CreateBitmap(uVar5 & 0xffff,uVar4,nPlanes,nBitCount,lpBits);
      *(HBITMAP *)(param_1 + 0xc) = pHVar9;
    }
    puVar10 = puStack_90;
    *in_FS_OFFSET = uStack_98;
    puStack_90 = &LAB_00528b51;
    if (local_20 != (byte *)0x0) {
      puStack_94 = (undefined1 *)0x528b49;
      FUN_00404340(local_20,uStack_98,puVar10);
    }
    return;
  }
  uStack_74 = 0x528859;
  uVar3 = FUN_005281b8(param_1,3);
  uStack_74 = 0x528864;
  (**(code **)(*local_8 + 0x44))(local_8,uVar3);
  uStack_74 = 0x528870;
  uVar3 = FUN_005281b8(param_1,4);
  uStack_74 = 0x52887b;
  (**(code **)(*local_8 + 0x38))(local_8,uVar3);
  uStack_74 = 0x528882;
  FUN_00527f90(param_1);
  uStack_74 = 0x528887;
  uVar6 = FUN_00462594();
  uStack_74 = 0x528891;
  (**(code **)(*local_8 + 0x3c))(local_8,uVar6);
  puVar10 = puStack_5c;
  *in_FS_OFFSET = uStack_70;
  *in_FS_OFFSET = uStack_64;
  puStack_5c = &LAB_00528bac;
  puStack_60 = (undefined1 *)0x528ba4;
  thunk_FUN_004072d8(&local_4c,uStack_64,puVar10);
  return;
}
