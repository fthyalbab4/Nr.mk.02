// rea decompile_all
// name: FUN_00564708
// address: 0x564708
// body: available
// range: 0x564708-0x56477b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00564708(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  if (param_2 < 0) {
    param_2 = 0;
  }
  if ((param_2 < *(int *)(param_1 + 0x1c)) &&
     (iVar2 = *(int *)(param_1 + 0x1c) + -1, param_2 <= iVar2)) {
    iVar3 = (iVar2 - param_2) + 1;
    iVar2 = param_2;
    do {
      FUN_00405a7c(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00409be0(param_1 + 0x18,&DAT_0056323c,1,param_2);
  iVar2 = *(int *)(param_1 + 0x1c);
  if ((iVar2 < param_2) && (iVar2 <= param_2 + -1)) {
    iVar3 = ((param_2 + -1) - iVar2) + 1;
    do {
      uVar1 = FUN_00564418(&DAT_00562b2c,1);
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4) = uVar1;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(int *)(param_1 + 0x1c) = param_2;
  return;
}
