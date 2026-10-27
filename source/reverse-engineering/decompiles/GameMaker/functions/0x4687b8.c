// rea decompile_all
// name: FUN_004687b8
// address: 0x4687b8
// body: available
// range: 0x4687b8-0x468a50 inclusive
// range: 0x468a56-0x468aba inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004687b8(int *param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;

  uVar6 = 0;
  do {
    if ((uint)param_1[0x1d] < 0x106) {
      FUN_00468548(param_1);
      if (((uint)param_1[0x1d] < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (param_1[0x1d] == 0) {
        if (param_1[0x17] < 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = param_1[0xe] + param_1[0x17];
        }
        FUN_0046c820(param_1,iVar4,param_1[0x1b] - param_1[0x17],param_2 == 4);
        param_1[0x17] = param_1[0x1b];
        FUN_00467708(*param_1);
        if (*(int *)(*param_1 + 0x10) == 0) {
          if (param_2 == 4) {
            return 2;
          }
          return 0;
        }
        if (param_2 == 4) {
          return 3;
        }
        return 1;
      }
    }
    if (2 < (uint)param_1[0x1d]) {
      uVar6 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
              (uint)*(byte *)(param_1[0xe] + 2 + param_1[0x1b])) & param_1[0x15];
      param_1[0x12] = uVar6;
      uVar3 = *(ushort *)(param_1[0x11] + uVar6 * 2);
      uVar6 = (uint)uVar3;
      *(ushort *)(param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2) = uVar3;
      *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
    }
    if ((uVar6 != 0) && (param_1[0x1b] - uVar6 <= param_1[0xb] - 0x106U)) {
      if ((param_1[0x22] == 2) || (param_1[0x22] == 3)) {
        if ((param_1[0x22] == 3) && (param_1[0x1b] - uVar6 == 1)) {
          iVar4 = FUN_004684a8(param_1,uVar6);
          param_1[0x18] = iVar4;
        }
      }
      else {
        iVar4 = FUN_00468330(param_1,uVar6);
        param_1[0x18] = iVar4;
      }
    }
    if ((uint)param_1[0x18] < 3) {
      bVar5 = *(byte *)(param_1[0xe] + param_1[0x1b]);
      *(undefined2 *)(param_1[0x5a9] + param_1[0x5a8] * 2) = 0;
      iVar4 = param_1[0x5a8];
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(byte *)(param_1[0x5a6] + iVar4) = bVar5;
      *(short *)(param_1 + bVar5 + 0x25) = (short)param_1[bVar5 + 0x25] + 1;
      bVar7 = param_1[0x5a7] + -1 == param_1[0x5a8];
      param_1[0x1d] = param_1[0x1d] + -1;
      param_1[0x1b] = param_1[0x1b] + 1;
    }
    else {
      sVar2 = (short)param_1[0x1b] - (short)param_1[0x1c];
      iVar4 = param_1[0x18];
      *(short *)(param_1[0x5a9] + param_1[0x5a8] * 2) = sVar2;
      bVar5 = (char)iVar4 - 3;
      iVar4 = param_1[0x5a8];
      uVar3 = sVar2 - 1;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(byte *)(param_1[0x5a6] + iVar4) = bVar5;
      *(short *)(param_1 + (byte)(&DAT_00775ba3)[bVar5] + 0x126) =
           (short)param_1[(byte)(&DAT_00775ba3)[bVar5] + 0x126] + 1;
      if (uVar3 < 0x100) {
        bVar5 = (&DAT_007759a3)[uVar3];
      }
      else {
        bVar5 = (&DAT_00775aa3)[(int)(uint)uVar3 >> 7];
      }
      *(short *)(param_1 + bVar5 + 0x262) = (short)param_1[bVar5 + 0x262] + 1;
      bVar7 = param_1[0x5a7] + -1 == param_1[0x5a8];
      param_1[0x1d] = param_1[0x1d] - param_1[0x18];
      if (((uint)param_1[0x20] < (uint)param_1[0x18]) || ((uint)param_1[0x1d] < 3)) {
        param_1[0x1b] = param_1[0x1b] + param_1[0x18];
        param_1[0x18] = 0;
        bVar5 = *(byte *)(param_1[0xe] + param_1[0x1b]);
        param_1[0x12] = (uint)bVar5;
        param_1[0x12] =
             ((uint)bVar5 << ((byte)param_1[0x16] & 0x1f) ^
             (uint)*(byte *)(param_1[0xe] + 1 + param_1[0x1b])) & param_1[0x15];
      }
      else {
        param_1[0x18] = param_1[0x18] + -1;
        do {
          param_1[0x1b] = param_1[0x1b] + 1;
          uVar6 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
                  (uint)*(byte *)(param_1[0xe] + 2 + param_1[0x1b])) & param_1[0x15];
          param_1[0x12] = uVar6;
          uVar3 = *(ushort *)(param_1[0x11] + uVar6 * 2);
          *(ushort *)(param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2) = uVar3;
          uVar6 = (uint)uVar3;
          *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
          piVar1 = param_1 + 0x18;
          *piVar1 = *piVar1 + -1;
        } while (*piVar1 != 0);
        param_1[0x1b] = param_1[0x1b] + 1;
      }
    }
    if (bVar7) {
      if (param_1[0x17] < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = param_1[0xe] + param_1[0x17];
      }
      FUN_0046c820(param_1,iVar4,param_1[0x1b] - param_1[0x17],0);
      param_1[0x17] = param_1[0x1b];
      FUN_00467708(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}
