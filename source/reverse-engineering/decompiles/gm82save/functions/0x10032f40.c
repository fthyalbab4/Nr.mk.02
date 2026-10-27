// rea decompile_all
// name: FUN_10032f40
// address: 0x10032f40
// body: available
// range: 0x10032f40-0x10033451 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10032f40(int *param_1,undefined8 *param_2,int param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  HANDLE hHeap;
  char cVar10;
  int iVar11;
  undefined8 *puVar12;
  int **ppiVar13;
  LPVOID lpMem;
  bool bVar14;
  longlong lVar15;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  char local_100;
  undefined2 uStack_ff;
  undefined1 uStack_fd;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  int local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined8 local_cc;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 local_b4;
  int local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  int *local_7c [4];
  undefined8 local_6c;
  undefined8 local_64;
  int local_5c;
  char local_44 [4];
  LPVOID local_40;
  undefined4 *local_3c;

  local_138 = *param_2;
  local_d4 = *(undefined4 *)(param_3 + 0x88);
  local_dc = param_3 + 0x8c;
  local_d8 = 0;
  local_d0 = 0;
  local_130 = (undefined4)param_2[1];
  uStack_12c = (undefined4)((ulonglong)param_2[1] >> 0x20);
  local_120 = (undefined4)param_2[3];
  uStack_11c = (undefined4)((ulonglong)param_2[3] >> 0x20);
  local_128 = (undefined4)param_2[2];
  uStack_124 = (undefined4)((ulonglong)param_2[2] >> 0x20);
  local_110 = (undefined4)param_2[5];
  uStack_10c = (undefined4)((ulonglong)param_2[5] >> 0x20);
  local_118 = (undefined4)param_2[4];
  uStack_114 = (undefined4)((ulonglong)param_2[4] >> 0x20);
  local_108 = (undefined4)param_2[6];
  uStack_104 = (undefined4)((ulonglong)param_2[6] >> 0x20);
  local_100 = '\x14';
  iVar11 = *(int *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar1 = *(int *)(*(int *)(param_3 + 0x90) + 0x80);
  uVar2 = *(uint *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar8 = *(int *)(param_3 + 0x98);
  if (iVar8 <= (int)(uVar2 - *(int *)(*(int *)(param_3 + 0x90) + 0x80))) {
    FUN_10135f80((int *)(param_3 + 0x90),iVar8 * 2);
    iVar8 = *(int *)(param_3 + 0x98);
  }
  iVar3 = *(int *)(param_3 + 0x94);
  uVar9 = iVar8 - 1U & uVar2;
  *(undefined1 **)(iVar3 + uVar9 * 8) = &LAB_1008b0e0;
  *(undefined8 **)(iVar3 + 4 + uVar9 * 8) = &local_138;
  *(uint *)(*(int *)(param_3 + 0x90) + 0x84) = uVar2 + 1;
  iVar8 = *(int *)(param_3 + 0x8c);
  do {
    uVar2 = *(uint *)(iVar8 + 0xf8);
    uVar9 = uVar2;
    if ((uVar2 & 0x10000) != 0) break;
    uVar9 = uVar2 | 0x10000;
    LOCK();
    bVar14 = uVar2 == *(uint *)(iVar8 + 0xf8);
    if (bVar14) {
      *(uint *)(iVar8 + 0xf8) = uVar9;
    }
    UNLOCK();
  } while (!bVar14);
  if (((uVar2 & 0xff) != 0) &&
     ((iVar11 != iVar1 && -1 < iVar11 - iVar1 || ((uVar9 >> 8 & 0xff) == (uVar2 & 0xff))))) {
    FUN_10139520(iVar8 + 0xec,1);
  }
  local_cc._0_4_ = *(undefined4 *)(param_2 + 0xb);
  uStack_c0 = (undefined4)*(undefined8 *)((int)param_2 + 100);
  uStack_bc = (undefined4)((ulonglong)*(undefined8 *)((int)param_2 + 100) >> 0x20);
  local_cc._4_4_ = (undefined4)*(undefined8 *)((int)param_2 + 0x5c);
  uStack_c4 = (undefined4)((ulonglong)*(undefined8 *)((int)param_2 + 0x5c) >> 0x20);
  FUN_1001e180((char *)local_7c,**(uint **)(param_2 + 7),param_4,**(uint **)((int)param_2 + 0x3c),
               (*(uint **)((int)param_2 + 0x3c))[1],(int *)(param_2 + 8),&local_cc);
  piVar7 = local_7c[1];
  piVar6 = local_7c[0];
  uVar5 = CONCAT44(local_7c[3],local_7c[2]);
  do {
    if (local_d8 == 3) {
LAB_10033191:
      cVar10 = '\x01';
      if ('\x13' < local_100) {
        cVar10 = local_100 + -0x14;
      }
      if (cVar10 == '\x01') {
        *(undefined1 *)((int)param_1 + 0x27) = uStack_fd;
        *(undefined2 *)((int)param_1 + 0x25) = uStack_ff;
        *(undefined8 *)(param_1 + 0xe) = uStack_ec;
        *(undefined8 *)(param_1 + 0xc) = uStack_f4;
        *(undefined8 *)(param_1 + 0x10) = uStack_e4;
        *param_1 = (int)piVar6;
        param_1[1] = (int)piVar7;
        *(undefined8 *)(param_1 + 4) = local_6c;
        *(undefined8 *)(param_1 + 2) = uVar5;
        *(undefined8 *)(param_1 + 6) = local_64;
        param_1[8] = local_5c;
        *(char *)(param_1 + 9) = local_100;
        *(undefined8 *)(param_1 + 10) = uStack_fc;
        return;
      }
      if (cVar10 != '\x02') {
        FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10141c10);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      FUN_100c0bc0();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar15 = FUN_10052290(param_3);
    if ((code *)lVar15 == (code *)0x0) {
      if (local_d8 != 3) {
        FUN_10138cf0(param_3,&local_d8);
      }
      goto LAB_10033191;
    }
    if (lVar15 == CONCAT44(&local_138,&LAB_1008b0e0)) {
      puVar12 = &local_138;
      ppiVar13 = local_7c;
      for (iVar11 = 0x1b; iVar11 != 0; iVar11 = iVar11 + -1) {
        *ppiVar13 = *(int **)puVar12;
        puVar12 = (undefined8 *)((int)puVar12 + 4);
        ppiVar13 = ppiVar13 + 1;
      }
      if (local_7c[0] != (int *)0x0) {
        local_8c = CONCAT44(local_120,uStack_124);
        local_84 = CONCAT44(local_118,uStack_11c);
        local_94 = CONCAT44(local_128,uStack_12c);
        local_a0 = CONCAT44(local_108,uStack_10c);
        local_a8 = CONCAT44(local_110,uStack_114);
        local_98 = uStack_104;
        FUN_1001e180((char *)&local_cc,*local_7c[0] - *local_7c[1],param_4,*local_7c[2],
                     local_7c[2][1],(int *)&local_94,&local_a8);
        cVar10 = '\x01';
        if ('\x13' < local_44[0]) {
          cVar10 = local_44[0] + -0x14;
        }
        if (cVar10 != '\0') {
          if (cVar10 == '\x01') {
            if (local_44[0] != -1) {
              FUN_10005ca0(local_44);
            }
          }
          else {
            if ((code *)*local_3c != (code *)0x0) {
              (*(code *)*local_3c)(local_40);
            }
            if (local_3c[1] != 0) {
              lpMem = local_40;
              if (8 < (uint)local_3c[2]) {
                lpMem = *(LPVOID *)((int)local_40 + -4);
              }
              hHeap = GetProcessHeap();
              HeapFree(hHeap,0,lpMem);
            }
          }
        }
        *param_1 = (int)piVar6;
        param_1[1] = (int)piVar7;
        *(undefined8 *)(param_1 + 4) = local_6c;
        *(undefined8 *)(param_1 + 2) = uVar5;
        *(undefined8 *)(param_1 + 6) = local_64;
        param_1[8] = local_5c;
        *(ulonglong *)(param_1 + 9) = CONCAT44(local_cc._4_4_,(undefined4)local_cc);
        *(ulonglong *)(param_1 + 0xd) = CONCAT44(uStack_b8,uStack_bc);
        param_1[0x11] = local_ac;
        *(ulonglong *)(param_1 + 0xb) = CONCAT44(uStack_c0,uStack_c4);
        *(undefined8 *)(param_1 + 0xf) = local_b4;
        return;
      }
      FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1014139c);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    (*(code *)lVar15)((int)((ulonglong)lVar15 >> 0x20));
  } while( true );
}
