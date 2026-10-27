// rea decompile_all
// name: FUN_00424de4
// address: 0x424de4
// body: available
// range: 0x424de4-0x424e18 inclusive
// range: 0x424e71-0x424fc6 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x424dfa (push 0x424fc7 followed by fs-segment stack chaining); handler 0x424fc7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00424de4(undefined4 param_1,ushort *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00424fc7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  switch(*param_2 & 0xbfff) {
  default:
    if ((*param_2 & 0x2000) == 0) {
      puStack_14 = &stack0xfffffffc;
      FUN_00424db0(param_1,param_2);
    }
    else {
      puStack_14 = &stack0xfffffffc;
      FUN_00424a7c(param_1,param_2,&LAB_00424da8);
    }
    break;
  case 2:
    puStack_14 = &stack0xfffffffc;
    FUN_00429c10(param_1,(int)**(short **)(param_2 + 4),0xfe);
    break;
  case 3:
    puStack_14 = &stack0xfffffffc;
    FUN_00429c10(param_1,**(undefined4 **)(param_2 + 4),0xfc);
    break;
  case 4:
    puStack_14 = &stack0xfffffffc;
    FUN_00429e54(param_1);
    break;
  case 5:
    puStack_14 = &stack0xfffffffc;
    FUN_00429e54(param_1);
    break;
  case 6:
    puStack_14 = &stack0xfffffffc;
    FUN_00429e7c(param_1);
    break;
  case 7:
    puStack_14 = &stack0xfffffffc;
    FUN_00429e54(param_1);
    break;
  case 8:
    puStack_14 = &stack0xfffffffc;
    FUN_00424da0(param_2,&local_8);
    FUN_00429ebc(param_1,local_8);
    break;
  case 9:
  case 0xd:
    puStack_14 = &stack0xfffffffc;
    FUN_00424d80(param_1,param_2);
    break;
  case 0xb:
    puStack_14 = &stack0xfffffffc;
    FUN_00429e2c(param_1,**(short **)(param_2 + 4) != 0);
    break;
  case 0xc:
    puStack_14 = &stack0xfffffffc;
    FUN_00424fd4(param_1,*(undefined4 *)(param_2 + 4));
    break;
  case 0x10:
    puStack_14 = &stack0xfffffffc;
    FUN_00429c10(param_1,(int)**(char **)(param_2 + 4),0xff);
    break;
  case 0x11:
    puStack_14 = &stack0xfffffffc;
    FUN_00429c10(param_1,**(undefined1 **)(param_2 + 4),1);
    break;
  case 0x12:
    puStack_14 = &stack0xfffffffc;
    FUN_00429c10(param_1,**(undefined2 **)(param_2 + 4),2);
    break;
  case 0x13:
    puStack_14 = &stack0xfffffffc;
    FUN_00429c10(param_1,**(undefined4 **)(param_2 + 4),4);
    break;
  case 0x14:
    uVar1 = (*(undefined4 **)(param_2 + 4))[1];
    puStack_14 = &stack0xfffffffc;
    FUN_00429d58(param_1,uVar1,param_3,**(undefined4 **)(param_2 + 4),uVar1);
    break;
  case 0x15:
    uVar1 = (*(undefined4 **)(param_2 + 4))[1];
    FUN_00429cec(param_1,uVar1,param_3,**(undefined4 **)(param_2 + 4),uVar1);
  }
  puVar2 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00424fce;
  puStack_18 = (undefined1 *)0x424fc6;
  FUN_00407a78(&local_8,uStack_1c,puVar2);
  return;
}
