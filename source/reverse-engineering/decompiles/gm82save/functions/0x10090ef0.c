// rea decompile_all
// name: FUN_10090ef0
// address: 0x10090ef0
// body: available
// range: 0x10090ef0-0x10090f57 inclusive
// range: 0x10090f60-0x10090fe9 inclusive
// range: 0x10090ff0-0x100910b4 inclusive
// range: 0x100910c0-0x100913aa inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x100912ba) */

void __fastcall FUN_10090ef0(undefined8 *param_1,int *param_2)

{
  void *_Src;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined **lpMem;
  HANDLE pvVar4;
  HANDLE pvVar5;
  HANDLE pvVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  HANDLE pvVar11;
  undefined1 uVar12;
  uint uVar13;
  HANDLE pvVar14;
  LPVOID local_58;
  undefined **local_54;
  undefined *local_50;
  uint local_4c;
  LPVOID local_48;
  uint local_44;
  HANDLE local_40;
  int *local_3c;
  undefined8 *local_38;
  uint local_34;
  HANDLE local_30;
  int local_2c;
  int local_28;
  HANDLE local_24;
  undefined1 local_20;
  int local_1c;
  uint local_18;
  undefined **local_14;

  local_4c = 0;
  local_48 = (LPVOID)0x1;
  local_44 = 0;
  local_58 = (LPVOID)0x1;
  local_54 = (undefined **)0x0;
  local_1c = 0x10090efc;
  pvVar4 = (HANDLE)param_2[2];
  pvVar5 = (HANDLE)param_2[3];
  local_38 = param_1;
LAB_10090f37:
  iVar10 = *param_2;
  local_34 = local_44;
  if (pvVar5 <= pvVar4) {
    iVar1 = param_2[1];
    local_40 = (HANDLE)param_2[5];
    uVar12 = (undefined1)param_2[4];
LAB_10090f72:
    local_24 = (HANDLE)0x0;
    local_2c = iVar10;
    local_28 = iVar1;
    local_20 = uVar12;
    FUN_10112420((undefined8 *)&local_18,local_40,&local_2c);
    lpMem = local_14;
    uVar12 = local_20;
    uVar13 = local_34;
    param_2[2] = 0;
    param_2[3] = (int)local_24;
    *(undefined1 *)(param_2 + 4) = local_20;
    pvVar5 = local_24;
    if ((char)local_18 == -1) goto LAB_10091070;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch((&switchD_10090fd5::switchdataD_100913ac)[local_18 & 0xff] + local_1c) {
    case 0x10090f60:
      if (*(char *)(local_14 + 2) == '#') goto joined_r0x1009105b;
      break;
    case 0x10090fd7:
      if ((local_18 & 0xff00) != 0x2300) break;
joined_r0x1009105b:
      if (pvVar5 != (HANDLE)0x0) goto LAB_10091070;
      goto LAB_10090f72;
    case 0x10090ff0:
      if (*(char *)(local_14 + 2) == '#') {
        piVar7 = (int *)local_14[1];
        local_30 = local_24;
        local_50 = *local_14;
        if ((code *)*piVar7 != (code *)0x0) {
          local_3c = piVar7;
          (*(code *)*piVar7)(local_50);
          piVar7 = local_3c;
        }
        if (piVar7[1] != 0) {
          if (8 < (uint)piVar7[2]) {
            local_50 = *(undefined **)(local_50 + -4);
          }
          pvVar4 = GetProcessHeap();
          HeapFree(pvVar4,0,local_50);
        }
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,lpMem);
        pvVar5 = local_30;
        goto joined_r0x1009105b;
      }
    }
    uVar8 = local_18 >> 8;
    FUN_10095490(&local_2c,(int)local_58,local_34);
    if (local_2c == 0) {
      local_54 = local_14;
      local_44 = uVar13;
      if ((char)local_18 != -1) goto LAB_100912cb;
      goto LAB_10091310;
    }
    local_44 = 0;
    goto LAB_100912cb;
  }
  goto LAB_10091072;
LAB_10091070:
  pvVar4 = (HANDLE)0x0;
