// rea decompile_all
// name: FUN_100773a0
// address: 0x100773a0
// body: available
// range: 0x100773a0-0x100776ad inclusive
// range: 0x100776b0-0x100777cb inclusive
// range: 0x100777d0-0x10077a48 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_100773a0(void)

{
  LPVOID pvVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  code *pcVar4;
  PSRWLOCK pRVar5;
  char cVar6;
  HANDLE pvVar7;
  short *psVar8;
  int extraout_EDX;
  int iVar9;
  int iVar10;
  uint uVar11;
  PVOID lpMem;
  bool bVar12;
  PSRWLOCK pRStack_a8;
  uint uStack_a4;
  int iStack_a0;
  PSRWLOCK pRStack_9c;
  uint uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  uint uStack_80;
  undefined8 local_78;
  int iStack_70;
  PSRWLOCK pRStack_6c;
  uint uStack_68;
  undefined8 uStack_64;
  uint uStack_5c;
  PSRWLOCK pRStack_48;
  int iStack_44;
  uint uStack_1c;
  uint uStack_18;

  if (DAT_10163038 != -1) {
    LOCK();
    bVar12 = DAT_10163020 == '\0';
    if (bVar12) {
      DAT_10163020 = '\x01';
    }
    UNLOCK();
    pcVar4 = (code *)PTR_FUN_10163034;
    if (!bVar12) {
      FUN_10138380((byte *)&DAT_10163020);
      pcVar4 = (code *)PTR_FUN_10163034;
    }
    PTR_FUN_10163034 = pcVar4;
    if (DAT_10163024 == (PSRWLOCK)0xffffffff) {
      PTR_FUN_10163034 = (undefined *)0x0;
      pRVar5 = DAT_10163058;
      if (pcVar4 == (code *)0x0) {
LAB_1007797d:
        DAT_10163058 = pRVar5;
        FUN_101369c0("Lazy instance has previously been poisoned",0x55,
                     &PTR_s_C__Users_runneradmin__cargo_regi_1013fd70);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      (*pcVar4)(&pRStack_a8);
      uStack_90 = CONCAT44(iStack_a0,uStack_a4);
      uStack_88 = CONCAT44(uStack_88._4_4_,pRStack_9c);
      if (DAT_10163024 == (PSRWLOCK)0xffffffff) {
        DAT_10163024 = pRStack_a8;
        DAT_10163030 = pRStack_9c;
        _DAT_10163028 = uStack_90;
      }
      else if (pRStack_a8 != (PSRWLOCK)0xffffffff) {
LAB_1007741f:
        pRStack_9c = (PSRWLOCK)(undefined4)uStack_88;
        uStack_a4 = (uint)uStack_90;
        iStack_a0 = (int)((ulonglong)uStack_90 >> 0x20);
        FUN_10003bb0((int *)&pRStack_a8);
        FUN_101369c0("reentrant initC:\\Users\\runneradmin\\.rustup\\toolchains\\nightly-x86_64-pc-windows-msvc\\lib\\rustlib\\src\\rust\\library\\core\\src\\cell\\once.rs"
                     ,0x1d,&PTR_s_C__Users_runneradmin__cargo_regi_1013f3c8);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      pRStack_a8 = (PSRWLOCK)0xffffffff;
      FUN_10003bb0((int *)&pRStack_a8);
    }
    FUN_100534d0((undefined4 *)&local_78,DAT_1016302c,DAT_10163030);
    if (iStack_70 != -3) {
      uStack_90 = CONCAT44(uStack_68,pRStack_6c);
      uStack_80 = uStack_5c;
      uStack_88 = uStack_64;
      if (iStack_70 != -2) {
        FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_78,&PTR_FUN_10142f20,
                     &PTR_s_src_regular_project_watcher_rs_10142f30);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uStack_98 = uStack_5c;
      iStack_a0 = (int)uStack_64;
      pRStack_9c = (PSRWLOCK)((ulonglong)uStack_64 >> 0x20);
      pRStack_a8 = pRStack_6c;
      uStack_a4 = uStack_68;
      if ((uStack_5c & 0xff) != 2) {
        if ((uStack_5c & 0xff) == 3) {
          iVar10 = iStack_a0 << 4;
          uVar11 = uStack_68;
          do {
            if (iVar10 == 0) goto LAB_1007755e;
            FUN_1011c320((uint *)&local_78,*(int *)(uVar11 + 4),*(int *)(uVar11 + 8));
            if (((uint)local_78 & local_78._4_4_) == 0xffffffff) {
              if ((char)iStack_70 == '\x03') {
                puVar3 = pRStack_6c[1].Ptr;
                pvVar1 = pRStack_6c->Ptr;
                if ((code *)*puVar3 != (code *)0x0) {
                  (*(code *)*puVar3)(pvVar1);
                }
                if (puVar3[1] != 0) {
                  FUN_10093cf0(pvVar1,puVar3[2]);
                }
                pvVar7 = GetProcessHeap();
                HeapFree(pvVar7,0,pRStack_6c);
              }
              break;
            }
            uVar11 = uVar11 + 0x10;
            iVar10 = iVar10 + -0x10;
          } while ((SBORROW4(DAT_10163014,iStack_44) !=
                   SBORROW4(DAT_10163014 - iStack_44,(uint)(DAT_10163010 < pRStack_48))) ==
                   (int)((DAT_10163014 - iStack_44) - (uint)(DAT_10163010 < pRStack_48)) < 0);
        }
        local_78 = CONCAT44(uStack_a4,pRStack_a8);
        uStack_68 = uStack_98;
        iStack_70 = iStack_a0;
        pRStack_6c = pRStack_9c;
        LOCK();
        bVar12 = DAT_10163020 == '\x01';
        if (bVar12) {
          DAT_10163020 = '\0';
        }
        UNLOCK();
        if (!bVar12) {
          FUN_10137fb0(&DAT_10163020);
        }
        FUN_1007a660();
        pRStack_a8 = (PSRWLOCK)0x0;
        VirtualProtect(&DAT_0051f74c,4,4,(PDWORD)&pRStack_a8);
        _DAT_0051f74c = 0xfb5adc0;
        VirtualProtect(&DAT_0051f74c,4,(DWORD)pRStack_a8,(PDWORD)&pRStack_a8);
        pvVar7 = GetCurrentProcess();
        FlushInstructionCache(pvVar7,&DAT_0051f74c,4);
        FUN_100071e0((int *)&local_78);
        goto LAB_10077649;
      }
LAB_1007755e:
      FUN_100071e0((int *)&pRStack_a8);
    }
    LOCK();
    bVar12 = DAT_10163020 == '\x01';
    if (bVar12) {
      DAT_10163020 = '\0';
    }
    UNLOCK();
    if (!bVar12) {
      FUN_10137fb0(&DAT_10163020);
    }
  }
LAB_10077649:
  LOCK();
  bVar12 = DAT_10163054 == '\0';
  if (bVar12) {
    DAT_10163054 = '\x01';
  }
  UNLOCK();
  pcVar4 = (code *)PTR_FUN_10163068;
  if (!bVar12) {
    FUN_10138380((byte *)&DAT_10163054);
    pcVar4 = (code *)PTR_FUN_10163068;
  }
  while( true ) {
    PTR_FUN_10163068 = pcVar4;
    if (DAT_10163058 == (PSRWLOCK)0xffffffff) {
      PTR_FUN_10163068 = (undefined *)0x0;
      pRVar5 = (PSRWLOCK)0xffffffff;
      if (pcVar4 == (code *)0x0) goto LAB_1007797d;
      (*pcVar4)(&pRStack_a8);
      uStack_90 = CONCAT44(iStack_a0,uStack_a4);
      uStack_88 = CONCAT44(uStack_88._4_4_,pRStack_9c);
      if (DAT_10163058 == (PSRWLOCK)0xffffffff) {
        DAT_10163058 = pRStack_a8;
        DAT_10163064 = pRStack_9c;
        _DAT_1016305c = uStack_90;
      }
      else if (pRStack_a8 != (PSRWLOCK)0xffffffff) goto LAB_1007741f;
      pRStack_a8 = (PSRWLOCK)0xffffffff;
      FUN_10003bb0((int *)&pRStack_a8);
    }
    FUN_100534d0((undefined4 *)&local_78,DAT_10163060,DAT_10163064);
    if (iStack_70 == -3) goto LAB_10077904;
    uStack_90 = CONCAT44(uStack_68,pRStack_6c);
    uStack_80 = uStack_5c;
    uStack_88 = uStack_64;
    if (iStack_70 != -2) {
      FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_78,&PTR_FUN_10142f20,
                   &PTR_s_src_regular_extension_watcher_rs_10142f80);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uStack_98 = uStack_5c;
    iStack_a0 = (int)uStack_64;
    pRStack_9c = (PSRWLOCK)((ulonglong)uStack_64 >> 0x20);
    pRStack_a8 = pRStack_6c;
    uStack_a4 = uStack_68;
    if ((uStack_5c & 0xff) == 3) break;
    if ((uStack_5c & 0xff) == 2) goto LAB_100778fd;
LAB_10077760:
    local_78 = CONCAT44(uStack_a4,pRStack_a8);
    pRStack_a8 = (PSRWLOCK)0x0;
    uStack_a4 = 0;
    uStack_68 = uStack_98;
    iStack_70 = iStack_a0;
    pRStack_6c = pRStack_9c;
    (*(code *)PTR_FUN_101631b4)(&pRStack_a8);
    DAT_101632d8 = 1;
    DAT_10163050 = uStack_a4;
    DAT_1016304c = pRStack_a8;
    FUN_100071e0((int *)&local_78);
    pcVar4 = (code *)PTR_FUN_10163068;
  }
  if (iStack_a0 != 0) {
    uStack_1c = iStack_a0 * 0x10 + uStack_68;
    uVar11 = uStack_68;
    do {
      pbVar2 = *(byte **)(uVar11 + 4);
      uStack_18 = *(uint *)(uVar11 + 8);
      psVar8 = (short *)FUN_10110b00(pbVar2,uStack_18);
      if ((psVar8 != (short *)0x0) &&
         ((iVar10 = extraout_EDX, extraout_EDX != 2 || (iVar10 = extraout_EDX, *psVar8 != 0x2e2e))))
      {
        do {
          iVar9 = iVar10;
          if (iVar9 == 0) goto LAB_100777f0;
          iVar10 = iVar9 + -1;
        } while (*(char *)((int)psVar8 + iVar9 + -1) != '.');
        if ((extraout_EDX - iVar9 == 3 && iVar9 + -1 != 0) &&
           (*(char *)((int)psVar8 + iVar9 + 2) == 'd' && *(short *)((int)psVar8 + iVar9) == 0x6567))
        {
          FUN_1011c320((uint *)&local_78,(int)pbVar2,uStack_18);
          pRVar5 = pRStack_6c;
          if (((uint)local_78 & local_78._4_4_) == 0xffffffff) {
            if ((char)iStack_70 == '\x03') {
              puVar3 = pRStack_6c[1].Ptr;
              lpMem = pRStack_6c->Ptr;
              if ((code *)*puVar3 != (code *)0x0) {
                (*(code *)*puVar3)(lpMem);
              }
              if (puVar3[1] != 0) {
                if (8 < (uint)puVar3[2]) {
                  lpMem = *(PVOID *)((int)lpMem + -4);
                }
                pvVar7 = GetProcessHeap();
                HeapFree(pvVar7,0,lpMem);
              }
              pvVar7 = GetProcessHeap();
              HeapFree(pvVar7,0,pRVar5);
            }
            goto LAB_10077760;
          }
          if ((SBORROW4(DAT_10163050,iStack_44) !=
              SBORROW4(DAT_10163050 - iStack_44,(uint)(DAT_1016304c < pRStack_48))) !=
              (int)((DAT_10163050 - iStack_44) - (uint)(DAT_1016304c < pRStack_48)) < 0)
          goto LAB_10077760;
        }
      }
LAB_100777f0:
      uVar11 = uVar11 + 0x10;
      if (uVar11 == uStack_1c) break;
    } while( true );
  }
LAB_100778fd:
  FUN_100071e0((int *)&pRStack_a8);
LAB_10077904:
  LOCK();
  bVar12 = DAT_10163054 == '\x01';
  cVar6 = DAT_10163054;
  if (bVar12) {
    DAT_10163054 = '\0';
    cVar6 = '\x01';
  }
  UNLOCK();
  if (!bVar12) {
    cVar6 = FUN_10137fb0(&DAT_10163054);
  }
  return cVar6;
}
