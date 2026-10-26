// rea decompile_all
// name: FUN_100b9490
// address: 0x100b9490
// body: available
// range: 0x100b9490-0x100b9865 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_100b9490(undefined4 *param_1,byte *param_2,uint param_3,byte param_4,char param_5,uint *param_6,
            uint param_7,int param_8,uint param_9,void *param_10,SIZE_T param_11)

{
  code *pcVar1;
  LPVOID lpMem;
  int iVar2;
  uint uVar3;
  byte bVar4;
  HANDLE pvVar5;
  LPVOID pvVar6;
  byte bVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_40;
  byte local_3c;
  undefined2 uStack_3b;
  undefined1 uStack_39;
  uint uStack_38;
  undefined2 local_34;
  undefined1 local_32;
  LPVOID local_30;
  LPVOID local_2c;
  undefined4 *local_28;
  SIZE_T local_24;
  SIZE_T local_20;
  undefined8 local_1c;
  uint local_14;

  if (param_3 - 0x50 < 0xffffffb1) {
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 0xffffffff;
    return;
  }
  local_40 = 0;
  local_3c = 1;
  uStack_3b = 0;
  uStack_39 = 0;
  uStack_38 = 0;
  local_28 = param_1;
  FUN_10137980(&local_40,0,param_3);
  do {
    uVar11 = uStack_38;
    bVar7 = *param_2;
    uVar9 = ((char)bVar7 < '\0') + 1;
    if (local_40 - uStack_38 < uVar9) {
      FUN_10137980(&local_40,uStack_38,uVar9);
      lpMem = (LPVOID)CONCAT13(uStack_39,CONCAT21(uStack_3b,local_3c));
      uVar3 = local_40;
    }
    else {
      lpMem = (LPVOID)CONCAT13(uStack_39,CONCAT21(uStack_3b,local_3c));
      uVar3 = local_40;
    }
    if ((char)bVar7 < '\0') {
      bVar4 = bVar7 & 0xbf;
      bVar7 = bVar7 >> 6 | 0xc0;
      *(byte *)((int)lpMem + uVar11 + 1) = bVar4;
    }
    *(byte *)((int)lpMem + uVar11) = bVar7;
    uVar11 = uVar11 + uVar9;
    param_2 = param_2 + 1;
    param_3 = param_3 - 1;
    local_40 = uVar3;
    uStack_38 = uVar11;
  } while (param_3 != 0);
  if (param_4 < 2) {
    if ((param_5 != '\0' & param_4) == 0) {
      uVar9 = param_7;
      if (param_7 < 4) {
        do {
          if (uVar9 == 0) goto LAB_100b95ff;
          iVar2 = uVar9 - 1;
          uVar9 = uVar9 - 1;
        } while (-1 < *(char *)((int)param_6 + iVar2));
      }
      else if ((*param_6 & 0x80808080) == 0) {
        uVar10 = ((int)param_6 + 3U & 0xfffffffc) - (int)param_6;
        uVar9 = 4;
        if (uVar10 != 0) {
          uVar9 = uVar10;
        }
        for (; uVar9 < param_7 - 4; uVar9 = uVar9 + 4) {
          if ((*(uint *)((int)param_6 + uVar9) & 0x80808080) != 0) goto LAB_100b95d3;
        }
        if ((*(uint *)((int)param_6 + (param_7 - 4)) & 0x80808080) == 0) {
LAB_100b95ff:
          FUN_10095490(&local_40,(int)param_6,param_7);
          uVar9 = uStack_38;
          if (local_40 == 1) {
            local_1c = CONCAT44(uStack_38,CONCAT13(uStack_39,CONCAT21(uStack_3b,local_3c)));
            FUN_10136c40("unreachableC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\png-0.17.16\\src\\text_metadata.rs"
                         ,0xb,&local_1c,&DAT_1015067c,&DAT_10150704);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          local_20 = uStack_38;
          if (uStack_38 == 0) {
            local_2c = (LPVOID)0x1;
          }
          else {
            local_2c = (LPVOID)CONCAT13(uStack_39,CONCAT21(uStack_3b,local_3c));
            pvVar6 = FUN_10107380(0,uStack_38);
            if (pvVar6 == (LPVOID)0x0) goto LAB_100b9858;
            memcpy(pvVar6,local_2c,uVar9);
            local_2c = pvVar6;
          }
          FUN_10095490(&local_40,param_8,param_9);
          uVar9 = uStack_38;
          if (local_40 == 1) {
            *(undefined1 *)(local_28 + 1) = 0;
            *local_28 = 0xffffffff;
          }
          else {
            local_24 = uStack_38;
            if (uStack_38 == 0) {
              local_30 = (LPVOID)0x1;
            }
            else {
              local_30 = (LPVOID)CONCAT13(uStack_39,CONCAT21(uStack_3b,local_3c));
              pvVar6 = FUN_10107380(0,uStack_38);
              if (pvVar6 == (LPVOID)0x0) {
LAB_100b9858:
                FUN_101366bc(1);
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              memcpy(pvVar6,local_30,uVar9);
              local_30 = pvVar6;
            }
            if ((param_4 & 1) != 0) {
              FUN_1002c180(&local_40,param_10,param_11);
              pvVar6 = (LPVOID)(uint)local_3c;
              uVar8 = 0;
              local_34 = uStack_3b;
              local_32 = uStack_39;
LAB_100b97ce:
              *local_28 = uVar8;
              local_28[1] = local_40;
              *(char *)(local_28 + 2) = (char)pvVar6;
              *(undefined2 *)((int)local_28 + 9) = local_34;
              *(undefined1 *)((int)local_28 + 0xb) = local_32;
              local_28[3] = uStack_38;
              local_28[4] = uVar3;
              local_28[5] = lpMem;
              local_28[6] = uVar11;
              local_28[7] = local_20;
              local_28[8] = local_2c;
              local_28[9] = local_20;
              local_28[10] = local_24;
              local_28[0xb] = local_30;
              local_28[0xc] = local_24;
              *(byte *)(local_28 + 0xd) = param_4;
              return;
            }
            FUN_1002c180((SIZE_T *)&local_1c,param_10,param_11);
            pvVar6 = local_1c._4_4_;
            FUN_10095490(&local_40,(int)local_1c._4_4_,local_14);
            if ((char)local_40 == '\0') {
              local_32 = local_1c._7_1_;
              uVar8 = 1;
              local_34 = local_1c._5_2_;
              local_40 = (uint)local_1c;
              uStack_38 = local_14;
              goto LAB_100b97ce;
            }
            if ((uint)local_1c != 0) {
              pvVar5 = GetProcessHeap();
              HeapFree(pvVar5,0,pvVar6);
            }
            *(undefined1 *)(local_28 + 1) = 0;
            *local_28 = 0xffffffff;
            if (local_24 != 0) {
              pvVar5 = GetProcessHeap();
              HeapFree(pvVar5,0,local_30);
            }
          }
          if (local_20 != 0) {
            pvVar5 = GetProcessHeap();
            HeapFree(pvVar5,0,local_2c);
          }
          goto LAB_100b95e0;
        }
      }
LAB_100b95d3:
      *(undefined1 *)(local_28 + 1) = 0;
    }
    else {
      *(undefined1 *)(local_28 + 1) = 5;
    }
  }
  else {
    *(undefined1 *)(local_28 + 1) = 6;
  }
  *local_28 = 0xffffffff;
LAB_100b95e0:
  if (uVar3 != 0) {
    pvVar5 = GetProcessHeap();
    HeapFree(pvVar5,0,lpMem);
  }
  return;
}
