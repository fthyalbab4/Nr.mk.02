// rea decompile_all
// name: FUN_005b1eb4
// address: 0x5b1eb4
// body: available
// range: 0x5b1eb4-0x5b1fb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b1eb4(int param_1,undefined4 *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  uint local_14;
  undefined4 *local_8;

  iVar1 = *(int *)(*(int *)(param_1 + 0x15c) + 8);
  uVar2 = *(uint *)(param_1 + 0x1c);
  local_8 = param_2;
  while( true ) {
    param_4 = param_4 + -1;
    if (param_4 < 0) break;
    pbVar3 = (byte *)*local_8;
    local_8 = local_8 + 1;
    local_1c = *(undefined1 **)(*param_3 + param_5 * 4);
    local_20 = *(undefined1 **)(param_3[1] + param_5 * 4);
    local_24 = *(undefined1 **)(param_3[2] + param_5 * 4);
    param_5 = param_5 + 1;
    local_14 = 0;
    if (uVar2 != 0) {
      do {
        uVar5 = (uint)pbVar3[2];
        uVar4 = (uint)pbVar3[1];
        uVar6 = (uint)*pbVar3;
        pbVar3 = pbVar3 + 3;
        *local_1c = (char)((uint)(*(int *)(iVar1 + uVar5 * 4) + *(int *)(iVar1 + 0x400 + uVar4 * 4)
                                 + *(int *)(iVar1 + 0x800 + uVar6 * 4)) >> 0x10);
        *local_20 = (char)((uint)(*(int *)(iVar1 + 0xc00 + uVar5 * 4) +
                                  *(int *)(iVar1 + 0x1000 + uVar4 * 4) +
                                 *(int *)(iVar1 + 0x1400 + uVar6 * 4)) >> 0x10);
        *local_24 = (char)((uint)(*(int *)(iVar1 + 0x1400 + uVar5 * 4) +
                                  *(int *)(iVar1 + 0x1800 + uVar4 * 4) +
                                 *(int *)(iVar1 + 0x1c00 + uVar6 * 4)) >> 0x10);
        local_14 = local_14 + 1;
        local_24 = local_24 + 1;
        local_20 = local_20 + 1;
        local_1c = local_1c + 1;
      } while (local_14 < uVar2);
    }
  }
  return;
}
