// rea decompile_all
// name: FUN_1010a5e0
// address: 0x1010a5e0
// body: available
// range: 0x1010a5e0-0x1010a9cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1010a5e0(undefined1 *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  byte *local_24;
  byte local_14;

  if (param_3 == 0) {
    bVar8 = 0;
LAB_1010a62c:
    uVar1 = 0;
    bVar5 = 0;
    local_14 = 0;
LAB_1010a63e:
    bVar6 = 0;
LAB_1010a646:
    uVar13 = 0;
LAB_1010a648:
    bVar7 = 0;
    uVar11 = 0;
  }
  else {
    bVar8 = *param_2;
    if (bVar8 == 0x2f) {
      bVar8 = 0x5c;
    }
    if (param_3 == 1) goto LAB_1010a62c;
    uVar1 = 0x5c;
    if (param_2[1] != 0x2f) {
      uVar1 = (uint)param_2[1];
    }
    if (param_3 != 2) {
      bVar5 = param_2[2];
      if (bVar5 == 0x2f) {
        bVar5 = 0x5c;
      }
      if (param_3 == 3) goto LAB_1010a670;
      local_14 = 0x5c;
      if (param_2[3] != 0x2f) {
        local_14 = param_2[3];
      }
      if (param_3 == 4) goto LAB_1010a63e;
      bVar6 = param_2[4];
      if (bVar6 == 0x2f) {
        bVar6 = 0x5c;
      }
      if (param_3 == 5) goto LAB_1010a646;
      uVar13 = 0x5c;
      if (param_2[5] != 0x2f) {
        uVar13 = (uint)param_2[5];
      }
      if (param_3 != 6) {
        bVar7 = param_2[6];
        if (bVar7 == 0x2f) {
          bVar7 = 0x5c;
        }
        if (param_3 == 7) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0x5c;
          if (param_2[7] != 0x2f) {
            uVar11 = (uint)param_2[7];
          }
        }
        goto LAB_1010a68e;
      }
      goto LAB_1010a648;
    }
    bVar5 = 0;
LAB_1010a670:
    local_14 = 0;
    bVar6 = 0;
    uVar13 = 0;
    bVar7 = 0;
    uVar11 = 0;
  }
