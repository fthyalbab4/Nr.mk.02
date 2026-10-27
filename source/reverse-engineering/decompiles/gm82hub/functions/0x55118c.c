// rea decompile_all
// name: FUN_0055118c
// address: 0x55118c
// body: available
// range: 0x55118c-0x551208 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055118c(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined1 local_f4 [24];
  uint local_dc;
  int local_d8;

  FUN_00550708(*(undefined4 *)(param_4 + -4),local_f4);
  if (local_d8 == 0) {
    if (param_1 < local_dc) goto LAB_005511f7;
  }
  else if (0 < local_d8) goto LAB_005511f7;
  uVar1 = *(uint *)(*(int *)(param_4 + -4) + 0x48);
  local_d8 = local_d8 + (uint)CARRY4(uVar1,local_dc);
  if (local_d8 == 0) {
    if (uVar1 + local_dc <= param_1) goto LAB_005511f7;
  }
  else if (local_d8 < 1) goto LAB_005511f7;
  param_1 = param_1 - local_dc;
LAB_005511f7:
  FUN_00551120(*(undefined4 *)(param_4 + -4),param_1);
  return;
}
