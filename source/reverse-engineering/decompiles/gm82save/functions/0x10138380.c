// rea decompile_all
// name: FUN_10138380
// address: 0x10138380
// body: available
// range: 0x10138380-0x10138399 inclusive
// range: 0x101383a0-0x101386e7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10138380(byte *param_1)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  code *pcVar4;
  byte bVar5;
  byte bVar6;
  ulonglong *lpTlsValue;
  LPVOID lpMem;
  HANDLE hHeap;
  int iVar7;
  int *piVar8;
  uint uVar9;
  DWORD dwTlsIndex;
  bool bVar10;
  int local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  ulonglong local_38;
  int local_30;
  ulonglong local_2c;
  ulonglong local_24;
  ulonglong local_1c;
  int local_14;

  bVar5 = *param_1;
  uVar9 = 0;
LAB_101383af:
  while ((bVar5 & 1) == 0) {
    LOCK();
    bVar6 = *param_1;
    bVar10 = bVar5 == bVar6;
    if (bVar10) {
      *param_1 = bVar5 | 1;
      bVar6 = bVar5;
    }
    bVar5 = bVar6;
    UNLOCK();
    if (bVar10) {
      return;
    }
  }
  if ((bVar5 & 2) != 0) goto LAB_101383cb;
  if (9 < uVar9) goto code_r0x101383c0;
  uVar1 = uVar9 + 1;
  if (uVar9 < 3) {
    iVar7 = 2 << ((byte)uVar9 & 0x1f);
    do {
      iVar7 = iVar7 + -1;
      uVar9 = uVar1;
    } while (iVar7 != 0);
  }
  else {
    Sleep(0);
    uVar9 = uVar1;
  }
  goto LAB_10138684;
code_r0x101383c0:
  LOCK();
  bVar6 = *param_1;
  bVar10 = bVar5 == bVar6;
  if (bVar10) {
    *param_1 = bVar5 | 2;
    bVar6 = bVar5;
  }
  bVar5 = bVar6;
  UNLOCK();
  if (bVar10) {
LAB_101383cb:
    local_2c = local_2c & 0xffffffff00000000;
    if (DAT_101630d0 == 0) {
      dwTlsIndex = FUN_1013be20(&DAT_101630d0);
      lpTlsValue = TlsGetValue(dwTlsIndex);
    }
    else {
      dwTlsIndex = DAT_101630d0 - 1;
      lpTlsValue = TlsGetValue(dwTlsIndex);
    }
    if (lpTlsValue < (ulonglong *)0x2) {
      if (lpTlsValue == (ulonglong *)0x1) {
        lpTlsValue = (ulonglong *)0x0;
      }
      else {
        FUN_100b6bb0(&local_48);
        lpTlsValue = FUN_10107380(0,0x20);
        if (lpTlsValue == (ulonglong *)0x0) {
          FUN_1013679e(4,0x20);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        *(int *)(lpTlsValue + 3) = local_30;
        lpTlsValue[2] = local_38;
        lpTlsValue[1] = local_40;
        *lpTlsValue = CONCAT44(uStack_44,local_48);
        *(DWORD *)((int)lpTlsValue + 0x1c) = dwTlsIndex;
        lpMem = TlsGetValue(dwTlsIndex);
        TlsSetValue(dwTlsIndex,lpTlsValue);
        if (lpMem != (LPVOID)0x0) {
          LOCK();
          DAT_101632e4 = DAT_101632e4 + -1;
          UNLOCK();
          hHeap = GetProcessHeap();
          HeapFree(hHeap,0,lpMem);
        }
      }
    }
    if (lpTlsValue == (ulonglong *)0x0) {
      lpTlsValue = &local_2c;
      if ((int)local_2c == 0) {
        FUN_100b6bb0(&local_48);
        local_2c = CONCAT44(uStack_44,local_48);
        local_14 = local_30;
        lpTlsValue = &local_2c;
        local_1c = local_38;
        local_24 = local_40;
      }
    }
    while( true ) {
      piVar8 = DAT_101632e8;
      if (DAT_101632e8 == (int *)0x0) {
        piVar8 = FUN_10138820();
      }
      uVar9 = (uint)((int)param_1 * -0x61c88647) >> (-(char)piVar8[2] & 0x1fU);
      if ((uint)piVar8[1] <= uVar9) {
        FUN_10136b52(uVar9,piVar8[1],&PTR_s_C__Users_runneradmin__cargo_regi_1014fdcc);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      iVar7 = *piVar8;
      piVar3 = (int *)(iVar7 + 0x18 + uVar9 * 0x40);
      LOCK();
      bVar10 = *piVar3 == 0;
      if (bVar10) {
        *piVar3 = 1;
      }
      UNLOCK();
      iVar7 = iVar7 + uVar9 * 0x40;
      if (!bVar10) {
        FUN_10138880((uint *)(iVar7 + 0x18));
      }
      if (DAT_101632e8 == piVar8) break;
      LOCK();
      puVar2 = (uint *)(iVar7 + 0x18);
      uVar9 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (3 < uVar9 && (char)((uVar9 & 2) >> 1) == '\0') {
        FUN_101389f0((uint *)(iVar7 + 0x18));
      }
    }
    bVar5 = *param_1;
    if (bVar5 == 3) {
      *(undefined1 *)(lpTlsValue + 3) = 0;
      *(int *)((int)lpTlsValue + 0xc) = 0;
      *(byte **)(lpTlsValue + 1) = param_1;
      *(int *)((int)lpTlsValue + 0x14) = 0;
      *(int *)((int)lpTlsValue + 4) = 1;
      if (*(int *)(iVar7 + 0x1c) == 0) {
        *(ulonglong **)(iVar7 + 0x1c) = lpTlsValue;
      }
      else {
        *(ulonglong **)(*(int *)(iVar7 + 0x20) + 0xc) = lpTlsValue;
      }
      *(ulonglong **)(iVar7 + 0x20) = lpTlsValue;
      LOCK();
      puVar2 = (uint *)(iVar7 + 0x18);
      uVar9 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (3 < uVar9 && (char)((uVar9 & 2) >> 1) == '\0') {
        FUN_101389f0((uint *)(iVar7 + 0x18));
      }
      piVar8 = (int *)((int)lpTlsValue + 4);
      piVar3 = *(int **)lpTlsValue;
      if (*piVar3 == 0) {
        iVar7 = *piVar8;
        while (iVar7 != 0) {
          local_48 = 1;
          (*(code *)piVar3[1])(piVar8,&local_48,4,0xffffffff);
          iVar7 = *piVar8;
        }
      }
      else {
        (*(code *)piVar3[1])(piVar3[2],piVar8,0,0);
      }
      bVar6 = (int)lpTlsValue[2] != 1;
    }
    else {
      LOCK();
      puVar2 = (uint *)(iVar7 + 0x18);
      uVar9 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      bVar6 = (byte)((uVar9 & 2) >> 1);
      if (3 < uVar9 && bVar6 == 0) {
        bVar6 = FUN_101389f0((uint *)(iVar7 + 0x18));
      }
    }
    if ((int)local_2c != 0) {
      LOCK();
      DAT_101632e4 = DAT_101632e4 + -1;
      UNLOCK();
    }
    uVar9 = 0;
    if ((bVar5 == 3 & (bVar6 ^ 1)) != 0) {
      return;
    }
LAB_10138684:
    bVar5 = *param_1;
  }
  goto LAB_101383af;
}
