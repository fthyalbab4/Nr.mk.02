// rea decompile_all
// name: FUN_0049f4e4
// address: 0x49f4e4
// body: available
// range: 0x49f4e4-0x49f57a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049f4e4(int param_1)

{
  int iVar1;

  SendMessageW(*(HWND *)(*(int *)(param_1 + 4) + 0x68),0x467,
               -(uint)((*(byte *)(*(int *)(param_1 + 4) + 0x5d) & 4) != 0),0);
  iVar1 = *(int *)(param_1 + 4);
  if ((*(byte *)(iVar1 + 0x5d) & 4) == 0) {
    SendMessageW(*(HWND *)(iVar1 + 0x68),0x469,0,
                 CONCAT22(*(undefined2 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0x10)));
    SendMessageW(*(HWND *)(*(int *)(param_1 + 4) + 0x68),0x46a,*(WPARAM *)(param_1 + 0x14),0);
  }
  else {
    SendMessageW(*(HWND *)(iVar1 + 0x68),0x46b,0xffffffff,*(LPARAM *)(param_1 + 8));
  }
  SendMessageW(*(HWND *)(*(int *)(param_1 + 4) + 0x68),0x468,
               *(WPARAM *)(&DAT_00681568 + (uint)*(byte *)(param_1 + 0x18) * 4),0);
  return;
}
