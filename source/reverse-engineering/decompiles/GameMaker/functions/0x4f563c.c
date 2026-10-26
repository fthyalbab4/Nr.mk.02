// rea decompile_all
// name: FUN_004f563c
// address: 0x4f563c
// body: available
// range: 0x4f563c-0x4f56f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f563c(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  BOOL BVar5;

  iVar1 = *(int *)(param_2 + 8);
  if ((((*(char *)(param_1 + 0x1e9) == '\0') || ((*(byte *)(param_1 + 0x50) & 0x10) == 0)) ||
      (*(int *)(param_1 + 0x34) == 0)) || ((*(byte *)(iVar1 + 0x18) & 8) != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((*(byte *)(iVar1 + 0x18) & 2) == 0) {
    BVar5 = IsWindowVisible(*(HWND *)(param_1 + 600));
    if (BVar5 == 0) goto LAB_004f567f;
    bVar3 = true;
  }
  else {
LAB_004f567f:
    bVar3 = false;
  }
  if ((*(byte *)(iVar1 + 0x18) & 1) == 0) {
    BVar5 = IsWindowVisible(*(HWND *)(param_1 + 600));
    if (BVar5 != 0) {
      bVar4 = true;
      goto LAB_004f56a4;
    }
  }
  bVar4 = false;
LAB_004f56a4:
  if ((bVar2) && (bVar3 || bVar4)) {
    FUN_004f75ac(param_1);
  }
  if ((*(byte *)(param_1 + 0x55) & 2) == 0) {
    FUN_004f7a60(param_1);
  }
  FUN_004f0a8c(param_1,param_2);
  if ((bVar2) && ((bVar3 || bVar4 || ((*(byte *)(iVar1 + 0x18) & 0xc0) != 0)))) {
    FUN_004f75ac(param_1);
  }
  return;
}
