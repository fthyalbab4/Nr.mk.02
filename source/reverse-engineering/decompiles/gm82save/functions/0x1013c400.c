// rea decompile_all
// name: FUN_1013c400
// address: 0x1013c400
// body: available
// range: 0x1013c400-0x1013c416 inclusive
// range: 0x1013c420-0x1013c560 inclusive
// range: 0x1013c570-0x1013c591 inclusive
// range: 0x1013c5a0-0x1013c5f2 inclusive
// range: 0x1013c600-0x1013c6a7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_1013c400(uint *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  HANDLE pvVar6;
  uint uVar7;
  HANDLE pvVar8;
  int *piVar9;
  uint uVar10;
  bool bVar11;
  int *local_30;
  uint local_2c;
  char local_28;
  HANDLE pvStack_24;
  undefined4 local_20;
  int iStack_1c;
  int *piStack_18;
  code *pcStack_14;

  uVar10 = *param_1;
  local_20 = param_2;
  do {
    uVar7 = uVar10 & 3;
    switch(uVar7) {
    case 0:
      goto switchD_1013c44d_caseD_0;
    case 1:
switchD_1013c44d_caseD_1:
      do {
        local_30 = FUN_1010c910();
        local_28 = '\0';
        local_2c = 0;
        do {
          if ((uVar10 & 1) == 0) goto LAB_1013c572;
          local_2c = uVar10 & 0xfffffffc;
          LOCK();
          uVar7 = *param_1;
          bVar11 = uVar10 == uVar7;
          if (bVar11) {
            *param_1 = (int)&local_30 + (uVar10 & 3);
            uVar7 = uVar10;
          }
          UNLOCK();
          uVar10 = uVar7;
        } while (!bVar11);
        while (local_28 == '\0') {
          LOCK();
          piVar9 = local_30 + 6;
          *(char *)piVar9 = (char)*piVar9 + -1;
          UNLOCK();
          if ((char)*piVar9 != '\0') {
            piVar9 = local_30 + 6;
            if (DAT_10163390 == (code *)0x0) {
              pvVar8 = DAT_101631bc;
              if (DAT_101631bc == (HANDLE)0xffffffff) {
                pvStack_24 = (HANDLE)0xffffffff;
                iStack_1c = (*(code *)PTR_FUN_101631a4)(&pvStack_24,0xc0000000,0,0);
                if (iStack_1c != 0) {
                  piStack_18 = &iStack_1c;
                  pcStack_14 = FUN_1009c910;
                  FUN_101369c0(&DAT_10158e08,&piStack_18,
                               &PTR_s_C__Users_runneradmin__rustup_too_10158ec8);
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                LOCK();
                bVar11 = DAT_101631bc == (HANDLE)0xffffffff;
                pvVar6 = DAT_101631bc;
                if (bVar11) {
                  DAT_101631bc = pvStack_24;
                  pvVar6 = (HANDLE)0xffffffff;
                }
                UNLOCK();
                pvVar8 = pvStack_24;
                if (!bVar11) {
                  CloseHandle(pvStack_24);
                  pvVar8 = pvVar6;
                }
              }
              (*(code *)PTR_FUN_101631ac)(pvVar8,piVar9,0,0);
              LOCK();
              *(char *)piVar9 = '\0';
              UNLOCK();
            }
            else {
              do {
                if (DAT_10163390 == (code *)0x0) {
                  FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_10158cc8);
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                (*DAT_10163390)(piVar9,&DAT_10157460,1,0xffffffff);
                LOCK();
                bVar11 = (char)*piVar9 == '\x01';
                if (bVar11) {
                  *(char *)piVar9 = '\0';
                }
                UNLOCK();
              } while (!bVar11);
            }
          }
        }
        uVar10 = *param_1;
LAB_1013c572:
        LOCK();
        *local_30 = *local_30 + -1;
        UNLOCK();
        if (*local_30 == 0) {
          FUN_10107640(local_30);
          uVar7 = uVar10 & 3;
          switch(uVar7) {
          case 0:
            goto switchD_1013c44d_caseD_0;
          case 2:
            goto switchD_1013c44d_caseD_2;
          case 3:
            goto switchD_1013c44d_caseD_3;
          }
          goto switchD_1013c44d_caseD_1;
        }
        uVar7 = uVar10 & 3;
        switch(uVar7) {
        case 0:
          goto switchD_1013c44d_caseD_0;
        case 2:
          goto switchD_1013c44d_caseD_2;
        case 3:
          goto switchD_1013c44d_caseD_3;
        }
      } while( true );
    case 2:
switchD_1013c44d_caseD_2:
      if ((char)local_20 == '\0') {
        FUN_101369c0("Once instance has previously been poisonedC:\\Users\\runneradmin\\.rustup\\toolchains\\nightly-x86_64-pc-windows-msvc\\lib\\rustlib\\src\\rust\\library\\std\\src\\sys\\sync\\once\\queue.rs"
                     ,0x55,param_5);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
switchD_1013c44d_caseD_3:
    LOCK();
    uVar5 = *param_1;
    bVar11 = uVar10 == uVar5;
    if (bVar11) {
      *param_1 = (uVar10 & 0xfffffffc) + 1;
      uVar5 = uVar10;
    }
    UNLOCK();
    uVar10 = uVar5;
  } while (!bVar11);
  local_30 = (int *)0x0;
  local_2c = CONCAT31(local_2c._1_3_,uVar7 == 2);
  (**(code **)(param_4 + 0x10))(param_3,&local_30);
  LOCK();
  uVar10 = *param_1;
  *param_1 = (uint)local_30;
  UNLOCK();
  local_30 = (int *)(uVar10 & 3);
  if (local_30 == (int *)0x1) {
    puVar4 = (undefined4 *)(uVar10 & 0xfffffffc);
    do {
      if (puVar4 == (undefined4 *)0x0) {
switchD_1013c44d_caseD_0:
        return;
      }
      piVar9 = (int *)*puVar4;
      puVar2 = (undefined4 *)puVar4[1];
      LOCK();
      iVar1 = *piVar9;
      *piVar9 = *piVar9 + 1;
      UNLOCK();
      if (*piVar9 == 0 || SCARRY4(iVar1,1) != *piVar9 < 0) goto LAB_1013c6a6;
      *(undefined1 *)(puVar4 + 2) = 1;
      FUN_10107860((char *)(piVar9 + 6));
      LOCK();
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      puVar4 = puVar2;
      if (*piVar9 == 0) {
        FUN_10107640(piVar9);
      }
    } while( true );
  }
  FUN_101369ea(0,&local_30,&DAT_1015738c,0,param_3,&DAT_10159124);
LAB_1013c6a6:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}
