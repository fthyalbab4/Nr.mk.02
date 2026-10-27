// rea decompile_all
// name: FUN_005ae1dc
// address: 0x5ae1dc
// body: available
// range: 0x5ae1dc-0x5ae28e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005ae1dc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar5 = -1;
  iVar3 = *(int *)(param_1 + 0xc);
  if (-1 < iVar3 + -1) {
    iVar1 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 8) + iVar1 * 4) < param_2) {
        iVar5 = iVar1;
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar5 = iVar5 + 1;
  if ((*(int *)(param_1 + 0xc) <= iVar5) || (param_2 != *(int *)(*(int *)(param_1 + 8) + iVar5 * 4))
     ) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    FUN_00409be0(param_1 + 4,&DAT_005ad8c8,1,*(undefined4 *)(param_1 + 0xc));
    FUN_00409be0(param_1 + 8,&DAT_005ad900,1,*(undefined4 *)(param_1 + 0xc));
    iVar1 = *(int *)(param_1 + 0xc) + -2;
    iVar3 = iVar5 - iVar1;
    if (iVar3 == 0 || iVar5 < iVar1) {
      iVar4 = iVar3 + -1;
      do {
        *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar1 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 4) + iVar1 * 4);
        *(undefined4 *)(*(int *)(param_1 + 8) + 4 + iVar1 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 8) + iVar1 * 4);
        iVar1 = iVar1 + -1;
        iVar4 = iVar4 + 1;
        iVar3 = 0;
      } while (iVar4 != 0);
    }
    uVar2 = FUN_005a5048(&DAT_005a4c6c,CONCAT31((int3)((uint)iVar3 >> 8),1));
    *(undefined4 *)(*(int *)(param_1 + 4) + iVar5 * 4) = uVar2;
    *(int *)(*(int *)(param_1 + 8) + iVar5 * 4) = param_2;
  }
  return iVar5;
}
