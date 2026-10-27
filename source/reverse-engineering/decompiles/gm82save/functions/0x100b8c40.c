// rea decompile_all
// name: FUN_100b8c40
// address: 0x100b8c40
// body: available
// range: 0x100b8c40-0x100b8de9 inclusive
// range: 0x100b8df0-0x100b913e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x100b8cd5) */
/* WARNING: Removing unreachable block (ram,0x100b8ce0) */
/* WARNING: Removing unreachable block (ram,0x100b8ce6) */
/* WARNING: Removing unreachable block (ram,0x100b8cec) */
/* WARNING: Removing unreachable block (ram,0x100b8cf2) */
/* WARNING: Removing unreachable block (ram,0x100b8cf5) */
/* WARNING: Removing unreachable block (ram,0x100b8d05) */
/* WARNING: Removing unreachable block (ram,0x100b8d3c) */
/* WARNING: Removing unreachable block (ram,0x100b8d44) */
/* WARNING: Removing unreachable block (ram,0x100b8d6c) */
/* WARNING: Removing unreachable block (ram,0x100b9094) */

void __fastcall FUN_100b8c40(undefined1 *param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  LPVOID pvVar5;
  undefined1 *puVar6;
  HANDLE pvVar7;
  uint uVar8;
  uint *puVar9;
  char cVar10;
  undefined4 unaff_EBX;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *local_3f8;
  char cVar14;
  uint *local_3e0;
  uint *local_3d8;
  uint *local_3cc;
  uint uStack_3c8;
  uint *puStack_3c4;
  uint *local_3c0 [2];
  uint *puStack_3b8;
  char cStack_3b4;
  int iStack_3b0;
  uint *puStack_3ac;
  int iStack_60;
  LPVOID pvStack_5c;
  int iStack_54;
  LPVOID pvStack_50;
  LPVOID pvStack_48;
  LPVOID pvStack_44;
  LPVOID pvStack_30;

  if (*(char *)(param_2 + 0x1a8) == '\0') {
    uVar4 = 2;
    if (*(char *)(param_2 + 0x1ab) == '\0') {
      *(undefined1 *)(param_2 + 0x1ab) = 1;
      if (*(int *)(param_2 + 0x60) == -1) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101505dc);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      iVar1 = *(int *)(param_2 + 0x14);
      iVar13 = 0;
      iVar12 = *(int *)(param_2 + 0x18);
      while (*(int *)(param_2 + 0x18) != iVar13) {
        if (*(char *)(iVar1 + iVar13) == '\0') {
          if (((iVar13 != 0) && (iVar12 + -1 != 0)) && (*(char *)(iVar1 + 1 + iVar13) == '\0')) {
            uVar11 = iVar12 - 2;
            puVar2 = *(uint **)(param_2 + 0x1a4);
            FUN_1009e3d0(local_3c0);
            local_3f8 = (uint *)0x400;
            if (puVar2 < (uint *)0x400) {
              local_3f8 = puVar2;
            }
            if (puVar2 == (uint *)0x0) {
              pvVar5 = (LPVOID)0x1;
            }
            else {
              pvVar5 = FUN_10107380(8,(SIZE_T)local_3f8);
              if (pvVar5 == (LPVOID)0x0) {
                FUN_101366bc(1);
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
            }
            uVar8 = 0;
            puVar9 = (uint *)(iVar1 + iVar13 + 2);
            local_3e0 = local_3f8;
            local_3d8 = local_3f8;
            goto LAB_100b8e08;
          }
          break;
        }
        iVar13 = iVar13 + 1;
        iVar12 = iVar12 + -1;
        if (iVar13 == 0x51) break;
      }
LAB_100b90af:
      uVar4 = 2;
    }
  }
  else {
    *param_1 = 5;
    *(undefined4 *)(param_1 + 1) = 0x50434369;
    uVar4 = 0xff;
  }
  param_1[0x19] = uVar4;
  return;
LAB_100b8e08:
  puVar9 = (uint *)(uVar8 + (int)puVar9);
  FUN_1009e580((uint *)&local_3cc,(uint *)local_3c0,puVar9,(uint *)(uVar11 - uVar8),(int)pvVar5,
               local_3f8,(uint *)0x0,'\x01');
  cVar14 = (char)puVar9;
  if (cStack_3b4 != '\0') {
    if (uStack_3c8 != 0) {
      pvVar7 = GetProcessHeap();
      HeapFree(pvVar7,0,pvVar5);
    }
    pvVar7 = GetProcessHeap();
    HeapFree(pvVar7,0,pvStack_48);
    if (iStack_60 != 0) {
      pvVar7 = GetProcessHeap();
      HeapFree(pvVar7,0,pvStack_5c);
    }
    pvVar7 = GetProcessHeap();
    HeapFree(pvVar7,0,pvStack_44);
    if (iStack_54 != 0) {
      cVar10 = '\x01';
      uStack_3c8 = 0xffffffff;
LAB_100b905e:
      pvVar7 = GetProcessHeap();
      HeapFree(pvVar7,0,pvStack_50);
      if (cVar10 == '\0') {
LAB_100b908a:
        *(uint **)(param_2 + 0x1a4) = puVar2;
        if (0 < *(int *)(param_2 + 0x150)) {
          pvVar5 = *(LPVOID *)(param_2 + 0x154);
          pvVar7 = GetProcessHeap();
          HeapFree(pvVar7,0,pvVar5);
        }
        *(uint *)(param_2 + 0x150) = uStack_3c8;
        *(uint **)(param_2 + 0x154) = local_3f8;
        *(undefined4 *)(param_2 + 0x158) = 0;
      }
      else {
LAB_100b9079:
        if (uStack_3c8 - 1 < 0xfffffffe) {
          pvVar7 = GetProcessHeap();
          HeapFree(pvVar7,0,local_3f8);
        }
      }
    }
    goto LAB_100b90af;
  }
  local_3cc = puStack_3ac;
  if (((char)((uint)unaff_EBX >> 0x18) == '\a') || (puStack_3ac == puStack_3b8)) {
    uVar11 = (int)puStack_3ac - (int)local_3e0;
    if (local_3e0 <= puStack_3ac && uVar11 != 0) {
      if (uStack_3c8 - (int)local_3e0 < uVar11) {
        pvVar5 = (LPVOID)0x1;
        uVar8 = uVar11;
        FUN_101359e0(&uStack_3c8,(uint)local_3e0,uVar11,(LPVOID)0x1,1);
        cVar14 = (char)uVar8;
        local_3e0 = local_3c0[0];
      }
      puVar9 = puStack_3c4;
      puVar6 = (undefined1 *)((int)puStack_3c4 + (int)local_3e0);
      if (1 < uVar11) {
        pvVar5 = (LPVOID)0x0;
        memset(puVar6,0,uVar11 - 1);
        cVar14 = (char)puVar6;
        local_3e0 = (uint *)((int)local_3e0 + (uVar11 - 1));
        puVar6 = (undefined1 *)((int)puVar9 + (int)local_3e0);
      }
      *puVar6 = 0;
      puStack_3ac = (uint *)((int)local_3e0 + 1);
    }
    cVar10 = (char)pvVar5;
    local_3cc = puStack_3ac;
    pvVar7 = GetProcessHeap();
    HeapFree(pvVar7,0,pvStack_30);
    if (iStack_60 != 0) {
      pvVar7 = GetProcessHeap();
      HeapFree(pvVar7,0,pvStack_5c);
    }
    pvVar7 = GetProcessHeap();
    HeapFree(pvVar7,0,pvStack_44);
    local_3f8 = puStack_3c4;
    if (iStack_54 != 0) goto LAB_100b905e;
    if (cVar14 == '\a') goto LAB_100b908a;
    goto LAB_100b9079;
  }
  uVar8 = uVar8 + iStack_3b0;
  puVar9 = puStack_3ac + 0x2000;
  if (puStack_3b8 < puStack_3ac + 0x2000) {
    puVar9 = puStack_3b8;
  }
  uVar11 = (int)puVar9 - (int)local_3e0;
  if (local_3e0 <= puVar9 && uVar11 != 0) {
    if (uStack_3c8 - (int)local_3e0 < uVar11) {
      pvVar5 = (LPVOID)0x1;
      local_3f8 = (uint *)0x100b8efb;
      FUN_101359e0(&uStack_3c8,(uint)local_3e0,uVar11,(LPVOID)0x1,1);
      local_3d8 = puStack_3c4;
      local_3e0 = local_3c0[0];
    }
    puVar6 = (undefined1 *)((int)local_3d8 + (int)local_3e0);
    if (1 < uVar11) {
      pvVar5 = (LPVOID)0x0;
      local_3f8 = (uint *)0x100b8eb1;
      memset(puVar6,0,uVar11 - 1);
      local_3e0 = (uint *)((int)local_3e0 + (uVar11 - 1));
      puVar6 = (undefined1 *)((int)local_3d8 + (int)local_3e0);
    }
    *puVar6 = 0;
    puVar9 = (uint *)((int)local_3e0 + 1);
  }
  local_3e0 = puVar9;
  uVar11 = param_2;
  puVar9 = puVar2;
  local_3c0[0] = local_3e0;
  if (param_2 < uVar8) {
    FUN_10136a50(uVar8,param_2,param_2,&PTR_s_C__Users_runneradmin__cargo_regi_1014f2bc);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  goto LAB_100b8e08;
}
