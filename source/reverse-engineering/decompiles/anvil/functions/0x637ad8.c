// rea decompile_all
// name: FUN_00637ad8
// address: 0x637ad8
// body: available
// range: 0x637ad8-0x637bad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00637ad8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 local_24;

  local_28 = *(int *)(param_1 + 0x14);
  if (-1 < local_28 + -1) {
    iVar3 = 0;
    do {
      local_24 = *(int *)(param_1 + 0x18);
      if (-1 < local_24 + -1) {
        iVar2 = 0;
        do {
          if (*(int *)(*(int *)(param_1 + 0x1c) + (iVar3 * *(int *)(param_1 + 0x18) + iVar2) * 4) <
              0) {
            uVar1 = 0xff;
          }
          else {
            uVar1 = 0x8000;
          }
          FUN_00566bf0(uVar1,uVar1,uVar1,0,uVar1,
                       (double)((iVar2 + 1) * *(int *)(param_1 + 0x10) + *(int *)(param_1 + 8)),
                       (double)((iVar3 + 1) * *(int *)(param_1 + 0xc) + *(int *)(param_1 + 4)),
                       (double)(iVar2 * *(int *)(param_1 + 0x10) + *(int *)(param_1 + 8)),
                       (double)(iVar3 * *(int *)(param_1 + 0xc) + *(int *)(param_1 + 4)));
          iVar2 = iVar2 + 1;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
      }
      iVar3 = iVar3 + 1;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  return;
}
