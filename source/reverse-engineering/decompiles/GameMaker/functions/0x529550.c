// rea decompile_all
// name: FUN_00529550
// address: 0x529550
// body: available
// range: 0x529550-0x529663 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00529550(int *param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  ushort *puVar6;
  uint uVar7;

  uVar2 = param_1[9];
  while( true ) {
    uVar7 = (param_1[0xd] - param_1[0x1b]) - param_1[0x19];
    if (((uVar7 != 0) || (param_1[0x19] != 0)) || (uVar3 = uVar2, param_1[0x1b] != 0)) {
      if (uVar7 == 0xffffffff) {
        uVar3 = 0xfffffffe;
      }
      else {
        uVar3 = uVar7;
        if (param_1[9] + -0x106 + uVar2 <= (uint)param_1[0x19]) {
          FUN_005286a4();
          param_1[0x1a] = param_1[0x1a] - uVar2;
          param_1[0x19] = param_1[0x19] - uVar2;
          param_1[0x15] = param_1[0x15] - uVar2;
          iVar4 = param_1[0x11];
          puVar6 = (ushort *)(iVar4 * 2 + param_1[0xf]);
          do {
            puVar6 = puVar6 + -1;
            if (*puVar6 < uVar2) {
              uVar5 = 0;
            }
            else {
              uVar5 = *puVar6 - (short)uVar2;
            }
            *puVar6 = uVar5;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          puVar6 = (ushort *)(uVar2 * 2 + param_1[0xe]);
          uVar3 = uVar2;
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
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
          uVar3 = uVar7 + uVar2;
        }
      }
    }
    if (*(int *)(*param_1 + 4) == 0) break;
    iVar4 = FUN_005292ec(*param_1,param_1[0xc] + param_1[0x19] + param_1[0x1b],uVar3,param_3);
    param_1[0x1b] = param_1[0x1b] + iVar4;
    if (2 < (uint)param_1[0x1b]) {
      bVar1 = *(byte *)(param_1[0xc] + param_1[0x19]);
      param_1[0x10] = (uint)bVar1;
      param_1[0x10] =
           ((uint)bVar1 << ((byte)param_1[0x14] & 0x1f) ^
           (uint)*(byte *)(param_1[0xc] + 1 + param_1[0x19])) & param_1[0x13];
    }
    if (0x105 < (uint)param_1[0x1b]) {
      return;
    }
    if (*(int *)(*param_1 + 4) == 0) {
      return;
    }
  }
  return;
}
