// rea decompile_all
// name: FUN_004196c0
// address: 0x4196c0
// body: available
// range: 0x4196c0-0x419788 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004196c0(ushort param_1,ushort param_2,ushort param_3,double *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_7;

  local_7 = 0;
  uVar1 = FUN_00419684(param_1);
  iVar4 = (uVar1 & 0x7f) * 0x18;
  if ((((param_1 != 0) && (param_1 < 10000)) && (param_2 != 0)) &&
     (((param_2 < 0xd && (param_3 != 0)) &&
      (param_3 <= *(ushort *)(iVar4 + 0x773b82 + (uint)param_2 * 2))))) {
    iVar2 = param_2 - 1;
    if (0 < iVar2) {
      iVar3 = 1;
      do {
        param_3 = param_3 + *(short *)(iVar4 + 0x773b82 + iVar3 * 2);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = param_1 - 1;
    iVar4 = iVar2;
    if (iVar2 < 0) {
      iVar4 = param_1 + 2;
    }
    *param_4 = (double)(int)(((iVar2 * 0x16d + (iVar4 >> 2)) - iVar2 / 100) + iVar2 / 400 +
                             (uint)param_3 + -0xa955a);
    local_7 = 1;
  }
  return local_7;
}
