// rea decompile_all
// name: FUN_005f7428
// address: 0x5f7428
// body: available
// range: 0x5f7428-0x5f74bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f7428(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  int local_10;

  local_10 = *(int *)(*(int *)(PTR_DAT_00688df4 + 0x18) + param_1 * 4);
  if (-1 < local_10 + -1) {
    local_14 = 0;
    do {
      uVar1 = *(undefined4 *)
               (*(int *)(*(int *)(PTR_DAT_00688e68 + 0x18) + param_1 * 4) + local_14 * 4);
      iVar2 = FUN_0060aa04(*(undefined4 *)PTR_DAT_0068939c,uVar1);
      if (-1 < iVar2 + -1) {
        iVar4 = 0;
        do {
          iVar3 = FUN_0060aa2c(*(undefined4 *)PTR_DAT_0068939c,uVar1,iVar4);
          if (*(char *)(iVar3 + 0x108) == '\0') {
            FUN_0058a738(iVar3,iVar3,6,param_1);
          }
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_14 = local_14 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}
