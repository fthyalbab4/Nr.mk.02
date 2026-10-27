// rea decompile_all
// name: FUN_004a602c
// address: 0x4a602c
// body: available
// range: 0x4a602c-0x4a60ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a602c(int *param_1)

{
  char cVar1;
  HMENU pHVar2;
  int iVar3;
  UINT UVar4;
  UINT uPosition;
  bool bVar5;
  UINT uFlags;

  if ((*(byte *)(param_1 + 7) & 8) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 7) & 2) != 0) {
    *(undefined1 *)(param_1 + 0x1d) = 1;
    return;
  }
  if (param_1[0x1b] != 0) {
    FUN_004a602c();
    return;
  }
  pHVar2 = (HMENU)FUN_004a6160(param_1);
  iVar3 = GetMenuItemCount(pHVar2);
  bVar5 = iVar3 == 0;
  for (; 0 < iVar3; iVar3 = iVar3 + -1) {
    uFlags = 0x400;
    uPosition = iVar3 - 1;
    UVar4 = uPosition;
    pHVar2 = (HMENU)FUN_004a6160(param_1);
    UVar4 = GetMenuState(pHVar2,UVar4,uFlags);
    if ((UVar4 & 4) == 0) {
      UVar4 = 0x400;
      pHVar2 = (HMENU)FUN_004a6160(param_1);
      RemoveMenu(pHVar2,uPosition,UVar4);
      bVar5 = true;
    }
  }
  if (!bVar5) {
    return;
  }
  if ((param_1[0x19] == 0) && (cVar1 = FUN_004061f8(param_1[0x1c],&PTR_FUN_004a445c), cVar1 != '\0')
     ) {
    pHVar2 = (HMENU)FUN_004a6160(param_1);
    iVar3 = GetMenuItemCount(pHVar2);
    if (iVar3 == 0) {
      DestroyMenu((HMENU)param_1[0x2b]);
      param_1[0x2b] = 0;
      goto LAB_004a60f2;
    }
  }
  FUN_004a5eec(param_1);
LAB_004a60f2:
  (**(code **)(*param_1 + 0x40))(param_1,0);
  return;
}
