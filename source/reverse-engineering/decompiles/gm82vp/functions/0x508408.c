// rea decompile_all
// name: FUN_00508408
// address: 0x508408
// body: available
// range: 0x508408-0x5084a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00508408(undefined4 param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;

  local_10 = 0;
  local_c = param_3;
  local_8 = param_2;
  iVar1 = (**(code **)(param_4 + 0x20))(*(undefined4 *)(param_4 + 0x28),0x13,4);
  if (iVar1 == 0) {
    iVar2 = -4;
  }
  else {
    iVar2 = FUN_00507f10(param_1,0x13,0x13,iVar1,&local_10,param_5,local_8,local_c,0,0);
    if (iVar2 == -3) {
      *(char **)(param_4 + 0x18) = s_oversubscribed_dynamic_bit_lengt_00683338;
    }
    else if ((iVar2 == -5) || (*local_8 == 0)) {
      *(char **)(param_4 + 0x18) = s_incomplete_dynamic_bit_lengths_t_00683360;
      iVar2 = -3;
    }
    (**(code **)(param_4 + 0x24))(*(undefined4 *)(param_4 + 0x28),iVar1);
  }
  return iVar2;
}
