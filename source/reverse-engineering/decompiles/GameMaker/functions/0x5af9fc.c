// rea decompile_all
// name: FUN_005af9fc
// address: 0x5af9fc
// body: available
// range: 0x5af9fc-0x5afa80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005af9fc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  int local_10;

  if (param_1 != 0) {
    iVar2 = FUN_00701cf4(&DAT_00700d94,1,param_1);
    local_10 = *(int *)(param_1 + 8);
    if (-1 < local_10 + -1) {
      local_14 = 0;
      do {
        iVar4 = *(int *)(param_1 + 4);
        if (-1 < iVar4 + -1) {
          iVar3 = 0;
          do {
            iVar1 = *(int *)(param_1 + 4);
            *(undefined4 *)(*(int *)(param_1 + 0xc) + (local_14 * iVar1 + iVar3) * 4) =
                 *(undefined4 *)
                  (*(int *)(iVar2 + 0xc) + -4 +
                  ((((*(int *)(param_1 + 8) - local_14) + -1) * iVar1 + iVar1) - iVar3) * 4);
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        local_14 = local_14 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    FUN_00405a7c(iVar2);
  }
  return;
}
