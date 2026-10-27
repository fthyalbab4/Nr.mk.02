// rea decompile_all
// name: FUN_005b24f0
// address: 0x5b24f0
// body: available
// range: 0x5b24f0-0x5b2573 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b24f0(int param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  undefined4 *local_1c;
  int *local_18;
  int *local_14;
  int local_10;

  local_10 = 0;
  local_1c = (undefined4 *)(*(int *)(param_1 + 0x160) + 0xc);
  iVar1 = *(int *)(param_1 + 0x40);
  local_18 = param_5;
  local_14 = param_2;
  for (; local_10 < *(int *)(param_1 + 0x38); local_10 = local_10 + 1) {
    (*(code *)*local_1c)
              (param_1,iVar1,*local_14 + param_3 * 4,*local_18 + param_4 * *(int *)(iVar1 + 0xc) * 4
              );
    local_14 = local_14 + 1;
    local_18 = local_18 + 1;
    local_1c = local_1c + 1;
    iVar1 = iVar1 + 0x54;
  }
  return;
}
