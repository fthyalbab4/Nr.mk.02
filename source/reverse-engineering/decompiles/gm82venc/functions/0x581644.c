// rea decompile_all
// name: FUN_00581644
// address: 0x581644
// body: available
// range: 0x581644-0x5816eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00581644(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;

  uVar2 = 0;
  FUN_00581600(param_1);
  iVar3 = FUN_0050bbe0(param_2);
  if (iVar3 == 500) {
    uVar4 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    FUN_00409dfc(param_1 + 4,&DAT_005811e4,1,uVar4);
    FUN_00409dfc(param_1 + 8,&DAT_0058121c,1,*(undefined4 *)(param_1 + 0xc));
    iVar3 = *(int *)(param_1 + 0xc);
    if (-1 < iVar3 + -1) {
      iVar5 = 0;
      do {
        uVar4 = FUN_0050bbe0(param_2);
        iVar1 = *(int *)(param_1 + 8);
        *(undefined4 *)(iVar1 + iVar5 * 4) = uVar4;
        uVar4 = FUN_0060fdd4(&DAT_0060fbe0,CONCAT31((int3)((uint)iVar1 >> 8),1));
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar5 * 4) = uVar4;
        FUN_0060fedc(*(undefined4 *)(*(int *)(param_1 + 4) + iVar5 * 4),param_2);
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar2 = 1;
  }
  return uVar2;
}
