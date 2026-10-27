// rea decompile_all
// name: FUN_0046cfb0
// address: 0x46cfb0
// body: available
// range: 0x46cfb0-0x46d260 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0046cfb0(uint param_1,uint *param_2,uint param_3)

{
  uint uVar1;

  param_1 = ~param_1;
  for (; (param_3 != 0 && (((uint)param_2 & 3) != 0)); param_2 = (uint *)((int)param_2 + 1)) {
    param_1 = *(uint *)(&DAT_0067ecec + (((byte)*param_2 ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
    param_3 = param_3 - 1;
  }
  for (; 0x1f < param_3; param_3 = param_3 - 0x20) {
    param_1 = param_1 ^ *param_2;
    uVar1 = *(uint *)(&DAT_0067f8ec + (param_1 & 0xff) * 4) ^
            *(uint *)(&DAT_0067f4ec + (param_1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_0067f0ec + (param_1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_0067ecec + (param_1 >> 0x18) * 4) ^ param_2[1];
    uVar1 = *(uint *)(&DAT_0067f8ec + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_0067f4ec + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_0067f0ec + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_0067ecec + (uVar1 >> 0x18) * 4) ^ param_2[2];
    uVar1 = *(uint *)(&DAT_0067f8ec + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_0067f4ec + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_0067f0ec + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_0067ecec + (uVar1 >> 0x18) * 4) ^ param_2[3];
    uVar1 = *(uint *)(&DAT_0067f8ec + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_0067f4ec + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_0067f0ec + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_0067ecec + (uVar1 >> 0x18) * 4) ^ param_2[4];
    uVar1 = *(uint *)(&DAT_0067f8ec + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_0067f4ec + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_0067f0ec + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_0067ecec + (uVar1 >> 0x18) * 4) ^ param_2[5];
    uVar1 = *(uint *)(&DAT_0067f8ec + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_0067f4ec + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_0067f0ec + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_0067ecec + (uVar1 >> 0x18) * 4) ^ param_2[6];
    uVar1 = *(uint *)(&DAT_0067f8ec + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_0067f4ec + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_0067f0ec + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_0067ecec + (uVar1 >> 0x18) * 4) ^ param_2[7];
    param_2 = param_2 + 8;
    param_1 = *(uint *)(&DAT_0067f8ec + (uVar1 & 0xff) * 4) ^
              *(uint *)(&DAT_0067f4ec + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_0067f0ec + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_0067ecec + (uVar1 >> 0x18) * 4);
  }
  for (; 3 < param_3; param_3 = param_3 - 4) {
    param_1 = param_1 ^ *param_2;
    param_2 = param_2 + 1;
    param_1 = *(uint *)(&DAT_0067f8ec + (param_1 & 0xff) * 4) ^
              *(uint *)(&DAT_0067f4ec + (param_1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_0067f0ec + (param_1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_0067ecec + (param_1 >> 0x18) * 4);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    param_1 = *(uint *)(&DAT_0067ecec + (((byte)*param_2 ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
    param_2 = (uint *)((int)param_2 + 1);
  }
  return ~param_1;
}
