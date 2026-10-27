// rea decompile_all
// name: FUN_0046708c
// address: 0x46708c
// body: available
// range: 0x46708c-0x467132 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0046708c(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;

  uVar1 = (param_1 & 0xffff) + (param_2 & 0xffff) + 0xfff0;
  uVar2 = ((param_3 % 0xfff1) * (param_1 & 0xffff)) % 0xfff1 +
          (((param_1 >> 0x10) + (param_2 >> 0x10) + 0xfff1) - param_3 % 0xfff1);
  if (0xfff1 < uVar1) {
    uVar1 = uVar1 - 0xfff1;
  }
  if (0xfff1 < uVar1) {
    uVar1 = uVar1 - 0xfff1;
  }
  if (0x1ffe2 < uVar2) {
    uVar2 = uVar2 - 0x1ffe2;
  }
  if (0xfff1 < uVar2) {
    uVar2 = uVar2 - 0xfff1;
  }
  return uVar2 << 0x10 | uVar1;
}
