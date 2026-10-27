// rea decompile_all
// name: FUN_0046f6e0
// address: 0x46f6e0
// body: available
// range: 0x46f6e0-0x46f8f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0046f6e0(ushort param_1,undefined4 param_2,short param_3)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;

  if (param_3 == 0) {
    fVar1 = (float)param_1;
    uVar4 = (uint)(ushort)((ushort)(fVar1 < 160.0) << 8 | (ushort)NAN(fVar1) << 10 |
                          (ushort)(fVar1 == 160.0) << 0xe);
  }
  else {
    FUN_0046f5c4();
    FUN_0046f5c4();
    iVar3 = FUN_0046f5c4();
    uVar4 = iVar3 * 0xff;
  }
  uVar4 = FUN_0046f6b4(uVar4);
  bVar2 = FUN_0046f6b4();
  uVar5 = FUN_0046f6b4();
  return uVar4 & 0xff | (uint)bVar2 << 8 | (uVar5 & 0xff) << 0x10;
}
