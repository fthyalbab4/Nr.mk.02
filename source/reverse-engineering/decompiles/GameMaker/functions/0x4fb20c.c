// rea decompile_all
// name: FUN_004fb20c
// address: 0x4fb20c
// body: available
// range: 0x4fb20c-0x4fb30e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004fb20c(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined1 local_9;

  local_9 = 0;
  iVar1 = FUN_004fa524(param_2,1);
  iVar2 = FUN_004fa524(param_2,2);
  if (*(char *)(param_1 + 0x1c) == '\0') {
    if (((iVar2 <= *param_3) && (*param_3 <= *(int *)(param_1 + 0x18) + iVar2)) &&
       (iVar1 <= param_3[1])) {
      iVar2 = FUN_004fa5a8(param_2,1);
      if (param_3[1] <= iVar1 + iVar2) {
        local_9 = 1;
        if (param_3[1] < *(int *)(*(int *)(param_2 + 4) + 0x44) + 0xf) {
          *param_4 = 0x14;
        }
        else {
          *param_4 = 2;
        }
      }
    }
  }
  else if (((iVar1 <= param_3[1]) && (param_3[1] <= iVar1 + *(int *)(param_1 + 0x18))) &&
          (iVar2 <= *param_3)) {
    iVar1 = FUN_004fa5a8(param_2,2);
    if (*param_3 <= iVar1 + iVar2) {
      local_9 = 1;
      if (*(int *)(*(int *)(param_2 + 4) + 0x40) + *(int *)(*(int *)(param_2 + 4) + 0x48) + -0xf <
          *param_3) {
        *param_4 = 0x14;
      }
      else {
        *param_4 = 2;
      }
    }
  }
  return local_9;
}
