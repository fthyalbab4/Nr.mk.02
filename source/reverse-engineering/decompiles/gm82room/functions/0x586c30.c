// rea decompile_all
// name: FUN_00586c30
// address: 0x586c30
// body: available
// range: 0x586c30-0x586cab inclusive
// range: 0x586cc8-0x586e27 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x586c5a (push 0x586e28 followed by fs-segment stack chaining); handler 0x586e28 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00586c30(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int *in_FS_OFFSET;
  wchar_t *in_stack_ffffffb0;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  undefined4 *local_c;

  puStack_40 = &stack0xfffffffc;
  local_2c = 0;
  local_30 = 0;
  local_24 = 0;
  local_28 = 0;
  puStack_44 = &LAB_00586e28;
  puStack_48 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_48;
  local_14 = param_3;
  local_c = param_1;
  if (*param_2 == 8) {
    local_18 = param_2[2];
    local_1c = param_2[1];
    local_20 = 0;
    puStack_40 = &stack0xfffffffc;
  }
  else {
    in_stack_ffffffb0 = (wchar_t *)&local_20;
    iVar3 = FUN_00586914(param_1,param_2,&local_18,in_stack_ffffffb0,&local_1c);
    if (iVar3 != 0) goto LAB_00586e0d;
  }
  switch(local_18) {
  case -7:
    if ((local_c[2] == 0) ||
       (cVar2 = FUN_0056dcfc(local_c[2],local_1c,local_20,local_14), cVar2 == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    break;
  case -6:
    cVar2 = FUN_00572580(local_1c);
    if (cVar2 == '\0') {
      cVar2 = FUN_005728c8(*local_c,local_1c,local_20,local_14);
    }
    else {
      cVar2 = FUN_005725bc(local_1c,local_20,local_14);
    }
    break;
  case -5:
    cVar2 = FUN_005725bc(local_1c,local_20,local_14);
    break;
  case -4:
    cVar2 = '\0';
    break;
  default:
    cVar2 = FUN_00572954(local_18,local_1c,local_20,local_14);
    break;
  case -2:
    cVar2 = FUN_005728c8(local_c[1],local_1c,local_20,local_14);
    break;
  case -1:
    cVar2 = FUN_005728c8(*local_c,local_1c,local_20,local_14);
  }
  if (cVar2 == '\0') {
    if (*PTR_PTR_00689364 == '\0') {
      if (local_20 == 0) {
        FUN_0061e3a4(local_1c,&local_28);
        FUN_00408678(&local_24,L"Unknown variable ",local_28);
        FUN_00610d7c(local_c[3],param_2[0xc],local_24);
      }
      else {
        FUN_0061e3a4(local_1c,&local_30);
        in_stack_ffffffb0 = L" or array index out of bounds";
        FUN_0040875c(&local_2c,3);
        FUN_00610d7c(local_c[3],param_2[0xc],local_2c);
      }
    }
    else {
      *local_14 = 0;
      local_14[2] = 0;
      local_14[3] = 0;
    }
  }
LAB_00586e0d:
  puVar1 = puStack_48;
  *in_FS_OFFSET = (int)in_stack_ffffffb0;
  puStack_48 = &LAB_00586e2f;
  thunk_FUN_004072fc(&local_30,4,puVar1);
  return;
}
