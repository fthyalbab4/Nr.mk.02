// rea decompile_all
// name: FUN_0046319c
// address: 0x46319c
// body: available
// range: 0x46319c-0x46321f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046319c(int *param_1,short param_2,HANDLE param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 local_58 [20];
  int local_44;
  undefined4 local_40;

  if ((param_2 != 2) || (param_3 == (HANDLE)0x0)) {
    FUN_0045d0cc(PTR_PTR_007822dc);
  }
  FUN_00462ef0(param_1);
  FUN_00404f08(local_58,0x54,0);
  GetObjectW(param_3,0x54,local_58);
  if (local_44 == 0) {
    local_40 = 0;
  }
  FUN_00462308(param_1,param_3,param_4,local_58);
  *(undefined1 *)(param_1[10] + 0x71) = 0;
  iVar1 = (**(code **)(*param_1 + 0x28))();
  *(bool *)((int)param_1 + 0x22) = iVar1 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}
