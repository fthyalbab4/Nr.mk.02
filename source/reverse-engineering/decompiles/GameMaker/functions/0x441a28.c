// rea decompile_all
// name: FUN_00441a28
// address: 0x441a28
// body: available
// range: 0x441a28-0x441a9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00441a28(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  iVar1 = FUN_00449834(param_1);
  if (-1 < iVar1 + -1) {
    iVar4 = 0;
    do {
      iVar2 = FUN_00449808(param_1,iVar4);
      if ((*(byte *)(iVar2 + 0x24) & 4) != 0) {
        iVar2 = FUN_00409a18(*(undefined4 *)(param_4 + -4));
        FUN_00409be0(param_4 + -4,&DAT_004419c0,1,iVar2 + 1);
        uVar3 = FUN_00449808(param_1,iVar4);
        iVar2 = FUN_00409a18(*(undefined4 *)(param_4 + -4));
        *(undefined4 *)(*(int *)(param_4 + -4) + -4 + iVar2 * 4) = uVar3;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}
