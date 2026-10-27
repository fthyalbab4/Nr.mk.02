// rea decompile_all
// name: FUN_005af71c
// address: 0x5af71c
// body: available
// range: 0x5af71c-0x5af7b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005af71c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_14;

  uVar1 = FUN_005a562c(0xff,0xff,0xff,0x80);
  iVar2 = FUN_00701c94(&DAT_00700d94,1,*(undefined4 *)(param_1 + 4),uVar1,
                       *(undefined4 *)(param_1 + 8));
  uVar1 = FUN_005a562c(0,0,0,0x80);
  local_14 = *(int *)(param_1 + 8);
  if (-1 < local_14 + -1) {
    iVar5 = 0;
    do {
      iVar4 = *(int *)(param_1 + 4);
      if (-1 < iVar4 + -1) {
        iVar3 = 0;
        do {
          if (*(char *)(*(int *)(*(int *)(param_1 + 0xc) + iVar3 * 4) + iVar5) != '\0') {
            *(undefined4 *)(*(int *)(iVar2 + 0xc) + (*(int *)(param_1 + 4) * iVar5 + iVar3) * 4) =
                 uVar1;
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar5 = iVar5 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return iVar2;
}
