// rea decompile_all
// name: FUN_004440d8
// address: 0x4440d8
// body: available
// range: 0x4440d8-0x444119 inclusive
// range: 0x444172-0x4442e9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4440f5 (push 0x4442ea followed by fs-segment stack chaining); handler 0x4442ea lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004440d8(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  uStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  local_20 = 0;
  puStack_2c = &LAB_004442ea;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = param_1;
  FUN_004249d4(param_2);
  uVar4 = FUN_0044175c(local_8);
  switch(uVar4 & 0x7f) {
  case 0:
  case 0xd:
    cVar2 = FUN_004435d8(local_8);
    if (cVar2 != '\r') {
      FUN_0042caf0(param_2);
    }
    break;
  default:
    FUN_0041bfec(&PTR_LAB_0042ea5c,1,PTR_PTR_007826d8);
    FUN_00406618();
    break;
  case 2:
    cVar2 = FUN_00442448(local_8);
    FUN_00429c10(param_2,(int)cVar2,0xff);
    break;
  case 3:
    sVar3 = FUN_00442448(local_8);
    FUN_00429c10(param_2,(int)sVar3,0xfe);
    break;
  case 4:
    uVar5 = FUN_00442448(local_8);
    FUN_00429c10(param_2,uVar5,0xfc);
    break;
  case 5:
    FUN_0044215c(local_8);
    FUN_00429e54(param_2);
    break;
  case 6:
  case 0xc:
    FUN_004433b0(local_8,&local_c);
    FUN_00429ef4(param_2,local_c);
    break;
  case 8:
  case 9:
    cVar2 = FUN_004435d8(local_8);
    FUN_00429e2c(param_2,cVar2 == '\t');
    break;
  case 10:
    FUN_00443f10(&local_20);
    FUN_00424d3c(param_2,&local_20,&stack0xfffffffc);
    break;
  case 0xf:
    FUN_004421d8(local_8);
    FUN_00429e54(param_2);
    break;
  case 0x10:
    FUN_0044221c(local_8);
    FUN_00429e7c(param_2);
    break;
  case 0x11:
    FUN_0044226c(local_8);
    FUN_00429e68(param_2);
    break;
  case 0x12:
  case 0x14:
    FUN_00443498(local_8,&local_10);
    FUN_00429ebc(param_2,local_10);
    break;
  case 0x13:
    FUN_004424b4(local_8);
    FUN_00429d58(param_2);
    break;
  case 0x15:
    FUN_00442194(local_8);
    FUN_00429e54(param_2);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004442f1;
  puStack_2c = (undefined1 *)0x4442d9;
  FUN_004249e8(&local_20,uStack_30,puVar1);
  puStack_2c = (undefined1 *)0x4442e1;
  FUN_00407a78(&local_10);
  puStack_2c = (undefined1 *)0x4442e9;
  thunk_FUN_00406e5c(&local_c);
  return;
}
