// rea decompile_all
// name: FUN_006576fc
// address: 0x6576fc
// body: available
// range: 0x6576fc-0x6577b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006576fc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  byte bVar7;

  bVar7 = 0;
  iVar2 = 0;
  iVar5 = *(int *)(param_1 + 0x2f0);
  if (-1 < iVar5 + -1) {
    iVar3 = 0;
    do {
      iVar1 = FUN_0062cd94(*(undefined4 *)(*(int *)(param_1 + 0x2f4) + 8 + iVar3 * 0x18));
      if (iVar1 != 0) {
        FUN_00409084(*(int *)(param_1 + 0x2f4) + iVar2 * 0x18,
                     *(int *)(param_1 + 0x2f4) + iVar3 * 0x18,&DAT_00656108);
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)(param_1 + 0x2f0) = iVar2;
  iVar2 = 0;
  iVar5 = *(int *)(param_1 + 0x2f8);
  if (-1 < iVar5 + -1) {
    iVar3 = 0;
    do {
      iVar1 = FUN_0064e048(*(undefined4 *)(*(int *)(param_1 + 0x2fc) + 8 + iVar3 * 0x28));
      if (iVar1 != 0) {
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x2fc) + iVar3 * 0x28);
        puVar6 = (undefined4 *)(*(int *)(param_1 + 0x2fc) + iVar2 * 0x28);
        for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)(param_1 + 0x2f8) = iVar2;
  return;
}
