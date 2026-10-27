// rea decompile_all
// name: FUN_00439b64
// address: 0x439b64
// body: available
// range: 0x439b64-0x439bd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00439b64(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int local_10;

  local_10 = *(int *)(param_1 + 4) + 0x1f;
  if (local_10 < 0) {
    local_10 = *(int *)(param_1 + 4) + 0x3e;
  }
  local_10 = local_10 >> 5;
  if (-1 < local_10 + -1) {
    iVar2 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 8) + iVar2 * 4) != -1) {
        uVar1 = 0;
        do {
          bVar3 = (byte)uVar1 < 0x1f;
          if ((byte)uVar1 < 0x20) {
            bVar3 = (*(uint *)(*(int *)(param_1 + 8) + iVar2 * 4) >> (uVar1 & 0x1f) & 1) != 0;
          }
          if (!bVar3) {
            iVar2 = iVar2 * 0x20 + (uVar1 & 0x7f);
            if (iVar2 < *(int *)(param_1 + 4)) {
              return iVar2;
            }
            return *(int *)(param_1 + 4);
          }
          uVar1 = uVar1 + 1;
        } while ((char)uVar1 != ' ');
      }
      iVar2 = iVar2 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return *(int *)(param_1 + 4);
}