LAB_1010a68e:
  if ((param_3 < 2) || (((uint)bVar8 | uVar1 << 8) != 0x5c5c)) {
    if ((1 < param_3) &&
       ((param_2[1] == 0x3a && (bVar8 = *param_2, (byte)((bVar8 & 0xdf) + 0xbf) < 0x1a)))) {
      *param_1 = 5;
      param_1[1] = (0x60 < bVar8) << 5 ^ bVar8;
      return;
    }
    *param_1 = 0xff;
    return;
  }
  if (param_3 < 4) {
    iVar2 = 1;
    if (param_3 == 2) goto LAB_1010a7ca;
  }
  else {
    if (CONCAT11(local_14,bVar5) == 0x5c2e) {
      iVar12 = 0;
      iVar14 = param_3 - 4;
      iVar2 = iVar12;
      if (iVar14 != 0) {
        do {
          bVar8 = (param_2 + 4)[iVar12];
          iVar2 = iVar12;
          if ((bVar8 == 0x2f) || (bVar8 == 0x5c)) break;
          iVar12 = iVar12 + 1;
          iVar2 = iVar14;
        } while (iVar14 != iVar12);
      }
      *param_1 = 3;
      *(byte **)(param_1 + 4) = param_2 + 4;
      *(int *)(param_1 + 8) = iVar2;
      return;
    }
    if ((((CONCAT11(local_14,bVar5) == 0x5c3f) && (*param_2 != 0x2f)) && (param_2[1] != 0x2f)) &&
       ((param_2[2] != 0x2f && (param_2[3] != 0x2f)))) {
      if ((7 < param_3) &&
         (((uint)bVar6 | uVar13 << 8 | (uint)bVar7 << 0x10 | uVar11 << 0x18) == 0x5c434e55)) {
        iVar2 = param_3 - 8;
        if (iVar2 == 0) {
          local_24 = (byte *)0x1;
          iVar12 = 0;
LAB_1010a9ae:
          iVar4 = 0;
        }
        else {
          pbVar10 = param_2 + 9;
          iVar14 = param_3 - 10;
          iVar12 = 0;
          do {
            if (pbVar10[-1] == 0x5c) {
              local_24 = param_2 + iVar12 + 9;
              iVar2 = iVar2 - (iVar12 + 1);
              if (iVar2 == 0) goto LAB_1010a9ae;
              iVar3 = 0;
              goto LAB_1010a99b;
            }
            iVar14 = iVar14 + -1;
            iVar12 = iVar12 + 1;
            pbVar10 = pbVar10 + 1;
          } while (iVar14 != -2);
          local_24 = (byte *)0x1;
          iVar4 = 0;
          iVar12 = iVar2;
        }
LAB_1010a9b0:
        *param_1 = 1;
        *(byte **)(param_1 + 4) = param_2 + 8;
        *(int *)(param_1 + 8) = iVar12;
        *(byte **)(param_1 + 0xc) = local_24;
        *(int *)(param_1 + 0x10) = iVar4;
        return;
      }
      uVar1 = param_3 - 4;
      pbVar10 = param_2 + 4;
      if (uVar1 < 3) {
        uVar13 = uVar1;
        if (param_3 == 4) goto LAB_1010a974;
        if (param_3 == 6) goto LAB_1010a922;
      }
      else if ((param_2[6] == 0x2f) || (param_2[6] == 0x5c)) {
LAB_1010a922:
        if ((param_2[5] == 0x3a) &&
           (uVar9 = CONCAT11(*pbVar10,*pbVar10) & 0xdfff, bVar8 = (byte)uVar9,
           (byte)((char)(uVar9 >> 8) + 0xbfU) < 0x1a)) {
          *param_1 = 2;
          param_1[1] = (0x60 < bVar8) << 5 ^ bVar8;
          return;
        }
      }
      uVar11 = 0;
      do {
        uVar13 = uVar11;
        if (pbVar10[uVar11] == 0x5c) break;
        uVar11 = uVar11 + 1;
        uVar13 = uVar1;
      } while (param_3 - 4 != uVar11);
LAB_1010a974:
      *param_1 = 0;
      *(byte **)(param_1 + 4) = pbVar10;
      *(uint *)(param_1 + 8) = uVar13;
      return;
    }
    iVar2 = param_3 - 2;
  }
  pbVar10 = param_2 + 3;
  iVar12 = param_3 - 4;
  iVar14 = 0;
  do {
    if ((pbVar10[-1] == 0x2f) || (pbVar10[-1] == 0x5c)) {
      iVar2 = iVar2 - (iVar14 + 1);
      if (iVar2 != 0) {
        iVar4 = 0;
        goto LAB_1010a790;
      }
      break;
    }
    iVar12 = iVar12 + -1;
    iVar14 = iVar14 + 1;
    pbVar10 = pbVar10 + 1;
  } while (iVar12 != -2);
LAB_1010a7ca:
  *param_1 = 0xff;
  return;
  while (bVar15 = iVar4 != iVar12, iVar3 = iVar2, iVar4 = iVar4 + 1, bVar15) {
LAB_1010a790:
    iVar3 = iVar4;
    if ((pbVar10[iVar4] == 0x2f) || (pbVar10[iVar4] == 0x5c)) break;
  }
  if ((iVar14 != 0) && (iVar3 != 0)) {
    *param_1 = 4;
    *(byte **)(param_1 + 4) = param_2 + 2;
    *(int *)(param_1 + 8) = iVar14;
    *(byte **)(param_1 + 0xc) = param_2 + iVar14 + 3;
    *(int *)(param_1 + 0x10) = iVar3;
    return;
  }
  goto LAB_1010a7ca;
  while (bVar15 = iVar3 != iVar14, iVar4 = iVar2, iVar3 = iVar3 + 1, bVar15) {
LAB_1010a99b:
    iVar4 = iVar3;
    if (pbVar10[iVar3] == 0x5c) break;
  }
  goto LAB_1010a9b0;
}
