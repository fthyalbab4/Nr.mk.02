// rea decompile_all
// name: FUN_1006bb30
// address: 0x1006bb30
// body: available
// range: 0x1006bb30-0x1006be79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1006bb30(undefined8 *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  SIZE_T SVar4;
  HANDLE pvVar5;
  ushort *puVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  byte *local_2c;
  byte *local_28;
  byte **local_24;
  byte *local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;

  if (param_2 == 4) {
    if (((int)param_3 < 0) || (_DAT_0077f0e0 <= param_3)) {
LAB_1006bdcd:
      local_14 = (byte *)0x0;
      local_1c = (byte *)0x0;
      local_18 = (byte *)0x1;
    }
    else {
      iVar8 = 4;
      if (_DAT_0077f0d8 != 0) {
        iVar8 = _DAT_0077f0d8;
      }
      puVar6 = *(ushort **)(iVar8 + param_3 * 4);
      if (puVar6 == (ushort *)0x0) {
        puVar6 = (ushort *)0x2;
        SVar4 = 0;
      }
      else {
        SVar4 = *(SIZE_T *)(puVar6 + -2);
      }
      FUN_10093310((undefined8 *)&local_2c,puVar6,SVar4);
      local_1c = local_2c;
      local_18 = local_28;
      local_14 = (byte *)local_24;
      if ((char)local_20 != '\x01') {
        if (local_24 == (byte **)0x0) {
          local_14 = (byte *)0x0;
        }
        else {
          pbVar1 = local_28 + (int)local_24;
          pbVar9 = local_28;
          do {
            bVar2 = *pbVar9;
            pbVar7 = pbVar9 + 1;
            if ((char)bVar2 < '\0') {
              if (bVar2 < 0xe0) {
                if (pbVar7 != pbVar1) {
                  pbVar7 = pbVar9 + 2;
                }
              }
              else if (bVar2 == 0xed) {
                if ((pbVar7 == pbVar1) || (pbVar9 + 2 == pbVar1)) break;
                if (0x9f < pbVar9[1]) {
                  local_1c = local_28;
                  local_18 = (byte *)local_24;
                  local_14 = local_20;
                  if (local_2c != (byte *)0xffffffff) {
                    if (local_2c != (byte *)0x0) {
                      pvVar5 = GetProcessHeap();
                      HeapFree(pvVar5,0,local_28);
                    }
                    goto LAB_1006bdcd;
                  }
                  break;
                }
                pbVar7 = pbVar9 + 3;
              }
              else {
                pbVar9 = pbVar9 + 2;
                if (pbVar7 == pbVar1) {
                  pbVar9 = pbVar7;
                }
                pbVar7 = pbVar9 + (pbVar9 != pbVar1);
                if (0xef < bVar2) {
                  pbVar7 = pbVar7 + (pbVar7 != pbVar1);
                }
              }
            }
            pbVar9 = pbVar7;
          } while (pbVar7 != pbVar1);
        }
      }
      if (local_1c == (byte *)0xffffffff) goto LAB_1006bdcd;
    }
    local_2c = &DAT_10141f54;
    goto LAB_1006be16;
  }
  if (param_2 != 0xb) {
    if (param_2 < 0xc) {
      local_2c = &DAT_10141f34 + param_2 * 8;
      local_24 = (byte **)&param_3;
      local_28 = &LAB_10093d10;
      local_20 = &LAB_10096fc0;
      FUN_10093970(param_1,(ushort *)&DAT_101420f6,(uint)&local_2c);
      return;
    }
    FUN_10136b52(param_2,0xc,&PTR_s_src_save_rs_101420fc);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (((int)param_3 < 0) || (_DAT_0077f3f8 <= param_3)) {
LAB_1006bdfa:
    local_14 = (byte *)0x0;
    local_1c = (byte *)0x0;
    local_18 = (byte *)0x1;
  }
  else {
    iVar8 = 4;
    if (_DAT_0077f3f4 != 0) {
      iVar8 = _DAT_0077f3f4;
    }
    iVar8 = *(int *)(iVar8 + param_3 * 4);
    if (iVar8 == 0) goto LAB_1006bdfa;
    puVar6 = *(ushort **)(iVar8 + 4);
    if (puVar6 == (ushort *)0x0) {
      puVar6 = (ushort *)0x2;
      SVar4 = 0;
    }
    else {
      SVar4 = *(SIZE_T *)(puVar6 + -2);
    }
    FUN_10093310((undefined8 *)&local_2c,puVar6,SVar4);
    local_1c = local_2c;
    local_18 = local_28;
    local_14 = (byte *)local_24;
    if ((char)local_20 != '\x01') {
      if (local_24 == (byte **)0x0) {
        local_14 = (byte *)0x0;
      }
      else {
        pbVar1 = local_28 + (int)local_24;
        pbVar9 = local_28;
        do {
          bVar2 = *pbVar9;
          pbVar7 = pbVar9 + 1;
          if ((char)bVar2 < '\0') {
            if (bVar2 < 0xe0) {
              if (pbVar7 != pbVar1) {
                pbVar7 = pbVar9 + 2;
              }
            }
            else if (bVar2 == 0xed) {
              if ((pbVar7 == pbVar1) || (pbVar9 + 2 == pbVar1)) break;
              if (0x9f < pbVar9[1]) {
                local_1c = local_28;
                local_18 = (byte *)local_24;
                local_14 = local_20;
                if (local_2c != (byte *)0xffffffff) {
                  if (local_2c != (byte *)0x0) {
                    pvVar5 = GetProcessHeap();
                    HeapFree(pvVar5,0,local_28);
                  }
                  goto LAB_1006bdfa;
                }
                break;
              }
              pbVar7 = pbVar9 + 3;
            }
            else {
              pbVar9 = pbVar9 + 2;
              if (pbVar7 == pbVar1) {
                pbVar9 = pbVar7;
              }
              pbVar7 = pbVar9 + (pbVar9 != pbVar1);
              if (0xef < bVar2) {
                pbVar7 = pbVar7 + (pbVar7 != pbVar1);
              }
            }
          }
          pbVar9 = pbVar7;
        } while (pbVar7 != pbVar1);
      }
    }
    if (local_1c == (byte *)0xffffffff) goto LAB_1006bdfa;
  }
  local_2c = &DAT_10141f8c;
LAB_1006be16:
  local_24 = &local_1c;
  local_28 = &LAB_10093d10;
  local_20 = &LAB_100922c0;
  FUN_10093970(param_1,(ushort *)&DAT_101420f6,(uint)&local_2c);
  pbVar1 = local_18;
  if (local_1c != (byte *)0x0) {
    pvVar5 = GetProcessHeap();
    HeapFree(pvVar5,0,pbVar1);
  }
  return;
}
