// rea decompile_all
// name: FUN_0046caf8
// address: 0x46caf8
// body: available
// range: 0x46caf8-0x46cfb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046caf8(int param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  short sVar9;
  uint uVar10;
  uint local_20;

  local_20 = 0;
  if (*(int *)(param_1 + 0x16a0) != 0) {
    do {
      uVar8 = (uint)*(ushort *)(*(int *)(param_1 + 0x16a4) + local_20 * 2);
      uVar10 = (uint)*(byte *)(*(int *)(param_1 + 0x1698) + local_20);
      local_20 = local_20 + 1;
      if (uVar8 == 0) {
        uVar8 = (uint)*(ushort *)(param_2 + 2 + uVar10 * 4);
        if ((int)(0x10 - uVar8) < *(int *)(param_1 + 0x16bc)) {
          uVar2 = *(ushort *)(param_2 + uVar10 * 4);
          *(ushort *)(param_1 + 0x16b8) =
               *(ushort *)(param_1 + 0x16b8) |
               uVar2 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
          iVar3 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = *(undefined1 *)(param_1 + 0x16b8);
          iVar3 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar3) =
               (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
          *(short *)(param_1 + 0x16b8) =
               (short)((int)(uint)uVar2 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f))
          ;
          *(uint *)(param_1 + 0x16bc) = (uVar8 - 0x10) + *(int *)(param_1 + 0x16bc);
        }
        else {
          *(ushort *)(param_1 + 0x16b8) =
               *(ushort *)(param_1 + 0x16b8) |
               *(short *)(param_2 + uVar10 * 4) << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
          *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + uVar8;
        }
      }
      else {
        uVar7 = (uint)(byte)(&DAT_00775ba3)[uVar10];
        uVar6 = (uint)*(ushort *)(param_2 + 0x406 + uVar7 * 4);
        if ((int)(0x10 - uVar6) < *(int *)(param_1 + 0x16bc)) {
          uVar2 = *(ushort *)(param_2 + 0x404 + uVar7 * 4);
          *(ushort *)(param_1 + 0x16b8) =
               *(ushort *)(param_1 + 0x16b8) |
               uVar2 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
          iVar3 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = *(undefined1 *)(param_1 + 0x16b8);
          iVar3 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar3) =
               (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
          *(short *)(param_1 + 0x16b8) =
               (short)((int)(uint)uVar2 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f))
          ;
          *(uint *)(param_1 + 0x16bc) = (uVar6 - 0x10) + *(int *)(param_1 + 0x16bc);
        }
        else {
          *(ushort *)(param_1 + 0x16b8) =
               *(ushort *)(param_1 + 0x16b8) |
               *(short *)(param_2 + 0x404 + uVar7 * 4) <<
               ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
          *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + uVar6;
        }
        iVar3 = *(int *)(&DAT_00775238 + uVar7 * 4);
        if (iVar3 != 0) {
          iVar4 = *(int *)(&DAT_00775868 + uVar7 * 4);
          sVar9 = (short)(uVar10 - iVar4);
          if (0x10 - iVar3 < *(int *)(param_1 + 0x16bc)) {
            *(ushort *)(param_1 + 0x16b8) =
                 *(ushort *)(param_1 + 0x16b8) |
                 sVar9 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
            iVar5 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(undefined1 *)(*(int *)(param_1 + 8) + iVar5) = *(undefined1 *)(param_1 + 0x16b8);
            iVar5 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar5) =
                 (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
            *(short *)(param_1 + 0x16b8) =
                 (short)((int)(uVar10 - iVar4 & 0xffff) >>
                        (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
            *(int *)(param_1 + 0x16bc) = iVar3 + -0x10 + *(int *)(param_1 + 0x16bc);
          }
          else {
            *(ushort *)(param_1 + 0x16b8) =
                 *(ushort *)(param_1 + 0x16b8) |
                 sVar9 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
            *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + iVar3;
          }
        }
        uVar10 = uVar8 - 1;
        if (uVar10 < 0x100) {
          bVar1 = (&DAT_007759a2)[uVar8];
        }
        else {
          bVar1 = (&DAT_00775aa3)[uVar10 >> 7];
        }
        uVar8 = (uint)bVar1;
        uVar6 = (uint)*(ushort *)(param_3 + 2 + uVar8 * 4);
        if ((int)(0x10 - uVar6) < *(int *)(param_1 + 0x16bc)) {
          uVar2 = *(ushort *)(param_3 + uVar8 * 4);
          *(ushort *)(param_1 + 0x16b8) =
               *(ushort *)(param_1 + 0x16b8) |
               uVar2 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
          iVar3 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = *(undefined1 *)(param_1 + 0x16b8);
          iVar3 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar3) =
               (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
          *(short *)(param_1 + 0x16b8) =
               (short)((int)(uint)uVar2 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f))
          ;
          *(uint *)(param_1 + 0x16bc) = (uVar6 - 0x10) + *(int *)(param_1 + 0x16bc);
        }
        else {
          *(ushort *)(param_1 + 0x16b8) =
               *(ushort *)(param_1 + 0x16b8) |
               *(short *)(param_3 + uVar8 * 4) << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
          *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + uVar6;
        }
        iVar3 = *(int *)(&DAT_007752ac + uVar8 * 4);
        if (iVar3 != 0) {
          iVar4 = *(int *)(&DAT_007758dc + uVar8 * 4);
          sVar9 = (short)(uVar10 - iVar4);
          if (0x10 - iVar3 < *(int *)(param_1 + 0x16bc)) {
            *(ushort *)(param_1 + 0x16b8) =
                 *(ushort *)(param_1 + 0x16b8) | sVar9 << ((byte)*(int *)(param_1 + 0x16bc) & 0x1f);
            iVar5 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(undefined1 *)(*(int *)(param_1 + 8) + iVar5) = *(undefined1 *)(param_1 + 0x16b8);
            iVar5 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(char *)(*(int *)(param_1 + 8) + iVar5) =
                 (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
            *(short *)(param_1 + 0x16b8) =
                 (short)((int)(uVar10 - iVar4 & 0xffff) >>
                        (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
            *(int *)(param_1 + 0x16bc) = iVar3 + -0x10 + *(int *)(param_1 + 0x16bc);
          }
          else {
            *(ushort *)(param_1 + 0x16b8) =
                 *(ushort *)(param_1 + 0x16b8) |
                 sVar9 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
            *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + iVar3;
          }
        }
      }
    } while (local_20 < *(uint *)(param_1 + 0x16a0));
  }
  uVar8 = (uint)*(ushort *)(param_2 + 0x402);
  if ((int)(0x10 - uVar8) < *(int *)(param_1 + 0x16bc)) {
    uVar2 = *(ushort *)(param_2 + 0x400);
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) | uVar2 << ((byte)*(int *)(param_1 + 0x16bc) & 0x1f);
    iVar3 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = *(undefined1 *)(param_1 + 0x16b8);
    iVar3 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar3) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    *(short *)(param_1 + 0x16b8) =
         (short)((int)(uint)uVar2 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
    *(uint *)(param_1 + 0x16bc) = (uVar8 - 0x10) + *(int *)(param_1 + 0x16bc);
  }
  else {
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) |
         *(short *)(param_2 + 0x400) << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + uVar8;
  }
  *(uint *)(param_1 + 0x16b4) = (uint)*(ushort *)(param_2 + 0x402);
  return;
}
