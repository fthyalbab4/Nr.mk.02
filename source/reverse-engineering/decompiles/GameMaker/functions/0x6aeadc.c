// rea decompile_all
// name: FUN_006aeadc
// address: 0x6aeadc
// body: available
// range: 0x6aeadc-0x6aec27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6aeafc (push 0x6aec28 followed by fs-segment stack chaining); handler 0x6aec28 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006aeadc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *in_FS_OFFSET;
  undefined4 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;

  puStack_28 = &stack0xfffffffc;
  local_20 = 0;
  local_1c = 0;
  local_8 = 0;
  puStack_2c = &LAB_006aec28;
  puStack_30 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_30;
  local_c = param_1;
  local_10 = FUN_004dee2c(&PTR_FUN_004d7824,1,param_1);
  iVar2 = (**(code **)(*DAT_00790014 + 0x14))();
  if (-1 < iVar2 + -1) {
    local_14 = 0;
    local_18 = iVar2;
    do {
      (**(code **)(*DAT_00790018 + 0xc))(DAT_00790018,local_14,&local_8);
      puStack_28 = (undefined1 *)0x1;
      puStack_30 = (undefined4 *)0x6aeb5d;
      FUN_0041e164(local_8,&DAT_006aec5c,&DAT_006aec4c);
      puStack_30 = (undefined4 *)0x6aeb68;
      FUN_00407f0c(&local_8,local_1c);
      iVar2 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        puStack_30 = (undefined4 *)0x6aeb85;
        iVar2 = FUN_00407048(&local_8,local_8);
      }
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + -4);
      }
      if (0x28 < iVar3) {
        puStack_30 = &local_20;
        FUN_004086a8(local_8,1,0x28);
        FUN_0040839c(&local_8,local_20,L" ...");
      }
      iVar2 = FUN_004d89cc(&PTR_FUN_004d5e80,1,local_c);
      FUN_004dbc6c(iVar2,local_8);
      *(undefined4 *)(iVar2 + 0x88) = param_4;
      *(undefined4 *)(iVar2 + 0x8c) = param_5;
      *(int *)(iVar2 + 0xc) = local_14;
      FUN_004dc190(*(undefined4 *)(local_10 + 0x38),iVar2);
      local_14 = local_14 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = (int)puStack_30;
  puStack_28 = &LAB_006aec2f;
  puStack_2c = (undefined1 *)0x6aec1f;
  thunk_FUN_00406e80(&local_20,2,puVar1);
  puStack_2c = (undefined1 *)0x6aec27;
  thunk_FUN_00406e5c(&local_8);
  return;
}
