// rea decompile_all
// name: FUN_00509c3c
// address: 0x509c3c
// body: available
// range: 0x509c3c-0x50a2bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00509c3c(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int local_30;
  uint local_2c;
  ushort *local_14;

  iVar7 = 4;
  iVar2 = 7;
  local_2c = 0xffffffff;
  if (*(ushort *)(param_2 + 2) == 0) {
    iVar2 = 0x8a;
    iVar7 = 3;
  }
  local_30 = 0;
  local_14 = (ushort *)(param_2 + 6);
  iVar3 = 0;
  uVar5 = (uint)*(ushort *)(param_2 + 2);
  if (-1 < param_3) {
    do {
      iVar4 = iVar3 + 1;
      uVar6 = (uint)*local_14;
      if ((iVar2 <= iVar4) || (uVar6 != uVar5)) {
        if (iVar4 < iVar7) {
          do {
            uVar8 = (uint)*(ushort *)(param_1 + 0xa76 + uVar5 * 4);
            if ((int)(0x10 - uVar8) < *(int *)(param_1 + 0x16b4)) {
              uVar1 = *(ushort *)(param_1 + 0xa74 + uVar5 * 4);
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) |
                   uVar1 << ((byte)*(undefined4 *)(param_1 + 0x16b4) & 0x1f);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(undefined1 *)(*(int *)(param_1 + 8) + iVar2) = *(undefined1 *)(param_1 + 0x16b0);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar2) =
                   (char)((ushort)*(undefined2 *)(param_1 + 0x16b0) >> 8);
              *(short *)(param_1 + 0x16b0) =
                   (short)((int)(uint)uVar1 >>
                          (0x10U - (char)*(undefined4 *)(param_1 + 0x16b4) & 0x1f));
              *(uint *)(param_1 + 0x16b4) = (uVar8 - 0x10) + *(int *)(param_1 + 0x16b4);
            }
            else {
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) |
                   *(short *)(param_1 + 0xa74 + uVar5 * 4) <<
                   ((byte)*(undefined4 *)(param_1 + 0x16b4) & 0x1f);
              *(int *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + uVar8;
            }
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        else if (uVar5 == 0) {
          if (iVar4 < 0xb) {
            uVar8 = (uint)*(ushort *)(param_1 + 0xaba);
            if ((int)(0x10 - uVar8) < *(int *)(param_1 + 0x16b4)) {
              uVar1 = *(ushort *)(param_1 + 0xab8);
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) |
                   uVar1 << ((byte)*(undefined4 *)(param_1 + 0x16b4) & 0x1f);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(undefined1 *)(*(int *)(param_1 + 8) + iVar2) = *(undefined1 *)(param_1 + 0x16b0);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar2) =
                   (char)((ushort)*(undefined2 *)(param_1 + 0x16b0) >> 8);
              *(short *)(param_1 + 0x16b0) =
                   (short)((int)(uint)uVar1 >>
                          (0x10U - (char)*(undefined4 *)(param_1 + 0x16b4) & 0x1f));
              *(uint *)(param_1 + 0x16b4) = (uVar8 - 0x10) + *(int *)(param_1 + 0x16b4);
            }
            else {
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) |
                   *(short *)(param_1 + 0xab8) << ((byte)*(undefined4 *)(param_1 + 0x16b4) & 0x1f);
              *(int *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + uVar8;
            }
            if (*(int *)(param_1 + 0x16b4) < 0xe) {
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) |
                   (short)iVar4 + -3 << ((byte)*(undefined4 *)(param_1 + 0x16b4) & 0x1f);
              *(int *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + 3;
            }
            else {
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) |
                   (short)(iVar3 - 2U) << ((byte)*(undefined4 *)(param_1 + 0x16b4) & 0x1f);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(undefined1 *)(*(int *)(param_1 + 8) + iVar2) = *(undefined1 *)(param_1 + 0x16b0);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar2) =
                   (char)((ushort)*(undefined2 *)(param_1 + 0x16b0) >> 8);
              *(short *)(param_1 + 0x16b0) =
                   (short)((int)(iVar3 - 2U & 0xffff) >>
                          (0x10U - (char)*(undefined4 *)(param_1 + 0x16b4) & 0x1f));
              *(int *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + -0xd;
            }
          }
          else {
            uVar8 = (uint)*(ushort *)(param_1 + 0xabe);
            if ((int)(0x10 - uVar8) < *(int *)(param_1 + 0x16b4)) {
              uVar1 = *(ushort *)(param_1 + 0xabc);
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) |
                   uVar1 << ((byte)*(undefined4 *)(param_1 + 0x16b4) & 0x1f);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(undefined1 *)(*(int *)(param_1 + 8) + iVar2) = *(undefined1 *)(param_1 + 0x16b0);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar2) =
                   (char)((ushort)*(undefined2 *)(param_1 + 0x16b0) >> 8);
              *(short *)(param_1 + 0x16b0) =
                   (short)((int)(uint)uVar1 >>
                          (0x10U - (char)*(undefined4 *)(param_1 + 0x16b4) & 0x1f));
              *(uint *)(param_1 + 0x16b4) = (uVar8 - 0x10) + *(int *)(param_1 + 0x16b4);
            }
            else {
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) |
                   *(short *)(param_1 + 0xabc) << ((byte)*(undefined4 *)(param_1 + 0x16b4) & 0x1f);
              *(int *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + uVar8;
            }
            if (*(int *)(param_1 + 0x16b4) < 10) {
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) |
                   (short)iVar4 + -0xb << ((byte)*(undefined4 *)(param_1 + 0x16b4) & 0x1f);
              *(int *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + 7;
            }
            else {
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) |
                   (short)(iVar3 - 10U) << ((byte)*(undefined4 *)(param_1 + 0x16b4) & 0x1f);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(undefined1 *)(*(int *)(param_1 + 8) + iVar2) = *(undefined1 *)(param_1 + 0x16b0);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar2) =
                   (char)((ushort)*(undefined2 *)(param_1 + 0x16b0) >> 8);
              *(short *)(param_1 + 0x16b0) =
                   (short)((int)(iVar3 - 10U & 0xffff) >>
                          (0x10U - (char)*(undefined4 *)(param_1 + 0x16b4) & 0x1f));
              *(int *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + -9;
            }
          }
        }
        else {
          if (uVar5 != local_2c) {
            uVar8 = (uint)*(ushort *)(param_1 + 0xa76 + uVar5 * 4);
            iVar4 = iVar3;
            if ((int)(0x10 - uVar8) < *(int *)(param_1 + 0x16b4)) {
              uVar1 = *(ushort *)(param_1 + 0xa74 + uVar5 * 4);
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) |
                   uVar1 << ((byte)*(undefined4 *)(param_1 + 0x16b4) & 0x1f);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(undefined1 *)(*(int *)(param_1 + 8) + iVar2) = *(undefined1 *)(param_1 + 0x16b0);
              iVar2 = *(int *)(param_1 + 0x14);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(char *)(*(int *)(param_1 + 8) + iVar2) =
                   (char)((ushort)*(undefined2 *)(param_1 + 0x16b0) >> 8);
              *(short *)(param_1 + 0x16b0) =
                   (short)((int)(uint)uVar1 >>
                          (0x10U - (char)*(undefined4 *)(param_1 + 0x16b4) & 0x1f));
              *(uint *)(param_1 + 0x16b4) = (uVar8 - 0x10) + *(int *)(param_1 + 0x16b4);
            }
            else {
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) |
                   *(short *)(param_1 + 0xa74 + uVar5 * 4) <<
                   ((byte)*(undefined4 *)(param_1 + 0x16b4) & 0x1f);
              *(int *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + uVar8;
            }
          }
          uVar8 = (uint)*(ushort *)(param_1 + 0xab6);
          if ((int)(0x10 - uVar8) < *(int *)(param_1 + 0x16b4)) {
            uVar1 = *(ushort *)(param_1 + 0xab4);
            *(ushort *)(param_1 + 0x16b0) =
                 *(ushort *)(param_1 + 0x16b0) |
                 uVar1 << ((byte)*(undefined4 *)(param_1 + 0x16b4) & 0x1f);
            iVar2 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(undefined1 *)(*(int *)(param_1 + 8) + iVar2) = *(undefined1 *)(param_1 + 0x16b0);
            iVar2 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar2) =
                 (char)((ushort)*(undefined2 *)(param_1 + 0x16b0) >> 8);
            *(short *)(param_1 + 0x16b0) =
                 (short)((int)(uint)uVar1 >>
                        (0x10U - (char)*(undefined4 *)(param_1 + 0x16b4) & 0x1f));
            *(uint *)(param_1 + 0x16b4) = (uVar8 - 0x10) + *(int *)(param_1 + 0x16b4);
          }
          else {
            *(ushort *)(param_1 + 0x16b0) =
                 *(ushort *)(param_1 + 0x16b0) |
                 *(short *)(param_1 + 0xab4) << ((byte)*(undefined4 *)(param_1 + 0x16b4) & 0x1f);
            *(int *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + uVar8;
          }
          if (*(int *)(param_1 + 0x16b4) < 0xf) {
            *(ushort *)(param_1 + 0x16b0) =
                 *(ushort *)(param_1 + 0x16b0) |
                 (short)iVar4 + -3 << ((byte)*(undefined4 *)(param_1 + 0x16b4) & 0x1f);
            *(int *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + 2;
          }
          else {
            *(ushort *)(param_1 + 0x16b0) =
                 *(ushort *)(param_1 + 0x16b0) |
                 (short)(iVar4 - 3U) << ((byte)*(undefined4 *)(param_1 + 0x16b4) & 0x1f);
            iVar2 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(undefined1 *)(*(int *)(param_1 + 8) + iVar2) = *(undefined1 *)(param_1 + 0x16b0);
            iVar2 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar2) =
                 (char)((ushort)*(undefined2 *)(param_1 + 0x16b0) >> 8);
            *(short *)(param_1 + 0x16b0) =
                 (short)((int)(iVar4 - 3U & 0xffff) >>
                        (0x10U - (char)*(undefined4 *)(param_1 + 0x16b4) & 0x1f));
            *(int *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + -0xe;
          }
        }
        iVar4 = 0;
        local_2c = uVar5;
        if (uVar6 == 0) {
          iVar2 = 0x8a;
          iVar7 = 3;
        }
        else if (uVar6 == uVar5) {
          iVar2 = 6;
          iVar7 = 3;
        }
        else {
          iVar2 = 7;
          iVar7 = 4;
        }
      }
      local_30 = local_30 + 1;
      local_14 = local_14 + 2;
      iVar3 = iVar4;
      uVar5 = uVar6;
    } while (local_30 <= param_3);
  }
  return;
}
