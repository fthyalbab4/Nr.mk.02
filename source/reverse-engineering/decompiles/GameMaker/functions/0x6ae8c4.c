// rea decompile_all
// name: FUN_006ae8c4
// address: 0x6ae8c4
// body: available
// range: 0x6ae8c4-0x6aeaca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ae8f4 (push 0x6aeacb followed by fs-segment stack chaining); handler 0x6aeacb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ae8c4(int param_1,undefined4 *param_2,undefined4 param_3,int *param_4,int *param_5,
                 int *param_6)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 extraout_var;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 *local_c;
  int local_8;

  puStack_48 = &stack0xfffffffc;
  local_38 = 0;
  local_30 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_8 = 0;
  puStack_4c = &LAB_006aeacb;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  local_10 = param_3;
  local_c = param_2;
  (**(code **)(*(int *)*param_2 + 0x44))();
  *param_6 = 0;
  *param_5 = 0;
  *param_4 = 0;
  iVar2 = (**(code **)(*DAT_00790014 + 0x14))();
  if (param_1 < iVar2) {
    iVar2 = 1;
    local_14 = 0;
    FUN_00407f0c(&local_8,0);
    while( true ) {
      (**(code **)(*DAT_00790014 + 0xc))(DAT_00790014,param_1,&local_38);
      iVar3 = FUN_00408238(local_38);
      if (iVar3 < iVar2) break;
      (**(code **)(*DAT_00790014 + 0xc))(DAT_00790014,param_1,&local_28);
      if (*(short *)(local_28 + -2 + iVar2 * 2) == 0x23) {
        (**(code **)(*(int *)*local_c + 0x38))((int *)*local_c,local_8);
        FUN_00407e58(CONCAT22(extraout_var,0x20),local_10,&local_8);
        local_14 = local_14 + 1;
      }
      else {
        (**(code **)(*DAT_00790014 + 0xc))(DAT_00790014,param_1,&local_2c);
        if (*(short *)(local_2c + -2 + iVar2 * 2) == 0x7c) {
          *param_6 = local_14;
          if (*param_5 == 0) {
            local_18 = local_8;
            if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
              local_18 = FUN_00407048(&local_8,local_8);
            }
            local_1c = local_18;
            if (local_18 != 0) {
              local_1c = *(int *)(local_18 + -4);
            }
            *param_5 = local_1c;
          }
          else {
            local_20 = local_8;
            if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
              local_20 = FUN_00407048(&local_8,local_8);
            }
            local_24 = local_20;
            if (local_20 != 0) {
              local_24 = *(int *)(local_20 + -4);
            }
            *param_4 = local_24;
          }
        }
        else {
          (**(code **)(*DAT_00790014 + 0xc))(DAT_00790014,param_1,&local_34);
          FUN_00408034(&local_30,*(undefined2 *)(local_34 + -2 + iVar2 * 2));
          FUN_004082dc(&local_8,local_30);
        }
      }
      iVar2 = iVar2 + 1;
    }
    (**(code **)(*(int *)*local_c + 0x38))((int *)*local_c,local_8);
    if (*param_4 < *param_5) {
      *param_4 = *param_5;
    }
  }
  puVar1 = puStack_48;
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_006aead2;
  puStack_4c = (undefined1 *)0x6aeac2;
  thunk_FUN_00406e80(&local_38,5,puVar1);
  puStack_4c = (undefined1 *)0x6aeaca;
  thunk_FUN_00406e5c(&local_8);
  return;
}
