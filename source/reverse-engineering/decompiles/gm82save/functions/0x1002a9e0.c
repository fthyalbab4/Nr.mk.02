// rea decompile_all
// name: FUN_1002a9e0
// address: 0x1002a9e0
// body: available
// range: 0x1002a9e0-0x1002ac20 inclusive
// range: 0x1002ac30-0x1002acd1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_1002a9e0(uint *param_1,uint param_2,char param_3,uint param_4,uint param_5,int param_6,
            uint param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  uint *puVar2;
  LPVOID lpMem;
  uint *puVar3;
  int *piVar4;
  HANDLE pvVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  undefined4 *puVar9;
  uint *local_84;
  uint *puStack_80;
  uint *local_7c;
  uint uStack_78;
  uint *local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint *local_64;
  uint *puStack_60;
  uint *local_5c;
  uint uStack_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  uint *local_48;
  uint *local_44;
  int local_40;
  uint local_3c;
  int local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  uint local_1c [3];

  uVar6 = param_2 >> 1;
  local_2c = param_5;
  local_68 = param_2;
  if (uVar6 < param_5) {
LAB_1002aa18:
    local_84 = (uint *)0x0;
    local_74 = (uint *)param_8;
    if (param_7 != 0) {
      puVar9 = (undefined4 *)(param_6 + 0x10);
      iVar7 = param_7 * 0x18;
      do {
        FUN_10038b40((int *)local_1c,(ushort *)*puVar9);
        if (local_1c[0] == 0xffffffff) break;
        FUN_1008f1e0(&local_64,(int *)&local_84,(int *)local_1c);
        local_74 = (uint *)local_54;
        puVar9 = puVar9 + 6;
        iVar7 = iVar7 + -0x18;
        local_7c = local_5c;
        uStack_78 = uStack_58;
        local_84 = local_64;
        puStack_80 = puStack_60;
      } while (iVar7 != 0);
      if (local_84 == (uint *)0x1) {
        param_1[2] = uStack_78;
        *(ulonglong *)param_1 = CONCAT44(local_7c,puStack_80);
        return;
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  if (param_3 == '\0') {
    if (param_4 == 0) goto LAB_1002aa18;
    local_30 = param_4 >> 1;
  }
  else {
    local_6c = uVar6;
    piVar4 = FUN_100be180();
    if (piVar4 == (int *)0x0) goto LAB_1002acc6;
    if (*piVar4 == 0) {
      piVar4 = FUN_100c0800();
    }
    else {
      piVar4 = (int *)(*piVar4 + 0x8c);
    }
    uVar6 = local_6c;
    local_30 = param_4 >> 1;
    if (param_4 >> 1 <= *(uint *)(*piVar4 + 0x104)) {
      local_30 = *(uint *)(*piVar4 + 0x104);
    }
  }
  local_54 = param_7 - uVar6;
  local_1c[0] = uVar6;
  if (param_7 < uVar6) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_101438c0);
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  local_64 = &local_68;
  local_5c = &local_30;
  puStack_60 = local_1c;
  uStack_58 = param_6 + uVar6 * 0x18;
  local_50 = param_8;
  local_4c = param_9;
  local_40 = param_6;
  local_38 = param_8;
  local_34 = param_9;
  local_48 = puStack_60;
  local_44 = local_5c;
  local_3c = uVar6;
  piVar4 = FUN_100be180();
  if (piVar4 == (int *)0x0) {
LAB_1002acc6:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  iVar7 = *piVar4;
  if (iVar7 == 0) {
    piVar4 = FUN_100c0800();
    iVar1 = *piVar4;
    piVar4 = FUN_100be180();
    if (piVar4 == (int *)0x0) goto LAB_1002acc6;
    iVar7 = *piVar4;
    if (iVar7 == 0) {
      FUN_1012f7f0((undefined8 *)&local_84,(uint *)(iVar1 + 0x40),(undefined8 *)&local_64);
      goto LAB_1002abda;
    }
    if (*(int *)(iVar7 + 0x8c) != iVar1) {
      FUN_10131dc0((undefined8 *)&local_84,(uint *)(iVar1 + 0x40),iVar7,(undefined8 *)&local_64);
      goto LAB_1002abda;
    }
  }
  FUN_10031e20(&local_84,(undefined8 *)&local_64,iVar7,0);
LAB_1002abda:
  if (puStack_80 == (uint *)0x0) {
    *param_1 = uStack_78;
    param_1[1] = (uint)local_74;
    param_1[2] = local_70;
    pcVar8 = HeapFree_exref;
    puVar3 = local_84;
    while (puVar3 != (uint *)0x0) {
      puVar2 = (uint *)puVar3[3];
      if (puVar2 != (uint *)0x0) {
        puVar2[4] = 0;
      }
      if (*puVar3 != 0) {
        lpMem = (LPVOID)puVar3[1];
        pvVar5 = GetProcessHeap();
        pcVar8 = HeapFree_exref;
        HeapFree(pvVar5,0,lpMem);
      }
      pvVar5 = GetProcessHeap();
      (*pcVar8)(pvVar5,0,puVar3);
      puVar3 = puVar2;
    }
  }
  else {
    if (uStack_78 != 0) {
      local_7c = (uint *)((int)local_7c + local_70);
      puStack_80[3] = uStack_78;
      *(uint **)(uStack_78 + 0x10) = puStack_80;
      puStack_80 = local_74;
    }
    *param_1 = (uint)local_84;
    param_1[1] = (uint)puStack_80;
    param_1[2] = (uint)local_7c;
  }
  return;
}
