// rea decompile_all
// name: FUN_005e03b8
// address: 0x5e03b8
// body: available
// range: 0x5e03b8-0x5e0427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005e03b8(undefined4 param_1,int param_2,int param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;

  if (-1 < param_3) {
    iVar3 = param_3 + 1;
    iVar4 = 0;
    do {
      if (param_4 == '\0') {
        if ((iVar4 < 0) || (param_3 < iVar4)) {
          thunk_FUN_00404478();
        }
        cVar1 = FUN_005e3940(param_1,*(undefined4 *)(param_2 + iVar4 * 4));
        if (cVar1 != '\0') {
          return iVar4;
        }
      }
      else {
        uVar5 = iVar4 == 0;
        if ((iVar4 < 0) || (uVar5 = iVar4 == param_3, uVar2 = param_1, param_3 < iVar4)) {
          uVar2 = thunk_FUN_00404478(param_1);
        }
        FUN_00408640(uVar2,*(undefined4 *)(param_2 + iVar4 * 4));
        if ((bool)uVar5) {
          return iVar4;
        }
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return -1;
}
