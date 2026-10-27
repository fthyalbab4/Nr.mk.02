// rea decompile_all
// name: FUN_0046b9a8
// address: 0x46b9a8
// body: available
// range: 0x46b9a8-0x46ba14 inclusive
// range: 0x46ba17-0x46bab1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046b9a8(int param_1,int param_2,int param_3)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_18;
  uint local_14;
  ushort *local_10;

  local_14 = 0xffffffff;
  uVar2 = *(ushort *)(param_2 + 2);
  iVar7 = 0;
  iVar4 = 7;
  iVar3 = 4;
  if (uVar2 == 0) {
    iVar4 = 0x8a;
    iVar3 = 3;
  }
  *(undefined2 *)(param_2 + 6 + param_3 * 4) = 0xffff;
  local_10 = (ushort *)(param_2 + 6);
  local_18 = 0;
  uVar5 = (uint)uVar2;
  if (-1 < param_3) {
    do {
      iVar7 = iVar7 + 1;
      uVar6 = (uint)*local_10;
      if ((iVar4 <= iVar7) || (uVar6 != uVar5)) {
        if (iVar7 < iVar3) {
          psVar1 = (short *)(param_1 + 0xa7c + uVar5 * 4);
          *psVar1 = *psVar1 + (short)iVar7;
        }
        else if (uVar5 == 0) {
          if (iVar7 < 0xb) {
            *(short *)(param_1 + 0xac0) = *(short *)(param_1 + 0xac0) + 1;
          }
          else {
            *(short *)(param_1 + 0xac4) = *(short *)(param_1 + 0xac4) + 1;
          }
        }
        else {
          if (uVar5 != local_14) {
            psVar1 = (short *)(param_1 + 0xa7c + uVar5 * 4);
            *psVar1 = *psVar1 + 1;
          }
          *(short *)(param_1 + 0xabc) = *(short *)(param_1 + 0xabc) + 1;
        }
        iVar7 = 0;
        local_14 = uVar5;
        if (uVar6 == 0) {
          iVar4 = 0x8a;
          iVar3 = 3;
        }
        else if (uVar6 == uVar5) {
          iVar4 = 6;
          iVar3 = 3;
        }
        else {
          iVar4 = 7;
          iVar3 = 4;
        }
      }
      local_18 = local_18 + 1;
      local_10 = local_10 + 2;
      uVar5 = uVar6;
    } while (local_18 <= param_3);
  }
  return;
}
