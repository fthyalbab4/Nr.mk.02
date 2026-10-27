// rea decompile_all
// name: FUN_0045cfe0
// address: 0x45cfe0
// body: available
// range: 0x45cfe0-0x45d051 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045cfe0(int param_1)

{
  int iVar1;
  HGDIOBJ pvVar2;
  COLORREF color;
  uint uVar3;

  pvVar2 = (HGDIOBJ)FUN_0045bc84(*(undefined4 *)(param_1 + 0x48));
  UnrealizeObject(pvVar2);
  pvVar2 = (HGDIOBJ)FUN_0045bc84(*(undefined4 *)(param_1 + 0x48));
  SelectObject(*(HDC *)(param_1 + 0x38),pvVar2);
  iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0x10);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    color = FUN_0045aa34(*(undefined4 *)(iVar1 + 0x14));
    SetBkColor(*(HDC *)(param_1 + 0x38),color);
    SetBkMode(*(HDC *)(param_1 + 0x38),2);
    return;
  }
  uVar3 = FUN_0045aa34(*(undefined4 *)(iVar1 + 0x14));
  SetBkColor(*(HDC *)(param_1 + 0x38),~uVar3);
  SetBkMode(*(HDC *)(param_1 + 0x38),1);
  return;
}
