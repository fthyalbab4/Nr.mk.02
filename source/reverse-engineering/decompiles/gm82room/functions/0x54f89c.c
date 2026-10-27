// rea decompile_all
// name: FUN_0054f89c
// address: 0x54f89c
// body: available
// range: 0x54f89c-0x54f8fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054f89c(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  uint uVar4;

  uVar3 = *(undefined4 *)(param_1 + 0x14);
  cVar1 = FUN_005513cc(uVar3);
  if (cVar1 != '\0') {
    iVar2 = FUN_00550148(uVar3,CONCAT22(extraout_var,5));
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      for (; *(int *)(iVar2 + 4) != 0; iVar2 = iVar2 + *(int *)(iVar2 + 4)) {
        uVar4 = *(int *)(iVar2 + 4) - 8U >> 1;
        uVar3 = FUN_0054f808(&DAT_00549200,1,iVar2,uVar4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + uVar4;
        FUN_00438d04(param_1,uVar3);
      }
    }
  }
  return;
}
