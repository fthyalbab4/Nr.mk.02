// rea decompile_all
// name: FUN_100b0970
// address: 0x100b0970
// body: available
// range: 0x100b0970-0x100b0a98 inclusive
// range: 0x100b0aa0-0x100b0ba0 inclusive
// range: 0x100b0bb0-0x100b0c80 inclusive
// range: 0x100b0c90-0x100b1087 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100b0970(int param_1,undefined4 param_2,LPVOID param_3)

{
  PSRWLOCK SRWLock;
  int *lpMem;
  void *_Src;
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  byte *pbVar6;
  bool bVar7;
  byte *pbVar8;
  HANDLE pvVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  LPVOID pvVar18;
  int local_d4;
  byte *local_c8;
  byte *pbStack_c4;
  byte *local_c0;
  byte *pbStack_bc;
  byte *local_b8;
  undefined4 uStack_b4;
  byte *local_b0;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined1 local_a9;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  byte *local_58;
  undefined2 local_54;
  undefined1 local_52;
  int *local_50;
  int local_4c;
  int *local_48;
  undefined1 local_44;
  undefined7 uStack_43;
  byte *local_3c;
  undefined4 uStack_38;
  byte *local_34;
  byte *local_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;

  lpMem = *(int **)((int)param_3 + 0x10);
  if (param_1 == 0) {
LAB_100b09d3:
    piVar16 = (int *)lpMem[0xc];
    LOCK();
    iVar11 = *piVar16;
    *piVar16 = *piVar16 + 1;
    UNLOCK();
    if (*piVar16 == 0 || SCARRY4(iVar11,1) != *piVar16 < 0) {
LAB_100b1086:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    local_48 = lpMem + 2;
    FUN_100acfa0((int)local_48,lpMem[0xc],lpMem[0xd],(HANDLE)lpMem[0x100e],*lpMem,lpMem[1]);
    local_d4 = lpMem[0xf];
    iVar11 = lpMem[0xe];
    piVar16 = lpMem + 0xe;
    uVar17 = lpMem[0x10];
LAB_100b0a30:
    while( true ) {
      _Src = (void *)lpMem[3];
      pbVar1 = (byte *)lpMem[4];
      local_50 = piVar16;
      local_4c = iVar11;
      FUN_10093310((undefined8 *)&local_c8,(ushort *)(piVar16 + 3),uVar17 >> 1);
      pbVar6 = local_c0;
      pbVar13 = pbStack_c4;
      pbVar12 = local_c8;
      if (pbVar1 == (byte *)0x0) {
        pbVar8 = (byte *)0x1;
      }
      else {
        pbVar8 = FUN_10107380(0,(SIZE_T)pbVar1);
        if (pbVar8 == (byte *)0x0) {
          FUN_101366bc(1);
          goto LAB_100b1086;
        }
        memcpy(pbVar8,_Src,(size_t)pbVar1);
      }
      pbStack_bc = (byte *)((uint)pbStack_bc & 0xffffff00);
      local_c8 = pbVar1;
      pbStack_c4 = pbVar8;
      local_c0 = pbVar1;
      FUN_10111020((uint *)&local_c8,pbVar13,(uint)pbVar6);
      pbVar8 = local_c0;
      pbVar6 = pbStack_c4;
      pbVar1 = local_c8;
      local_30 = local_c0;
      uStack_2c = (uint)pbStack_bc;
      uStack_28 = 0;
      uStack_24 = 0;
      if (pbVar12 != (byte *)0x0) {
        pvVar9 = GetProcessHeap();
        HeapFree(pvVar9,0,pbVar13);
      }
      if (lpMem[6] != -1) break;
LAB_100b0d39:
      local_b8 = (byte *)((uint)local_b8 & 0xffffff00);
      local_c8 = (byte *)0x0;
      pbStack_c4 = &DAT_00000004;
      local_c0 = (byte *)0x0;
      pbStack_bc = (byte *)0x0;
      FUN_10137eb0((uint *)&local_c8);
      *(byte **)pbStack_c4 = pbVar1;
      *(byte **)(pbStack_c4 + 4) = pbVar6;
      *(ulonglong *)(pbStack_c4 + 8) = CONCAT44(uStack_2c,local_30);
      local_c0 = (byte *)0x1;
      local_70 = CONCAT44(pbStack_c4,local_c8);
      local_60 = CONCAT44(local_60._4_4_,local_b8);
      uVar5 = local_60;
      local_68 = CONCAT44(pbStack_bc,1);
      local_60._3_1_ = (undefined1)((uint)local_b8 >> 0x18);
      local_60 = uVar5;
      switch(local_d4) {
      case 1:
        local_ac = 2;
        break;
      case 2:
        local_ac = 4;
        break;
      case 3:
        local_ac = 3;
        break;
      case 4:
        local_ac = 0x303;
        local_aa = 2;
        break;
      case 5:
        local_ac = 0x303;
        local_aa = 1;
        break;
      default:
        FUN_100071e0((int *)&local_70);
        if (local_4c != 0) goto LAB_100b0f10;
        goto LAB_100b0f60;
      }
      local_b0 = pbStack_bc;
      uStack_b4 = 1;
      local_b8 = pbStack_c4;
      pbStack_bc = local_c8;
      local_c0 = (byte *)0xfffffffe;
      iVar11 = lpMem[0xd];
      iVar2 = lpMem[0xc];
      uVar17 = *(uint *)(iVar11 + 8);
      uVar15 = 4;
      if (4 < uVar17) {
        uVar15 = uVar17;
      }
      uVar15 = uVar15 - 1 & 0xfffffff8;
      SRWLock = (PSRWLOCK)(iVar2 + 8 + uVar15);
      local_a9 = local_60._3_1_;
      AcquireSRWLockExclusive(SRWLock);
      (**(code **)(iVar11 + 0xc))((uVar17 - 1 & 0xfffffffc) + 0xc + iVar2 + uVar15,&local_c8);
      ReleaseSRWLockExclusive(SRWLock);
      if (local_4c == 0) goto LAB_100b0f60;
LAB_100b0f10:
      local_d4 = *(int *)((int)local_50 + local_4c + 4);
      piVar16 = (int *)((int)local_50 + local_4c);
      uVar17 = *(uint *)((int)local_50 + local_4c + 8);
      iVar11 = *(int *)((int)local_50 + local_4c);
    }
    pbVar13 = (byte *)lpMem[7];
    pbVar14 = (byte *)lpMem[8];
    uVar5 = *(undefined8 *)(lpMem + 7);
    FUN_1010a5e0((undefined1 *)&local_c8,pbVar13,(uint)pbVar14);
    pbVar12 = &DAT_00000006;
    pbVar10 = pbVar14;
    switch((uint)local_c8 & 0xff) {
    case 0:
    case 3:
      pbVar12 = local_c0 + 4;
      break;
    case 1:
      pbVar12 = local_b8 + 1;
      if (local_b8 == (byte *)0x0) {
        pbVar12 = (byte *)0x0;
      }
      pbVar12 = local_c0 + (int)(pbVar12 + 8);
      break;
    case 2:
      break;
    case 4:
      pbVar12 = local_b8 + 1;
      if (local_b8 == (byte *)0x0) {
        pbVar12 = (byte *)0x0;
      }
      pbVar12 = local_c0 + (int)(pbVar12 + 2);
      break;
    case 5:
      pbVar12 = (byte *)0x2;
      break;
    default:
      goto switchD_100b0b4e_default;
    }
    pbVar10 = pbVar14 + -(int)pbVar12;
    if (pbVar14 < pbVar12) {
      FUN_10136a50((uint)pbVar12,(uint)pbVar14,(uint)pbVar14,
                   &PTR_s_C__Users_runneradmin__rustup_too_10158004);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    pbVar13 = pbVar12 + (int)pbVar13;
switchD_100b0b4e_default:
    if (pbVar10 == (byte *)0x0) {
      local_52 = false;
    }
    else {
      local_52 = *pbVar13 == 0x2f || *pbVar13 == 0x5c;
    }
    local_68 = CONCAT44(pbStack_c4,local_c8);
    local_60 = CONCAT44(pbStack_bc,local_c0);
    local_58 = local_b8;
    local_54 = 0x200;
    local_70 = uVar5;
    FUN_1010a5e0(&local_44,pbVar6,(uint)pbVar8);
    pbVar12 = &DAT_00000006;
    pbVar13 = pbVar8;
    pbVar14 = pbVar6;
    switch(local_44) {
    case 0:
    case 3:
      pbVar12 = local_3c + 4;
      break;
    case 1:
      pbVar12 = local_34 + 1;
      if (local_34 == (byte *)0x0) {
        pbVar12 = (byte *)0x0;
      }
      pbVar12 = local_3c + 8 + (int)pbVar12;
      break;
    case 2:
      break;
    case 4:
      pbVar12 = local_34 + 1;
      if (local_34 == (byte *)0x0) {
        pbVar12 = (byte *)0x0;
      }
      pbVar12 = pbVar12 + (int)(local_3c + 2);
      break;
    case 5:
      pbVar12 = (byte *)0x2;
      break;
    default:
      goto switchD_100b0c34_default;
    }
    pbVar13 = pbVar8 + -(int)pbVar12;
    if (pbVar8 < pbVar12) {
      FUN_10136a50((uint)pbVar12,(uint)pbVar8,(uint)pbVar8,
                   &PTR_s_C__Users_runneradmin__rustup_too_10158004);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    pbVar14 = pbVar12 + (int)pbVar6;
switchD_100b0c34_default:
    if (pbVar13 == (byte *)0x0) {
      local_aa = false;
    }
    else {
      local_aa = *pbVar14 == 0x2f || *pbVar14 == 0x5c;
    }
    local_c8 = pbVar6;
    pbStack_c4 = pbVar8;
    local_b0 = local_34;
    local_b8 = local_3c;
    uStack_b4 = uStack_38;
    local_c0 = (byte *)CONCAT71(uStack_43,local_44);
    pbStack_bc = (byte *)((uint7)uStack_43 >> 0x18);
    local_ac = 0x200;
    bVar7 = FUN_100a8650(&local_70,(undefined8 *)&local_c8);
    if (bVar7) goto LAB_100b0d39;
    if (local_4c != 0) {
      local_d4 = *(int *)((int)local_50 + local_4c + 4);
      iVar11 = *(int *)((int)local_50 + local_4c);
      piVar16 = (int *)((int)local_50 + local_4c);
      uVar17 = *(uint *)((int)local_50 + local_4c + 8);
      if (pbVar1 != (byte *)0x0) {
        pvVar9 = GetProcessHeap();
        HeapFree(pvVar9,0,pbVar6);
      }
      goto LAB_100b0a30;
    }
    if (pbVar1 != (byte *)0x0) {
      pvVar9 = GetProcessHeap();
      HeapFree(pvVar9,0,pbVar6);
    }
LAB_100b0f60:
    piVar16 = (int *)lpMem[0xc];
    LOCK();
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (*piVar16 == 0) {
      FUN_100aedf0((LPVOID)lpMem[0xc],(undefined4 *)lpMem[0xd]);
    }
    if (*local_48 != 0) {
      pvVar18 = (LPVOID)lpMem[3];
      pvVar9 = GetProcessHeap();
      HeapFree(pvVar9,0,pvVar18);
    }
    if (0 < lpMem[6]) {
      pvVar18 = (LPVOID)lpMem[7];
      pvVar9 = GetProcessHeap();
      HeapFree(pvVar9,0,pvVar18);
    }
    pvVar9 = GetProcessHeap();
    HeapFree(pvVar9,0,lpMem);
  }
  else {
    if (param_1 != 0x3e3) {
      if (param_1 == 5) {
        FUN_1011c320((uint *)&local_c8,lpMem[3],lpMem[4]);
        pbVar1 = pbStack_bc;
        if (((uint)local_c8 & (uint)pbStack_c4) != 0xffffffff) goto LAB_100b09d3;
        if ((char)local_c0 == '\x03') {
          puVar3 = *(undefined4 **)(pbStack_bc + 4);
          pvVar18 = *(LPVOID *)pbStack_bc;
          if ((code *)*puVar3 != (code *)0x0) {
            (*(code *)*puVar3)(pvVar18);
          }
          if (puVar3[1] != 0) {
            if (8 < (uint)puVar3[2]) {
              pvVar18 = *(LPVOID *)((int)pvVar18 + -4);
            }
            pvVar9 = GetProcessHeap();
            HeapFree(pvVar9,0,pvVar18);
          }
          pvVar9 = GetProcessHeap();
          HeapFree(pvVar9,0,pbVar1);
        }
      }
      FUN_100b1140(lpMem);
    }
    ReleaseSemaphore((HANDLE)lpMem[10],1,(LPLONG)0x0);
    FUN_100b10d0(lpMem);
  }
  pvVar9 = GetProcessHeap();
  HeapFree(pvVar9,0,param_3);
  return;
}
