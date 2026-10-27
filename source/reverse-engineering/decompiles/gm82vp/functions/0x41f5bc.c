// rea decompile_all
// name: FUN_0041f5bc
// address: 0x41f5bc
// body: available
// range: 0x41f5bc-0x41f65a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041f5bc(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int local_10;
  undefined1 local_c;
  int local_8;

  local_8 = param_2;
  iVar1 = FUN_00409c34(param_2);
  if (iVar1 < param_4 + param_3) {
    local_c = 0;
    local_10 = param_3;
    FUN_0041bf50(&LAB_00411654,CONCAT31((int3)((uint)(param_4 + param_3) >> 8),1),PTR_LAB_00689324,0
                 ,&local_10);
    FUN_00406ab4();
  }
  if (param_3 < 0) {
    local_c = 0;
    local_10 = param_3;
    FUN_0041bf50(&LAB_00411654,1,PTR_LAB_00689324,0,&local_10);
    FUN_00406ab4();
  }
  FUN_00420fb4(param_1,*(int *)(param_1 + 8) + param_4);
  FUN_00404514(local_8 + param_3 * 2,*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) - param_4) * 2,
               param_4 * 2);
  return param_1;
}
