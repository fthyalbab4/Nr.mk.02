// rea decompile_all
// name: FUN_00403194
// address: 0x403194
// body: available
// range: 0x402c20-0x402cc2 inclusive
// range: 0x403194-0x4031ca inclusive
// range: 0x4031cc-0x4031e1 inclusive
// range: 0x4031e4-0x40324c inclusive
// range: 0x403250-0x403288 inclusive
// range: 0x40328c-0x4032e2 inclusive
// range: 0x4032e4-0x4032fa inclusive
// range: 0x4032fc-0x403348 inclusive
// range: 0x40334c-0x403379 inclusive
// range: 0x40337c-0x40338b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00403194(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  BOOL BVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *lpAddress;
  int iVar9;
  bool bVar10;
  uint local_20;
  DWORD DStack_18;

  puVar7 = (undefined4 *)param_1[-1];
  if (((uint)puVar7 & 7) != 0) {
    if (((uint)puVar7 & 5) != 0) {
      if (((uint)puVar7 & 3) != 0) {
        return -1;
      }
      lpAddress = param_1 + -4;
      FUN_00402b74();
      iVar3 = *lpAddress;
      piVar4 = (int *)param_1[-3];
      if ((param_1[-1] & 8) == 0) {
        BVar5 = VirtualFree(lpAddress,0,0x8000);
        if (BVar5 == 0) {
          iVar9 = -1;
        }
        else {
          iVar9 = 0;
        }
      }
      else {
        uVar8 = param_1[-1] & 0xfffffff0;
        iVar9 = 0;
        while( true ) {
          VirtualQuery(lpAddress,(PMEMORY_BASIC_INFORMATION)&stack0xffffffd4,0x1c);
          BVar5 = VirtualFree(lpAddress,0,0x8000);
          if (BVar5 == 0) break;
          if (uVar8 <= local_20) goto LAB_00402c9b;
          uVar8 = uVar8 - local_20;
          lpAddress = (int *)((int)lpAddress + local_20);
        }
        iVar9 = -1;
      }
LAB_00402c9b:
      if (iVar9 == 0) {
        *piVar4 = iVar3;
        *(int **)(iVar3 + 4) = piVar4;
      }
      DAT_00785acc = 0;
      return iVar9;
    }
    goto LAB_00403295;
  }
  pcVar2 = (char *)*puVar7;
  if (DAT_00783055 != '\0') {
    while( true ) {
      do {
        LOCK();
        cVar1 = *pcVar2;
        if (cVar1 == '\0') {
          *pcVar2 = '\x01';
        }
        UNLOCK();
        if (cVar1 == '\0') goto LAB_004031af;
      } while (DAT_007838dd != '\0');
      Sleep(0);
      LOCK();
      cVar1 = *pcVar2;
      if (cVar1 == '\0') {
        *pcVar2 = '\x01';
      }
      UNLOCK();
      if (cVar1 == '\0') break;
      Sleep(10);
    }
  }
LAB_004031af:
  piVar4 = puVar7 + 3;
  *piVar4 = *piVar4 + -1;
  iVar3 = puVar7[2];
  if (*piVar4 != 0) {
    puVar7[2] = param_1;
    param_1[-1] = iVar3 + 1;
    if (iVar3 == 0) {
      iVar3 = *(int *)(pcVar2 + 4);
      puVar7[5] = pcVar2;
      puVar7[1] = iVar3;
      *(undefined4 **)(iVar3 + 0x14) = puVar7;
      *(undefined4 **)(pcVar2 + 4) = puVar7;
      *pcVar2 = '\0';
      return 0;
    }
    *pcVar2 = '\0';
    return 0;
  }
  if (iVar3 == 0) {
LAB_004031fb:
    pcVar2[0xc] = '\0';
    pcVar2[0xd] = '\0';
    pcVar2[0xe] = '\0';
    pcVar2[0xf] = '\0';
  }
  else {
    iVar3 = puVar7[5];
    iVar9 = puVar7[1];
    *(int *)(iVar3 + 4) = iVar9;
    *(int *)(iVar9 + 0x14) = iVar3;
    if (*(undefined4 **)(pcVar2 + 0x10) == puVar7) goto LAB_004031fb;
  }
  *pcVar2 = '\0';
  param_1 = puVar7;
  puVar7 = (undefined4 *)puVar7[-1];
LAB_00403295:
  uVar8 = (uint)puVar7 & 0xfffffff0;
  if (DAT_00783055 != '\0') {
    while( true ) {
      do {
        LOCK();
        bVar10 = DAT_00783a3c == '\0';
        if (bVar10) {
          DAT_00783a3c = '\x01';
        }
        UNLOCK();
        if (bVar10) goto LAB_004032a1;
      } while (DAT_007838dd != '\0');
      Sleep(0);
      LOCK();
      bVar10 = DAT_00783a3c == '\0';
      if (bVar10) {
        DAT_00783a3c = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      Sleep(10);
    }
  }
LAB_004032a1:
  uVar6 = *(uint *)((uVar8 - 4) + (int)param_1);
  if ((*(uint *)((uVar8 - 4) + (int)param_1) & 1) == 0) {
    *(uint *)((uVar8 - 4) + (int)param_1) = uVar6 | 8;
  }
  else {
    iVar3 = uVar8 + (int)param_1;
    uVar6 = uVar6 & 0xfffffff0;
    uVar8 = uVar8 + uVar6;
    if (0xb2f < uVar6) {
      FUN_004029f0(iVar3);
    }
  }
  if ((*(byte *)(param_1 + -1) & 8) != 0) {
    uVar6 = param_1[-2];
    param_1 = (undefined4 *)((int)param_1 - uVar6);
    uVar8 = uVar8 + uVar6;
    if (0xb2f < uVar6) {
      FUN_004029f0(param_1);
    }
  }
  if (uVar8 == 0x13ffe0) {
    if (DAT_00783a44 != 0x13ffe0) {
      FUN_00402a90();
      param_1[0x4fff7] = 2;
      DAT_00783a44 = 0x13ffe0;
      DAT_00783a40 = param_1 + 0x4fff8;
      DAT_00783a3c = 0;
      return 0;
    }
    iVar3 = param_1[-4];
    piVar4 = (int *)param_1[-3];
    *(int **)(iVar3 + 4) = piVar4;
    *piVar4 = iVar3;
    DAT_00783a3c = 0;
    DStack_18 = 0x403341;
    BVar5 = VirtualFree(param_1 + -4,0,0x8000);
    return -(uint)(BVar5 == 0);
  }
  param_1[-1] = uVar8 + 3;
  *(uint *)((uVar8 - 8) + (int)param_1) = uVar8;
  FUN_00402a30(param_1,uVar8);
  DAT_00783a3c = 0;
  return 0;
}
