// rea decompile_all
// name: FUN_006912b0
// address: 0x6912b0
// body: available
// range: 0x6912b0-0x691396 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006912b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  uVar1 = FUN_00404878();
  *(undefined4 *)(param_1 + 0x168c) = uVar1;
  iVar5 = *(int *)(param_1 + 0x1698);
  iVar2 = (*(int *)(*(int *)(param_1 + 0x61c) + 0x330) - *(int *)(*(int *)(param_1 + 0x61c) + 0x328)
          ) + iVar5 + -1;
  uVar1 = FUN_00404878();
  *(undefined4 *)(param_1 + 0x1690) = uVar1;
  iVar3 = FUN_00409a18(*(undefined4 *)(param_1 + 0x16a8));
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x16a8) + iVar4 * 4) != 0) {
        FUN_00405a7c();
        *(undefined4 *)(*(int *)(param_1 + 0x16a8) + iVar4 * 4) = 0;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00409ce0(param_1 + 0x16a8,&DAT_00682d60);
  FUN_00409be0(param_1 + 0x16a8,&DAT_00682d60,1,
               *(int *)(param_1 + 0x168c) * *(int *)(param_1 + 0x1690),iVar2,iVar5);
  return;
}
