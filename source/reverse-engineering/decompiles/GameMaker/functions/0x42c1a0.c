// rea decompile_all
// name: FUN_0042c1a0
// address: 0x42c1a0
// body: available
// range: 0x42c1a0-0x42c1bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0042c1a0(int param_1)

{
  ushort uVar1;
  undefined2 uVar3;
  int iVar2;

  uVar1 = (ushort)(param_1 + -2);
  uVar3 = (undefined2)((uint)(param_1 + -2) >> 0x10);
  iVar2 = CONCAT22(uVar3,uVar1 - 2);
  if (((1 < uVar1) && (iVar2 = CONCAT22(uVar3,uVar1 - 9), (ushort)(uVar1 - 9) != 0)) &&
     (uVar1 = (ushort)(iVar2 + -5), iVar2 = CONCAT22((short)((uint)(iVar2 + -5) >> 0x10),uVar1 - 6),
     5 < uVar1)) {
    return 0;
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}
