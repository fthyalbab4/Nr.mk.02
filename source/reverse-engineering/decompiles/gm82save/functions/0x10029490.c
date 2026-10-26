// rea decompile_all
// name: FUN_10029490
// address: 0x10029490
// body: available
// range: 0x10029490-0x100294f3 inclusive
// range: 0x10029500-0x1002961b inclusive
// range: 0x10029620-0x100297e5 inclusive
// range: 0x100297f0-0x10029895 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10029490(int *param_1,uint param_2,char param_3,uint param_4,uint *param_5,int *param_6,
            uint *param_7,undefined4 param_8,undefined4 param_9)

{
  uint **ppuVar1;
  int iVar2;
  int *piVar3;
  LPVOID lpMem;
  HANDLE pvVar4;
  int *piVar5;
  int iVar6;
  uint **ppuVar7;
  uint *puVar8;
  uint *puVar9;
  code *pcVar10;
  uint **unaff_EDI;
  uint **ppuVar11;
  int *local_94;
  uint *local_90;
  int *local_88;
  undefined8 local_80;
  int local_78;
  int iStack_74;
  undefined8 local_70;
  uint local_68;
  int *local_64;
  int *local_60;
  uint local_5c;
  uint *local_58;
  uint **ppuStack_54;
  uint *local_50;
  int *piStack_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  uint **local_3c;
  uint *local_38;
  int *local_34;
  uint *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  uint *local_20;
  uint *local_1c [3];

  puVar8 = (uint *)(param_2 >> 1);
  local_20 = param_5;
  local_5c = param_2;
  if (puVar8 < param_5) {
LAB_100294cc:
    if (param_7 != (uint *)0x0) {
      local_64 = param_6 + (int)param_7;
      local_68 = 0;
      pcVar10 = HeapFree_exref;
      do {
        local_80 = local_80 & 0xffffffff00000000;
        local_94 = (int *)0x0;
        local_90 = (uint *)0x0;
        local_70 = CONCAT44(param_9,param_8);
        ppuVar7 = (uint **)0x0;
        local_60 = param_6;
        if (*param_6 != 0) {
          FUN_10038b40((int *)local_1c,*(ushort **)(*param_6 + 4));
          FUN_1008f1e0(&local_58,(int *)&local_80,(int *)local_1c);
          uStack_44 = param_9;
          local_94 = (int *)0x0;
          local_90 = (uint *)0x0;
          local_80 = CONCAT44(ppuStack_54,local_58);
          local_70 = CONCAT44(param_9,local_48);
          ppuVar7 = (uint **)0x0;
          if (local_58 == (uint *)0x1) {
            local_90 = local_50;
            local_94 = piStack_4c;
            ppuVar7 = ppuStack_54;
          }
        }
        puVar9 = local_90;
        ppuVar11 = ppuVar7;
        piVar5 = local_94;
        if ((local_68 & 1) != 0) {
          if (puVar8 == (uint *)0x0) {
            while (piVar5 = local_94, unaff_EDI != (uint **)0x0) {
              ppuVar1 = (uint **)unaff_EDI[3];
              if (ppuVar1 != (uint **)0x0) {
                ppuVar1[4] = (uint *)0x0;
              }
              if (*unaff_EDI != (uint *)0x0) {
                puVar8 = unaff_EDI[1];
                pvVar4 = GetProcessHeap();
                pcVar10 = HeapFree_exref;
                HeapFree(pvVar4,0,puVar8);
              }
              pvVar4 = GetProcessHeap();
              (*pcVar10)(pvVar4,0,unaff_EDI);
              unaff_EDI = ppuVar1;
            }
          }
          else {
            puVar9 = puVar8;
            ppuVar11 = unaff_EDI;
            piVar5 = local_88;
            if (ppuVar7 != (uint **)0x0) {
              puVar8[3] = (uint)ppuVar7;
              ppuVar7[4] = puVar8;
              puVar9 = local_90;
              piVar5 = (int *)((int)local_88 + (int)local_94);
            }
          }
        }
        local_88 = piVar5;
        local_68 = CONCAT31((int3)((uint)ppuVar7 >> 8),1);
        param_6 = local_60 + 1;
        puVar8 = puVar9;
        unaff_EDI = ppuVar11;
      } while (param_6 != local_64);
      *param_1 = (int)ppuVar11;
      param_1[1] = (int)puVar9;
      param_1[2] = (int)local_88;
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  if (param_3 == '\0') {
    unaff_EDI = (uint **)0x0;
    if (param_4 == 0) goto LAB_100294cc;
    local_24 = param_4 >> 1;
  }
  else {
    piVar5 = FUN_100be180();
    if (piVar5 == (int *)0x0) goto LAB_1002988a;
    if (*piVar5 == 0) {
      piVar5 = FUN_100c0800();
    }
    else {
      piVar5 = (int *)(*piVar5 + 0x8c);
    }
    local_24 = param_4 >> 1;
    if (param_4 >> 1 <= *(uint *)(*piVar5 + 0x104)) {
      local_24 = *(uint *)(*piVar5 + 0x104);
    }
  }
  local_48 = (int)param_7 - (int)puVar8;
  local_1c[0] = puVar8;
  if (param_7 < puVar8) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_101438c0);
                    /* WARNING: Does not return */
    pcVar10 = (code *)invalidInstructionException();
    (*pcVar10)();
  }
  local_58 = &local_5c;
  local_50 = &local_24;
  piStack_4c = param_6 + (int)puVar8;
  ppuStack_54 = local_1c;
  uStack_44 = param_8;
  local_40 = param_9;
  local_34 = param_6;
  local_2c = param_8;
  local_28 = param_9;
  local_3c = ppuStack_54;
  local_38 = local_50;
  local_30 = puVar8;
  piVar5 = FUN_100be180();
  if (piVar5 == (int *)0x0) {
LAB_1002988a:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar10 = (code *)invalidInstructionException();
    (*pcVar10)();
  }
  iVar6 = *piVar5;
  if (iVar6 == 0) {
    piVar5 = FUN_100c0800();
    iVar2 = *piVar5;
    piVar5 = FUN_100be180();
    if (piVar5 == (int *)0x0) goto LAB_1002988a;
    iVar6 = *piVar5;
    if (iVar6 == 0) {
      FUN_1012f370(&local_80,(uint *)(iVar2 + 0x40),(undefined8 *)&local_58);
      goto LAB_1002979e;
    }
    if (*(int *)(iVar6 + 0x8c) != iVar2) {
      FUN_10131980(&local_80,(uint *)(iVar2 + 0x40),iVar6,(undefined8 *)&local_58);
      goto LAB_1002979e;
    }
  }
  FUN_10031060((undefined4 *)&local_80,(undefined8 *)&local_58,iVar6,0);
LAB_1002979e:
  if (local_80._4_4_ == 0) {
    *param_1 = iStack_74;
    param_1[1] = (int)local_70;
    param_1[2] = local_70._4_4_;
    piVar5 = (int *)local_80;
    pcVar10 = HeapFree_exref;
    while (piVar5 != (int *)0x0) {
      piVar3 = (int *)piVar5[3];
      if (piVar3 != (int *)0x0) {
        piVar3[4] = 0;
      }
      if (*piVar5 != 0) {
        lpMem = (LPVOID)piVar5[1];
        pvVar4 = GetProcessHeap();
        pcVar10 = HeapFree_exref;
        HeapFree(pvVar4,0,lpMem);
      }
      pvVar4 = GetProcessHeap();
      (*pcVar10)(pvVar4,0,piVar5);
      piVar5 = piVar3;
    }
  }
  else {
    if (iStack_74 != 0) {
      local_78 = local_78 + local_70._4_4_;
      *(int *)(local_80._4_4_ + 0xc) = iStack_74;
      *(int *)(iStack_74 + 0x10) = local_80._4_4_;
      local_80._4_4_ = (int)local_70;
    }
    *param_1 = (int)(int *)local_80;
    param_1[1] = local_80._4_4_;
    param_1[2] = local_78;
  }
  return;
}
