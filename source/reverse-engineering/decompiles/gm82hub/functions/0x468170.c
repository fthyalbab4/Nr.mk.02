// rea decompile_all
// name: FUN_00468170
// address: 0x468170
// body: available
// range: 0x468170-0x468184 inclusive
// range: 0x46819f-0x468280 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00468170(int *param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  ushort *puVar6;
  int iVar7;

  uVar2 = param_1[0xb];
  while( true ) {
    iVar7 = (param_1[0xf] - param_1[0x1d]) - param_1[0x1b];
    if (param_1[0xb] + -0x106 + uVar2 <= (uint)param_1[0x1b]) {
      FUN_00466a40();
      param_1[0x1c] = param_1[0x1c] - uVar2;
      param_1[0x1b] = param_1[0x1b] - uVar2;
      param_1[0x17] = param_1[0x17] - uVar2;
      iVar3 = param_1[0x13];
      puVar6 = (ushort *)(iVar3 * 2 + param_1[0x11]);
      do {
        puVar6 = puVar6 + -1;
        if (*puVar6 < uVar2) {
          uVar5 = 0;
        }
        else {
          uVar5 = *puVar6 - (short)uVar2;
        }
        *puVar6 = uVar5;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      puVar6 = (ushort *)(uVar2 * 2 + param_1[0x10]);
      uVar4 = uVar2;
      do {
        puVar6 = puVar6 + -1;
        param_3 = (uint)*puVar6;
        if (param_3 < uVar2) {
          uVar5 = 0;
        }
        else {
          uVar5 = *puVar6 - (short)uVar2;
        }
        *puVar6 = uVar5;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      iVar7 = iVar7 + uVar2;
    }
    if (*(int *)(*param_1 + 4) == 0) break;
    iVar7 = FUN_00467e44(*param_1,param_1[0xe] + param_1[0x1b] + param_1[0x1d],iVar7,param_3);
    param_1[0x1d] = param_1[0x1d] + iVar7;
    if (2 < (uint)param_1[0x1d]) {
      bVar1 = *(byte *)(param_1[0xe] + param_1[0x1b]);
      param_1[0x12] = (uint)bVar1;
      param_1[0x12] =
           ((uint)bVar1 << ((byte)param_1[0x16] & 0x1f) ^
           (uint)*(byte *)(param_1[0xe] + 1 + param_1[0x1b])) & param_1[0x15];
    }
    if (0x105 < (uint)param_1[0x1d]) {
      return;
    }
    if (*(int *)(*param_1 + 4) == 0) {
      return;
    }
  }
  return;
}
