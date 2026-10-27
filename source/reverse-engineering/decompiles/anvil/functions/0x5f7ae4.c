// rea decompile_all
// name: FUN_005f7ae4
// address: 0x5f7ae4
// body: available
// range: 0x5f7ae4-0x5f7bb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f7ae4(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_1c;
  int local_14;

  iVar6 = 0;
  do {
    local_14 = *(int *)(*(int *)(PTR_DAT_00688df4 + 8) + iVar6 * 4);
    if (-1 < local_14 + -1) {
      local_1c = 0;
      do {
        uVar1 = *(undefined4 *)(*(int *)(*(int *)(PTR_DAT_00688e68 + 8) + iVar6 * 4) + local_1c * 4)
        ;
        iVar2 = FUN_0060aa04(*(undefined4 *)PTR_DAT_0068939c,uVar1);
        if (-1 < iVar2 + -1) {
          iVar5 = 0;
          do {
            iVar3 = FUN_0060aa2c(*(undefined4 *)PTR_DAT_0068939c,uVar1,iVar5);
            if (*(char *)(iVar3 + 0x108) == '\0') {
              iVar4 = FUN_0060d1b4(iVar3,iVar6);
              if (-1 < iVar4) {
                iVar4 = FUN_0060d1b4(iVar3,iVar6);
                FUN_0060d1cc(iVar3,iVar6,iVar4 + -1);
              }
              iVar4 = FUN_0060d1b4(iVar3,iVar6);
              if (iVar4 == 0) {
                FUN_0058a738(iVar3,iVar3,2,iVar6);
              }
            }
            iVar5 = iVar5 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        local_1c = local_1c + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0xc);
  return;
}
