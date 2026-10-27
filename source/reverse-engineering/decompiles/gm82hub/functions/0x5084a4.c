// rea decompile_all
// name: FUN_005084a4
// address: 0x5084a4
// body: available
// range: 0x5084a4-0x5085e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005084a4(uint param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,int *param_8,int *param_9)

{
  int iVar1;
  int iVar2;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  uint local_8;

  local_14 = 0;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = (**(code **)(param_4 + 0x20))(*(undefined4 *)(param_4 + 0x28),0x120,4);
  if (iVar1 == 0) {
    iVar2 = -4;
  }
  else {
    iVar2 = FUN_00507f10(local_10,local_8,0x101,iVar1,&local_14,param_5,param_9,param_7,
                         &DAT_006820c4,&DAT_00682048);
    if ((iVar2 == 0) && (*param_9 != 0)) {
      iVar2 = FUN_00507f10(local_8 * 4 + local_10,local_c,0,iVar1,&local_14,param_5,param_8,param_6,
                           &DAT_006821b8,&DAT_00682140);
      if ((iVar2 == 0) && ((*param_8 != 0 || (local_8 < 0x102)))) {
        (**(code **)(param_4 + 0x24))(*(undefined4 *)(param_4 + 0x28),iVar1);
        iVar2 = 0;
      }
      else {
        if (iVar2 == -3) {
          *(char **)(param_4 + 0x18) = s_oversubscribed_distance_tree_006833c6;
        }
        else if (iVar2 == -5) {
          *(char **)(param_4 + 0x18) = s_incomplete_distance_tree_006833e3;
          iVar2 = -3;
        }
        else if (iVar2 != -4) {
          *(char **)(param_4 + 0x18) = s_empty_distance_tree_with_lengths_006833fc;
          iVar2 = -3;
        }
        (**(code **)(param_4 + 0x24))(*(undefined4 *)(param_4 + 0x28),iVar1);
      }
    }
    else {
      if (iVar2 == -3) {
        *(char **)(param_4 + 0x18) = s_oversubscribed_literal_length_tr_00683384;
      }
      else if (iVar2 != -4) {
        *(char **)(param_4 + 0x18) = s_incomplete_literal_length_tree_006833a7;
        iVar2 = -3;
      }
      (**(code **)(param_4 + 0x24))(*(undefined4 *)(param_4 + 0x28),iVar1);
    }
  }
  return iVar2;
}
