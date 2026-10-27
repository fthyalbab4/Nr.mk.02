// rea decompile_all
// name: FUN_0043fc4c
// address: 0x43fc4c
// body: available
// range: 0x43fc4c-0x43fd96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43fc84 (push 0x43fd97 followed by fs-segment stack chaining); handler 0x43fd97 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043fc4c(int param_1,char param_2,undefined4 param_3,undefined4 param_4,ushort param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  DWORD DVar3;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_5;

  local_24 = 0;
  local_28 = 0;
  local_1c = 0;
  local_20 = 0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStack_48 = (undefined1 *)0x43fc6f;
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  puStack_4c = &LAB_0043fd97;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  if ((param_5 & 0xff00) == 0xff00) {
    param_5 = param_5 & 0xff;
    if (param_5 == 0xff) {
      param_5 = 0x10;
    }
    puStack_48 = &stack0xfffffffc;
    uVar2 = FUN_00416d14(param_3,param_5,param_4);
    FUN_0043fb44(param_1,0,uVar2);
    if (*(int *)(param_1 + 4) == -1) {
      FUN_0041748c(param_3,&local_1c);
      local_18 = local_1c;
      local_14 = 0x11;
      DVar3 = GetLastError();
      FUN_0041b4f0(DVar3,&local_20);
      local_10 = local_20;
      local_c = 0x11;
      FUN_0041c0bc(&PTR_LAB_0042e890,1,PTR_PTR_0078295c,1,&local_18);
      FUN_00406618();
    }
  }
  else {
    puStack_48 = &stack0xfffffffc;
    uVar2 = FUN_00416cbc(param_3,param_5);
    FUN_0043fb44(param_1,0,uVar2);
    if (*(int *)(param_1 + 4) == -1) {
      FUN_0041748c(param_3,&local_24);
      local_18 = local_24;
      local_14 = 0x11;
      DVar3 = GetLastError();
      FUN_0041b4f0(DVar3,&local_28);
      local_10 = local_28;
      local_c = 0x11;
      FUN_0041c0bc(&PTR_LAB_0042e92c,1,PTR_PTR_00781570,1,&local_18);
      FUN_00406618();
    }
  }
  FUN_00407eb8(param_1 + 8,param_3);
  puVar1 = puStack_48;
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_0043fd9e;
  puStack_4c = (undefined1 *)0x43fd96;
  thunk_FUN_00406e80(&local_28,4,puVar1);
  return;
}
