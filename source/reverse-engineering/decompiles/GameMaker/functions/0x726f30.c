// rea decompile_all
// name: FUN_00726f30
// address: 0x726f30
// body: available
// range: 0x726f30-0x726f7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00726f30(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;

  uVar1 = *(uint *)(param_1 + 8);
  if ((param_3 < uVar1) || (uVar1 == 0)) {
    FUN_00726f94(param_1,uVar1 + 1);
    if (param_3 < *(uint *)(param_1 + 8)) {
      FUN_0040450c(*(int *)(param_1 + 0xc) + param_3 * 4,*(int *)(param_1 + 0xc) + 4 + param_3 * 4,
                   ((*(uint *)(param_1 + 8) - param_3) + -1) * 4);
    }
    FUN_00726f80(param_1,param_3,param_2);
  }
  return;
}
