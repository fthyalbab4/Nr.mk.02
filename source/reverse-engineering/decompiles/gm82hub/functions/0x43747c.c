// rea decompile_all
// name: FUN_0043747c
// address: 0x43747c
// body: available
// range: 0x43747c-0x4374da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0043747c(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar3 = 0;
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 8);
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    do {
      iVar2 = FUN_00438ec4(*(undefined4 *)(param_1 + 0xc),iVar5);
      cVar1 = thunk_FUN_0040629c(param_2,iVar2);
      if (cVar1 != '\0') {
        if (iVar3 != 0) {
          cVar1 = thunk_FUN_0040629c(iVar2,iVar3);
          if (cVar1 == '\0') goto LAB_004374ce;
        }
        iVar3 = iVar2;
      }
LAB_004374ce:
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar3;
}
