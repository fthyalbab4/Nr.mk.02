// rea decompile_all
// name: FUN_005d51e0
// address: 0x5d51e0
// body: available
// range: 0x5d51e0-0x5d5704 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

HPALETTE FUN_005d51e0(int param_1,int param_2,int param_3,char param_4,uint param_5,byte param_6)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  HPALETTE pHVar4;
  undefined2 *unaff_EBX;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined2 *unaff_ESI;
  undefined2 *puVar8;
  undefined2 *unaff_EDI;
  LOGPALETTE local_440 [128];
  code *local_3c;
  int local_38;
  code *local_34;
  int local_30;
  undefined2 *local_28;
  undefined2 *local_24;
  undefined2 *local_20;
  undefined2 *local_1c;
  uint local_18;
  uint local_14;
  int local_c;
  int local_8;

  for (iVar5 = param_3; -1 < iVar5; iVar5 = iVar5 + -1) {
    unaff_EDI = *(undefined2 **)(param_2 + iVar5 * 4);
  }
  local_c = param_3;
  local_8 = param_1;
  FUN_00404f38(local_440,0x404,0);
  local_440[0].palVersion = 0x300;
  if (param_5 < 0x101) {
    local_440[0].palNumEntries = (WORD)param_5;
  }
  else {
    local_440[0].palNumEntries = 0x100;
  }
  if (param_6 < 2) {
    if ((*(byte *)(local_8 + 0x141) & 2) == 0) {
      local_34 = FUN_005ceee0;
    }
    else {
      local_34 = FUN_005ceee8;
    }
    local_30 = local_8;
    if (param_4 == '\0') {
      uVar2 = (uint)local_440[0].palNumEntries;
      if (-1 < (int)(uVar2 - 1)) {
        puVar6 = (undefined1 *)local_440;
        do {
          uVar1 = (*local_34)(local_30,*(undefined1 *)unaff_EDI);
          *(undefined1 *)((int)puVar6 + 4) = uVar1;
          uVar1 = (*local_34)(local_30,*(undefined1 *)((int)unaff_EDI + 1));
          *(undefined1 *)((int)puVar6 + 5) = uVar1;
          uVar1 = (*local_34)(local_30,*(undefined1 *)(unaff_EDI + 1));
          *(undefined1 *)((int)puVar6 + 6) = uVar1;
          puVar8 = (undefined2 *)((int)unaff_EDI + 3);
          if (param_6 == 1) {
            puVar8 = unaff_EDI + 2;
          }
          uVar2 = uVar2 - 1;
          unaff_EDI = puVar8;
          puVar6 = (undefined1 *)((int)puVar6 + 4);
        } while (uVar2 != 0);
      }
    }
    else {
      uVar2 = (uint)local_440[0].palNumEntries;
      if (-1 < (int)(uVar2 - 1)) {
        puVar6 = (undefined1 *)((int)local_440 + 6);
        do {
          uVar1 = (*local_34)(local_30,*(undefined1 *)unaff_EDI);
          *puVar6 = uVar1;
          uVar1 = (*local_34)(local_30,*(undefined1 *)((int)unaff_EDI + 1));
          puVar6[-1] = uVar1;
          uVar1 = (*local_34)(local_30,*(undefined1 *)(unaff_EDI + 1));
          puVar6[-2] = uVar1;
          puVar8 = (undefined2 *)((int)unaff_EDI + 3);
          if (param_6 == 1) {
            puVar8 = unaff_EDI + 2;
          }
          puVar6 = puVar6 + 4;
          uVar2 = uVar2 - 1;
          unaff_EDI = puVar8;
        } while (uVar2 != 0);
      }
    }
  }
  else if ((byte)(param_6 - 2) < 2) {
    if ((*(byte *)(local_8 + 0x141) & 2) == 0) {
      local_34 = FUN_005ceee0;
    }
    else {
      local_34 = FUN_005ceee8;
    }
    local_30 = local_8;
    uVar2 = (uint)local_440[0].palNumEntries;
    local_20 = unaff_EBX;
    local_1c = unaff_ESI;
    if (-1 < (int)(uVar2 - 1)) {
      puVar6 = (undefined1 *)local_440;
      do {
        uVar1 = (*local_34)(local_30,*(undefined1 *)unaff_EDI);
        *(undefined1 *)((int)puVar6 + 4) = uVar1;
        unaff_EDI = (undefined2 *)((int)unaff_EDI + 1);
        uVar1 = (*local_34)(local_30,*(undefined1 *)local_1c);
        *(undefined1 *)((int)puVar6 + 5) = uVar1;
        local_1c = (undefined2 *)((int)local_1c + 1);
        uVar1 = (*local_34)(local_30,*(undefined1 *)local_20);
        *(undefined1 *)((int)puVar6 + 6) = uVar1;
        local_20 = (undefined2 *)((int)local_20 + 1);
        uVar2 = uVar2 - 1;
        puVar6 = (undefined1 *)((int)puVar6 + 4);
      } while (uVar2 != 0);
    }
  }
  else if ((byte)(param_6 - 4) < 2) {
    if ((*(byte *)(local_8 + 0x141) & 2) == 0) {
      if ((*(byte *)(local_8 + 0x140) & 4) == 0) {
        local_3c = FUN_005ceef4;
      }
      else {
        local_3c = FUN_005cef4c;
      }
    }
    else if ((*(byte *)(local_8 + 0x140) & 4) == 0) {
      local_3c = FUN_005cef08;
    }
    else {
      local_3c = FUN_005cef28;
    }
    local_38 = local_8;
    if (param_4 == '\0') {
      uVar2 = (uint)local_440[0].palNumEntries;
      if (-1 < (int)(uVar2 - 1)) {
        puVar6 = (undefined1 *)((int)local_440 + 6);
        do {
          uVar1 = (*local_3c)(local_38,*unaff_EDI);
          *puVar6 = uVar1;
          uVar1 = (*local_3c)(local_38,unaff_EDI[1]);
          puVar6[-1] = uVar1;
          uVar1 = (*local_3c)(local_38,unaff_EDI[2]);
          puVar6[-2] = uVar1;
          puVar8 = unaff_EDI + 3;
          if (param_6 == 5) {
            puVar8 = unaff_EDI + 4;
          }
          puVar6 = puVar6 + 4;
          uVar2 = uVar2 - 1;
          unaff_EDI = puVar8;
        } while (uVar2 != 0);
      }
    }
    else {
      uVar2 = (uint)local_440[0].palNumEntries;
      if (-1 < (int)(uVar2 - 1)) {
        puVar6 = (undefined1 *)local_440;
        do {
          uVar1 = (*local_3c)(local_38,*unaff_EDI);
          *(undefined1 *)((int)puVar6 + 4) = uVar1;
          uVar1 = (*local_3c)(local_38,unaff_EDI[1]);
          *(undefined1 *)((int)puVar6 + 5) = uVar1;
          uVar1 = (*local_3c)(local_38,unaff_EDI[2]);
          *(undefined1 *)((int)puVar6 + 6) = uVar1;
          puVar8 = unaff_EDI + 3;
          if (param_6 == 5) {
            puVar8 = unaff_EDI + 4;
          }
          uVar2 = uVar2 - 1;
          unaff_EDI = puVar8;
          puVar6 = (undefined1 *)((int)puVar6 + 4);
        } while (uVar2 != 0);
      }
    }
  }
  else if ((byte)(param_6 - 6) < 2) {
    if ((*(byte *)(local_8 + 0x141) & 2) == 0) {
      if ((*(byte *)(local_8 + 0x140) & 4) == 0) {
        local_3c = FUN_005ceef4;
      }
      else {
        local_3c = FUN_005cef4c;
      }
    }
    else if ((*(byte *)(local_8 + 0x140) & 4) == 0) {
      local_3c = FUN_005cef08;
    }
    else {
      local_3c = FUN_005cef28;
    }
    local_38 = local_8;
    uVar2 = (uint)local_440[0].palNumEntries;
    local_28 = unaff_EBX;
    local_24 = unaff_ESI;
    if (-1 < (int)(uVar2 - 1)) {
      puVar6 = (undefined1 *)local_440;
      do {
        uVar1 = (*local_3c)(local_38,*unaff_EDI);
        *(undefined1 *)((int)puVar6 + 4) = uVar1;
        unaff_EDI = unaff_EDI + 1;
        uVar1 = (*local_3c)(local_38,*local_24);
        *(undefined1 *)((int)puVar6 + 5) = uVar1;
        local_24 = local_24 + 1;
        uVar1 = (*local_3c)(local_38,*local_28);
        *(undefined1 *)((int)puVar6 + 6) = uVar1;
        local_28 = local_28 + 1;
        uVar2 = uVar2 - 1;
        puVar6 = (undefined1 *)((int)puVar6 + 4);
      } while (uVar2 != 0);
    }
  }
  local_14 = (1 << (*(byte *)(local_8 + 5) & 0x1f)) - 1;
  local_18 = (1 << (*(byte *)(local_8 + 6) & 0x1f)) - 1;
  if ((*(byte *)(local_8 + 6) < 9) && (local_14 != local_18)) {
    local_14 = (1 << (*(byte *)(local_8 + 5) & 0x1f)) - 1;
    iVar5 = 1 << (*(byte *)(local_8 + 6) & 0x1f);
    uVar2 = iVar5 - 1;
    local_18 = uVar2;
    if ((int)local_14 < (int)uVar2) {
      if (-1 < (int)uVar2) {
        iVar5 = (int)local_440 + (iVar5 + -1) * 4 + 4;
        do {
          uVar3 = FUN_005cee4c(uVar2,local_14 & 0xffff,local_18 & 0xffff);
          *(undefined1 *)iVar5 = *(undefined1 *)((int)local_440 + (uVar3 & 0xffff) * 4 + 4);
          uVar3 = FUN_005cee4c(uVar2,local_14 & 0xffff,local_18 & 0xffff);
          *(undefined1 *)(iVar5 + 1) = *(undefined1 *)((int)local_440 + (uVar3 & 0xffff) * 4 + 5);
          uVar3 = FUN_005cee4c(uVar2,local_14 & 0xffff,local_18 & 0xffff);
          *(undefined1 *)(iVar5 + 2) = *(undefined1 *)((int)local_440 + (uVar3 & 0xffff) * 4 + 6);
          uVar2 = uVar2 - 1;
          iVar5 = iVar5 + 0xfffffffc;
        } while (uVar2 != 0xffffffff);
      }
    }
    else if (-1 < (int)uVar2) {
      iVar7 = 0;
      puVar6 = (undefined1 *)local_440;
      do {
        uVar2 = FUN_005cee4c(iVar7,local_14 & 0xffff,local_18 & 0xffff);
        *(undefined1 *)((int)puVar6 + 4) =
             *(undefined1 *)((int)local_440 + (uVar2 & 0xffff) * 4 + 4);
        uVar2 = FUN_005cee4c(iVar7,local_14 & 0xffff,local_18 & 0xffff);
        *(undefined1 *)((int)puVar6 + 5) =
             *(undefined1 *)((int)local_440 + (uVar2 & 0xffff) * 4 + 5);
        uVar2 = FUN_005cee4c(iVar7,local_14 & 0xffff,local_18 & 0xffff);
        *(undefined1 *)((int)puVar6 + 6) =
             *(undefined1 *)((int)local_440 + (uVar2 & 0xffff) * 4 + 6);
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + -1;
        puVar6 = (undefined1 *)((int)puVar6 + 4);
      } while (iVar5 != 0);
    }
    local_440[0].palNumEntries = (short)local_18 + 1;
  }
  pHVar4 = CreatePalette(local_440);
  return pHVar4;
}
