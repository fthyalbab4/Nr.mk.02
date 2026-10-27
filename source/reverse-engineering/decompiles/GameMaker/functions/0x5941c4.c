// rea decompile_all
// name: FUN_005941c4
// address: 0x5941c4
// body: available
// range: 0x5941c4-0x59422c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005941c4(int param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_10;

  local_10 = 0;
  uVar4 = 0;
  iVar1 = FUN_00409a20(*(undefined4 *)(param_1 + 200));
  if (-1 < iVar1) {
    do {
      uVar2 = iVar1 + uVar4 >> 1;
      uVar3 = (uint)*(ushort *)(*(int *)(param_1 + 200) + uVar2 * 0xc);
      if ((int)(uVar3 - param_2) < 0) {
        uVar4 = uVar2 + 1;
      }
      else {
        iVar1 = uVar2 - 1;
        if (uVar3 == param_2) {
          local_10 = 1;
          uVar4 = uVar2;
        }
      }
    } while ((int)uVar4 <= iVar1);
  }
  *param_3 = uVar4;
  return local_10;
}
