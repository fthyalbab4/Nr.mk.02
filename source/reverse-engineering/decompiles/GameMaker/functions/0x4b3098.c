// rea decompile_all
// name: FUN_004b3098
// address: 0x4b3098
// body: available
// range: 0x4b3098-0x4b3200 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b30be (push 0x4b3201 followed by fs-segment stack chaining); handler 0x4b3201 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b3098(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  char cVar2;
  HWND pHVar3;
  undefined4 *in_FS_OFFSET;
  UINT UVar4;
  undefined4 uVar5;
  WPARAM WVar6;
  undefined4 *puVar7;
  int lParam;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  int local_8;

  puStack_28 = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_004b3201;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puVar1 = &stack0xfffffffc;
  local_8 = param_2;
  if (param_4 < param_3) {
    FUN_00405954(*param_1,&local_14);
    local_10 = local_14;
    local_c = 0x11;
    puVar7 = &local_10;
    uVar5 = 0;
    FUN_0040b75c(PTR_PTR_00781c44,&local_18);
    FUN_0041bef4(&PTR_LAB_0042f068,1,local_18,uVar5,puVar7);
    FUN_00406618();
    puVar1 = puStack_28;
  }
  puStack_28 = puVar1;
  if (local_8 < param_3) {
    local_8 = param_3;
  }
  if (param_4 < local_8) {
    local_8 = param_4;
  }
  if (10000 < param_4 - param_3 != 10000 < (int)(param_1[0xa2] - param_1[0xa1])) {
    param_1[0xa1] = param_3;
    param_1[0xa2] = param_4;
    FUN_004f3af0(param_1);
  }
  if (param_3 != param_1[0xa1]) {
    param_1[0xa1] = param_3;
    cVar2 = FUN_004f7a54(param_1);
    if (cVar2 != '\0') {
      WVar6 = 1;
      UVar4 = 0x407;
      pHVar3 = (HWND)FUN_004f76a8(param_1);
      SendMessageW(pHVar3,UVar4,WVar6,param_3);
    }
  }
  if (param_4 != param_1[0xa2]) {
    param_1[0xa2] = param_4;
    cVar2 = FUN_004f7a54(param_1);
    if (cVar2 != '\0') {
      WVar6 = 1;
      UVar4 = 0x408;
      pHVar3 = (HWND)FUN_004f76a8(param_1);
      SendMessageW(pHVar3,UVar4,WVar6,param_4);
    }
  }
  if (param_1[0xa4] != local_8) {
    param_1[0xa4] = local_8;
    cVar2 = FUN_004f7a54(param_1);
    if (cVar2 != '\0') {
      WVar6 = 1;
      UVar4 = 0x405;
      lParam = local_8;
      pHVar3 = (HWND)FUN_004f76a8(param_1);
      SendMessageW(pHVar3,UVar4,WVar6,lParam);
    }
    FUN_00405d08(param_1);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004b3208;
  puStack_2c = (undefined1 *)0x4b3200;
  thunk_FUN_00406e80(&local_18,2,puVar1);
  return;
}
