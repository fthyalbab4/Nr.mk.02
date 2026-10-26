// rea decompile_all
// name: FUN_004aab04
// address: 0x4aab04
// body: available
// range: 0x4aab04-0x4aab53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004aab04(int param_1)

{
  uint uVar1;
  SHORT SVar2;
  uint uVar3;
  undefined1 local_18;

  uVar1 = *(uint *)(param_1 + 8);
  local_18 = (byte)*(uint *)(param_1 + 4);
  uVar3 = *(uint *)(param_1 + 4) & 0xff;
  if (local_18 != 0) {
    SVar2 = GetKeyState(0x10);
    if (SVar2 < 0) {
      uVar3 = (uint)(ushort)(local_18 + 0x2000);
    }
    SVar2 = GetKeyState(0x11);
    if (SVar2 < 0) {
      uVar3 = (uint)(ushort)((short)uVar3 + 0x4000);
    }
    if ((uVar1 & 0x20000000) != 0) {
      uVar3 = (uint)(ushort)((short)uVar3 + 0x8000);
    }
  }
  return uVar3;
}
