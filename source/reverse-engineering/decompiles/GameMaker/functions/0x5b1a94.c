// rea decompile_all
// name: FUN_005b1a94
// address: 0x5b1a94
// body: available
// range: 0x5b1a94-0x5b1c13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b1a94(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;

  if (((param_1 != 0) && (param_2 != 0)) && (local_14 = *(int *)(param_1 + 8), -1 < local_14 + -1))
  {
    local_c = 0;
    do {
      local_18 = *(int *)(param_1 + 4);
      if (-1 < local_18 + -1) {
        local_8 = 0;
        do {
          if ((local_8 < *(int *)(param_2 + 4)) && (local_c < *(int *)(param_2 + 8))) {
            iVar2 = local_c * *(int *)(param_1 + 4) + local_8;
            uVar1 = FUN_00404878();
            *(undefined1 *)(*(int *)(param_1 + 0xc) + 2 + iVar2 * 4) = uVar1;
            uVar1 = FUN_00404878();
            *(undefined1 *)(*(int *)(param_1 + 0xc) + 1 + iVar2 * 4) = uVar1;
            uVar1 = FUN_00404878();
            *(undefined1 *)(*(int *)(param_1 + 0xc) + iVar2 * 4) = uVar1;
            uVar1 = FUN_00404878();
            *(undefined1 *)(*(int *)(param_1 + 0xc) + 3 + iVar2 * 4) = uVar1;
          }
          local_8 = local_8 + 1;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      local_c = local_c + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}