LAB_10091072:
  _Src = (void *)(iVar10 + (int)pvVar4);
  uVar8 = (int)pvVar5 - (int)pvVar4;
  local_40 = pvVar4;
  if (uVar8 < 8) {
    if (pvVar5 != pvVar4) {
      uVar9 = 0;
      do {
        if (*(char *)((int)_Src + uVar9) == '\n') goto LAB_10091238;
        uVar9 = uVar9 + 1;
      } while (uVar8 != uVar9);
    }
  }
  else {
    uVar13 = ((int)_Src + 3U & 0xfffffffc) - (int)_Src;
    if (uVar13 == 0) {
      uVar13 = 0;
LAB_100910d5:
      do {
        uVar9 = *(uint *)((int)pvVar4 + uVar13 + iVar10);
        uVar2 = *(uint *)((int)pvVar4 + uVar13 + iVar10 + 4);
        if ((~(((uVar2 ^ 0xf5f5f5f5) + 0x1010101 | uVar2) &
              ((uVar9 ^ 0xf5f5f5f5) + 0x1010101 | uVar9)) & 0x80808080) != 0) break;
        uVar13 = uVar13 + 8;
      } while (uVar13 <= uVar8 - 8);
    }
    else {
      uVar9 = 0;
      do {
        if (*(char *)((int)_Src + uVar9) == '\n') goto LAB_10091238;
        uVar9 = uVar9 + 1;
      } while (uVar13 != uVar9);
      if (uVar13 <= uVar8 - 8) goto LAB_100910d5;
    }
    local_3c = param_2;
    if (uVar8 != uVar13) {
      iVar10 = 0;
      do {
        if (*(char *)((int)_Src + iVar10 + uVar13) == '\n') {
          uVar9 = iVar10 + uVar13;
          goto LAB_10091238;
        }
        iVar10 = iVar10 + 1;
      } while (uVar8 - uVar13 != iVar10);
    }
  }
  if (local_4c - local_34 < uVar8) {
    FUN_101359e0(&local_4c,local_34,uVar8,(LPVOID)0x1,1);
    local_58 = local_48;
    uVar13 = local_44;
  }
  else {
    pvVar6 = pvVar5;
    pvVar11 = pvVar4;
    uVar13 = local_34;
    pvVar14 = pvVar5;
    if (pvVar5 == pvVar4) goto LAB_100911b4;
  }
  pvVar11 = local_40;
  local_30 = pvVar5;
  memcpy((void *)((int)local_58 + uVar13),_Src,uVar8);
  pvVar5 = (HANDLE)param_2[2];
  pvVar6 = (HANDLE)param_2[3];
  pvVar14 = local_30;
LAB_100911b4:
  uVar13 = uVar13 + uVar8;
  pvVar4 = (HANDLE)((int)pvVar5 + uVar8);
  if (pvVar6 < (HANDLE)((int)pvVar5 + uVar8)) {
    pvVar4 = pvVar6;
  }
  local_54 = (undefined **)((int)local_54 + uVar8);
  param_2[2] = (int)pvVar4;
  pvVar5 = pvVar6;
  local_44 = uVar13;
  if (pvVar14 == pvVar11) {
LAB_10091283:
    local_44 = uVar13;
    FUN_10095490(&local_2c,(int)local_58,uVar13);
    if (local_2c == 0) {
LAB_10091310:
      local_44 = uVar13;
      if (local_54 != (undefined **)0x0) {
        if ((((uVar13 != 0) && (*(char *)((int)local_58 + (uVar13 - 1)) == '\n')) &&
            (local_44 = uVar13 - 1, local_44 != 0)) &&
           (*(char *)((int)local_58 + (uVar13 - 2)) == '\r')) {
          local_44 = uVar13 - 2;
        }
        *(uint *)(local_38 + 1) = local_44;
        *local_38 = CONCAT44(local_48,local_4c);
        return;
      }
      *(undefined4 *)local_38 = 0xfffffffe;
    }
    else {
      local_18 = 2;
      local_54 = &PTR_DAT_10156880;
      uVar8 = 0;
      local_44 = 0;
      local_14 = local_54;
LAB_100912cb:
      *(undefined4 *)local_38 = 0xffffffff;
      *(undefined ***)(local_38 + 1) = local_14;
      *(uint *)((int)local_38 + 4) = local_18 & 0xff | uVar8 << 8;
    }
    if (local_4c != 0) {
      pvVar4 = GetProcessHeap();
      HeapFree(pvVar4,0,local_58);
    }
    return;
  }
  goto LAB_10090f37;
LAB_10091238:
  if (uVar8 <= uVar9) {
    FUN_10136a50(0,uVar9,uVar8,&PTR_s_C__Users_runneradmin__rustup_too_1013f598);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar8 = uVar9 + 1;
  uVar13 = local_34;
  if (local_4c - local_34 <= uVar9) {
    FUN_101359e0(&local_4c,local_34,uVar8,(LPVOID)0x1,1);
    local_58 = local_48;
    uVar13 = local_44;
  }
  memcpy((void *)((int)local_58 + uVar13),_Src,uVar8);
  uVar13 = uVar13 + uVar8;
  uVar9 = param_2[2] + uVar8;
  if ((uint)param_2[3] < param_2[2] + uVar8) {
    uVar9 = param_2[3];
  }
  local_54 = (undefined **)((int)local_54 + uVar8);
  param_2[2] = uVar9;
  goto LAB_10091283;
}
