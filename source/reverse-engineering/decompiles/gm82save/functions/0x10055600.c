// rea decompile_all
// name: FUN_10055600
// address: 0x10055600
// body: available
// range: 0x10055600-0x10055fa2 inclusive
// range: 0x10055fd4-0x100560a7 inclusive
// range: 0x10056171-0x100561a2 inclusive
// range: 0x100564cc-0x100564dc inclusive
// range: 0x100565a3-0x100565c1 inclusive
// range: 0x1005693b-0x10056946 inclusive
// range: 0x10056981-0x100569a7 inclusive
// range: 0x10056b45-0x10056bc9 inclusive
// range: 0x10056beb-0x10056bff inclusive
// range: 0x10056c57-0x10056c75 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10055600(undefined1 *param_1,byte *param_2,SIZE_T param_3,int param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  uint3 uVar4;
  undefined1 uVar5;
  char cVar6;
  LPVOID pvVar7;
  LPVOID pvVar8;
  HANDLE pvVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  ulonglong uVar13;
  int in_stack_fffff594;
  int iVar14;
  LPVOID local_a68;
  undefined4 local_a64;
  undefined2 local_a58;
  undefined1 local_a56;
  undefined2 local_a54;
  undefined1 local_a52;
  undefined1 local_a51;
  LPVOID local_a50;
  undefined4 uStack_a4c;
  undefined4 uStack_a48;
  undefined4 uStack_a44;
  uint local_a40;
  undefined1 local_a2a;
  uint local_a1c;
  LPVOID local_a18;
  int local_a14;
  undefined4 local_a10;
  uint local_a08;
  undefined4 local_a04;
  int local_a00;
  undefined8 uStack_9fc;
  undefined4 uStack_9f4;
  undefined4 local_9f0;
  undefined1 local_9ec;
  undefined2 uStack_9eb;
  uint uStack_9e9;
  undefined4 uStack_9e5;
  undefined1 uStack_9e1;
  int *local_9e0;
  undefined1 *local_9dc;
  undefined1 uStack_9d8;
  char cStack_9d7;
  undefined2 uStack_9d6;
  undefined4 local_9d4;
  uint local_9d0;
  undefined1 local_9cc;
  undefined2 local_9cb;
  undefined1 local_9c9;
  undefined1 local_9c8 [56];
  int local_990;
  int local_964;
  int local_960;
  char local_85f;
  uint local_85c;
  uint local_858;
  byte local_851;
  byte local_850;
  LPVOID local_820;
  undefined4 *local_81c;
  undefined4 local_818;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_7fc;
  undefined5 local_7ec;
  undefined3 uStack_7e7;
  undefined5 uStack_7e4;
  int local_7dc;
  LPVOID local_7d8;
  undefined4 local_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  int iStack_7c8;
  LPVOID local_7c4;
  undefined4 local_7c0;
  int local_7bc;
  undefined4 local_7b8;
  undefined2 local_7b4;
  uint local_648;
  uint local_644;
  LPVOID local_640;
  int local_63c;
  undefined4 local_638;
  undefined8 local_634;
  undefined4 local_62c;
  uint local_628;
  undefined1 local_624;
  undefined2 local_623;
  undefined1 local_621;
  undefined1 local_620 [56];
  int local_5e8;
  int local_4b4;
  int local_4b0;
  byte bStack_4a9;
  char cStack_4a8;
  LPVOID pvStack_478;
  undefined4 *puStack_474;
  int iStack_434;
  LPVOID pvStack_430;
  int iStack_420;
  LPVOID pvStack_41c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  LPVOID local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e0;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  LPVOID local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined1 local_3bc;
  undefined1 local_3bb;
  undefined1 local_3b8;
  undefined4 local_3b0;
  undefined4 local_3ac;
  int local_3a8;
  undefined4 local_264;
  undefined8 local_260;
  undefined1 local_258;
  LPVOID local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined1 local_240;
  uint local_23c;
  undefined4 local_238;
  int local_22c;
  LPVOID pvStack_228;

  local_9f0._0_1_ = 0;
  local_9f0._1_2_ = 0;
  local_9f0._3_1_ = 0;
  uStack_9e9 = (uint)(byte)uStack_9e9;
  uStack_9e5 = 0;
  uStack_9e1 = 0;
  local_9e0 = (int *)0x7;
  local_9dc = (LPVOID)0x0;
  cStack_9d7 = '\0';
  uStack_9d6 = 0;
  local_9d4 = 0;
  local_9d0 = local_9d0 & 0xffffff00;
  uStack_9d8 = 1;
  FUN_1011b760((undefined8 *)&local_648,&local_9f0,(int)param_2,param_3);
  if ((char)local_648 != -1) {
    if (param_3 == 0) {
      pvVar7 = (LPVOID)0x1;
      local_a40 = local_648;
LAB_1005594f:
      *(SIZE_T *)(param_1 + 0xc) = param_3;
      *(LPVOID *)(param_1 + 0x10) = pvVar7;
      *(SIZE_T *)(param_1 + 0x14) = param_3;
      param_1[0x18] = 0;
      *param_1 = 1;
      *(uint *)(param_1 + 4) = local_a40;
      *(uint *)(param_1 + 8) = local_644;
      return;
    }
    local_a40 = local_648;
    pvVar7 = FUN_10107380(0,param_3);
    if (pvVar7 != (LPVOID)0x0) {
      memcpy(pvVar7,param_2,param_3);
      goto LAB_1005594f;
    }
    goto LAB_10056c68;
  }
  local_a00 = 0x10055619;
  local_a40 = local_644;
  pvVar7 = FUN_10107380(0,0x8000);
  if (pvVar7 == (LPVOID)0x0) goto LAB_10056c57;
  FUN_1009e3d0(&local_9f0);
  pvVar8 = FUN_10107380(0,0x3a8);
  if (pvVar8 == (LPVOID)0x0) {
    FUN_1013679e(8,0x3a8);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  memcpy(pvVar8,&local_9f0,0x3a8);
  if (DAT_101633c0 == 0) {
    FUN_1013c860(&local_9f0);
    if (((byte)local_9f0 & 2) != 0) goto LAB_1005573e;
LAB_10055757:
    local_408 = 0;
  }
  else {
    if ((DAT_101633c0 & 2) == 0) goto LAB_10055757;
LAB_1005573e:
    if (DAT_101633c0 == 0) {
      FUN_1013c860(&local_9f0);
      local_408 = 1;
      if ((local_9f0._1_2_ & 4) == 0) goto LAB_10055757;
    }
    else {
      local_408 = 1;
      if ((DAT_101633c0 & 0x400) == 0) goto LAB_10055757;
    }
  }
  local_3f4 = FUN_10107380(0,0x8000);
  if (local_3f4 == (LPVOID)0x0) {
LAB_10056c57:
    FUN_101366bc(1);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_404 = 0;
  local_3fc = 0;
  local_400 = 0;
  local_3f8 = 0x8000;
  local_3f0 = 0;
  local_3ec = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  local_3d8 = 0;
  local_3d4 = 1;
  local_3d0 = 0;
  local_3c8 = 0;
  local_3c4 = 0;
  local_3c0 = 0xffffffff;
  local_3bc = 0;
  local_3bb = 1;
  local_3b8 = 0;
  local_3b0 = 0;
  local_3ac = 0;
  local_3a8 = -1;
  local_264 = 0x4000000;
  local_260 = 0x100000100;
  local_258 = 1;
  local_24c = 0x8000;
  local_248 = 0;
  local_244 = 0;
  local_240 = 0;
  local_23c = local_a40;
  local_238 = 0x11;
  local_3cc = pvVar8;
  local_250 = pvVar7;
  do {
    local_a1c = 0;
    local_a18 = (LPVOID)0x1;
    local_a14 = 0;
    FUN_100496e0((undefined1 (*) [16])&local_9f0,(undefined1 (*) [16])&local_408);
    cVar6 = cStack_9d7;
    pvVar7 = local_a18;
    if (cStack_9d7 == -1) {
      local_a50 = (LPVOID)(uint)local_9f0._1_2_;
      local_a68 = (LPVOID)CONCAT13((byte)uStack_9e9,CONCAT21(uStack_9eb,local_9ec));
      local_a64 = (int *)CONCAT13(uStack_9e1,uStack_9e5._1_3_);
      uVar10 = (uint)local_9f0._3_1_;
      iVar14 = CONCAT13((undefined1)uStack_9e5,uStack_9e9._1_3_);
      local_a40 = CONCAT31(local_a40._1_3_,(byte)local_9f0);
      bVar12 = (byte)local_9f0;
      if (local_a1c != 0) {
        pvVar9 = GetProcessHeap();
        bVar12 = (byte)local_a40;
        HeapFree(pvVar9,0,pvVar7);
      }
      if (bVar12 != 0xff) {
        pvVar7 = (LPVOID)((uint)local_a50 | uVar10 << 0x10);
        FUN_10005510((int)&local_408);
        goto joined_r0x10055cf7;
      }
      break;
    }
    if (local_a14 != 0) {
      FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10141270);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (local_a1c != 0) {
      pvVar9 = GetProcessHeap();
      HeapFree(pvVar9,0,pvVar7);
    }
    if (cVar6 == '\f') {
      FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10141230);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  } while (local_3a8 == -1);
  memcpy(&local_9f0,&local_408,0x1d0);
  local_818 = 0;
  local_814 = 0;
  local_810 = 0;
  local_7fc = 0xffffffff;
  local_7bc = 0;
  local_7dc = 0;
  local_7ec = 0;
  uStack_7e7 = 0;
  uStack_7e4 = 0;
  local_7d8 = (LPVOID)0x1;
  local_7b8 = local_238;
  local_820 = (LPVOID)0x0;
  local_7d4 = 0;
  uStack_7d0 = 0;
  uStack_7cc = 0;
  iStack_7c8 = 0;
  local_7c4 = (LPVOID)0x1;
  local_7c0 = 0;
  local_7b4 = 0x100;
  if (local_990 == -1) goto LAB_1005693b;
  lVar1 = ((ulonglong)local_85c * (ulonglong)local_850 & 0xffffffff) *
          (ulonglong)(uint)(byte)(&DAT_1015fd39)[local_851];
  uVar10 = (int)((ulonglong)lVar1 >> 0x20) +
           (int)((ulonglong)local_85c * (ulonglong)local_850 >> 0x20) *
           (uint)(byte)(&DAT_1015fd39)[local_851];
  if (uVar10 < 7 || uVar10 - 7 < (uint)((uint)lVar1 < 0xfffffff1)) {
    uVar13 = FUN_1004fad0((int)&local_9f0);
    uVar2 = ((uVar13 & 0xff000000ff) >> 0x20) * (ulonglong)local_85c;
    lVar1 = (uVar2 & 0xffffffff) *
            (ulonglong)(uint)(byte)(&DAT_1015fd40)[(int)(uVar13 & 0xff000000ff)];
    uVar10 = (uint)lVar1;
    uVar11 = (int)((ulonglong)lVar1 >> 0x20) +
             (int)(uVar2 >> 0x20) * (uint)(byte)(&DAT_1015fd40)[(int)(uVar13 & 0xff000000ff)];
    if (6 < uVar11 && (uint)(uVar10 < 0xfffffff1) <= uVar11 - 7) goto LAB_10055c50;
    lVar1 = (ulonglong)((uVar11 + (0xfffffff8 < uVar10)) * 0x20000000 | uVar10 + 7 >> 3) *
            (ulonglong)local_858;
    local_a68 = (LPVOID)lVar1;
    if ((int)((ulonglong)lVar1 >> 0x20) == 0) {
      FUN_1004fed0(&local_a1c,(undefined1 (*) [16])&local_9f0);
      local_a64 = local_9e0;
      local_a40 = CONCAT31(local_a40._1_3_,(char)local_a1c);
      if ((char)local_a1c != -1) {
        local_a50 = (LPVOID)(local_a1c >> 8);
        local_a64 = (int *)local_a10;
        local_a68 = local_a18;
        in_stack_fffff594 = local_a14;
        goto LAB_10055ba4;
      }
      if (local_990 == -1) {
LAB_1005693b:
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10141b94);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      local_7bc = 1;
      if (local_964 == 1) {
        local_7bc = (uint)(local_85f == '\x02') + local_960;
      }
      uVar10 = CONCAT13(local_9f0._3_1_,CONCAT21(local_9f0._1_2_,(byte)local_9f0));
      uStack_a4c = CONCAT22(uStack_9d6,CONCAT11(cStack_9d7,uStack_9d8));
      local_a40 = CONCAT31(local_a40._1_3_,local_9ec);
      uVar5 = (byte)uStack_9e9;
      uVar4 = CONCAT12((byte)uStack_9e9,uStack_9eb);
      local_a50 = local_9dc;
      uStack_a48 = 0;
      uStack_a44 = 0;
      local_a54 = local_9cb;
      local_a68 = (LPVOID)CONCAT13((undefined1)uStack_9e5,uStack_9e9._1_3_);
      local_a52 = local_9c9;
      local_a51 = local_9cc;
      iVar14 = CONCAT13(uStack_9e1,uStack_9e5._1_3_);
      local_a04 = local_9d4;
      local_a08 = local_9d0;
      memcpy(&local_22c,local_9c8,0x218);
      local_621 = local_a52;
      local_623 = local_a54;
      pvVar7 = (LPVOID)(uint)uVar4;
      if (uVar10 != 0xffffffff) {
        memcpy(local_620,&local_22c,0x218);
        local_634 = CONCAT44(uStack_a4c,local_a50);
        local_62c = local_a04;
        local_628 = local_a08;
        local_624 = local_a51;
        local_644 = CONCAT31(CONCAT12(uVar5,uStack_9eb),(byte)local_a40);
        local_638 = local_a64;
        local_a2a = local_621;
        local_648 = uVar10;
        local_640 = local_a68;
        local_63c = iVar14;
        if (local_5e8 != -1) {
          *(int *)(param_4 + 4) = local_4b4;
          *(int *)(param_4 + 8) = local_4b0;
          local_a50 = (LPVOID)local_4b4;
          local_a40 = local_4b0 * local_4b4 * 4;
          (*(code *)0x40431c)();
          if (cStack_4a8 == '\b') {
                    /* WARNING: Could not recover jumptable at 0x10055fa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(local_a00 + *(int *)(&DAT_10056c9c + (uint)bStack_4a9 * 4)))(local_4b4 * 4);
            return;
          }
          local_a54 = CONCAT11(local_a54._1_1_,cStack_4a8);
          local_a1c = CONCAT31(local_a1c._1_3_,bStack_4a9);
          FUN_100935a0((undefined8 *)&local_22c,param_2,param_3);
          local_9f0._0_1_ = (byte)&local_a54;
          local_9f0._1_2_ = (ushort)((uint)&local_a54 >> 8);
          local_9f0._3_1_ = (byte)((uint)&local_a54 >> 0x18);
          local_9ec = 0xe0;
          uStack_9eb = 0x922;
          uStack_9e9._1_3_ = SUB43(&local_a1c,0);
          uStack_9e9 = CONCAT31(uStack_9e9._1_3_,0x10);
          uStack_9e5._1_3_ = 0x91f80;
          uStack_9e5._0_1_ = (char)((uint)&local_a1c >> 0x18);
          uStack_9e1 = 0x10;
          local_9dc = &LAB_100922c0;
          local_9e0 = &local_22c;
          FUN_10093970(&uStack_9fc,(ushort *)&DAT_10141e8c,(uint)&local_9f0);
          if (0 < local_22c) {
            pvVar9 = GetProcessHeap();
            HeapFree(pvVar9,0,pvStack_228);
          }
          uStack_9e5 = uStack_9f4;
          local_9f0._3_1_ = (byte)uStack_9fc;
          local_9ec = (undefined1)((ulonglong)uStack_9fc >> 8);
          uStack_9eb = (undefined2)((ulonglong)uStack_9fc >> 0x10);
          uStack_9e9 = (uint)((ulonglong)uStack_9fc >> 0x20);
          uVar10 = uStack_9e9;
          uStack_9e9._0_1_ = (byte)((ulonglong)uStack_9fc >> 0x20);
          *param_1 = 0x13;
          *(ulonglong *)(param_1 + 1) =
               CONCAT17((byte)uStack_9e9,
                        CONCAT25(uStack_9eb,
                                 CONCAT14(local_9ec,
                                          CONCAT13(local_9f0._3_1_,
                                                   CONCAT21(local_9f0._1_2_,(byte)local_9f0)))));
          *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_9f4,uVar10);
          uStack_9e9 = uVar10;
          FUN_10005510((int)&local_648);
          if (iStack_434 != 0) {
            pvVar9 = GetProcessHeap();
            HeapFree(pvVar9,0,pvStack_430);
          }
          if (pvStack_478 != (LPVOID)0x0) {
            if ((code *)*puStack_474 != (code *)0x0) {
              (*(code *)*puStack_474)(pvStack_478);
            }
            if (puStack_474[1] != 0) {
              FUN_10093cf0(pvStack_478,puStack_474[2]);
            }
          }
          if (iStack_420 == 0) {
            return;
          }
          pvVar9 = GetProcessHeap();
          HeapFree(pvVar9,0,pvStack_41c);
          return;
        }
        goto LAB_1005693b;
      }
    }
    else {
      local_a64 = (int *)0x0;
      local_a40 = CONCAT31(local_a40._1_3_,0x25);
LAB_10055ba4:
      FUN_10005510((int)&local_9f0);
      pvVar7 = local_7d8;
      if (local_7dc != 0) {
        pvVar9 = GetProcessHeap();
        HeapFree(pvVar9,0,pvVar7);
      }
      pvVar7 = local_820;
      if (local_820 != (LPVOID)0x0) {
        if ((code *)*local_81c != (code *)0x0) {
          (*(code *)*local_81c)(local_820);
        }
        if (local_81c[1] != 0) {
          if (8 < (uint)local_81c[2]) {
            pvVar7 = *(LPVOID *)((int)pvVar7 - 4);
          }
          pvVar9 = GetProcessHeap();
          HeapFree(pvVar9,0,pvVar7);
        }
      }
      pvVar8 = local_7c4;
      pvVar7 = local_a50;
      iVar14 = in_stack_fffff594;
      if (iStack_7c8 != 0) {
        pvVar9 = GetProcessHeap();
        HeapFree(pvVar9,0,pvVar8);
        pvVar7 = local_a50;
        iVar14 = in_stack_fffff594;
      }
    }
  }
  else {
LAB_10055c50:
    FUN_10005510((int)&local_9f0);
    pvVar7 = local_7d8;
    if (local_7dc != 0) {
      pvVar9 = GetProcessHeap();
      HeapFree(pvVar9,0,pvVar7);
    }
    pvVar7 = local_820;
    if (local_820 != (LPVOID)0x0) {
      if ((code *)*local_81c != (code *)0x0) {
        (*(code *)*local_81c)(local_820);
      }
      if (local_81c[1] != 0) {
        if (8 < (uint)local_81c[2]) {
          pvVar7 = *(LPVOID *)((int)pvVar7 - 4);
        }
        pvVar9 = GetProcessHeap();
        HeapFree(pvVar9,0,pvVar7);
      }
    }
    pvVar8 = local_7c4;
    if (iStack_7c8 != 0) {
      pvVar9 = GetProcessHeap();
      HeapFree(pvVar9,0,pvVar8);
      pvVar7 = pvVar8;
    }
    local_a40 = CONCAT31(local_a40._1_3_,0x25);
    local_a64 = (int *)0x0;
    iVar14 = 0;
  }
joined_r0x10055cf7:
  local_a50 = pvVar7;
  if (param_3 == 0) {
    pvVar7 = (LPVOID)0x1;
  }
  else {
    pvVar7 = FUN_10107380(0,param_3);
    if (pvVar7 == (LPVOID)0x0) {
LAB_10056c68:
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    memcpy(pvVar7,param_2,param_3);
  }
  *(int **)(param_1 + 0x10) = local_a64;
  *(SIZE_T *)(param_1 + 0x14) = param_3;
  *(LPVOID *)(param_1 + 0x18) = pvVar7;
  *(SIZE_T *)(param_1 + 0x1c) = param_3;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x21) = local_a58;
  param_1[0x23] = local_a56;
  *param_1 = 3;
  *(uint *)(param_1 + 4) = (int)local_a50 << 8 | local_a40 & 0xff;
  *(LPVOID *)(param_1 + 8) = local_a68;
  *(int *)(param_1 + 0xc) = iVar14;
  return;
}
