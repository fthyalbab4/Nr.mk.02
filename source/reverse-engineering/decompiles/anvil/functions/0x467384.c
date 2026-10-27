// rea decompile_all
// name: FUN_00467384
// address: 0x467384
// body: available
// range: 0x467384-0x4679d1 inclusive
// range: 0x4679d4-0x467bf7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00467384(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;

  if ((((param_1 == (int *)0x0) || (param_1[7] == 0)) || (4 < param_2)) || (param_2 < 0)) {
    uVar7 = 0xfffffffe;
  }
  else {
    puVar1 = (undefined4 *)param_1[7];
    if (((param_1[3] == 0) || ((*param_1 == 0 && (param_1[1] != 0)))) ||
       ((puVar1[1] == 0x29a && (param_2 != 4)))) {
      param_1[6] = (int)PTR_PTR_0067d5dc;
      uVar7 = 0xfffffffe;
    }
    else if (param_1[4] == 0) {
      uVar7 = 0xfffffffb;
      param_1[6] = (int)PTR_PTR_0067d5e8;
    }
    else {
      *puVar1 = param_1;
      iVar9 = puVar1[10];
      puVar1[10] = param_2;
      if (puVar1[1] == 0x2a) {
        if (puVar1[6] == 2) {
          iVar8 = FUN_0046ce90(0,0,0);
          param_1[0xc] = iVar8;
          iVar8 = puVar1[5];
          puVar1[5] = puVar1[5] + 1;
          *(undefined1 *)(puVar1[2] + iVar8) = 0x1f;
          iVar8 = puVar1[5];
          puVar1[5] = puVar1[5] + 1;
          *(undefined1 *)(puVar1[2] + iVar8) = 0x8b;
          iVar8 = puVar1[5];
          puVar1[5] = puVar1[5] + 1;
          *(undefined1 *)(puVar1[2] + iVar8) = 8;
          if (puVar1[7] == 0) {
            iVar8 = puVar1[5];
            puVar1[5] = puVar1[5] + 1;
            *(undefined1 *)(puVar1[2] + iVar8) = 0;
            iVar8 = puVar1[5];
            puVar1[5] = puVar1[5] + 1;
            *(undefined1 *)(puVar1[2] + iVar8) = 0;
            iVar8 = puVar1[5];
            puVar1[5] = puVar1[5] + 1;
            *(undefined1 *)(puVar1[2] + iVar8) = 0;
            iVar8 = puVar1[5];
            puVar1[5] = puVar1[5] + 1;
            *(undefined1 *)(puVar1[2] + iVar8) = 0;
            iVar8 = puVar1[5];
            puVar1[5] = puVar1[5] + 1;
            *(undefined1 *)(puVar1[2] + iVar8) = 0;
            iVar8 = puVar1[5];
            puVar1[5] = puVar1[5] + 1;
            if (puVar1[0x21] == 9) {
              uVar10 = 2;
            }
            else if (((int)puVar1[0x22] < 2) && (1 < (int)puVar1[0x21])) {
              uVar10 = 0;
            }
            else {
              uVar10 = 4;
            }
            *(undefined1 *)(puVar1[2] + iVar8) = uVar10;
            iVar8 = puVar1[5];
            puVar1[5] = puVar1[5] + 1;
            *(undefined1 *)(puVar1[2] + iVar8) = 0xb;
            puVar1[1] = 0x71;
          }
          else {
            iVar8 = *(int *)puVar1[7];
            if (*(int *)(puVar1[7] + 0x2c) == 0) {
              cVar11 = '\0';
            }
            else {
              cVar11 = '\x02';
            }
            if (*(int *)(puVar1[7] + 0x10) == 0) {
              cVar4 = '\0';
            }
            else {
              cVar4 = '\x04';
            }
            if (*(int *)(puVar1[7] + 0x1c) == 0) {
              cVar5 = '\0';
            }
            else {
              cVar5 = '\b';
            }
            if (*(int *)(puVar1[7] + 0x24) == 0) {
              cVar6 = '\0';
            }
            else {
              cVar6 = '\x10';
            }
            iVar2 = puVar1[5];
            puVar1[5] = puVar1[5] + 1;
            *(char *)(puVar1[2] + iVar2) = (iVar8 != 0) + cVar11 + cVar4 + cVar5 + cVar6;
            iVar8 = puVar1[5];
            puVar1[5] = puVar1[5] + 1;
            *(undefined1 *)(puVar1[2] + iVar8) = *(undefined1 *)(puVar1[7] + 4);
            iVar8 = puVar1[5];
            puVar1[5] = puVar1[5] + 1;
            *(char *)(puVar1[2] + iVar8) = (char)((uint)*(undefined4 *)(puVar1[7] + 4) >> 8);
            iVar8 = puVar1[5];
            puVar1[5] = puVar1[5] + 1;
            *(char *)(puVar1[2] + iVar8) = (char)((uint)*(undefined4 *)(puVar1[7] + 4) >> 0x10);
            iVar8 = puVar1[5];
            puVar1[5] = puVar1[5] + 1;
            *(char *)(puVar1[2] + iVar8) = (char)((uint)*(undefined4 *)(puVar1[7] + 4) >> 0x18);
            iVar8 = puVar1[5];
            puVar1[5] = puVar1[5] + 1;
            if (puVar1[0x21] == 9) {
              uVar10 = 2;
            }
            else if (((int)puVar1[0x22] < 2) && (1 < (int)puVar1[0x21])) {
              uVar10 = 0;
            }
            else {
              uVar10 = 4;
            }
            *(undefined1 *)(puVar1[2] + iVar8) = uVar10;
            iVar8 = puVar1[5];
            puVar1[5] = puVar1[5] + 1;
            *(undefined1 *)(puVar1[2] + iVar8) = *(undefined1 *)(puVar1[7] + 0xc);
            if (*(int *)(puVar1[7] + 0x10) != 0) {
              iVar8 = puVar1[5];
              puVar1[5] = puVar1[5] + 1;
              *(undefined1 *)(puVar1[2] + iVar8) = *(undefined1 *)(puVar1[7] + 0x14);
              iVar8 = puVar1[5];
              puVar1[5] = puVar1[5] + 1;
              *(char *)(puVar1[2] + iVar8) = (char)((uint)*(undefined4 *)(puVar1[7] + 0x14) >> 8);
            }
            if (*(int *)(puVar1[7] + 0x2c) != 0) {
              iVar8 = FUN_0046ce90(param_1[0xc],puVar1[2],puVar1[5]);
              param_1[0xc] = iVar8;
            }
            puVar1[8] = 0;
            puVar1[1] = 0x45;
          }
        }
        else {
          if (((int)puVar1[0x22] < 2) && (1 < (int)puVar1[0x21])) {
            if ((int)puVar1[0x21] < 6) {
              iVar8 = 1;
            }
            else if (puVar1[0x21] == 6) {
              iVar8 = 2;
            }
            else {
              iVar8 = 3;
            }
          }
          else {
            iVar8 = 0;
          }
          uVar12 = ((puVar1[0xc] + -8) * 0x10 + 8) * 0x100 | iVar8 << 6;
          if (puVar1[0x1b] != 0) {
            uVar12 = uVar12 | 0x20;
          }
          puVar1[1] = 0x71;
          FUN_00467308(puVar1,uVar12 + (0x1f - uVar12 % 0x1f));
          if (puVar1[0x1b] != 0) {
            FUN_00467308(puVar1,(uint)param_1[0xc] >> 0x10);
            FUN_00467308(puVar1,param_1[0xc] & 0xffff);
          }
          iVar8 = FUN_00466a54(0,0,0);
          param_1[0xc] = iVar8;
        }
      }
      if (puVar1[1] == 0x45) {
        if (*(int *)(puVar1[7] + 0x10) == 0) {
          puVar1[1] = 0x49;
        }
        else {
          uVar12 = puVar1[5];
          while ((uint)puVar1[8] < (*(uint *)(puVar1[7] + 0x14) & 0xffff)) {
            if (puVar1[5] == puVar1[3]) {
              if ((*(int *)(puVar1[7] + 0x2c) != 0) && (uVar12 < (uint)puVar1[5])) {
                iVar8 = FUN_0046ce90(param_1[0xc],puVar1[2] + uVar12,puVar1[5] - uVar12);
                param_1[0xc] = iVar8;
              }
              FUN_00467330(param_1);
              uVar12 = puVar1[5];
              if (uVar12 == puVar1[3]) break;
            }
            uVar10 = *(undefined1 *)(*(int *)(puVar1[7] + 0x10) + puVar1[8]);
            iVar8 = puVar1[5];
            puVar1[5] = puVar1[5] + 1;
            *(undefined1 *)(puVar1[2] + iVar8) = uVar10;
            puVar1[8] = puVar1[8] + 1;
          }
          if ((*(int *)(puVar1[7] + 0x2c) != 0) && (uVar12 < (uint)puVar1[5])) {
            iVar8 = FUN_0046ce90(param_1[0xc],puVar1[2] + uVar12,puVar1[5] - uVar12);
            param_1[0xc] = iVar8;
          }
          if (*(int *)(puVar1[7] + 0x14) == puVar1[8]) {
            puVar1[8] = 0;
            puVar1[1] = 0x49;
          }
        }
      }
      if (puVar1[1] == 0x49) {
        if (*(int *)(puVar1[7] + 0x1c) == 0) {
          puVar1[1] = 0x5b;
        }
        else {
          uVar12 = puVar1[5];
          do {
            if (puVar1[5] == puVar1[3]) {
              if ((*(int *)(puVar1[7] + 0x2c) != 0) && (uVar12 < (uint)puVar1[5])) {
                iVar8 = FUN_0046ce90(param_1[0xc],puVar1[2] + uVar12,puVar1[5] - uVar12);
                param_1[0xc] = iVar8;
              }
              FUN_00467330(param_1);
              uVar12 = puVar1[5];
              if (uVar12 == puVar1[3]) {
                bVar3 = true;
                break;
              }
            }
            iVar8 = puVar1[8];
            puVar1[8] = puVar1[8] + 1;
            cVar11 = *(char *)(*(int *)(puVar1[7] + 0x1c) + iVar8);
            iVar8 = puVar1[5];
            puVar1[5] = puVar1[5] + 1;
            *(char *)(puVar1[2] + iVar8) = cVar11;
            bVar3 = false;
          } while (cVar11 != '\0');
          if ((*(int *)(puVar1[7] + 0x2c) != 0) && (uVar12 < (uint)puVar1[5])) {
            iVar8 = FUN_0046ce90(param_1[0xc],puVar1[2] + uVar12,puVar1[5] - uVar12);
            param_1[0xc] = iVar8;
          }
          if (!bVar3) {
            puVar1[8] = 0;
            puVar1[1] = 0x5b;
          }
        }
      }
      if (puVar1[1] == 0x5b) {
        if (*(int *)(puVar1[7] + 0x24) == 0) {
          puVar1[1] = 0x67;
        }
        else {
          uVar12 = puVar1[5];
          do {
            if (puVar1[5] == puVar1[3]) {
              if ((*(int *)(puVar1[7] + 0x2c) != 0) && (uVar12 < (uint)puVar1[5])) {
                iVar8 = FUN_0046ce90(param_1[0xc],puVar1[2] + uVar12,puVar1[5] - uVar12);
                param_1[0xc] = iVar8;
              }
              FUN_00467330(param_1);
              uVar12 = puVar1[5];
              if (uVar12 == puVar1[3]) {
                bVar3 = true;
                break;
              }
            }
            iVar8 = puVar1[8];
            puVar1[8] = puVar1[8] + 1;
            cVar11 = *(char *)(*(int *)(puVar1[7] + 0x24) + iVar8);
            iVar8 = puVar1[5];
            puVar1[5] = puVar1[5] + 1;
            *(char *)(puVar1[2] + iVar8) = cVar11;
            bVar3 = false;
          } while (cVar11 != '\0');
          if ((*(int *)(puVar1[7] + 0x2c) != 0) && (uVar12 < (uint)puVar1[5])) {
            iVar8 = FUN_0046ce90(param_1[0xc],puVar1[2] + uVar12,puVar1[5] - uVar12);
            param_1[0xc] = iVar8;
          }
          if (!bVar3) {
            puVar1[1] = 0x67;
          }
        }
      }
      if (puVar1[1] == 0x67) {
        if (*(int *)(puVar1[7] + 0x2c) == 0) {
          puVar1[1] = 0x71;
        }
        else {
          if ((uint)puVar1[3] < puVar1[5] + 2) {
            FUN_00467330(param_1);
          }
          if (puVar1[5] + 2 <= (uint)puVar1[3]) {
            iVar8 = puVar1[5];
            puVar1[5] = puVar1[5] + 1;
            *(char *)(puVar1[2] + iVar8) = (char)param_1[0xc];
            iVar8 = puVar1[5];
            puVar1[5] = puVar1[5] + 1;
            *(char *)(puVar1[2] + iVar8) = (char)((uint)param_1[0xc] >> 8);
            iVar8 = FUN_0046ce90(0,0,0);
            param_1[0xc] = iVar8;
            puVar1[1] = 0x71;
          }
        }
      }
      if (puVar1[5] == 0) {
        if (((param_1[1] == 0) && (param_2 <= iVar9)) && (param_2 != 4)) {
          param_1[6] = (int)PTR_PTR_0067d5e8;
          return 0xfffffffb;
        }
      }
      else {
        FUN_00467330(param_1);
        if (param_1[4] == 0) {
          puVar1[10] = 0xffffffff;
          return 0;
        }
      }
      if ((puVar1[1] == 0x29a) && (param_1[1] != 0)) {
        uVar7 = 0xfffffffb;
        param_1[6] = (int)PTR_PTR_0067d5e8;
      }
      else {
        if (((param_1[1] != 0) || (puVar1[0x1d] != 0)) || ((param_2 != 0 && (puVar1[1] != 0x29a))))
        {
          iVar9 = (*(code *)(&PTR_FUN_0067d5fc)[puVar1[0x21] * 3])(puVar1,param_2);
          if ((iVar9 == 2) || (iVar9 == 3)) {
            puVar1[1] = 0x29a;
          }
          if ((iVar9 == 0) || (iVar9 == 2)) {
            if (param_1[4] == 0) {
              puVar1[10] = 0xffffffff;
            }
            return 0;
          }
          if (iVar9 == 1) {
            if (param_2 == 1) {
              FUN_0046c17c(puVar1);
            }
            else {
              FUN_0046c0c0(puVar1,0,0,0);
              if (param_2 == 3) {
                *(undefined2 *)(puVar1[0x11] + -2 + puVar1[0x13] * 2) = 0;
                FUN_00466a2c();
              }
            }
            FUN_00467330(param_1);
            if (param_1[4] == 0) {
              puVar1[10] = 0xffffffff;
              return 0;
            }
          }
        }
        if (param_2 == 4) {
          if ((int)puVar1[6] < 1) {
            uVar7 = 1;
          }
          else {
            if (puVar1[6] == 2) {
              iVar9 = puVar1[5];
              puVar1[5] = puVar1[5] + 1;
              *(char *)(puVar1[2] + iVar9) = (char)param_1[0xc];
              iVar9 = puVar1[5];
              puVar1[5] = puVar1[5] + 1;
              *(char *)(puVar1[2] + iVar9) = (char)((uint)param_1[0xc] >> 8);
              iVar9 = puVar1[5];
              puVar1[5] = puVar1[5] + 1;
              *(char *)(puVar1[2] + iVar9) = (char)((uint)param_1[0xc] >> 0x10);
              iVar9 = puVar1[5];
              puVar1[5] = puVar1[5] + 1;
              *(char *)(puVar1[2] + iVar9) = (char)((uint)param_1[0xc] >> 0x18);
              iVar9 = puVar1[5];
              puVar1[5] = puVar1[5] + 1;
              *(char *)(puVar1[2] + iVar9) = (char)param_1[2];
              iVar9 = puVar1[5];
              puVar1[5] = puVar1[5] + 1;
              *(char *)(puVar1[2] + iVar9) = (char)((uint)param_1[2] >> 8);
              iVar9 = puVar1[5];
              puVar1[5] = puVar1[5] + 1;
              *(char *)(puVar1[2] + iVar9) = (char)((uint)param_1[2] >> 0x10);
              iVar9 = puVar1[5];
              puVar1[5] = puVar1[5] + 1;
              *(char *)(puVar1[2] + iVar9) = (char)((uint)param_1[2] >> 0x18);
            }
            else {
              FUN_00467308(puVar1,(uint)param_1[0xc] >> 0x10);
              FUN_00467308(puVar1,param_1[0xc] & 0xffff);
            }
            FUN_00467330(param_1);
            if (0 < (int)puVar1[6]) {
              puVar1[6] = -puVar1[6];
            }
            if (puVar1[5] == 0) {
              uVar7 = 1;
            }
            else {
              uVar7 = 0;
            }
          }
        }
        else {
          uVar7 = 0;
        }
      }
    }
  }
  return uVar7;
}
