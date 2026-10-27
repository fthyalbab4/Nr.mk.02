// rea decompile_all
// name: FUN_0040505c
// address: 0x40505c
// body: available
// range: 0x40505c-0x4050c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0040505c(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;

  if (*(short *)(param_1 + 4) != -0x284f) {
    cVar2 = FUN_00405020();
    if (cVar2 == '\0') goto LAB_004050be;
  }
  uVar4 = *(uint *)(param_1 + 0xc);
  if (*(uint *)(param_1 + 0x10) <= uVar4) {
    iVar3 = (**(code **)(param_1 + 0x1c))();
    if (iVar3 != 0) {
      FUN_004044ac();
      goto LAB_004050be;
    }
    uVar4 = *(uint *)(param_1 + 0xc);
    if (*(uint *)(param_1 + 0x10) <= uVar4) {
      if ((*(ushort *)(param_1 + 6) & 1) != 0) {
        *(undefined1 *)(uVar4 + *(int *)(param_1 + 0x14)) = 0x1a;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      }
      goto LAB_004050be;
    }
  }
  bVar1 = *(byte *)(uVar4 + *(int *)(param_1 + 0x14));
  if (((*(ushort *)(param_1 + 6) & 1) == 0) || (bVar1 != 0x1a)) {
    *(uint *)(param_1 + 0xc) = uVar4 + 1;
    return (uint)bVar1;
  }
LAB_004050be:
  return CONCAT31(CONCAT21((short)((uint)param_1 >> 0x10),0x1a),0x1a);
}
