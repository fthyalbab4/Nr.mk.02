// rea decompile_all
// name: FUN_00535b40
// address: 0x535b40
// body: available
// range: 0x535b40-0x535bfd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00535b40(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;

  bVar6 = 0;
  if ((-1 < param_2) && (param_2 <= *(int *)(param_1 + 8))) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    iVar1 = FUN_00409a18(*(undefined4 *)(param_1 + 4));
    if (iVar1 < *(int *)(param_1 + 8)) {
      FUN_00409be0(param_1 + 4,&DAT_00534870,1,*(int *)(param_1 + 8) + 5);
    }
    iVar1 = *(int *)(param_1 + 8) + -1;
    iVar3 = (param_2 + 1) - iVar1;
    if (iVar3 == 0 || param_2 + 1 < iVar1) {
      iVar3 = iVar3 + -1;
      do {
        puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + -0x18 + iVar1 * 0x18);
        puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + iVar1 * 0x18);
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        iVar1 = iVar1 + -1;
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0);
    }
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + param_2 * 0x18);
    *puVar4 = param_8;
    puVar4[1] = param_9;
    puVar4[2] = param_6;
    puVar4[3] = param_7;
    puVar4[4] = param_4;
    puVar4[5] = param_5;
    FUN_0053578c(param_1);
  }
  return;
}
