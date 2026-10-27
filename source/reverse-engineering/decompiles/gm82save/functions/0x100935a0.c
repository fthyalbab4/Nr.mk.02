// rea decompile_all
// name: FUN_100935a0
// address: 0x100935a0
// body: available
// range: 0x100935a0-0x10093946 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100935a0(undefined8 *param_1,byte *param_2,SIZE_T param_3)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  LPVOID _Dst;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  SIZE_T SVar10;
  uint local_34;
  SIZE_T local_30;
  LPVOID pvStack_2c;
  uint local_28;
  SIZE_T local_24;
  uint local_20;
  LPVOID local_1c;
  undefined8 *local_18;
  byte *local_14;

  if (param_3 != 0) {
    uVar9 = 0;
    pbVar1 = param_2 + param_3;
    pbVar7 = param_2;
    do {
      bVar2 = *pbVar7;
      pbVar5 = pbVar7 + 1;
      iVar8 = 1;
      if ((char)bVar2 < '\0') {
        if (bVar2 < 0xe0) {
          iVar8 = 2;
          if (pbVar5 != pbVar1) {
            pbVar5 = pbVar7 + 2;
          }
        }
        else if (bVar2 == 0xed) {
          if ((pbVar5 == pbVar1) || (pbVar7 + 2 == pbVar1)) break;
          if (0x9f < pbVar7[1]) {
            local_18 = param_1;
            if ((int)param_3 < 0) {
              FUN_101367b0();
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            _Dst = FUN_10107380(0,param_3);
            if (_Dst == (LPVOID)0x0) {
              FUN_101366bc(1);
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            local_30 = param_3;
            pvStack_2c = _Dst;
            if (param_3 < uVar9) {
              FUN_10136a50(0,uVar9,param_3,&DAT_10144048);
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if (uVar9 != 0) {
              memcpy(_Dst,param_2,uVar9);
            }
            local_28 = uVar9;
            if (param_3 - uVar9 < 3) {
              FUN_101366d0(&local_30,uVar9,3);
              _Dst = pvStack_2c;
            }
            *(undefined1 *)((int)_Dst + local_28 + 2) = 0xbd;
            *(undefined2 *)((int)_Dst + local_28) = 0xbfef;
            goto joined_r0x100936ce;
          }
          iVar8 = 3;
          pbVar5 = pbVar7 + 3;
        }
        else {
          iVar8 = 3;
          pbVar7 = pbVar7 + 2;
          if (pbVar5 == pbVar1) {
            pbVar7 = pbVar5;
          }
          pbVar5 = pbVar7 + (pbVar7 != pbVar1);
          if (0xef < bVar2) {
            iVar8 = 4;
            pbVar5 = pbVar5 + (pbVar5 != pbVar1);
          }
        }
      }
      uVar9 = uVar9 + iVar8;
      pbVar7 = pbVar5;
    } while (pbVar5 != pbVar1);
  }
  *(byte **)((int)param_1 + 4) = param_2;
  *(SIZE_T *)(param_1 + 1) = param_3;
  *(undefined4 *)param_1 = 0xffffffff;
  return;
LAB_10093772:
  uVar6 = uVar9 - uVar4;
  if ((uVar9 < uVar4) || (param_3 < uVar9)) {
    FUN_10136a50(uVar4,uVar9,param_3,&DAT_10144038);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_24 = local_30;
  local_20 = uVar6;
  if (local_30 - local_34 < uVar6) {
    FUN_101366d0(&local_30,local_34,uVar6);
    _Dst = pvStack_2c;
  }
  else if (uVar9 == uVar4) goto LAB_100937c3;
  local_34 = local_28;
  local_24 = local_30;
  memcpy((void *)(local_28 + (int)_Dst),local_14,local_20);
LAB_100937c3:
  local_28 = local_34 + local_20;
  if (local_24 - local_28 < 3) {
    FUN_101366d0(&local_30,local_28,3);
    _Dst = pvStack_2c;
  }
  *(undefined1 *)((int)_Dst + local_28 + 2) = 0xbd;
  *(undefined2 *)((int)_Dst + local_28) = 0xbfef;
joined_r0x100936ce:
  uVar4 = uVar9 + 3;
  local_34 = local_28 + 3;
  local_28 = local_34;
  if (param_3 < uVar4) {
    FUN_10136a50(uVar4,param_3,param_3,&PTR_s_C__Users_runneradmin__rustup_too_101454a4);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  SVar10 = param_3;
  local_1c = _Dst;
  if (uVar4 != param_3) {
    local_14 = param_2 + uVar4;
    pbVar7 = local_14;
    uVar9 = uVar4;
    do {
      bVar2 = *pbVar7;
      pbVar5 = pbVar7 + 1;
      iVar8 = 1;
      SVar10 = uVar4;
      if ((char)bVar2 < '\0') {
        if (bVar2 < 0xe0) {
          iVar8 = 2;
          if (pbVar5 != pbVar1) {
            pbVar5 = pbVar7 + 2;
          }
        }
        else if (bVar2 == 0xed) {
          if ((pbVar5 == pbVar1) || (pbVar7 + 2 == pbVar1)) break;
          if (0x9f < pbVar7[1]) goto LAB_10093772;
          iVar8 = 3;
          pbVar5 = pbVar7 + 3;
        }
        else {
          iVar8 = 3;
          pbVar7 = pbVar7 + 2;
          if (pbVar5 == pbVar1) {
            pbVar7 = pbVar5;
          }
          pbVar5 = pbVar7 + (pbVar7 != pbVar1);
          if (0xef < bVar2) {
            iVar8 = 4;
            pbVar5 = pbVar5 + (pbVar5 != pbVar1);
          }
        }
      }
      uVar9 = uVar9 + iVar8;
      pbVar7 = pbVar5;
      if (pbVar5 == pbVar1) break;
    } while( true );
  }
  uVar9 = param_3 - SVar10;
  if (local_30 - local_34 < uVar9) {
    FUN_101366d0(&local_30,local_34,uVar9);
    _Dst = pvStack_2c;
  }
  else if (param_3 == SVar10) goto LAB_10093891;
  local_34 = local_28;
  memcpy((void *)((int)_Dst + local_28),param_2 + SVar10,uVar9);
LAB_10093891:
  *(uint *)(local_18 + 1) = local_34 + uVar9;
  *local_18 = CONCAT44(pvStack_2c,local_30);
  return;
}
