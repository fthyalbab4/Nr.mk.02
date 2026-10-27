// rea decompile_all
// name: FUN_0065944c
// address: 0x65944c
// body: available
// range: 0x65944c-0x659528 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0065944c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  int local_18;
  int local_14;

  local_14 = *(int *)(param_1 + 0x2f0);
  if (-1 < local_14 + -1) {
    iVar3 = 0;
    do {
      iVar1 = FUN_0062cd94(*(undefined4 *)(*(int *)(param_1 + 0x2f4) + 8 + iVar3 * 0x18));
      if (iVar1 != 0) {
        iVar2 = FUN_006f5b30(*(undefined4 *)(iVar1 + 4));
        iVar1 = *(int *)(*(int *)(param_1 + 0x2f4) + iVar3 * 0x18);
        local_1c = *(int *)(*(int *)(param_1 + 0x2f4) + 4 + iVar3 * 0x18);
        if (iVar2 == 0) {
          local_18 = 0;
          iVar2 = 0;
        }
        else {
          iVar1 = iVar1 - *(int *)(iVar2 + 8);
          local_1c = local_1c - *(int *)(iVar2 + 0xc);
          local_18 = FUN_005b2ec4(iVar2);
          local_18 = local_18 + -1;
          iVar2 = FUN_005b2edc(iVar2);
          iVar2 = iVar2 + -1;
        }
        if (*(int *)(param_1 + 0xc) <= iVar1) {
          return 1;
        }
        if (iVar1 + local_18 < 0) {
          return 1;
        }
        if (*(int *)(param_1 + 0x10) <= local_1c) {
          return 1;
        }
        if (iVar2 + local_1c < 0) {
          return 1;
        }
      }
      iVar3 = iVar3 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return 0;
}
