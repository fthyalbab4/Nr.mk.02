// rea decompile_all
// name: FUN_0063715c
// address: 0x63715c
// body: available
// range: 0x63715c-0x637224 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063715c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar1 = param_5;
  if (param_2 < param_5) {
    iVar1 = param_2;
  }
  iVar1 = (iVar1 - *(int *)(param_1 + 4)) / *(int *)(param_1 + 0xc);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (param_2 <= param_5) {
    param_2 = param_5;
  }
  iVar2 = (param_2 - *(int *)(param_1 + 4)) / *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x14) <= iVar2) {
    iVar2 = *(int *)(param_1 + 0x14) + -1;
  }
  local_14 = param_3;
  if (param_4 <= param_3) {
    local_14 = param_4;
  }
  local_8 = (local_14 - *(int *)(param_1 + 8)) / *(int *)(param_1 + 0x10);
  if (local_8 < 0) {
    local_8 = 0;
  }
  if (param_3 <= param_4) {
    param_3 = param_4;
  }
  local_c = (param_3 - *(int *)(param_1 + 8)) / *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x18) <= local_c) {
    local_c = *(int *)(param_1 + 0x18) + -1;
  }
  if (iVar1 <= iVar2) {
    local_10 = (iVar2 - iVar1) + 1;
    do {
      if (local_8 <= local_c) {
        iVar3 = (local_c - local_8) + 1;
        iVar2 = local_8;
        do {
          *(undefined4 *)(*(int *)(param_1 + 0x1c) + (iVar1 * *(int *)(param_1 + 0x18) + iVar2) * 4)
               = 0xffffffff;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar1 = iVar1 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}
