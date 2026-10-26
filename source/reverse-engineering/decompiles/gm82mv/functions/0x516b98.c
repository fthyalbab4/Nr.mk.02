// rea decompile_all
// name: FUN_00516b98
// address: 0x516b98
// body: available
// range: 0x516b98-0x516cab inclusive
// range: 0x516ccc-0x517234 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00516b98(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_44;
  char local_40;
  char local_3c;
  char local_38;
  char local_34;
  char local_30;
  char local_2c;
  int local_28;
  int local_24;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  byte local_1a;
  undefined1 local_19;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;

  if (param_9 != 0) {
    local_8 = param_2;
    if (param_8 < 0) {
      local_8 = param_2 - param_8;
      param_6 = param_6 + param_8;
      param_8 = 0;
    }
    local_c = param_3;
    if (param_7 < 0) {
      local_c = param_3 - param_7;
      param_5 = param_5 + param_7;
      param_7 = 0;
    }
    if (*(int *)(param_9 + 4) < param_8 + param_6) {
      param_6 = *(int *)(param_9 + 4) - param_8;
    }
    if (*(int *)(param_9 + 8) < param_7 + param_5) {
      param_5 = *(int *)(param_9 + 8) - param_7;
    }
    if (local_8 < 0) {
      param_8 = param_8 - local_8;
      param_6 = param_6 + local_8;
      local_8 = 0;
    }
    if (local_c < 0) {
      param_7 = param_7 - local_c;
      param_5 = param_5 + local_c;
      local_c = 0;
    }
    if (*(int *)(param_1 + 4) < local_8 + param_6) {
      param_6 = *(int *)(param_1 + 4) - local_8;
    }
    if (*(int *)(param_1 + 8) < local_c + param_5) {
      param_5 = *(int *)(param_1 + 8) - local_c;
    }
    iVar2 = param_5 + param_7 + -1;
    if (param_7 <= iVar2) {
      local_24 = (iVar2 - param_7) + 1;
      local_10 = param_7;
      do {
        iVar5 = *(int *)(param_9 + 4) * local_10 + param_8 + -1;
        iVar2 = ((local_c + local_10) - param_7) * *(int *)(param_1 + 4) + local_8 + -1;
        switch(param_4) {
        case 0:
          iVar4 = param_8 + param_6 + -1;
          if (param_8 <= iVar4) {
            local_28 = (iVar4 - param_8) + 1;
            do {
              iVar5 = iVar5 + 1;
              iVar2 = iVar2 + 1;
              *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 4) =
                   *(undefined4 *)(*(int *)(param_9 + 0xc) + iVar5 * 4);
              local_28 = local_28 + -1;
            } while (local_28 != 0);
          }
          break;
        case 1:
          iVar4 = param_8 + param_6 + -1;
          if (param_8 <= iVar4) {
            local_28 = (iVar4 - param_8) + 1;
            do {
              iVar5 = iVar5 + 1;
              iVar2 = iVar2 + 1;
              cVar1 = *(char *)(*(int *)(param_9 + 0xc) + 3 + iVar5 * 4);
              if (cVar1 != '\0') {
                if (cVar1 == -1) {
                  *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 4) =
                       *(undefined4 *)(*(int *)(param_9 + 0xc) + iVar5 * 4);
                }
                else if (*(char *)(*(int *)(param_1 + 0xc) + 3 + iVar2 * 4) == -1) {
                  local_14 = (uint)*(byte *)(*(int *)(param_9 + 0xc) + 3 + iVar5 * 4);
                  iVar4 = 0x100 - local_14;
                  *(char *)(*(int *)(param_1 + 0xc) + 2 + iVar2 * 4) =
                       (char)(*(byte *)(*(int *)(param_9 + 0xc) + 2 + iVar5 * 4) * local_14 +
                              (uint)*(byte *)(*(int *)(param_1 + 0xc) + 2 + iVar2 * 4) * iVar4 >> 8)
                  ;
                  *(char *)(*(int *)(param_1 + 0xc) + 1 + iVar2 * 4) =
                       (char)(*(byte *)(*(int *)(param_9 + 0xc) + 1 + iVar5 * 4) * local_14 +
                              (uint)*(byte *)(*(int *)(param_1 + 0xc) + 1 + iVar2 * 4) * iVar4 >> 8)
                  ;
                  *(char *)(*(int *)(param_1 + 0xc) + iVar2 * 4) =
                       (char)(*(byte *)(*(int *)(param_9 + 0xc) + iVar5 * 4) * local_14 +
                              (uint)*(byte *)(*(int *)(param_1 + 0xc) + iVar2 * 4) * iVar4 >> 8);
                }
                else {
                  local_14 = (uint)*(byte *)(*(int *)(param_9 + 0xc) + 3 + iVar5 * 4);
                  iVar4 = (int)((0xff - local_14) *
                               (uint)*(byte *)(*(int *)(param_1 + 0xc) + 3 + iVar2 * 4)) / 0xff;
                  local_18 = local_14 + iVar4;
                  *(char *)(*(int *)(param_1 + 0xc) + 2 + iVar2 * 4) =
                       (char)((int)(*(byte *)(*(int *)(param_9 + 0xc) + 2 + iVar5 * 4) * local_14 +
                                   (uint)*(byte *)(*(int *)(param_1 + 0xc) + 2 + iVar2 * 4) * iVar4)
                             / local_18);
                  *(char *)(*(int *)(param_1 + 0xc) + 1 + iVar2 * 4) =
                       (char)((int)(*(byte *)(*(int *)(param_9 + 0xc) + 1 + iVar5 * 4) * local_14 +
                                   (uint)*(byte *)(*(int *)(param_1 + 0xc) + 1 + iVar2 * 4) * iVar4)
                             / local_18);
                  *(char *)(*(int *)(param_1 + 0xc) + iVar2 * 4) =
                       (char)((int)(*(byte *)(*(int *)(param_9 + 0xc) + iVar5 * 4) * local_14 +
                                   (uint)*(byte *)(*(int *)(param_1 + 0xc) + iVar2 * 4) * iVar4) /
                             local_18);
                  *(undefined1 *)(*(int *)(param_1 + 0xc) + 3 + iVar2 * 4) = (undefined1)local_18;
                }
              }
              local_28 = local_28 + -1;
            } while (local_28 != 0);
          }
          break;
        case 2:
          iVar4 = param_8 + param_6 + -1;
          if (param_8 <= iVar4) {
            local_28 = (iVar4 - param_8) + 1;
            do {
              iVar5 = iVar5 + 1;
              iVar2 = iVar2 + 1;
              if (*(char *)(*(int *)(param_9 + 0xc) + 3 + iVar5 * 4) != '\0') {
                if ((int)((uint)*(byte *)(*(int *)(param_1 + 0xc) + 3 + iVar2 * 4) -
                         (uint)*(byte *)(*(int *)(param_9 + 0xc) + 3 + iVar5 * 4)) < 0) {
                  cVar1 = '\0';
                }
                else {
                  cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 3 + iVar2 * 4) -
                          *(char *)(*(int *)(param_9 + 0xc) + 3 + iVar5 * 4);
                }
                *(char *)(*(int *)(param_1 + 0xc) + 3 + iVar2 * 4) = cVar1;
              }
              local_28 = local_28 + -1;
            } while (local_28 != 0);
          }
          break;
        case 3:
          iVar4 = param_8 + param_6 + -1;
          if (param_8 <= iVar4) {
            local_28 = (iVar4 - param_8) + 1;
            do {
              iVar5 = iVar5 + 1;
              iVar2 = iVar2 + 1;
              if (*(char *)(*(int *)(param_9 + 0xc) + 3 + iVar5 * 4) != '\0') {
                if ((uint)*(byte *)(*(int *)(param_9 + 0xc) + 3 + iVar5 * 4) +
                    (uint)*(byte *)(*(int *)(param_1 + 0xc) + 3 + iVar2 * 4) < 0x100) {
                  cVar1 = *(char *)(*(int *)(param_9 + 0xc) + 3 + iVar5 * 4) +
                          *(char *)(*(int *)(param_1 + 0xc) + 3 + iVar2 * 4);
                }
                else {
                  cVar1 = -1;
                }
                *(char *)(*(int *)(param_1 + 0xc) + 3 + iVar2 * 4) = cVar1;
              }
              local_28 = local_28 + -1;
            } while (local_28 != 0);
          }
          break;
        case 4:
          iVar4 = param_8 + param_6 + -1;
          if (param_8 <= iVar4) {
            local_28 = (iVar4 - param_8) + 1;
            do {
              iVar5 = iVar5 + 1;
              iVar2 = iVar2 + 1;
              if (*(char *)(*(int *)(param_9 + 0xc) + 3 + iVar5 * 4) != '\0') {
                FUN_005142fc(*(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 4),&local_19,
                             &local_1a,&local_1f,&local_1b);
                FUN_005142fc(*(undefined4 *)(*(int *)(param_9 + 0xc) + iVar5 * 4),&local_1c,
                             &local_1d,&local_20,&local_1e);
                uVar3 = FUN_00514518(local_1c,local_1a,local_1b,local_1f);
                *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 4) = uVar3;
              }
              local_28 = local_28 + -1;
            } while (local_28 != 0);
          }
          break;
        case 5:
          iVar4 = param_8 + param_6 + -1;
          if (param_8 <= iVar4) {
            local_28 = (iVar4 - param_8) + 1;
            do {
              iVar5 = iVar5 + 1;
              iVar2 = iVar2 + 1;
              if (*(char *)(*(int *)(param_9 + 0xc) + 3 + iVar5 * 4) != '\0') {
                local_14 = (*(byte *)(*(int *)(param_9 + 0xc) + 3 + iVar5 * 4) >> 4) + 1;
                iVar4 = *(int *)(param_1 + 0xc);
                local_34 = (char)local_14;
                if ((int)(*(byte *)(iVar4 + 2 + iVar2 * 4) - local_14) < 0) {
                  local_2c = '\0';
                }
                else {
                  local_2c = *(char *)(*(int *)(param_1 + 0xc) + 2 + iVar2 * 4) - local_34;
                }
                *(char *)(iVar4 + 2 + iVar2 * 4) = local_2c;
                if ((int)(*(byte *)(*(int *)(param_1 + 0xc) + 1 + iVar2 * 4) - local_14) < 0) {
                  local_30 = '\0';
                }
                else {
                  local_30 = *(char *)(*(int *)(param_1 + 0xc) + 1 + iVar2 * 4) - local_34;
                }
                *(char *)(iVar4 + 1 + iVar2 * 4) = local_30;
                if ((int)(*(byte *)(*(int *)(param_1 + 0xc) + iVar2 * 4) - local_14) < 0) {
                  local_34 = '\0';
                }
                else {
                  local_34 = *(char *)(*(int *)(param_1 + 0xc) + iVar2 * 4) - local_34;
                }
                *(char *)(iVar4 + iVar2 * 4) = local_34;
              }
              local_28 = local_28 + -1;
            } while (local_28 != 0);
          }
          break;
        case 6:
          iVar4 = param_8 + param_6 + -1;
          if (param_8 <= iVar4) {
            local_28 = (iVar4 - param_8) + 1;
            do {
              iVar5 = iVar5 + 1;
              iVar2 = iVar2 + 1;
              if (*(char *)(*(int *)(param_9 + 0xc) + 3 + iVar5 * 4) != '\0') {
                local_14 = (*(byte *)(*(int *)(param_9 + 0xc) + 3 + iVar5 * 4) >> 4) + 1;
                iVar4 = *(int *)(param_1 + 0xc);
                local_40 = (char)local_14;
                if (*(byte *)(iVar4 + 2 + iVar2 * 4) + local_14 < 0x100) {
                  local_38 = *(char *)(*(int *)(param_1 + 0xc) + 2 + iVar2 * 4) + local_40;
                }
                else {
                  local_38 = -1;
                }
                *(char *)(iVar4 + 2 + iVar2 * 4) = local_38;
                if (*(byte *)(*(int *)(param_1 + 0xc) + 1 + iVar2 * 4) + local_14 < 0x100) {
                  local_3c = *(char *)(*(int *)(param_1 + 0xc) + 1 + iVar2 * 4) + local_40;
                }
                else {
                  local_3c = -1;
                }
                *(char *)(iVar4 + 1 + iVar2 * 4) = local_3c;
                if (*(byte *)(*(int *)(param_1 + 0xc) + iVar2 * 4) + local_14 < 0x100) {
                  local_40 = *(char *)(*(int *)(param_1 + 0xc) + iVar2 * 4) + local_40;
                }
                else {
                  local_40 = -1;
                }
                *(char *)(iVar4 + iVar2 * 4) = local_40;
              }
              local_28 = local_28 + -1;
            } while (local_28 != 0);
          }
          break;
        case 7:
          iVar4 = param_8 + param_6 + -1;
          if (param_8 <= iVar4) {
            local_28 = (iVar4 - param_8) + 1;
            do {
              iVar5 = iVar5 + 1;
              iVar2 = iVar2 + 1;
              if (*(char *)(*(int *)(param_9 + 0xc) + 3 + iVar5 * 4) != '\0') {
                local_14 = (*(byte *)(*(int *)(param_9 + 0xc) + 3 + iVar5 * 4) >> 4) + 1;
                FUN_005142fc(*(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 4),&local_19,
                             &local_1a,&local_1f,&local_1b);
                if (local_1a != 0) {
                  if ((int)(local_1a + local_14) < 0x100) {
                    local_44 = local_1a + local_14;
                  }
                  else {
                    local_44 = 0xff;
                  }
                  uVar3 = FUN_00514518(local_19,local_44,local_1b,local_1f);
                  *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 4) = uVar3;
                }
              }
              local_28 = local_28 + -1;
            } while (local_28 != 0);
          }
        }
        local_10 = local_10 + 1;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
  }
  return;
}
