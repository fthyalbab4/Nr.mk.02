// rea decompile_all
// name: FUN_00447b74
// address: 0x447b74
// body: available
// range: 0x447b74-0x447ce1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x447b91 (push 0x447ce2 followed by fs-segment stack chaining); handler 0x447ce2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00447bdc) */

void FUN_00447b74(undefined4 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined4 local_54 [2];
  undefined4 local_4c [2];
  undefined4 local_44 [2];
  int local_3c;
  undefined1 local_38;
  undefined4 *local_34;
  undefined1 local_30;
  undefined4 *local_2c;
  undefined1 local_28;
  undefined4 *local_24;
  undefined1 local_20;
  int local_1c;
  undefined1 local_18;
  int local_14;
  int local_10;
  undefined4 local_8;

  puStack_64 = &stack0xfffffffc;
  local_8 = 0;
  puStack_68 = &LAB_00447ce2;
  uStack_6c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_6c;
  FUN_004081e8(&local_8,L"%1:.2d:%2:.2d:%3:.2d");
  iVar2 = FUN_0040976c(*param_1,param_1[1]);
  local_14 = FUN_00409800(*param_1,param_1[1]);
  local_10 = extraout_EDX;
  if ((param_1[1] != 0) && ((int)param_1[1] < 0)) {
    bVar4 = local_14 != 0;
    local_14 = -local_14;
    local_10 = -(extraout_EDX + (uint)bVar4);
  }
  if (iVar2 != 0) {
    FUN_00408678(&local_8,L"%0:d.",local_8);
  }
  iVar3 = FUN_00409800(local_14,local_10);
  if (iVar3 != 0) {
    FUN_004085b8(&local_8,L".%4:.7d");
  }
  local_38 = 0;
  local_3c = iVar2;
  FUN_0040976c(local_14,local_10);
  local_44[0] = FUN_00409800();
  local_34 = local_44;
  local_30 = 0x10;
  FUN_0040976c(local_14,local_10);
  local_4c[0] = FUN_00409800();
  local_2c = local_4c;
  local_28 = 0x10;
  FUN_0040976c(local_14,local_10);
  local_54[0] = FUN_00409800();
  local_24 = local_54;
  local_20 = 0x10;
  local_18 = 0;
  local_1c = iVar3;
  FUN_00417c88(local_8,&local_3c,4,param_2);
  puVar1 = puStack_64;
  *in_FS_OFFSET = uStack_6c;
  puStack_64 = &LAB_00447ce9;
  puStack_68 = (undefined1 *)0x447ce1;
  thunk_FUN_004072d8(&local_8,uStack_6c,puVar1);
  return;
}
