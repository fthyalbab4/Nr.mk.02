// rea decompile_all
// name: FUN_004dbd34
// address: 0x4dbd34
// body: available
// range: 0x4dbd34-0x4dbda9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004dbd34(int *param_1,byte param_2)

{
  int iVar1;
  uint uIDEnableItem;
  HMENU hMenu;
  UINT uEnable;

  if (param_2 == *(byte *)((int)param_1 + 0x39)) {
    return;
  }
  *(byte *)((int)param_1 + 0x39) = param_2;
  if (((*(int *)PTR_DAT_00782944 != 2) || (iVar1 = FUN_004dbe08(param_1), iVar1 == 0)) &&
     ((param_1[0x19] == 0 || (*(int *)(param_1[0x19] + 0x6c) == 0)))) {
    if ((param_1[0x19] != 0) && ((*(byte *)(param_1 + 7) & 2) == 0)) {
      uEnable = *(UINT *)(&DAT_007789c0 + (uint)param_2 * 4);
      uIDEnableItem = (uint)*(ushort *)(param_1 + 0x14);
      hMenu = (HMENU)FUN_004d90b0(param_1[0x19]);
      EnableMenuItem(hMenu,uIDEnableItem,uEnable);
    }
    (**(code **)(*param_1 + 0x40))(param_1,0);
    return;
  }
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}
