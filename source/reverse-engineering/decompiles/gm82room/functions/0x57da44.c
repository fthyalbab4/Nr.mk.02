// rea decompile_all
// name: FUN_0057da44
// address: 0x57da44
// body: available
// range: 0x57da44-0x57db50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057da44(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_14;
  undefined4 local_10;

  local_28 = 0x800;
  local_2c = 0x800;
  local_10 = 0x800;
  local_14 = 0x800;
  bVar1 = false;
  while( true ) {
    iVar3 = 0;
    local_30 = 0;
    local_20 = 0;
    local_34 = *(int *)(param_2 + 8);
    if (-1 < local_34 + -1) {
      local_24 = 0;
      do {
        iVar2 = FUN_0057fc84(param_2,local_24);
        if ((int)local_28 <= *(int *)(param_1 + 0x824 + iVar2 * 4) + iVar3) {
          iVar3 = 0;
          local_30 = local_30 + local_20 + param_4;
          local_20 = 0;
        }
        if (local_20 < *(int *)(param_1 + 0xc24 + iVar2 * 4)) {
          local_20 = *(int *)(param_1 + 0xc24 + iVar2 * 4);
        }
        iVar3 = iVar3 + *(int *)(param_1 + 0x824 + iVar2 * 4) + param_3;
        local_24 = local_24 + 1;
        local_34 = local_34 + -1;
      } while (local_34 != 0);
    }
    if ((int)local_2c < local_30 + local_20) break;
    local_10 = local_28;
    local_14 = local_2c;
    bVar1 = !bVar1;
    if (bVar1) {
      local_2c = local_2c >> 1;
    }
    else {
      local_28 = local_28 >> 1;
    }
  }
  *(uint *)(param_1 + 0x1824) = local_10;
  *(uint *)(param_1 + 0x1828) = local_14;
  return;
}
