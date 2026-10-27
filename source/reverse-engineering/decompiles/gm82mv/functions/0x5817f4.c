// rea decompile_all
// name: FUN_005817f4
// address: 0x5817f4
// body: available
// range: 0x5817f4-0x5818a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005817f4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  iVar4 = *(int *)(param_1 + 0xc);
  iVar5 = iVar4;
  if (-1 < iVar4 + -1) {
    iVar1 = 0;
    iVar2 = iVar4;
    do {
      iVar5 = iVar1;
      if (param_2 <= *(int *)(*(int *)(param_1 + 8) + iVar1 * 4)) break;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
      iVar5 = iVar4;
    } while (iVar2 != 0);
  }
  if ((*(int *)(param_1 + 0xc) <= iVar5) || (param_2 != *(int *)(*(int *)(param_1 + 8) + iVar5 * 4))
     ) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    FUN_00409dfc(param_1 + 4,&DAT_005811e4,1,*(undefined4 *)(param_1 + 0xc));
    FUN_00409dfc(param_1 + 8,&DAT_0058121c,1,*(undefined4 *)(param_1 + 0xc));
    iVar2 = *(int *)(param_1 + 0xc) + -1;
    iVar4 = (iVar5 + 1) - iVar2;
    if (iVar4 == 0 || iVar5 + 1 < iVar2) {
      iVar1 = iVar4 + -1;
      do {
        *(undefined4 *)(*(int *)(param_1 + 8) + iVar2 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 8) + -4 + iVar2 * 4);
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 4) + -4 + iVar2 * 4);
        iVar2 = iVar2 + -1;
        iVar1 = iVar1 + 1;
        iVar4 = 0;
      } while (iVar1 != 0);
    }
    *(int *)(*(int *)(param_1 + 8) + iVar5 * 4) = param_2;
    uVar3 = FUN_0060fdd4(&DAT_0060fbe0,CONCAT31((int3)((uint)iVar4 >> 8),1));
    *(undefined4 *)(*(int *)(param_1 + 4) + iVar5 * 4) = uVar3;
  }
  return;
}
