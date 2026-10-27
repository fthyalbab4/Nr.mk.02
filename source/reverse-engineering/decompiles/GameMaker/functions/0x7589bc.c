// rea decompile_all
// name: FUN_007589bc
// address: 0x7589bc
// body: available
// range: 0x7589bc-0x758a26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_007589bc(undefined4 param_1,undefined4 param_2,char param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar4 = 0;
  iVar2 = FUN_0073cdfc(param_2);
  if (iVar2 != 0) {
    iVar3 = FUN_0074fab4(iVar2);
    if (iVar3 != 0) {
      iVar4 = FUN_00405a4c(&DAT_007554c4,1);
      *(int *)(iVar4 + 0xc) = iVar2;
      *(int *)(iVar4 + 4) = iVar3;
      *(int *)(iVar4 + 8) = iVar3 + iVar2 + -1;
      if (param_3 == '\0') {
        uVar1 = FUN_0073ce28(iVar2);
        *(undefined1 *)(iVar4 + 0x10) = uVar1;
      }
      else {
        *(undefined1 *)(iVar4 + 0x10) = 1;
      }
    }
  }
  if (iVar4 != 0) {
    FUN_0043ae88(param_1,iVar4);
  }
  return iVar4;
}
