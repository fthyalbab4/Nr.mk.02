// rea decompile_all
// name: FUN_10114a70
// address: 0x10114a70
// body: available
// range: 0x10114a70-0x10114d3a inclusive
// range: 0x10114d40-0x10114de5 inclusive
// range: 0x10114df0-0x10115109 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10114a70(undefined8 *param_1,uint *param_2,undefined1 *param_3)

{
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  int iVar4;
  HANDLE hHeap;
  void *pvVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  void *pvVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  int local_bc;
  void *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  uint local_8c;
  int local_88;
  undefined8 *local_84;
  void *local_80;
  uint local_7c;
  uint local_78;
  void *local_74;
  uint local_70;
  uint local_6c;
  void *local_68;
  uint local_64;
  void *local_60;
  uint local_5c;
  void *local_58;
  int local_54;
  undefined4 local_50;
  void *local_4c;
  uint local_48;
  void *local_44;
  uint local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;

  uVar11 = param_2[2];
  uVar9 = *param_2;
  uVar6 = *(ushort *)(uVar9 + 0x1ea);
  iVar4 = uVar11 * 0x1c;
  local_24 = *(undefined4 *)(uVar9 + 0xcc + iVar4);
  iVar13 = ~uVar11 + (uint)uVar6;
  local_2c = *(undefined8 *)(uVar9 + 0xc4 + iVar4);
  local_3c = *(undefined8 *)(uVar9 + 0xb4 + iVar4);
  local_34 = *(undefined8 *)(uVar9 + 0xbc + iVar4);
  local_84 = param_1;
  memmove((void *)(uVar9 + 0xb4 + iVar4),(void *)(uVar9 + 0xd0 + iVar4),iVar13 * 0x1c);
  iVar4 = uVar11 * 0x10;
  uVar15 = *(undefined8 *)(uVar9 + 8 + iVar4);
  uStack_20 = (undefined4)*(undefined8 *)(uVar9 + iVar4);
  uStack_1c = (undefined4)((ulonglong)*(undefined8 *)(uVar9 + iVar4) >> 0x20);
  uStack_18 = (undefined4)uVar15;
  uStack_14 = (undefined4)((ulonglong)uVar15 >> 0x20);
  memmove((void *)(uVar9 + iVar4),(void *)(uVar9 + 0x10 + iVar4),iVar13 * 0x10);
  uVar10 = uVar6 - 1;
  *(ushort *)(uVar9 + 0x1ea) = (ushort)uVar10;
  uVar7 = param_2[1];
  uVar15 = CONCAT44(uVar7,uVar9);
  if ((ushort)uVar10 < 5) {
    iVar4 = *(int *)(uVar9 + 0xb0);
    if (iVar4 == 0) {
      pvVar5 = *(void **)(uVar9 + 0xb0);
    }
    else {
      uVar8 = (uint)*(ushort *)(uVar9 + 0x1e8);
      iVar13 = uVar7 + 1;
      if (uVar8 == 0) {
        if (*(short *)(iVar4 + 0x1ea) == 0) {
LAB_101150d8:
          FUN_101369c0("internal error: entered unreachable code: empty internal node",0x7b,
                       &PTR_s_C__Users_runneradmin__rustup_too_10157dbc);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        local_b0 = CONCAT44(iVar13,iVar4);
        local_a8 = (ulonglong)uVar9 << 0x20;
        local_a0 = CONCAT44(*(int *)(iVar4 + 0x1f0),uVar7);
        if ((uVar10 & 0xffff) + 1 + (uint)*(ushort *)(*(int *)(iVar4 + 0x1f0) + 0x1ea) < 0xc) {
          if ((uVar10 & 0xffff) < uVar11) goto LAB_101150f1;
          local_98 = uVar7;
          uVar15 = FUN_10115440((int *)&local_b0);
          pvVar5 = *(void **)((int)uVar15 + 0xb0);
        }
        else {
          local_98 = uVar7;
          FUN_10115710((int *)&local_b0,1);
          pvVar5 = *(void **)(uVar9 + 0xb0);
        }
      }
      else {
        iVar1 = *(int *)(iVar4 + 0x1e8 + uVar8 * 4);
        local_b0 = CONCAT44(iVar13,iVar4);
        local_a8 = CONCAT44(iVar1,uVar8 - 1);
        local_a0 = CONCAT44(uVar9,uVar7);
        uVar8 = (uint)*(ushort *)(iVar1 + 0x1ea);
        if (uVar8 + 1 + (uVar10 & 0xffff) < 0xc) {
          if ((uVar10 & 0xffff) < uVar11) {
LAB_101150f1:
            local_b0 = CONCAT44(iVar13,iVar4);
            local_98 = uVar7;
            FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_10156544);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          local_98 = uVar7;
          uVar15 = FUN_10115440((int *)&local_b0);
          uVar11 = uVar11 + 1 + uVar8;
          pvVar5 = *(void **)((int)uVar15 + 0xb0);
        }
        else {
          local_98 = uVar7;
          FUN_10115110((int *)&local_b0,1);
          uVar11 = uVar11 + 1;
          pvVar5 = *(void **)(uVar9 + 0xb0);
        }
      }
    }
    if (pvVar5 != (void *)0x0) {
      local_bc = (int)((ulonglong)uVar15 >> 0x20);
      local_90 = (undefined4)uVar15;
      uVar6 = *(ushort *)((int)pvVar5 + 0x1ea);
      if (uVar6 < 5) {
        uVar9 = local_bc + 1;
        do {
          pvVar2 = *(void **)((int)pvVar5 + 0xb0);
          uVar7 = (uint)uVar6;
          if (pvVar2 == (void *)0x0) {
            uVar15 = CONCAT44(local_bc,local_90);
            if (uVar7 == 0) {
              *param_3 = 1;
              uVar15 = CONCAT44(local_bc,local_90);
            }
            break;
          }
          uVar10 = (uint)*(ushort *)((int)pvVar5 + 0x1e8);
          local_78 = uVar9 + 1;
          if (uVar10 == 0) {
            uVar6 = *(ushort *)((int)pvVar2 + 0x1ea);
            if (uVar6 == 0) goto LAB_101150d8;
            local_b8 = *(void **)((int)pvVar2 + 0x1f0);
            local_54 = uVar9 + 1;
            local_50 = 0;
            local_94 = (uint)*(ushort *)((int)local_b8 + 0x1ea);
            uVar8 = uVar7 + 1 + local_94;
            local_58 = pvVar2;
            local_4c = pvVar5;
            local_48 = uVar9;
            local_44 = local_b8;
            local_40 = uVar9;
            if (0xb < uVar8) {
              FUN_10115710((int *)&local_58,5 - uVar7);
              uVar15 = CONCAT44(local_bc,local_90);
              break;
            }
            uVar10 = 0;
            pvVar12 = pvVar5;
            uVar14 = uVar7;
          }
          else {
            local_68 = *(void **)((int)pvVar2 + uVar10 * 4 + 0x1e8);
            uVar10 = uVar10 - 1;
            uVar14 = (uint)*(ushort *)((int)local_68 + 0x1ea);
            local_74 = pvVar2;
            local_70 = local_78;
            local_6c = uVar10;
            local_64 = uVar9;
            local_60 = pvVar5;
            local_5c = uVar9;
            if (0xb < uVar7 + 1 + uVar14) {
              FUN_10115110((int *)&local_74,5 - uVar7);
              uVar15 = CONCAT44(local_bc,local_90);
              break;
            }
            uVar8 = uVar14 + 1 + uVar7;
            uVar6 = *(ushort *)((int)pvVar2 + 0x1ea);
            pvVar12 = local_68;
            local_b8 = pvVar5;
            local_94 = uVar7;
          }
          iVar13 = uVar14 + 1;
          *(short *)((int)pvVar12 + 0x1ea) = (short)uVar8;
          local_7c = (uint)uVar6;
          iVar4 = uVar10 * 0x1c;
          local_80 = (void *)((int)pvVar2 + iVar4 + 0xb4);
          local_88 = ~uVar10 + local_7c;
          local_98 = *(uint *)((int)pvVar2 + iVar4 + 0xcc);
          local_a0 = *(undefined8 *)((int)pvVar2 + iVar4 + 0xc4);
          local_b0 = *(undefined8 *)((int)pvVar2 + iVar4 + 0xb4);
          local_a8 = *(undefined8 *)((int)pvVar2 + iVar4 + 0xbc);
          local_8c = uVar8;
          memmove(local_80,(void *)((int)pvVar2 + iVar4 + 0xd0),local_88 * 0x1c);
          uVar9 = local_94;
          iVar4 = uVar14 * 0x1c;
          *(undefined8 *)((int)pvVar12 + iVar4 + 0xb4) = local_b0;
          *(longlong *)((int)pvVar12 + iVar4 + 0xbc) = local_a8;
          *(undefined8 *)((int)pvVar12 + iVar4 + 0xc4) = local_a0;
          *(uint *)((int)pvVar12 + iVar4 + 0xcc) = local_98;
          memcpy((void *)((int)pvVar12 + iVar13 * 0x1c + 0xb4),(void *)((int)local_b8 + 0xb4),
                 local_94 * 0x1c);
          iVar4 = uVar10 * 0x10;
          local_b0 = *(undefined8 *)((int)pvVar2 + iVar4);
          local_a8 = *(longlong *)((int)pvVar2 + iVar4 + 8);
          memmove((void *)((int)pvVar2 + iVar4),(void *)((int)pvVar2 + iVar4 + 0x10),local_88 << 4);
          *(undefined8 *)((int)pvVar12 + uVar14 * 0x10) = local_b0;
          *(longlong *)((int)pvVar12 + uVar14 * 0x10 + 8) = local_a8;
          memcpy((void *)(iVar13 * 0x10 + (int)pvVar12),local_b8,uVar9 << 4);
          uVar7 = uVar10 + 1;
          memmove((void *)((int)pvVar2 + uVar10 * 4 + 0x1f0),
                  (void *)((int)pvVar2 + uVar10 * 4 + 500),local_88 << 2);
          uVar9 = local_78;
          if (uVar7 < local_7c) {
            do {
              iVar4 = *(int *)((int)pvVar2 + uVar7 * 4 + 0x1ec);
              *(void **)(iVar4 + 0xb0) = pvVar2;
              *(short *)(iVar4 + 0x1e8) = (short)uVar7;
              uVar7 = uVar7 + 1;
            } while (local_7c != uVar7);
          }
          *(short *)((int)pvVar2 + 0x1ea) = *(short *)((int)pvVar2 + 0x1ea) + -1;
          if (1 < local_78) {
            if (local_94 + 1 != local_8c - uVar14) {
              FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_10156a98);
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            memcpy((void *)((int)pvVar12 + iVar13 * 4 + 0x1ec),(void *)((int)local_b8 + 0x1ec),
                   (local_94 + 1) * 4);
            do {
              iVar4 = *(int *)((int)pvVar12 + iVar13 * 4 + 0x1ec);
              *(void **)(iVar4 + 0xb0) = pvVar12;
              *(short *)(iVar4 + 0x1e8) = (short)iVar13;
              iVar13 = iVar13 + 1;
            } while (local_8c + 1 != iVar13);
          }
          hHeap = GetProcessHeap();
          HeapFree(hHeap,0,local_b8);
          uVar6 = *(ushort *)((int)pvVar2 + 0x1ea);
          pvVar5 = pvVar2;
          uVar15 = CONCAT44(local_bc,local_90);
        } while (uVar6 < 5);
      }
    }
  }
  *(undefined4 *)(local_84 + 5) = uStack_14;
  local_84[3] = CONCAT44(uStack_20,local_24);
  local_84[2] = local_2c;
  local_84[4] = CONCAT44(uStack_18,uStack_1c);
  local_84[1] = local_34;
  *local_84 = local_3c;
  *(undefined8 *)((int)local_84 + 0x2c) = uVar15;
  *(uint *)((int)local_84 + 0x34) = uVar11;
  return;
}
