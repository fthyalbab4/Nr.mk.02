// rea decompile_all
// name: FUN_004d06fc
// address: 0x4d06fc
// body: available
// range: 0x4d06fc-0x4d0761 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d06fc(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  FUN_00409be0(param_2,&DAT_004700d4,1,*(undefined4 *)(*(int *)(param_1 + 8) + 8));
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 8);
  if (-1 < iVar3 + -1) {
    iVar2 = 0;
    do {
      FUN_004d0764(param_1,iVar2);
      uVar1 = FUN_004d0680();
      *(undefined4 *)(*param_2 + iVar2 * 8) = uVar1;
      FUN_004d0764(param_1,iVar2);
      uVar1 = FUN_004d06cc();
      *(undefined4 *)(*param_2 + 4 + iVar2 * 8) = uVar1;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}
