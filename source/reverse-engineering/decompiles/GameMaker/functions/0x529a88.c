// rea decompile_all
// name: FUN_00529a88
// address: 0x529a88
// body: available
// range: 0x529a88-0x529cd0 inclusive
// range: 0x529cd6-0x529e4d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00529a88(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;

  uVar9 = 0;
  do {
    if ((uint)param_1[0x1b] < 0x106) {
      FUN_00529550(param_1);
      if (((uint)param_1[0x1b] < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (param_1[0x1b] == 0) {
        if (param_1[0x18] != 0) {
          bVar8 = *(byte *)(param_1[0xc] + -1 + param_1[0x19]);
          *(undefined2 *)(param_1[0x5a7] + param_1[0x5a6] * 2) = 0;
          iVar7 = param_1[0x5a6];
          param_1[0x5a6] = param_1[0x5a6] + 1;
          *(byte *)(param_1[0x5a4] + iVar7) = bVar8;
          *(short *)(param_1 + bVar8 + 0x23) = (short)param_1[bVar8 + 0x23] + 1;
          param_1[0x18] = 0;
        }
        if (param_1[0x15] < 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = param_1[0xc] + param_1[0x15];
        }
        FUN_0052dde8(param_1,iVar7,param_1[0x19] - param_1[0x15],param_2 == 4);
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
      uVar9 = (param_1[0x10] << ((byte)param_1[0x14] & 0x1f) ^
              (uint)*(byte *)(param_1[0xc] + 2 + param_1[0x19])) & param_1[0x13];
      param_1[0x10] = uVar9;
      uVar6 = *(ushort *)(param_1[0xf] + uVar9 * 2);
      uVar9 = (uint)uVar6;
      *(ushort *)(param_1[0xe] + (param_1[0x19] & param_1[0xb]) * 2) = uVar6;
      *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
    }
    param_1[0x1c] = param_1[0x16];
    param_1[0x17] = param_1[0x1a];
    param_1[0x16] = 2;
    if (((uVar9 != 0) && ((uint)param_1[0x1c] < (uint)param_1[0x1e])) &&
       (param_1[0x19] - uVar9 <= param_1[9] - 0x106U)) {
      if (param_1[0x20] != 2) {
        iVar7 = FUN_005293d8(param_1,uVar9);
        param_1[0x16] = iVar7;
      }
      if (((uint)param_1[0x16] < 6) &&
         ((param_1[0x20] == 1 ||
          ((param_1[0x16] == 3 && (0x1000 < (uint)(param_1[0x19] - param_1[0x1a]))))))) {
        param_1[0x16] = 2;
      }
    }
    if (((uint)param_1[0x1c] < 3) || ((uint)param_1[0x1c] < (uint)param_1[0x16])) {
      if (param_1[0x18] == 0) {
        param_1[0x18] = 1;
        param_1[0x19] = param_1[0x19] + 1;
        param_1[0x1b] = param_1[0x1b] + -1;
      }
      else {
        bVar8 = *(byte *)(param_1[0xc] + -1 + param_1[0x19]);
        *(undefined2 *)(param_1[0x5a7] + param_1[0x5a6] * 2) = 0;
        iVar7 = param_1[0x5a6];
        param_1[0x5a6] = param_1[0x5a6] + 1;
        *(byte *)(param_1[0x5a4] + iVar7) = bVar8;
        *(short *)(param_1 + bVar8 + 0x23) = (short)param_1[bVar8 + 0x23] + 1;
        if (param_1[0x5a5] + -1 == param_1[0x5a6]) {
          if (param_1[0x15] < 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = param_1[0xc] + param_1[0x15];
          }
          FUN_0052dde8(param_1,iVar7,param_1[0x19] - param_1[0x15],0);
          param_1[0x15] = param_1[0x19];
          FUN_00528ddc(*param_1);
        }
        param_1[0x19] = param_1[0x19] + 1;
        param_1[0x1b] = param_1[0x1b] + -1;
        if (*(int *)(*param_1 + 0x10) == 0) {
          return 0;
        }
      }
    }
    else {
      iVar7 = param_1[0x19];
      iVar2 = param_1[0x1b];
      sVar5 = ((short)param_1[0x19] + -1) - (short)param_1[0x17];
      iVar4 = param_1[0x1c];
      *(short *)(param_1[0x5a7] + param_1[0x5a6] * 2) = sVar5;
      bVar8 = (char)iVar4 - 3;
      iVar4 = param_1[0x5a6];
      uVar6 = sVar5 - 1;
      param_1[0x5a6] = param_1[0x5a6] + 1;
      *(byte *)(param_1[0x5a4] + iVar4) = bVar8;
      *(short *)(param_1 + (byte)(&DAT_0077b350)[bVar8] + 0x124) =
           (short)param_1[(byte)(&DAT_0077b350)[bVar8] + 0x124] + 1;
      if (uVar6 < 0x100) {
        bVar8 = (&DAT_0077b150)[uVar6];
      }
      else {
        bVar8 = (&DAT_0077b250)[(int)(uint)uVar6 >> 7];
      }
      *(short *)(param_1 + bVar8 + 0x260) = (short)param_1[bVar8 + 0x260] + 1;
      iVar3 = param_1[0x5a5];
      iVar4 = param_1[0x5a6];
      param_1[0x1b] = param_1[0x1b] - (param_1[0x1c] + -1);
      param_1[0x1c] = param_1[0x1c] + -2;
      do {
        param_1[0x19] = param_1[0x19] + 1;
        if ((uint)param_1[0x19] <= (iVar7 + iVar2) - 3U) {
          param_1[0x10] =
               (param_1[0x10] << ((byte)param_1[0x14] & 0x1f) ^
               (uint)*(byte *)(param_1[0xc] + 2 + param_1[0x19])) & param_1[0x13];
          uVar6 = *(ushort *)(param_1[0xf] + param_1[0x10] * 2);
          uVar9 = (uint)uVar6;
          *(ushort *)(param_1[0xe] + (param_1[0x19] & param_1[0xb]) * 2) = uVar6;
          *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
        }
        piVar1 = param_1 + 0x1c;
        *piVar1 = *piVar1 + -1;
      } while (*piVar1 != 0);
      param_1[0x18] = 0;
      param_1[0x16] = 2;
      param_1[0x19] = param_1[0x19] + 1;
      if (iVar3 + -1 == iVar4) {
        if (param_1[0x15] < 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = param_1[0xc] + param_1[0x15];
        }
        FUN_0052dde8(param_1,iVar7,param_1[0x19] - param_1[0x15],0);
        param_1[0x15] = param_1[0x19];
        FUN_00528ddc(*param_1);
        if (*(int *)(*param_1 + 0x10) == 0) {
          return 0;
        }
      }
    }
  } while( true );
}
