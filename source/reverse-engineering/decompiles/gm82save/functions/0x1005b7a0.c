// rea decompile_all
// name: FUN_1005b7a0
// address: 0x1005b7a0
// body: available
// range: 0x1005b7a0-0x1005c646 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_1005b7a0(undefined8 *param_1,uint *param_2,char param_3,char param_4,char param_5,char param_6,
            char param_7,char param_8,char param_9,char param_10,char param_11)

{
  int local_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 local_5cc;
  undefined4 uStack_5c8;
  undefined4 local_5c4;
  undefined4 uStack_5c0;
  undefined4 local_5bc;
  undefined4 uStack_5b8;
  undefined4 local_5b4;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_408;
  undefined8 local_400;
  int local_3f8 [8];
  undefined8 local_3d8;
  undefined8 local_3d0;
  int local_3c8 [8];
  undefined8 local_3a8;
  undefined8 local_3a0;
  int local_398 [8];
  undefined8 local_378;
  undefined8 local_370;
  int local_368 [8];
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_314;
  undefined8 local_30c;
  undefined4 local_2e0;
  undefined8 local_2dc;
  undefined8 local_2d4;
  undefined4 local_2a8;
  undefined8 local_2a4;
  undefined8 local_29c;
  undefined4 local_270;
  undefined8 local_26c;
  undefined8 local_264;
  undefined4 local_238;
  undefined8 local_234;
  undefined8 local_22c;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined8 local_1f4;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined4 local_190;
  undefined8 local_18c;
  undefined8 local_184;
  undefined4 local_158;
  undefined8 local_154;
  undefined8 local_14c;
  int local_140 [8];
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  int local_d8 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  int local_a8 [8];
  undefined8 local_88;
  undefined8 local_80;
  int local_78 [8];
  undefined8 local_58;
  undefined8 local_50;
  int local_48 [8];
  undefined8 local_28;
  undefined8 local_20;

  FUN_10056cd0(&local_5d8,&DAT_101402ca,8,param_3,param_2);
  if (local_5d8 == 1) {
    *(undefined4 *)(param_1 + 4) = local_5b4;
    param_1[3] = CONCAT44(uStack_5b8,local_5bc);
    param_1[2] = CONCAT44(uStack_5c0,local_5c4);
    param_1[1] = CONCAT44(uStack_5c8,local_5cc);
    *param_1 = CONCAT44(uStack_5d0,uStack_5d4);
    *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  }
  else {
    local_30c = local_5a8;
    local_314 = local_5b0;
    local_3d8 = local_5b0;
    local_3d0 = local_5a8;
    FUN_10056cd0(&local_5d8,&DAT_101402ba,7,param_4,param_2);
    if (local_5d8 == 1) {
      local_2e0 = local_5b4;
      *(undefined4 *)(param_1 + 4) = local_5b4;
      param_1[3] = CONCAT44(uStack_5b8,local_5bc);
      param_1[2] = CONCAT44(uStack_5c0,local_5c4);
      param_1[1] = CONCAT44(uStack_5c8,local_5cc);
      *param_1 = CONCAT44(uStack_5d0,uStack_5d4);
      *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
    }
    else {
      local_2d4 = local_5a8;
      local_2dc = local_5b0;
      local_2e0 = local_5b4;
      local_3a8 = local_5b0;
      local_3a0 = local_5a8;
      FUN_10056cd0(&local_5d8,&DAT_101402b4,6,param_5,param_2);
      if (local_5d8 == 1) {
        local_2a8 = local_5b4;
        *(undefined4 *)(param_1 + 4) = local_5b4;
        param_1[3] = CONCAT44(uStack_5b8,local_5bc);
        param_1[2] = CONCAT44(uStack_5c0,local_5c4);
        param_1[1] = CONCAT44(uStack_5c8,local_5cc);
        *param_1 = CONCAT44(uStack_5d0,uStack_5d4);
        *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
      }
      else {
        local_29c = local_5a8;
        local_2a4 = local_5b0;
        local_2a8 = local_5b4;
        local_378 = local_5b0;
        local_370 = local_5a8;
        FUN_10056cd0(&local_5d8,&DAT_1014028c,0xb,param_6,param_2);
        if (local_5d8 == 1) {
          local_270 = local_5b4;
          *(undefined4 *)(param_1 + 4) = local_5b4;
          param_1[3] = CONCAT44(uStack_5b8,local_5bc);
          param_1[2] = CONCAT44(uStack_5c0,local_5c4);
          param_1[1] = CONCAT44(uStack_5c8,local_5cc);
          *param_1 = CONCAT44(uStack_5d0,uStack_5d4);
          *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
        }
        else {
          local_264 = local_5a8;
          local_26c = local_5b0;
          local_270 = local_5b4;
          local_348 = local_5b0;
          local_340 = local_5a8;
          FUN_10056cd0(&local_5d8,(byte *)"paths",5,param_7,param_2);
          if (local_5d8 == 1) {
            local_238 = local_5b4;
            *(undefined4 *)(param_1 + 4) = local_5b4;
            param_1[3] = CONCAT44(uStack_5b8,local_5bc);
            param_1[2] = CONCAT44(uStack_5c0,local_5c4);
            param_1[1] = CONCAT44(uStack_5c8,local_5cc);
            *param_1 = CONCAT44(uStack_5d0,uStack_5d4);
            *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
          }
          else {
            local_22c = local_5a8;
            local_234 = local_5b0;
            local_238 = local_5b4;
            local_120 = local_5b0;
            local_118 = local_5a8;
            FUN_10056cd0(&local_5d8,&DAT_101402a5,7,param_8,param_2);
            if (local_5d8 == 1) {
              local_200 = local_5b4;
              *(undefined4 *)(param_1 + 4) = local_5b4;
              param_1[3] = CONCAT44(uStack_5b8,local_5bc);
              param_1[2] = CONCAT44(uStack_5c0,local_5c4);
              param_1[1] = CONCAT44(uStack_5c8,local_5cc);
              *param_1 = CONCAT44(uStack_5d0,uStack_5d4);
              *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
            }
            else {
              local_1f4 = local_5a8;
              local_1fc = local_5b0;
              local_200 = local_5b4;
              local_b8 = local_5b0;
              local_b0 = local_5a8;
              FUN_10056cd0(&local_5d8,&DAT_1013f3d8,7,param_9,param_2);
              if (local_5d8 == 1) {
                local_1c8 = local_5b4;
                *(undefined4 *)(param_1 + 4) = local_5b4;
                param_1[3] = CONCAT44(uStack_5b8,local_5bc);
                param_1[2] = CONCAT44(uStack_5c0,local_5c4);
                param_1[1] = CONCAT44(uStack_5c8,local_5cc);
                *param_1 = CONCAT44(uStack_5d0,uStack_5d4);
                *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
              }
              else {
                local_1bc = local_5a8;
                local_1c4 = local_5b0;
                local_1c8 = local_5b4;
                local_88 = local_5b0;
                local_80 = local_5a8;
                FUN_10056cd0(&local_5d8,&DAT_1013f3df,5,'\x01',param_2);
                if (local_5d8 == 1) {
                  local_190 = local_5b4;
                  *(undefined4 *)(param_1 + 4) = local_5b4;
                  param_1[3] = CONCAT44(uStack_5b8,local_5bc);
                  param_1[2] = CONCAT44(uStack_5c0,local_5c4);
                  param_1[1] = CONCAT44(uStack_5c8,local_5cc);
                  *param_1 = CONCAT44(uStack_5d0,uStack_5d4);
                  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
                }
                else {
                  local_184 = local_5a8;
                  local_18c = local_5b0;
                  local_190 = local_5b4;
                  local_58 = local_5b0;
                  local_50 = local_5a8;
                  FUN_10056cd0(&local_5d8,&DAT_101402a0,5,param_10,param_2);
                  if (local_5d8 == 1) {
                    local_158 = local_5b4;
                    *(undefined4 *)(param_1 + 4) = local_5b4;
                    param_1[3] = CONCAT44(uStack_5b8,local_5bc);
                    param_1[2] = CONCAT44(uStack_5c0,local_5c4);
                    param_1[1] = CONCAT44(uStack_5c8,local_5cc);
                    *param_1 = CONCAT44(uStack_5d0,uStack_5d4);
                    *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
                  }
                  else {
                    local_14c = local_5a8;
                    local_154 = local_5b0;
                    local_158 = local_5b4;
                    local_28 = local_5b0;
                    local_20 = local_5a8;
                    FUN_10056cd0(&local_5d8,&DAT_101402c1,9,param_11,param_2);
                    if (local_5d8 != 1) {
                      local_e4 = local_5a8;
                      local_400 = local_5a8;
                      local_ec = local_5b0;
                      local_408 = local_5b0;
                      local_5b0 = local_30c;
                      uStack_5b8 = (undefined4)local_314;
                      local_5b4 = (undefined4)((ulonglong)local_314 >> 0x20);
                      local_580 = local_2d4;
                      local_588 = local_2dc;
                      local_550 = local_29c;
                      local_558 = local_2a4;
                      local_520 = local_264;
                      local_528 = local_26c;
                      local_4f0 = local_22c;
                      local_4f8 = local_234;
                      local_4c0 = local_1f4;
                      local_4c8 = local_1fc;
                      local_490 = local_1bc;
                      local_498 = local_1c4;
                      local_460 = local_184;
                      local_468 = local_18c;
                      local_430 = local_14c;
                      local_438 = local_154;
                      memcpy(param_1,&local_5d8,0x1e0);
                      return;
                    }
                    local_f0 = local_5b4;
                    *(undefined4 *)(param_1 + 4) = local_5b4;
                    param_1[3] = CONCAT44(uStack_5b8,local_5bc);
                    param_1[2] = CONCAT44(uStack_5c0,local_5c4);
                    param_1[1] = CONCAT44(uStack_5c8,local_5cc);
                    *param_1 = CONCAT44(uStack_5d0,uStack_5d4);
                    *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
                    FUN_10007040(local_48);
                  }
                  FUN_10007040(local_78);
                }
                FUN_10007040(local_a8);
              }
              FUN_10007040(local_d8);
            }
            FUN_10007040(local_140);
          }
          FUN_10007040(local_368);
        }
        FUN_10007040(local_398);
      }
      FUN_10007040(local_3c8);
    }
    FUN_10007040(local_3f8);
  }
  return;
}
