// rea decompile_all
// name: FUN_00587074
// address: 0x587074
// body: available
// range: 0x587074-0x587133 inclusive
// range: 0x587150-0x5872b9 inclusive
// range: 0x5872fa-0x5873e3 inclusive
// range: 0x587400-0x5874fa inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5870ab (push 0x5874fb followed by fs-segment stack chaining); handler 0x5874fb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00587074(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_FS_OFFSET;
  wchar_t *in_stack_ffffff9c;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  char local_31;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  wchar_t local_1c [12];

  local_40 = 0;
  local_44 = 0;
  local_38 = 0;
  local_3c = 0;
  puStack_54 = (undefined1 *)0x5870a0;
  local_24 = param_3;
  FUN_00408ff8(local_1c,&DAT_00615f70);
  puStack_58 = &LAB_005874fb;
  puStack_5c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_5c;
  if (*(int *)**(undefined4 **)(param_2 + 0x2c) == 8) {
    local_28 = *(undefined4 *)(**(int **)(param_2 + 0x2c) + 8);
    local_2c = *(undefined4 *)(**(int **)(param_2 + 0x2c) + 4);
    local_30 = 0;
    puStack_54 = &stack0xfffffffc;
  }
  else {
    in_stack_ffffff9c = (wchar_t *)&local_30;
    puStack_54 = &stack0xfffffffc;
    iVar3 = FUN_00586914(param_1,**(undefined4 **)(param_2 + 0x2c),&local_28,in_stack_ffffff9c,
                         &local_2c);
    if (iVar3 != 0) goto LAB_005874d2;
  }
  iVar3 = FUN_00586fa0(param_1,**(int **)(param_2 + 0x2c) + 0x38,local_1c);
  if (iVar3 == 0) {
    if (*(int *)(param_2 + 4) != 0x65) {
      switch(local_28) {
      case 0xfffffff9:
        if ((param_1[2] == 0) ||
           (cVar2 = FUN_0056dcfc(param_1[2],local_2c,local_30,local_24), cVar2 == '\0')) {
          local_31 = '\0';
        }
        else {
          local_31 = '\x01';
        }
        break;
      case 0xfffffffa:
        cVar2 = FUN_00572580(local_2c);
        if (cVar2 == '\0') {
          local_31 = FUN_005728c8(*param_1,local_2c,local_30,local_24);
        }
        else {
          local_31 = FUN_005725bc(local_2c,local_30,local_24);
        }
        break;
      case 0xfffffffb:
        local_31 = FUN_005725bc(local_2c,local_30,local_24);
        break;
      case 0xfffffffc:
        local_31 = '\0';
        break;
      default:
        local_31 = FUN_00572954(local_28,local_2c,local_30,local_24);
        break;
      case 0xfffffffe:
        local_31 = FUN_005728c8(param_1[1],local_2c,local_30,local_24);
        break;
      case 0xffffffff:
        local_31 = FUN_005728c8(*param_1,local_2c,local_30,local_24);
      }
      if (local_31 == '\0') {
        if (*PTR_PTR_00689364 == '\0') {
          if (local_30 == 0) {
            FUN_0061e3a4(local_2c,&local_3c);
            FUN_00408678(&local_38,L"Unknown variable ",local_3c);
            FUN_00610d7c(param_1[3],*(undefined4 *)(param_2 + 0x30),local_38);
          }
          else {
            FUN_0061e3a4(local_2c,&local_44);
            in_stack_ffffff9c = L" or array index out of bounds";
            FUN_0040875c(&local_40,3);
            FUN_00610d7c(param_1[3],*(undefined4 *)(param_2 + 0x30),local_40);
          }
        }
        else {
          *local_24 = 0;
          local_24[2] = 0;
          local_24[3] = 0;
        }
        goto LAB_005874d2;
      }
    }
    switch(*(undefined4 *)(param_2 + 4)) {
    case 0x65:
      FUN_00409360(local_24,local_1c,&DAT_00615f70);
      break;
    case 0x66:
      in_stack_ffffff9c = local_1c;
      FUN_00572ed8(param_1[3],*(undefined4 *)(param_2 + 0x30),0xd2);
      break;
    case 0x67:
      in_stack_ffffff9c = local_1c;
      FUN_00572ed8(param_1[3],*(undefined4 *)(param_2 + 0x30),0xd3);
      break;
    case 0x68:
      in_stack_ffffff9c = local_1c;
      FUN_00572ed8(param_1[3],*(undefined4 *)(param_2 + 0x30),0xd4);
      break;
    case 0x69:
      in_stack_ffffff9c = local_1c;
      FUN_00572ed8(param_1[3],*(undefined4 *)(param_2 + 0x30),0xd5);
      break;
    case 0x72:
      in_stack_ffffff9c = local_1c;
      FUN_00572ed8(param_1[3],*(undefined4 *)(param_2 + 0x30),0xd9);
      break;
    case 0x73:
      in_stack_ffffff9c = local_1c;
      FUN_00572ed8(param_1[3],*(undefined4 *)(param_2 + 0x30),0xda);
      break;
    case 0x74:
      in_stack_ffffff9c = local_1c;
      FUN_00572ed8(param_1[3],*(undefined4 *)(param_2 + 0x30),0xdb);
    }
    local_31 = '\x01';
    switch(local_28) {
    case 0xfffffff9:
      if (param_1[2] == 0) {
        uVar4 = FUN_0056d9f4(&DAT_0056d730,1);
        param_1[2] = uVar4;
      }
      FUN_0056dba0(param_1[2],local_2c,local_30,local_24);
      break;
    case 0xfffffffa:
      cVar2 = FUN_00572580(local_2c);
      if (cVar2 == '\0') {
        local_31 = FUN_00572900(*param_1,local_2c,local_30,local_24);
      }
      else {
        FUN_005725ac(local_2c,local_30,local_24);
      }
      break;
    case 0xfffffffb:
      FUN_005725ac(local_2c,local_30,local_24);
      break;
    case 0xfffffffc:
      local_31 = '\0';
      break;
    default:
      local_31 = FUN_00572b64(local_28,local_2c,local_30,local_24);
      break;
    case 0xfffffffe:
      local_31 = FUN_00572900(param_1[1],local_2c,local_30,local_24);
      break;
    case 0xffffffff:
      local_31 = FUN_00572900(*param_1,local_2c,local_30,local_24);
    }
    if (local_31 == '\0') {
      FUN_00610d7c(param_1[3],*(undefined4 *)(param_2 + 0x30),&PTR_DAT_00587590);
    }
  }
LAB_005874d2:
  puVar1 = puStack_5c;
  *in_FS_OFFSET = (int)in_stack_ffffff9c;
  puStack_5c = &LAB_00587502;
  thunk_FUN_004072fc(&local_44,4,puVar1);
  FUN_004090d0(local_1c,&DAT_00615f70);
  return;
}
