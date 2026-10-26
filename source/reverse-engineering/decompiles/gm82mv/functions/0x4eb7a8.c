// rea decompile_all
// name: FUN_004eb7a8
// address: 0x4eb7a8
// body: available
// range: 0x4eb7a8-0x4eb826 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eb7a8(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  if (*(char *)(param_1 + 0xac) == '\0') {
    if (*(HWND *)(param_1 + 0x170) != (HWND)0x0) {
      SendMessageW(*(HWND *)(param_1 + 0x170),0xb020,1,(LPARAM)&param_4);
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0xb0) + 8);
    if (-1 < iVar3 + -1) {
      iVar2 = 0;
      do {
        piVar1 = (int *)FUN_00438ec4(*(undefined4 *)(param_1 + 0xb0),iVar2);
        if ((*piVar1 == param_4) && (param_5 == piVar1[1])) {
          FUN_00404340(piVar1,8);
          FUN_00438d5c(*(undefined4 *)(param_1 + 0xb0),iVar2);
          return;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}
