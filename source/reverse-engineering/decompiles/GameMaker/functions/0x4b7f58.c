// rea decompile_all
// name: FUN_004b7f58
// address: 0x4b7f58
// body: available
// range: 0x4b7f58-0x4b7fe0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004b7f58(int param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  HWND hWnd;
  LRESULT LVar4;

  iVar3 = FUN_004b81c8(*(undefined4 *)(param_1 + 4));
  uVar1 = *(ushort *)(iVar3 + 0x1c);
  if (*(int *)(param_1 + 0x24) == 0) {
    cVar2 = FUN_004f7a54(iVar3);
    if ((cVar2 == '\0') && ((uVar1 & 7) != 0)) goto LAB_004b7f94;
  }
  else {
LAB_004b7f94:
    if (*(char *)(param_1 + 0xd) != '\0') goto LAB_004b7fda;
    cVar2 = FUN_004f7a54(iVar3);
    if (((cVar2 == '\0') || (*(char *)(iVar3 + 0x27d) != '\x03')) ||
       (*(int *)(param_1 + 0x24) == -1)) goto LAB_004b7fda;
    cVar2 = FUN_004bbe0c(iVar3);
    if (cVar2 == '\0') goto LAB_004b7fda;
  }
  hWnd = (HWND)FUN_004f76a8(iVar3);
  LVar4 = SendMessageW(hWnd,0x101d,*(WPARAM *)(param_1 + 0x28),0);
  *(LRESULT *)(param_1 + 0x24) = LVar4;
LAB_004b7fda:
  return *(undefined4 *)(param_1 + 0x24);
}
