// rea decompile_all
// name: FUN_0046c554
// address: 0x46c554
// body: available
// range: 0x46c554-0x46c81c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046c554(int param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;

  if (*(int *)(param_1 + 0x16bc) < 0xe) {
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) | 2 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + 3;
  }
  else {
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) | 2 << ((byte)*(int *)(param_1 + 0x16bc) & 0x1f);
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b8);
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar1) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    *(short *)(param_1 + 0x16b8) =
         (short)(2 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xd;
  }
  uVar2 = DAT_00775770;
  uVar3 = (uint)DAT_00775772;
  if ((int)(0x10 - uVar3) < *(int *)(param_1 + 0x16bc)) {
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) | DAT_00775770 << ((byte)*(int *)(param_1 + 0x16bc) & 0x1f);
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b8);
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar1) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    *(short *)(param_1 + 0x16b8) =
         (short)((int)(uint)uVar2 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
    *(uint *)(param_1 + 0x16bc) = (uVar3 - 0x10) + *(int *)(param_1 + 0x16bc);
  }
  else {
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) |
         DAT_00775770 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + uVar3;
  }
  FUN_0046d020(param_1);
  iVar1 = *(int *)(param_1 + 0x16bc);
  if ((*(int *)(param_1 + 0x16b4) + 0xb) - iVar1 < 9) {
    if (iVar1 < 0xe) {
      *(ushort *)(param_1 + 0x16b8) =
           *(ushort *)(param_1 + 0x16b8) | 2 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
      *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + 3;
    }
    else {
      *(ushort *)(param_1 + 0x16b8) = *(ushort *)(param_1 + 0x16b8) | 2 << ((byte)iVar1 & 0x1f);
      iVar1 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b8);
      iVar1 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      *(char *)(*(int *)(param_1 + 8) + iVar1) =
           (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
      *(short *)(param_1 + 0x16b8) =
           (short)(2 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
      *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xd;
    }
    uVar2 = DAT_00775770;
    uVar3 = (uint)DAT_00775772;
    if ((int)(0x10 - uVar3) < *(int *)(param_1 + 0x16bc)) {
      *(ushort *)(param_1 + 0x16b8) =
           *(ushort *)(param_1 + 0x16b8) | DAT_00775770 << ((byte)*(int *)(param_1 + 0x16bc) & 0x1f)
      ;
      iVar1 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b8);
      iVar1 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      *(char *)(*(int *)(param_1 + 8) + iVar1) =
           (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
      *(short *)(param_1 + 0x16b8) =
           (short)((int)(uint)uVar2 >> (0x10U - (char)*(undefined4 *)(param_1 + 0x16bc) & 0x1f));
      *(uint *)(param_1 + 0x16bc) = (uVar3 - 0x10) + *(int *)(param_1 + 0x16bc);
    }
    else {
      *(ushort *)(param_1 + 0x16b8) =
           *(ushort *)(param_1 + 0x16b8) |
           DAT_00775770 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f);
      *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + uVar3;
    }
    FUN_0046d020(param_1);
  }
  *(undefined4 *)(param_1 + 0x16b4) = 7;
  return;
}
