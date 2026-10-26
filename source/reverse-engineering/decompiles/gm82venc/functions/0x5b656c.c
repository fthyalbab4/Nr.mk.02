// rea decompile_all
// name: FUN_005b656c
// address: 0x5b656c
// body: available
// range: 0x5b656c-0x5b666c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b658c (push 0x5b666d followed by fs-segment stack chaining); handler 0x5b666d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b656c(int param_1,undefined4 param_2,short *param_3,byte param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_1c;
  short *local_18;
  undefined4 local_14;
  short *local_10;
  undefined4 local_c;
  short *local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = (short *)0x0;
  local_c = 0;
  local_10 = (short *)0x0;
  local_14 = 0;
  local_18 = (short *)0x0;
  local_1c = 0;
  puStack_2c = &LAB_005b666d;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puVar1 = &stack0xfffffffc;
  if ((*param_3 != 0) && (puVar1 = &stack0xfffffffc, (param_4 & 4) != 0)) {
    FUN_00408310(&local_c,*(undefined2 *)(DAT_0084f048 + 0x1dc));
    FUN_004154dc(local_c,&local_8);
    if (*local_8 == *param_3) {
      *(undefined4 *)(param_1 + 0xc) = 1;
      FUN_004e6874(param_1);
      puVar1 = puStack_28;
    }
    else {
      FUN_00408310(&local_14,*(undefined2 *)(DAT_0084f04c + 0x1dc));
      FUN_004154dc(local_14,&local_10);
      if (*local_10 == *param_3) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        FUN_004e6874(param_1);
        puVar1 = puStack_28;
      }
      else {
        FUN_00408310(&local_1c,*(undefined2 *)(DAT_0084f050 + 0x1dc));
        FUN_004154dc(local_1c,&local_18);
        puVar1 = puStack_28;
        if (*local_18 == *param_3) {
          *(undefined4 *)(param_1 + 0xc) = 3;
          FUN_004e6874(param_1);
          puVar1 = puStack_28;
        }
      }
    }
  }
  puStack_28 = puVar1;
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_005b6674;
  puStack_2c = (undefined1 *)0x5b666c;
  thunk_FUN_004072fc(&local_1c,6,puVar1);
  return;
}
