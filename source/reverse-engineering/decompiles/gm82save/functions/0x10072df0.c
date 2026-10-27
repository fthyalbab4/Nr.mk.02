// rea decompile_all
// name: FUN_10072df0
// address: 0x10072df0
// body: available
// range: 0x10072df0-0x10072f29 inclusive
// range: 0x10072f30-0x10073233 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __fastcall FUN_10072df0(byte *param_1,uint param_2)

{
  byte bVar1;
  undefined4 in_EAX;
  undefined3 uVar3;
  undefined4 uVar2;
  byte *pbVar4;
  byte *pbVar5;
  undefined3 uVar10;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  undefined8 uVar14;

  if (param_2 == 0) {
    uVar14 = FUN_10002090(param_1,0);
    if ((int)((ulonglong)uVar14 >> 0x20) == 0) {
      uVar2 = CONCAT31((int3)((ulonglong)uVar14 >> 8),1);
      uVar8 = CONCAT31((int3)((ulonglong)uVar14 >> 0x28),0x20);
      goto LAB_1007320d;
    }
LAB_10072f26:
    iVar13 = 0;
    do {
      if (param_2 == *(uint *)((int)&DAT_1014269c + iVar13)) {
        uVar6 = 0;
        do {
          if (param_2 == uVar6) {
            uVar2 = CONCAT31((int3)((uint)*(int *)((int)&PTR_DAT_10142698 + iVar13) >> 8),1);
            uVar8 = 0;
            goto LAB_1007320d;
          }
          pbVar4 = param_1 + uVar6;
          bVar1 = *(byte *)(*(int *)((int)&PTR_DAT_10142698 + iVar13) + uVar6);
          uVar6 = uVar6 + 1;
        } while ((byte)(((byte)(*pbVar4 + 0xbf) < 0x1a) << 5 | *pbVar4) ==
                 (byte)(((byte)(bVar1 + 0xbf) < 0x1a) << 5 | bVar1));
      }
      iVar13 = iVar13 + 8;
      uVar8 = 0;
      uVar2 = 0;
    } while (iVar13 != 0xb0);
  }
  else {
    uVar3 = (undefined3)((uint)in_EAX >> 8);
    uVar10 = (undefined3)(param_2 >> 8);
    if (param_2 == 2) {
      if (*(short *)param_1 != 0x2e2e) goto LAB_10072e22;
    }
    else if ((param_2 != 1) || (*param_1 != 0x2e)) {
LAB_10072e22:
      uVar2 = CONCAT31(uVar3,1);
      uVar8 = CONCAT31(uVar10,0x2e);
      if (param_1[param_2 - 1] == 0x2e) goto LAB_1007320d;
      uVar14 = FUN_10002090(param_1,param_2);
      uVar6 = (uint)((ulonglong)uVar14 >> 0x20);
      uVar3 = (undefined3)((ulonglong)uVar14 >> 8);
      if (uVar6 == 0) {
        uVar8 = CONCAT31((int3)((ulonglong)uVar14 >> 0x28),0x20);
        uVar2 = CONCAT31(uVar3,1);
        goto LAB_1007320d;
      }
      if (7 < param_2) {
        pbVar5 = (byte *)((uint)(param_1 + 3) & 0xfffffffc);
        pbVar4 = pbVar5 + -(int)param_1;
        if (pbVar4 != (byte *)0x0) {
          iVar13 = (int)param_1 - (int)pbVar5;
          pbVar9 = param_1;
          while (pbVar12 = pbVar4, *pbVar9 != 0x3c) {
            pbVar9 = pbVar9 + 1;
            iVar13 = iVar13 + 1;
            pbVar11 = pbVar4;
            if (iVar13 == 0) goto LAB_1007305a;
          }
LAB_10073084:
          uVar8 = CONCAT31((int3)(uVar6 >> 8),0x3c);
          uVar2 = CONCAT31((int3)((uint)pbVar12 >> 8),1);
          goto LAB_1007320d;
        }
        pbVar11 = (byte *)0x0;
        do {
          uVar6 = (*(uint *)(param_1 + (int)pbVar11) ^ 0xc3c3c3c3) + 0x1010101 |
                  *(uint *)(param_1 + (int)pbVar11);
          if ((~(((*(uint *)(param_1 + 4 + (int)pbVar11) ^ 0xc3c3c3c3) + 0x1010101 |
                 *(uint *)(param_1 + 4 + (int)pbVar11)) & uVar6) & 0x80808080) != 0) break;
          pbVar11 = pbVar11 + 8;
LAB_1007305a:
        } while (pbVar11 <= (byte *)(param_2 - 8));
        iVar13 = param_2 - (int)pbVar11;
        if (iVar13 != 0) {
          pbVar11 = pbVar11 + (int)param_1;
          do {
            pbVar12 = pbVar5;
            if (*pbVar11 == 0x3c) goto LAB_10073084;
            pbVar11 = pbVar11 + 1;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        uVar3 = (undefined3)((uint)pbVar5 >> 8);
        if (pbVar5 != param_1) {
          iVar13 = (int)param_1 - (int)pbVar5;
          pbVar9 = param_1;
          while (*pbVar9 != 0x3e) {
            pbVar9 = pbVar9 + 1;
            iVar13 = iVar13 + 1;
            pbVar12 = pbVar4;
            if (iVar13 == 0) goto LAB_100730b0;
          }
LAB_10073114:
          uVar8 = CONCAT31((int3)(uVar6 >> 8),0x3e);
          uVar2 = CONCAT31(uVar3,1);
          goto LAB_1007320d;
        }
        pbVar12 = (byte *)0x0;
        do {
          uVar6 = (*(uint *)(param_1 + (int)pbVar12) ^ 0xc1c1c1c1) + 0x1010101 |
                  *(uint *)(param_1 + (int)pbVar12);
          if ((~(((*(uint *)(param_1 + 4 + (int)pbVar12) ^ 0xc1c1c1c1) + 0x1010101 |
                 *(uint *)(param_1 + 4 + (int)pbVar12)) & uVar6) & 0x80808080) != 0) break;
          pbVar12 = pbVar12 + 8;
LAB_100730b0:
        } while (pbVar12 <= (byte *)(param_2 - 8));
        iVar13 = param_2 - (int)pbVar12;
        if (iVar13 != 0) {
          pbVar12 = pbVar12 + (int)param_1;
          do {
            if (*pbVar12 == 0x3e) goto LAB_10073114;
            pbVar12 = pbVar12 + 1;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        if (pbVar5 != param_1) {
          iVar13 = (int)param_1 - (int)pbVar5;
          pbVar9 = param_1;
          while (*pbVar9 != 0x3a) {
            pbVar9 = pbVar9 + 1;
            iVar13 = iVar13 + 1;
            if (iVar13 == 0) goto LAB_10073147;
          }
          uVar8 = CONCAT31((int3)((uint)pbVar9 >> 8),0x3a);
          uVar2 = CONCAT31(uVar3,1);
          goto LAB_1007320d;
        }
        pbVar4 = (byte *)0x0;
        do {
          pbVar5 = (byte *)~(((*(uint *)(param_1 + 4 + (int)pbVar4) ^ 0xc5c5c5c5) + 0x1010101 |
                             *(uint *)(param_1 + 4 + (int)pbVar4)) &
                            ((*(uint *)(param_1 + (int)pbVar4) ^ 0xc5c5c5c5) + 0x1010101 |
                            *(uint *)(param_1 + (int)pbVar4)));
          if (((uint)pbVar5 & 0x80808080) != 0) break;
          pbVar4 = pbVar4 + 8;
LAB_10073147:
        } while (pbVar4 <= (byte *)(param_2 - 8));
        uVar2 = CONCAT31((int3)((uint)pbVar5 >> 8),1);
        uVar6 = param_2 - (int)pbVar4;
        if (uVar6 != 0) {
          pbVar4 = pbVar4 + (int)param_1;
          do {
            if (*pbVar4 == 0x3a) goto LAB_1007320b;
            pbVar4 = pbVar4 + 1;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        uVar14 = FUN_100974e0(0x22,(int)param_1,param_2);
        uVar8 = CONCAT31((int3)((ulonglong)uVar14 >> 0x28),0x22);
        if ((int)uVar14 != 1) {
          uVar14 = FUN_100974e0(0x2f,(int)param_1,param_2);
          uVar8 = CONCAT31((int3)((ulonglong)uVar14 >> 0x28),0x2f);
          if ((int)uVar14 != 1) {
            uVar14 = FUN_100974e0(0x5c,(int)param_1,param_2);
            uVar8 = CONCAT31((int3)((ulonglong)uVar14 >> 0x28),0x5c);
            if ((int)uVar14 != 1) {
              uVar14 = FUN_100974e0(0x7c,(int)param_1,param_2);
              uVar8 = CONCAT31((int3)((ulonglong)uVar14 >> 0x28),0x7c);
              if ((int)uVar14 != 1) {
                uVar14 = FUN_100974e0(0x3f,(int)param_1,param_2);
                uVar8 = CONCAT31((int3)((ulonglong)uVar14 >> 0x28),0x3f);
                if ((int)uVar14 != 1) {
                  uVar14 = FUN_100974e0(0x2a,(int)param_1,param_2);
                  uVar8 = CONCAT31((int3)((ulonglong)uVar14 >> 0x28),0x2a);
                  uVar2 = CONCAT31((int3)((ulonglong)uVar14 >> 8),1);
                  if ((int)uVar14 == 1) goto LAB_1007320d;
                  goto LAB_10072f26;
                }
              }
            }
          }
        }
        uVar2 = 1;
        goto LAB_1007320d;
      }
      uVar2 = CONCAT31(uVar3,1);
      pbVar4 = param_1;
      uVar6 = param_2;
      do {
        if (*pbVar4 == 0x3c) {
          uVar8 = CONCAT31((int3)(uVar6 >> 8),0x3c);
          goto LAB_1007320d;
        }
        pbVar4 = pbVar4 + 1;
        uVar6 = uVar6 - 1;
        pbVar5 = param_1;
        uVar7 = param_2;
      } while (uVar6 != 0);
      do {
        if (*pbVar5 == 0x3e) {
          uVar8 = CONCAT31((int3)(uVar7 >> 8),0x3e);
          goto LAB_1007320d;
        }
        uVar7 = uVar7 - 1;
        pbVar4 = param_1;
        pbVar5 = pbVar5 + 1;
        uVar6 = param_2;
      } while (uVar7 != 0);
      do {
        if (*pbVar4 == 0x3a) goto LAB_1007320b;
        uVar6 = uVar6 - 1;
        pbVar5 = param_1;
        pbVar4 = pbVar4 + 1;
        uVar7 = param_2;
      } while (uVar6 != 0);
      do {
        if (*pbVar5 == 0x22) {
          uVar8 = CONCAT31((int3)(uVar7 >> 8),0x22);
          goto LAB_1007320d;
        }
        uVar7 = uVar7 - 1;
        pbVar4 = param_1;
        pbVar5 = pbVar5 + 1;
        uVar6 = param_2;
      } while (uVar7 != 0);
      do {
        if (*pbVar4 == 0x2f) {
          uVar8 = CONCAT31((int3)(uVar6 >> 8),0x2f);
          goto LAB_1007320d;
        }
        uVar6 = uVar6 - 1;
        pbVar5 = param_1;
        pbVar4 = pbVar4 + 1;
        uVar7 = param_2;
      } while (uVar6 != 0);
      do {
        if (*pbVar5 == 0x5c) {
          uVar8 = CONCAT31((int3)(uVar7 >> 8),0x5c);
          goto LAB_1007320d;
        }
        uVar7 = uVar7 - 1;
        pbVar4 = param_1;
        pbVar5 = pbVar5 + 1;
        uVar6 = param_2;
      } while (uVar7 != 0);
      do {
        if (*pbVar4 == 0x7c) {
          uVar8 = CONCAT31((int3)(uVar6 >> 8),0x7c);
          goto LAB_1007320d;
        }
        uVar6 = uVar6 - 1;
        pbVar5 = param_1;
        pbVar4 = pbVar4 + 1;
        uVar7 = param_2;
      } while (uVar6 != 0);
      do {
        if (*pbVar5 == 0x3f) {
          uVar8 = CONCAT31((int3)(uVar7 >> 8),0x3f);
          goto LAB_1007320d;
        }
        uVar7 = uVar7 - 1;
        pbVar4 = param_1;
        pbVar5 = pbVar5 + 1;
        uVar6 = param_2;
      } while (uVar7 != 0);
      do {
        if (*pbVar4 == 0x2a) {
          uVar8 = CONCAT31((int3)(uVar6 >> 8),0x2a);
          goto LAB_1007320d;
        }
        uVar6 = uVar6 - 1;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      goto LAB_10072f26;
    }
    uVar2 = CONCAT31(uVar3,1);
    uVar8 = CONCAT31(uVar10,0x2e);
  }
LAB_1007320d:
  return CONCAT44(uVar8,uVar2);
LAB_1007320b:
  uVar8 = CONCAT31((int3)(uVar6 >> 8),0x3a);
  goto LAB_1007320d;
}
