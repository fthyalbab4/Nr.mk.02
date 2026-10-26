// rea decompile_all
// name: FUN_005402ac
// address: 0x5402ac
// body: available
// range: 0x5402ac-0x540340 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005402ac(undefined4 param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  int local_14;
  int local_10;

  do {
    param_2 = param_2 + -1;
    if (param_2 < 1) break;
  } while (*(int *)(param_4 + param_2 * 4) == 0);
  iVar1 = *(int *)(param_4 + param_2 * 4);
  *(undefined4 *)(param_4 + param_2 * 4) = *(undefined4 *)(iVar1 + 0x18);
  iVar4 = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  iVar3 = 0;
  do {
    iVar2 = *(int *)(iVar1 + 0x1c + iVar3 * 4);
    if (iVar2 != 0) {
      iVar4 = iVar4 + *(int *)(iVar2 + 0xc);
      local_10 = local_10 + *(int *)(iVar2 + 0x10);
      local_14 = local_14 + *(int *)(iVar2 + 0x14);
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + *(int *)(iVar2 + 8);
      FUN_00405a7c(*(undefined4 *)(iVar1 + 0x1c + iVar3 * 4));
      *(undefined4 *)(iVar1 + 0x1c + iVar3 * 4) = 0;
      local_18 = local_18 + 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 8);
  *(undefined1 *)(iVar1 + 4) = 1;
  *(int *)(iVar1 + 0xc) = iVar4;
  *(int *)(iVar1 + 0x10) = local_10;
  *(int *)(iVar1 + 0x14) = local_14;
  *param_3 = *param_3 - (local_18 + -1);
  return;
}
