// rea decompile_all
// name: FUN_0055e694
// address: 0x55e694
// body: available
// range: 0x55e694-0x55e705 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055e694(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int *local_14;
  int local_8;

  iVar1 = *(int *)(param_1 + 0x38);
  uVar2 = *(uint *)(param_1 + 0x1c);
  while( true ) {
    param_4 = param_4 + -1;
    if (param_4 < 0) break;
    local_8 = 0;
    local_14 = param_3;
    if (0 < iVar1) {
      do {
        uVar5 = 0;
        iVar4 = *param_2;
        puVar3 = *(undefined1 **)(*local_14 + param_5 * 4);
        if (uVar2 != 0) {
          do {
            uVar5 = uVar5 + 1;
            *puVar3 = *(undefined1 *)(iVar4 + local_8);
            puVar3 = puVar3 + 1;
            iVar4 = iVar4 + iVar1;
          } while (uVar5 < uVar2);
        }
        local_8 = local_8 + 1;
        local_14 = local_14 + 1;
      } while (local_8 < iVar1);
    }
    param_2 = param_2 + 1;
    param_5 = param_5 + 1;
  }
  return;
}
