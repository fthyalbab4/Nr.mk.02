// rea decompile_all
// name: FUN_00675394
// address: 0x675394
// body: available
// range: 0x675394-0x67547a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00675394(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 local_18 [8];
  int local_10;
  int local_c;
  int local_8;

  local_8 = param_3;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x1b4) == 0)) {
    cVar1 = FUN_00676810(param_1);
    if (cVar1 == '\0') {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_006767e4(param_1);
      iVar2 = *(int *)(*(int *)(iVar2 + 8) + 8);
    }
  }
  else {
    iVar2 = FUN_0043c914(*(undefined4 *)(param_2 + 0x1b4));
    if ((local_8 < *(int *)(param_2 + 0x40)) && (*(char *)(param_1 + 0x28f) == '\0')) {
      iVar2 = iVar2 + -1;
    }
    if ((param_4 < *(int *)(param_2 + 0x44)) && (*(char *)(param_1 + 0x28f) == '\x02')) {
      iVar2 = iVar2 + -1;
    }
    FUN_004edf30(param_2,local_18);
    if ((local_10 < local_8) && (*(char *)(param_1 + 0x28f) == '\0')) {
      iVar2 = iVar2 + 1;
    }
    FUN_004edf30(param_2,local_18);
    if ((local_c < param_4) && (*(char *)(param_1 + 0x28f) == '\x02')) {
      iVar2 = iVar2 + 1;
    }
    iVar3 = FUN_006767e4(param_1);
    if (*(int *)(*(int *)(iVar3 + 8) + 8) < iVar2) {
      iVar2 = FUN_006767e4(param_1);
      iVar2 = *(int *)(*(int *)(iVar2 + 8) + 8);
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  return iVar2;
}
