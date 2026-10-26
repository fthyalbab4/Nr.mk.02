// rea decompile_all
// name: FUN_100804d0
// address: 0x100804d0
// body: available
// range: 0x100804d0-0x100804e6 inclusive
// range: 0x100804f0-0x100805dc inclusive
// range: 0x100805e0-0x10080661 inclusive
// range: 0x10080670-0x1008071c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_100804d0(int *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  LPVOID lpMem;
  char cVar4;
  uint uVar5;
  HANDLE hHeap;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  byte *pbVar9;
  uint unaff_ESI;
  uint unaff_EDI;
  uint local_3c;
  int local_38;
  uint local_34;
  int local_30;
  LPVOID local_2c;
  uint local_28;
  int *local_24;
  uint local_18;
  uint local_14;

  iVar2 = *param_1;
  do {
    if (iVar2 == -1) {
      return 0;
    }
    do {
      FUN_10091d50((undefined8 *)&local_38,(int)param_1);
      lpMem = local_2c;
      iVar2 = local_30;
      if (local_38 == -1) {
        return 0;
      }
      uVar7 = 0;
      if (local_38 == 1) {
        unaff_ESI = local_24[4];
        unaff_EDI = local_18;
        if (unaff_ESI != 1) {
          if (local_34 < unaff_ESI) {
            unaff_EDI = local_24[3];
            unaff_ESI = *(uint *)(unaff_EDI + local_34 * 8);
            if ((1 < *(int *)(unaff_EDI + 4 + local_34 * 8) - unaff_ESI) &&
               (uVar5 = unaff_ESI + 1, unaff_EDI = local_18, unaff_ESI < local_28))
            goto LAB_10080558;
          }
          goto LAB_10080610;
        }
        uVar5 = 3;
        unaff_ESI = 2;
        if (local_28 < 3) goto LAB_10080610;
LAB_10080558:
        unaff_EDI = local_18;
        if ((local_28 <= uVar5) ||
           (unaff_EDI = *(uint *)((int)local_2c + unaff_ESI * 4), unaff_EDI == 0))
        goto LAB_10080610;
        unaff_ESI = *(uint *)((int)local_2c + uVar5 * 4);
        if (unaff_ESI != 0) {
          unaff_EDI = unaff_EDI - 1;
          unaff_ESI = unaff_ESI - 1;
          uVar7 = local_18;
        }
        LOCK();
        *local_24 = *local_24 + -1;
        iVar1 = *local_24;
        UNLOCK();
        local_3c = local_14;
      }
      else {
LAB_10080610:
        LOCK();
        *local_24 = *local_24 + -1;
        iVar1 = *local_24;
        UNLOCK();
      }
      if (iVar1 == 0) {
        FUN_100d3ef0(local_24);
      }
      if (iVar2 != 0) {
        hHeap = GetProcessHeap();
        HeapFree(hHeap,0,lpMem);
      }
    } while (uVar7 == 0);
    if (unaff_ESI < unaff_EDI) goto LAB_1008070a;
    if (unaff_EDI != 0) {
      if (unaff_EDI < local_3c) {
        if (*(char *)(uVar7 + unaff_EDI) < -0x40) goto LAB_1008070a;
      }
      else if (unaff_EDI != local_3c) goto LAB_1008070a;
    }
    if (unaff_ESI != 0) {
      if (unaff_ESI < local_3c) {
        if (*(char *)(uVar7 + unaff_ESI) < -0x40) {
LAB_1008070a:
          FUN_10136b90(uVar7,local_3c,unaff_EDI,unaff_ESI,
                       &PTR_s_C__Users_runneradmin__cargo_regi_1013fa34);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
      else if (unaff_ESI != local_3c) goto LAB_1008070a;
    }
    unaff_ESI = unaff_ESI - unaff_EDI;
    if (unaff_ESI != 0) {
      pcVar8 = (char *)(uVar7 + unaff_EDI);
      if (unaff_ESI == 1) {
        cVar4 = *pcVar8;
        if ((cVar4 == '+') || (cVar4 == '-')) goto LAB_100804f0;
      }
      else {
        cVar4 = *pcVar8;
      }
      unaff_ESI = unaff_ESI - (cVar4 == '+');
      pbVar9 = (byte *)(pcVar8 + (cVar4 == '+'));
      if (unaff_ESI < 9) {
        while( true ) {
          if (unaff_ESI == 0) {
            return 1;
          }
          uVar5 = (uint)*pbVar9;
          unaff_EDI = (uVar5 - 0x41 & 0xffffffdf) + 10;
          uVar7 = uVar5 - 0x30;
          if (0x39 < uVar5) {
            uVar7 = unaff_EDI;
          }
          if (0xf < uVar7) break;
          pbVar9 = pbVar9 + 1;
          unaff_ESI = unaff_ESI - 1;
        }
      }
      else {
        uVar7 = 0;
        while (uVar7 < 0x10000000) {
          uVar6 = (uint)*pbVar9;
          unaff_EDI = (uVar6 - 0x41 & 0xffffffdf) + 10;
          uVar5 = uVar6 - 0x30;
          if (0x39 < uVar6) {
            uVar5 = unaff_EDI;
          }
          if (0xf < uVar5) break;
          pbVar9 = pbVar9 + 1;
          uVar7 = uVar5 | uVar7 << 4;
          unaff_ESI = unaff_ESI - 1;
          if (unaff_ESI == 0) {
            return 1;
          }
        }
      }
    }
LAB_100804f0:
    iVar2 = *param_1;
  } while( true );
}
