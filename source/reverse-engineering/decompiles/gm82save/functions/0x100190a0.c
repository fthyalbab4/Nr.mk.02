// rea decompile_all
// name: FUN_100190a0
// address: 0x100190a0
// body: available
// range: 0x100190a0-0x10019387 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100190a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  code *pcVar2;
  LPVOID lpMem;
  char cVar3;
  uint uVar4;
  HANDLE hHeap;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  bool bVar16;
  uint local_4c;
  LPVOID local_48;
  uint local_44;
  int local_3c;
  int *local_38;
  char *local_34;
  int local_30;
  undefined8 local_2c;
  undefined8 local_24;
  uint local_1c [3];

  local_1c[0] = 0xffffffff;
  if (DAT_101632f8 != 0) {
    uVar13 = DAT_101632f8 - 1;
    goto LAB_100191bb;
  }
  FUN_1010c370((undefined8 *)&local_4c,0x10156c2c,0xe);
  lpMem = local_48;
  uVar5 = local_4c;
  if (local_4c == 0xffffffff) {
    uVar13 = 0x200000;
  }
  else {
    FUN_10095490(&local_38,(int)local_48,local_44);
    if ((local_38 == (int *)0x1) || (local_30 == 0)) {
LAB_1001918f:
      uVar13 = 0x200000;
    }
    else {
      if (local_30 == 1) {
        cVar3 = *local_34;
        if ((cVar3 == '+') || (cVar3 == '-')) goto LAB_1001918f;
      }
      else {
        cVar3 = *local_34;
      }
      uVar13 = 0;
      uVar11 = local_30 - (uint)(cVar3 == '+');
      pbVar15 = (byte *)(local_34 + (cVar3 == '+'));
      if (8 < uVar11) {
        while( true ) {
          bVar16 = uVar11 == 0;
          uVar11 = uVar11 - 1;
          if (bVar16) goto joined_r0x10019196;
          uVar4 = (uint)((ulonglong)uVar13 * 10);
          if ((int)((ulonglong)uVar13 * 10 >> 0x20) != 0) break;
          uVar10 = *pbVar15 - 0x30;
          uVar13 = uVar4 + uVar10;
          if ((9 < uVar10) || (pbVar15 = pbVar15 + 1, CARRY4(uVar4,uVar10))) break;
        }
        goto LAB_1001918f;
      }
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
        bVar1 = *pbVar15;
        if (9 < bVar1 - 0x30) {
          uVar13 = 0x200000;
          break;
        }
        pbVar15 = pbVar15 + 1;
        uVar13 = (bVar1 - 0x30) + uVar13 * 10;
      }
    }
joined_r0x10019196:
    if (uVar5 != 0) {
      hHeap = GetProcessHeap();
      HeapFree(hHeap,0,lpMem);
    }
  }
  DAT_101632f8 = uVar13 + 1;
LAB_100191bb:
  uVar5 = (uint)DAT_10163398;
  uVar11 = DAT_10163398._4_4_;
  do {
    if ((uVar5 & uVar11) == 0xffffffff) {
      FUN_1013c0e0();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    iVar12 = uVar5 + 1;
    iVar14 = uVar11 + (0xfffffffe < uVar5);
    LOCK();
    bVar16 = CONCAT44(uVar11,uVar5) == DAT_10163398;
    if (bVar16) {
      DAT_10163398 = CONCAT44(iVar14,iVar12);
    }
    else {
      uVar11 = (uint)((ulonglong)DAT_10163398 >> 0x20);
      uVar5 = (uint)DAT_10163398;
    }
    UNLOCK();
  } while (!bVar16);
  piVar6 = (int *)FUN_1010c9e0(iVar12,iVar14,local_1c);
  local_38 = piVar6;
  FUN_1011ae10((uint *)&local_2c,&local_38);
  piVar7 = FUN_10107380(0,0x30);
  if (piVar7 == (int *)0x0) {
    FUN_1013679e(4,0x30);
  }
  else {
    *piVar7 = 1;
    piVar7[1] = 1;
    piVar7[2] = 0;
    *(undefined1 *)(piVar7 + 3) = 0xfd;
    LOCK();
    iVar12 = *piVar7;
    *piVar7 = *piVar7 + 1;
    UNLOCK();
    if (*piVar7 != 0 && SCARRY4(iVar12,1) == *piVar7 < 0) {
      puVar8 = FUN_10107380(0,0x1c);
      if (puVar8 == (undefined8 *)0x0) {
        FUN_1013679e(4,0x1c);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      puVar8[1] = local_24;
      *puVar8 = local_2c;
      *(undefined4 *)(puVar8 + 2) = param_2;
      *(undefined4 *)((int)puVar8 + 0x14) = param_3;
      *(int **)(puVar8 + 3) = piVar7;
      LOCK();
      iVar12 = *piVar6;
      *piVar6 = *piVar6 + 1;
      UNLOCK();
      if (*piVar6 != 0 && SCARRY4(iVar12,1) == *piVar6 < 0) {
        puVar9 = FUN_10107380(0,0xc);
        if (puVar9 == (undefined4 *)0x0) {
          FUN_1013679e(4,0xc);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        *puVar9 = piVar6;
        puVar9[1] = puVar8;
        puVar9[2] = &PTR_LAB_1013f6c0;
        FUN_1010f5d0((undefined1 *)&local_4c,uVar13,puVar9);
        if ((local_4c & 0xff) != 0xff) {
          local_3c = (local_4c >> 0x18) << 0x10;
          LOCK();
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (*piVar7 == 0) {
            FUN_10053e50(piVar7);
          }
          iVar12 = (local_4c >> 8 & 0xffff) + local_3c;
          LOCK();
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (*piVar6 == 0) {
            FUN_10107640(piVar6);
          }
          local_4c = iVar12 * 0x100 | local_4c & 0xff;
          FUN_10136c40("failed to spawn threadC:\\Users\\runneradmin\\.rustup\\toolchains\\nightly-x86_64-pc-windows-msvc\\lib\\rustlib\\src\\rust\\library\\std\\src\\thread\\functions.rs"
                       ,0x16,&local_4c,&PTR_FUN_1013f548,&DAT_10156a50);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        *param_1 = piVar6;
        param_1[2] = local_48;
        param_1[1] = piVar7;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}
