// rea decompile_all
// name: FUN_004c4cdc
// address: 0x4c4cdc
// body: available
// range: 0x4c4cdc-0x4c4d9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c4cdc(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;

  iVar1 = param_1[0x1c];
  if (*(int *)(iVar1 + 0x14) == 0) {
    *param_2 = 0;
  }
  else {
    *param_2 = *(int *)(param_1[0x1c] + 0x14);
  }
  if (*(int *)(iVar1 + 0x10) == 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = *(int *)(param_1[0x1c] + 0x10);
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    *param_5 = 0;
  }
  else {
    *param_5 = *(int *)(param_1[0x1c] + 0xc);
  }
  if (*(int *)(iVar1 + 8) == 0) {
    *param_4 = 0;
  }
  else {
    *param_4 = *(int *)(param_1[0x1c] + 8);
  }
  if ((*(byte *)((int)param_1 + 0x52) & 0x10) != 0) {
    iVar1 = *(int *)(param_1[0x1d] + 8) + *(int *)(param_1[0x1d] + 0x10);
    if (0 < *param_2) {
      *param_2 = *param_2 + iVar1;
    }
    if (iVar1 <= *param_5) {
      *param_5 = *param_5 - iVar1;
    }
    iVar1 = *(int *)(param_1[0x1d] + 0xc) + *(int *)(param_1[0x1d] + 0x14);
    if (0 < *param_3) {
      *param_3 = *param_3 + iVar1;
    }
    if (iVar1 <= *param_4) {
      *param_4 = *param_4 - iVar1;
    }
  }
  (**(code **)(*param_1 + 0x3c))();
  return;
}
