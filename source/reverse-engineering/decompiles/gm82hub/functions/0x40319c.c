// rea decompile_all
// name: FUN_0040319c
// address: 0x40319c
// body: available
// range: 0x402c28-0x402cca inclusive
// range: 0x40319c-0x4031d2 inclusive
// range: 0x4031d4-0x4031e9 inclusive
// range: 0x4031ec-0x403254 inclusive
// range: 0x403258-0x403290 inclusive
// range: 0x403294-0x4032ea inclusive
// range: 0x4032ec-0x403302 inclusive
// range: 0x403304-0x403350 inclusive
// range: 0x403354-0x403381 inclusive
// range: 0x403384-0x403393 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040319c(undefined4 *param_1)

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
      FUN_00402b7c();
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
          if (uVar8 <= local_20) goto LAB_00402ca3;
          uVar8 = uVar8 - local_20;
          lpAddress = (int *)((int)lpAddress + local_20);
        }
        iVar9 = -1;
      }
LAB_00402ca3:
      if (iVar9 == 0) {
        *piVar4 = iVar3;
        *(int **)(iVar3 + 4) = piVar4;
      }
      DAT_0068cacc = 0;
      return iVar9;
    }
    goto LAB_0040329d;
  }
  pcVar2 = (char *)*puVar7;
  if (DAT_0068a055 != '\0') {
    while( true ) {
      do {
        LOCK();
        cVar1 = *pcVar2;
        if (cVar1 == '\0') {
          *pcVar2 = '\x01';
        }
        UNLOCK();
        if (cVar1 == '\0') goto LAB_004031b7;
      } while (DAT_0068a8dd != '\0');
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
LAB_004031b7:
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
LAB_00403203:
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
    if (*(undefined4 **)(pcVar2 + 0x10) == puVar7) goto LAB_00403203;
  }
  *pcVar2 = '\0';
  param_1 = puVar7;
  puVar7 = (undefined4 *)puVar7[-1];
LAB_0040329d:
  uVar8 = (uint)puVar7 & 0xfffffff0;
  if (DAT_0068a055 != '\0') {
    while( true ) {
      do {
        LOCK();
        bVar10 = DAT_0068aa3c == '\0';
        if (bVar10) {
          DAT_0068aa3c = '\x01';
        }
        UNLOCK();
        if (bVar10) goto LAB_004032a9;
      } while (DAT_0068a8dd != '\0');
      Sleep(0);
      LOCK();
      bVar10 = DAT_0068aa3c == '\0';
      if (bVar10) {
        DAT_0068aa3c = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      Sleep(10);
    }
  }
LAB_004032a9:
  uVar6 = *(uint *)((uVar8 - 4) + (int)param_1);
  if ((*(uint *)((uVar8 - 4) + (int)param_1) & 1) == 0) {
    *(uint *)((uVar8 - 4) + (int)param_1) = uVar6 | 8;
  }
  else {
    iVar3 = uVar8 + (int)param_1;
    uVar6 = uVar6 & 0xfffffff0;
    uVar8 = uVar8 + uVar6;
    if (0xb2f < uVar6) {
      FUN_004029f8(iVar3);
    }
  }
  if ((*(byte *)(param_1 + -1) & 8) != 0) {
    uVar6 = param_1[-2];
    param_1 = (undefined4 *)((int)param_1 - uVar6);
    uVar8 = uVar8 + uVar6;
    if (0xb2f < uVar6) {
      FUN_004029f8(param_1);
    }
  }
  if (uVar8 == 0x13ffe0) {
    if (DAT_0068aa44 != 0x13ffe0) {
      FUN_00402a98();
      param_1[0x4fff7] = 2;
      DAT_0068aa44 = 0x13ffe0;
      DAT_0068aa40 = param_1 + 0x4fff8;
      DAT_0068aa3c = 0;
      return 0;
    }
    iVar3 = param_1[-4];
    piVar4 = (int *)param_1[-3];
    *(int **)(iVar3 + 4) = piVar4;
    *piVar4 = iVar3;
    DAT_0068aa3c = 0;
    DStack_18 = 0x403349;
    BVar5 = VirtualFree(param_1 + -4,0,0x8000);
    return -(uint)(BVar5 == 0);
  }
  param_1[-1] = uVar8 + 3;
  *(uint *)((uVar8 - 8) + (int)param_1) = uVar8;
  FUN_00402a38(param_1,uVar8);
  DAT_0068aa3c = 0;
  return 0;
}
