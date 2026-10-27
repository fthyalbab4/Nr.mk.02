// rea decompile_all
// name: FUN_005fcbd4
// address: 0x5fcbd4
// body: available
// range: 0x5fcbd4-0x5fcd98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5fcc03 (push 0x5fcd99 followed by fs-segment stack chaining); handler 0x5fcd99 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fcbd4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,double param_10,double param_11)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int *local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  double local_14;
  int local_c;
  undefined4 local_8;

  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  puStack_40 = (undefined1 *)0x5fcbf8;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_44 = &LAB_005fcd99;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_40 = &stack0xfffffffc;
  FUN_005fc04c();
  local_20 = (int *)FUN_0043c790(&PTR_FUN_00430700,1);
  FUN_005fc090(local_8,param_3,&local_20);
  if (local_c < 0) {
    local_c = FUN_0057fbb4(DAT_00688644,&LAB_005fcdb8);
  }
  if (DAT_00688650 == 1) {
    iVar2 = (**(code **)(*local_20 + 0x14))();
    local_24 = iVar2 * local_c >> 1;
    if (local_24 < 0) {
      local_24 = local_24 + (uint)((iVar2 * local_c & 1U) != 0);
    }
    param_10 = param_10 - (double)local_24;
  }
  if (DAT_00688650 == 2) {
    local_24 = (**(code **)(*local_20 + 0x14))();
    local_24 = local_24 * local_c;
    param_10 = param_10 - (double)local_24;
  }
  iVar2 = (**(code **)(*local_20 + 0x14))();
  if (-1 < iVar2 + -1) {
    iVar4 = 0;
    do {
      local_14 = 0.0;
      local_1c = 0;
      uStack_18 = 0;
      if (DAT_0068864c == 1) {
        (**(code **)(*local_20 + 0xc))(local_20,iVar4,&local_28);
        uVar3 = FUN_0057fae0(DAT_00688644,local_28);
        local_24 = (int)uVar3 >> 1;
        if (local_24 < 0) {
          local_24 = local_24 + (uint)((uVar3 & 1) != 0);
        }
        local_24 = -local_24;
        local_14 = (double)local_24;
      }
      if (DAT_0068864c == 2) {
        (**(code **)(*local_20 + 0xc))(local_20,iVar4,&local_2c);
        local_24 = FUN_0057fae0(DAT_00688644,local_2c);
        local_24 = -local_24;
        local_14 = (double)local_24;
      }
      (**(code **)(*local_20 + 0xc))
                (local_20,iVar4,&local_30,param_4,param_5,param_6,param_7,param_8,
                 param_10 + (double)CONCAT44(uStack_18,local_1c),param_11 + local_14);
      FUN_0057f3d8(DAT_00688644,local_30,param_9);
      param_10 = (double)local_c + param_10;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00405fdc(local_20);
  puVar1 = puStack_40;
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_005fcda0;
  puStack_44 = (undefined1 *)0x5fcd90;
  thunk_FUN_004072fc(&local_30,3,puVar1);
  puStack_44 = (undefined1 *)0x5fcd98;
  thunk_FUN_004072d8(&local_8);
  return;
}
