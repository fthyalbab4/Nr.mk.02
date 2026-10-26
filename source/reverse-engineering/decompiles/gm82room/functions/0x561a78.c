// rea decompile_all
// name: FUN_00561a78
// address: 0x561a78
// body: available
// range: 0x561a78-0x561afb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00561a78(DWORD param_1,_union_663 param_2,DWORD param_3,DWORD param_4)

{
  int iVar1;
  undefined1 local_e0 [68];
  undefined1 local_9c;
  _union_660 local_98 [6];
  DWORD local_38;
  DWORD local_34;
  _union_663 local_30;
  DWORD local_28;

  FUN_00404f38(local_e0,0xdc);
  local_9c = 0xdc;
  local_98[0]._0_4_ = 0;
  if (0 < (int)param_1) {
    local_98[0]._0_4_ = 0x80000;
    local_34 = param_1;
  }
  if (0 < (int)param_2.dmDisplayFlags) {
    local_98[0]._0_4_ = local_98[0]._0_4_ | 0x100000;
    local_30 = param_2;
  }
  if (0 < (int)param_4) {
    local_98[0]._0_4_ = local_98[0]._0_4_ | 0x40000;
    local_38 = param_4;
  }
  if (0 < (int)param_3) {
    local_98[0]._0_4_ = local_98[0]._0_4_ | 0x400000;
    local_28 = param_3;
  }
  iVar1 = 0;
  if (local_98[0]._0_4_ != 0) {
    PTR_FUN_006869d4._0_1_ = 1;
    iVar1 = ChangeDisplaySettingsW((DEVMODEW *)&stack0xffffff1c,0);
  }
  return iVar1 == 0;
}
