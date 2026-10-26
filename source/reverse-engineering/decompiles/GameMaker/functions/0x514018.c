// rea decompile_all
// name: FUN_00514018
// address: 0x514018
// body: available
// range: 0x514018-0x5140d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00514018(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  HWND pHVar3;
  uint code;
  uint code_00;
  BOOL fRedraw;

  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1c) & 2) == 0) {
    iVar2 = *(int *)(param_1 + 0x14);
    if ((param_2 <= iVar2) && (iVar2 = param_2, param_2 < 0)) {
      iVar2 = 0;
    }
    code = (uint)(*(char *)(param_1 + 0x18) != '\0');
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar2 != iVar1) {
      *(int *)(param_1 + 0xc) = iVar2;
      if (*(char *)(param_1 + 0x18) == '\0') {
        FUN_004f71c0(*(undefined4 *)(param_1 + 4),iVar1 - iVar2,0);
      }
      else {
        FUN_004f71c0(*(undefined4 *)(param_1 + 4),0,iVar1 - iVar2);
      }
      if ((((*(byte *)(*(int *)(param_1 + 4) + 0x1c) & 0x10) != 0) &&
          (iVar2 = FUN_00513780(*(int *)(param_1 + 4),0), iVar2 != 0)) &&
         (*(int *)(iVar2 + 700) != 0)) {
        (**(code **)(**(int **)(iVar2 + 700) + 0xc))();
      }
    }
    code_00 = code;
    pHVar3 = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 4));
    iVar2 = FlatSB_GetScrollPos(pHVar3,code_00);
    if (iVar2 != *(int *)(param_1 + 0xc)) {
      fRedraw = -1;
      iVar2 = *(int *)(param_1 + 0xc);
      pHVar3 = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 4));
      FlatSB_SetScrollPos(pHVar3,code,iVar2,fRedraw);
    }
  }
  else {
    *(int *)(param_1 + 0xc) = param_2;
  }
  return;
}
