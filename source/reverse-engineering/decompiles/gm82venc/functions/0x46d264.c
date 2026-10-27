// rea decompile_all
// name: FUN_0046d264
// address: 0x46d264
// body: available
// range: 0x46d264-0x46d59a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0046d264(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;

  uVar1 = ~((param_1 >> 0x18) + (param_1 >> 8 & 0xff00) + (param_1 & 0xff00) * 0x100 +
           param_1 * 0x1000000);
  for (; (param_3 != 0 && (((uint)param_2 & 3) != 0)); param_2 = param_2 + 1) {
    uVar1 = *(uint *)(&DAT_0067fcec + (uVar1 >> 0x18 ^ (uint)*param_2) * 4) ^ uVar1 << 8;
    param_3 = param_3 - 1;
  }
  puVar2 = (uint *)(param_2 + -4);
  for (; 0x1f < param_3; param_3 = param_3 - 0x20) {
    uVar1 = uVar1 ^ puVar2[1];
    uVar1 = *(uint *)(&DAT_0067fcec + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_006800ec + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_006804ec + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_006808ec + (uVar1 >> 0x18) * 4) ^ puVar2[2];
    uVar1 = *(uint *)(&DAT_0067fcec + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_006800ec + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_006804ec + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_006808ec + (uVar1 >> 0x18) * 4) ^ puVar2[3];
    uVar1 = *(uint *)(&DAT_0067fcec + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_006800ec + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_006804ec + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_006808ec + (uVar1 >> 0x18) * 4) ^ puVar2[4];
    uVar1 = *(uint *)(&DAT_0067fcec + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_006800ec + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_006804ec + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_006808ec + (uVar1 >> 0x18) * 4) ^ puVar2[5];
    uVar1 = *(uint *)(&DAT_0067fcec + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_006800ec + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_006804ec + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_006808ec + (uVar1 >> 0x18) * 4) ^ puVar2[6];
    uVar1 = *(uint *)(&DAT_0067fcec + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_006800ec + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_006804ec + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_006808ec + (uVar1 >> 0x18) * 4) ^ puVar2[7];
    puVar2 = puVar2 + 8;
    uVar1 = *(uint *)(&DAT_0067fcec + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_006800ec + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_006804ec + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_006808ec + (uVar1 >> 0x18) * 4) ^ *puVar2;
    uVar1 = *(uint *)(&DAT_0067fcec + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_006800ec + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_006804ec + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_006808ec + (uVar1 >> 0x18) * 4);
  }
  for (; 3 < param_3; param_3 = param_3 - 4) {
    puVar2 = puVar2 + 1;
    uVar1 = uVar1 ^ *puVar2;
    uVar1 = *(uint *)(&DAT_0067fcec + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_006800ec + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_006804ec + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_006808ec + (uVar1 >> 0x18) * 4);
  }
  puVar2 = puVar2 + 1;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    uVar1 = *(uint *)(&DAT_0067fcec + (uVar1 >> 0x18 ^ (uint)(byte)*puVar2) * 4) ^ uVar1 << 8;
    puVar2 = (uint *)((int)puVar2 + 1);
  }
  uVar1 = ~uVar1;
  return (uVar1 >> 0x18) + (uVar1 >> 8 & 0xff00) + (uVar1 & 0xff00) * 0x100 + uVar1 * 0x1000000;
}
