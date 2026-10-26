// rea decompile_all
// name: FUN_005cb808
// address: 0x5cb808
// body: available
// range: 0x5cb808-0x5cb917 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005cb808(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;

  if (param_2 == (byte *)0x0) {
    param_1 = 0;
  }
  else {
    if (DAT_0084f588 == 0) {
      FUN_005cb798();
    }
    param_1 = param_1 ^ 0xffffffff;
    for (; 7 < param_3; param_3 = param_3 - 8) {
      uVar1 = *(uint *)(DAT_0084f588 + (uint)(byte)((byte)param_1 ^ *param_2) * 4) ^ param_1 >> 8;
      uVar1 = *(uint *)(DAT_0084f588 + (uint)(byte)((byte)uVar1 ^ param_2[1]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(DAT_0084f588 + (uint)(byte)((byte)uVar1 ^ param_2[2]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(DAT_0084f588 + (uint)(byte)((byte)uVar1 ^ param_2[3]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(DAT_0084f588 + (uint)(byte)((byte)uVar1 ^ param_2[4]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(DAT_0084f588 + (uint)(byte)((byte)uVar1 ^ param_2[5]) * 4) ^ uVar1 >> 8;
      uVar1 = *(uint *)(DAT_0084f588 + (uint)(byte)((byte)uVar1 ^ param_2[6]) * 4) ^ uVar1 >> 8;
      param_1 = *(uint *)(DAT_0084f588 + (uint)(byte)((byte)uVar1 ^ param_2[7]) * 4) ^ uVar1 >> 8;
      param_2 = param_2 + 8;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      param_1 = *(uint *)(DAT_0084f588 + ((*param_2 ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
      param_2 = param_2 + 1;
    }
    param_1 = param_1 ^ 0xffffffff;
  }
  return param_1;
}
