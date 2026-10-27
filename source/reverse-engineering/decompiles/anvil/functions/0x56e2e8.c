// rea decompile_all
// name: FUN_0056e2e8
// address: 0x56e2e8
// body: available
// range: 0x56e2e8-0x56e38a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056e2e8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_14;

  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 4);
    if (*(int *)(param_2 + 4) <= *(int *)(param_1 + 4)) {
      iVar2 = *(int *)(param_2 + 4);
    }
    local_14 = *(int *)(param_1 + 8);
    if (*(int *)(param_2 + 8) <= *(int *)(param_1 + 8)) {
      local_14 = *(int *)(param_2 + 8);
    }
    if (-1 < local_14 + -1) {
      iVar4 = 0;
      do {
        if (-1 < iVar2 + -1) {
          iVar3 = 0;
          iVar5 = iVar2;
          do {
            uVar1 = *(uint *)(*(int *)(param_2 + 0xc) + (*(int *)(param_2 + 4) * iVar4 + iVar3) * 4)
            ;
            *(char *)(*(int *)(param_1 + 0xc) + 3 + (*(int *)(param_1 + 4) * iVar4 + iVar3) * 4) =
                 (char)((ulonglong)((uVar1 >> 0x10 & 0xff) + (uVar1 >> 8 & 0xff) + (uVar1 & 0xff)) /
                       3);
            iVar3 = iVar3 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        iVar4 = iVar4 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  return;
}
