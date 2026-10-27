// rea decompile_all
// name: FUN_005f74bc
// address: 0x5f74bc
// body: available
// range: 0x5f74bc-0x5f7584 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f74bc(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_18;
  int local_14;

  local_14 = *(int *)(*(int *)(PTR_DAT_00688df4 + 0x18) + param_1 * 4);
  if (-1 < local_14 + -1) {
    local_18 = 0;
    do {
      uVar1 = *(undefined4 *)
               (*(int *)(*(int *)(PTR_DAT_00688e68 + 0x18) + param_1 * 4) + local_18 * 4);
      iVar3 = FUN_0060aa04(*(undefined4 *)PTR_DAT_0068939c,uVar1);
      if (-1 < iVar3 + -1) {
        iVar5 = 0;
        do {
          iVar4 = FUN_0060aa2c(*(undefined4 *)PTR_DAT_0068939c,uVar1,iVar5);
          if (*(char *)(iVar4 + 0x108) == '\0') {
            cVar2 = FUN_0060e5a4(iVar4,1);
            if (cVar2 != '\0') {
              FUN_0058a738(iVar4,iVar4,6);
            }
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_18 = local_18 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}
