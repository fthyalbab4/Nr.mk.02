// rea decompile_all
// name: FUN_100753e0
// address: 0x100753e0
// body: available
// range: 0x100753e0-0x10075845 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100753e0(char *param_1,uint *param_2)

{
  int iVar1;
  LPVOID lpMem;
  HANDLE pvVar2;
  char local_78;
  undefined2 uStack_77;
  code *pcStack_75;
  undefined1 uStack_71;
  undefined4 local_6d;
  undefined7 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 *local_54;
  code *pcStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined8 local_3c;
  undefined4 local_34;
  int local_30 [4];
  undefined4 local_20;
  LPVOID local_1c;
  undefined4 local_18;
  undefined4 local_14;

  iVar1 = *(int *)(_DAT_00788958 + 0x388);
  FUN_10111020(param_2,(byte *)"game_information.txt",0x14);
  FUN_100759c0((undefined1 *)&local_54,(void *)param_2[1],param_2[2]);
  if ((char)local_54 != -1) {
    uStack_68 = (undefined7)(CONCAT44(uStack_40,local_44) >> 8);
    *(undefined8 *)(param_1 + 0x18) = local_3c;
    *(undefined4 *)(param_1 + 0x20) = local_34;
    *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_68,(undefined1)local_44);
    *(ulonglong *)(param_1 + 1) =
         CONCAT17((undefined1)uStack_4c,CONCAT43(pcStack_50,local_54._1_3_));
    *(ulonglong *)(param_1 + 9) = CONCAT17((undefined1)local_44,CONCAT43(uStack_48,uStack_4c._1_3_))
    ;
    *param_1 = (char)local_54;
    return;
  }
  local_54 = (undefined8 *)(iVar1 + 0x6c);
  pcStack_50 = (code *)&LAB_10096fc0;
  local_20 = uStack_40;
  FUN_10092aa0((undefined8 *)&local_78,local_30,(ushort *)&DAT_10142797,(uint)&local_54);
  if (local_78 == -1) {
    local_54 = &local_60;
    pcStack_50 = (code *)&LAB_10097da0;
    local_60 = CONCAT71(local_60._1_7_,DAT_0077b578);
    FUN_10092aa0((undefined8 *)&local_78,local_30,(ushort *)&DAT_101427a2,(uint)&local_54);
    if (local_78 == -1) {
      FUN_10049460((undefined1 *)&local_54,_DAT_0077b57c);
      pcStack_75 = pcStack_50;
      if ((char)local_54 != -1) {
        local_6d = uStack_48;
        local_78 = (char)((uint)local_54 >> 8);
        uStack_77 = (undefined2)((uint)local_54 >> 0x10);
        *(undefined8 *)(param_1 + 0x18) = local_3c;
        *(undefined4 *)(param_1 + 0x20) = local_34;
        *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_40,local_44);
        *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_48,uStack_4c);
        *(ulonglong *)(param_1 + 1) =
             CONCAT17((undefined1)uStack_4c,CONCAT43(pcStack_50,local_54._1_3_));
        *param_1 = (char)local_54;
        goto LAB_1007550e;
      }
      local_60 = CONCAT44(uStack_4c,pcStack_50);
      local_54 = &local_60;
      pcStack_50 = (code *)&LAB_100922c0;
      local_6d = uStack_48;
      local_58 = uStack_48;
      uStack_71 = (undefined1)uStack_4c;
      FUN_10092aa0((undefined8 *)&local_18,local_30,(ushort *)&DAT_101427b2,(uint)&local_54);
      lpMem = local_60._4_4_;
      if ((char)local_18 != -1) {
        *param_1 = '\0';
        *(undefined4 *)(param_1 + 8) = local_14;
        *(undefined4 *)(param_1 + 4) = local_18;
        if ((int)local_60 != 0) {
          pvVar2 = GetProcessHeap();
          HeapFree(pvVar2,0,lpMem);
        }
        goto LAB_1007550e;
      }
      if ((int)local_60 != 0) {
        local_1c = local_60._4_4_;
        pvVar2 = GetProcessHeap();
        HeapFree(pvVar2,0,local_1c);
      }
      local_54 = (undefined8 *)&DAT_0077b580;
      pcStack_50 = FUN_1009c910;
      FUN_10092aa0((undefined8 *)&local_78,local_30,(ushort *)&DAT_101427bf,(uint)&local_54);
      if (local_78 == -1) {
        local_54 = (undefined8 *)&DAT_0077b584;
        pcStack_50 = FUN_1009c910;
        FUN_10092aa0((undefined8 *)&local_78,local_30,(ushort *)&DAT_101427c9,(uint)&local_54);
        if (local_78 == -1) {
          local_54 = (undefined8 *)&DAT_0077b588;
          pcStack_50 = FUN_1009c910;
          FUN_10092aa0((undefined8 *)&local_78,local_30,(ushort *)&DAT_101427d2,(uint)&local_54);
          if (local_78 == -1) {
            local_54 = (undefined8 *)&DAT_0077b58c;
            pcStack_50 = FUN_1009c910;
            FUN_10092aa0((undefined8 *)&local_78,local_30,(ushort *)&DAT_101427dd,(uint)&local_54);
            if (local_78 == -1) {
              local_54 = &local_60;
              pcStack_50 = (code *)&LAB_10097da0;
              local_60 = CONCAT71(local_60._1_7_,DAT_0077b590);
              FUN_10092aa0((undefined8 *)&local_78,local_30,(ushort *)&DAT_101427e9,(uint)&local_54)
              ;
              if (local_78 == -1) {
                local_54 = &local_60;
                pcStack_50 = (code *)&LAB_10097da0;
                local_60 = CONCAT71(local_60._1_7_,DAT_0077b594);
                FUN_10092aa0((undefined8 *)&local_78,local_30,(ushort *)&DAT_101427f5,
                             (uint)&local_54);
                if (local_78 == -1) {
                  local_54 = &local_60;
                  pcStack_50 = (code *)&LAB_10097da0;
                  local_60 = CONCAT71(local_60._1_7_,DAT_0077b598);
                  FUN_10092aa0((undefined8 *)&local_78,local_30,(ushort *)&DAT_10142313,
                               (uint)&local_54);
                  if (local_78 == -1) {
                    local_54 = &local_60;
                    pcStack_50 = (code *)&LAB_10097da0;
                    local_60 = CONCAT71(local_60._1_7_,DAT_0077b59c);
                    FUN_10092aa0((undefined8 *)&local_78,local_30,(ushort *)&DAT_10142804,
                                 (uint)&local_54);
                    if (local_78 == -1) {
                      FUN_10053090((undefined8 *)&local_54,(int)local_30);
                      if (((char)local_54 == -1) || ((char)local_54 == -1)) {
                        FUN_10005aa0(local_30);
                        FUN_10110c70(param_2,"rtf",3);
                        local_54 = (undefined8 *)FUN_10003510((byte *)param_2[1],param_2[2]);
                        (*(code *)0x43e204)();
                        (*(code *)0x407ea8)();
                        FUN_1011b820((int)param_2);
                        *param_1 = -1;
                        return;
                      }
                      *param_1 = '\0';
                      *(undefined8 **)(param_1 + 4) = local_54;
                      *(code **)(param_1 + 8) = pcStack_50;
                      goto LAB_1007550e;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *param_1 = '\0';
  *(uint *)(param_1 + 8) = CONCAT13(uStack_71,pcStack_75._1_3_);
  *(uint *)(param_1 + 4) = CONCAT13(pcStack_75._0_1_,CONCAT21(uStack_77,local_78));
LAB_1007550e:
  FUN_10005aa0(local_30);
  return;
}
