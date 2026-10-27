// rea decompile_all
// name: FUN_005a2680
// address: 0x5a2680
// body: available
// range: 0x5a2680-0x5a270a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005a2680(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_10;

  local_10 = 0;
  iVar2 = 0;
  do {
    if (*(char *)(param_1 + 0x18) == '\0') {
      if (*(int *)(param_1 + 0x1c) == 0) {
        return local_10;
      }
      *(undefined1 *)(param_1 + 0x1a) = **(undefined1 **)(param_1 + 0x24);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
      *(undefined1 *)(param_1 + 0x19) = 0x80;
      *(undefined1 *)(param_1 + 0x18) = 8;
    }
    uVar3 = (uint)((*(byte *)(param_1 + 0x1a) & *(byte *)(param_1 + 0x19)) != 0);
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + iVar2 * 0xc + uVar3 * 4);
    if (iVar1 == 0) {
      local_10 = local_10 + *(int *)(*(int *)(param_1 + 0xc) + 8 + iVar2 * 0xc);
      if (*(int *)(*(int *)(param_1 + 0xc) + 8 + iVar2 * 0xc) < 0x40) {
        return local_10;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + uVar3 * 4);
    }
    *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) >> 1;
    iVar2 = iVar1;
    if (*(char *)(param_1 + 0x18) != '\0') {
      *(char *)(param_1 + 0x18) = *(char *)(param_1 + 0x18) + -1;
    }
  } while( true );
}
