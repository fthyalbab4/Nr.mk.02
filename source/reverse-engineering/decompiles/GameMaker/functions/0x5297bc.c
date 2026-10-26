// rea decompile_all
// name: FUN_005297bc
// address: 0x5297bc
// body: available
// range: 0x5297bc-0x529a87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005297bc(int *param_1,int param_2)

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
    if ((uint)param_1[0x1b] < 0x106) {
      FUN_00529550(param_1);
      if (((uint)param_1[0x1b] < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (param_1[0x1b] == 0) {
        if (param_1[0x15] < 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = param_1[0xc] + param_1[0x15];
        }
        FUN_0052dde8(param_1,iVar4,param_1[0x19] - param_1[0x15],param_2 == 4);
        param_1[0x15] = param_1[0x19];
        FUN_00528ddc(*param_1);
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
    if (2 < (uint)param_1[0x1b]) {
      uVar6 = (param_1[0x10] << ((byte)param_1[0x14] & 0x1f) ^
              (uint)*(byte *)(param_1[0xc] + 2 + param_1[0x19])) & param_1[0x13];
      param_1[0x10] = uVar6;
      uVar3 = *(ushort *)(param_1[0xf] + uVar6 * 2);
      uVar6 = (uint)uVar3;
      *(ushort *)(param_1[0xe] + (param_1[0x19] & param_1[0xb]) * 2) = uVar3;
      *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
    }
    if (((uVar6 != 0) && (param_1[0x19] - uVar6 <= param_1[9] - 0x106U)) && (param_1[0x20] != 2)) {
      iVar4 = FUN_005293d8(param_1,uVar6);
      param_1[0x16] = iVar4;
    }
    if ((uint)param_1[0x16] < 3) {
      bVar5 = *(byte *)(param_1[0xc] + param_1[0x19]);
      *(undefined2 *)(param_1[0x5a7] + param_1[0x5a6] * 2) = 0;
      iVar4 = param_1[0x5a6];
      param_1[0x5a6] = param_1[0x5a6] + 1;
      *(byte *)(param_1[0x5a4] + iVar4) = bVar5;
      *(short *)(param_1 + bVar5 + 0x23) = (short)param_1[bVar5 + 0x23] + 1;
      bVar7 = param_1[0x5a5] + -1 == param_1[0x5a6];
      param_1[0x1b] = param_1[0x1b] + -1;
      param_1[0x19] = param_1[0x19] + 1;
    }
    else {
      sVar2 = (short)param_1[0x19] - (short)param_1[0x1a];
      iVar4 = param_1[0x16];
      *(short *)(param_1[0x5a7] + param_1[0x5a6] * 2) = sVar2;
      bVar5 = (char)iVar4 - 3;
      iVar4 = param_1[0x5a6];
      uVar3 = sVar2 - 1;
      param_1[0x5a6] = param_1[0x5a6] + 1;
      *(byte *)(param_1[0x5a4] + iVar4) = bVar5;
      *(short *)(param_1 + (byte)(&DAT_0077b350)[bVar5] + 0x124) =
           (short)param_1[(byte)(&DAT_0077b350)[bVar5] + 0x124] + 1;
      if (uVar3 < 0x100) {
        bVar5 = (&DAT_0077b150)[uVar3];
      }
      else {
        bVar5 = (&DAT_0077b250)[(int)(uint)uVar3 >> 7];
      }
      *(short *)(param_1 + bVar5 + 0x260) = (short)param_1[bVar5 + 0x260] + 1;
      bVar7 = param_1[0x5a5] + -1 == param_1[0x5a6];
      param_1[0x1b] = param_1[0x1b] - param_1[0x16];
      if (((uint)param_1[0x1e] < (uint)param_1[0x16]) || ((uint)param_1[0x1b] < 3)) {
        param_1[0x19] = param_1[0x19] + param_1[0x16];
        param_1[0x16] = 0;
        bVar5 = *(byte *)(param_1[0xc] + param_1[0x19]);
        param_1[0x10] = (uint)bVar5;
        param_1[0x10] =
             ((uint)bVar5 << ((byte)param_1[0x14] & 0x1f) ^
             (uint)*(byte *)(param_1[0xc] + 1 + param_1[0x19])) & param_1[0x13];
      }
      else {
        param_1[0x16] = param_1[0x16] + -1;
        do {
          param_1[0x19] = param_1[0x19] + 1;
          uVar6 = (param_1[0x10] << ((byte)param_1[0x14] & 0x1f) ^
                  (uint)*(byte *)(param_1[0xc] + 2 + param_1[0x19])) & param_1[0x13];
          param_1[0x10] = uVar6;
          uVar3 = *(ushort *)(param_1[0xf] + uVar6 * 2);
          uVar6 = (uint)uVar3;
          *(ushort *)(param_1[0xe] + (param_1[0x19] & param_1[0xb]) * 2) = uVar3;
          *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
          piVar1 = param_1 + 0x16;
          *piVar1 = *piVar1 + -1;
        } while (*piVar1 != 0);
        param_1[0x19] = param_1[0x19] + 1;
      }
    }
    if (bVar7) {
      if (param_1[0x15] < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = param_1[0xc] + param_1[0x15];
      }
      FUN_0052dde8(param_1,iVar4,param_1[0x19] - param_1[0x15],0);
      param_1[0x15] = param_1[0x19];
      FUN_00528ddc(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}
