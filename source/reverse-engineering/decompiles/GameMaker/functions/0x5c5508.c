// rea decompile_all
// name: FUN_005c5508
// address: 0x5c5508
// body: available
// range: 0x5c5508-0x5c55f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c5530 (push 0x5c55f3 followed by fs-segment stack chaining); handler 0x5c55f3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c5508(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined4 local_c;
  undefined4 local_8;

  local_20 = &stack0xfffffffc;
  iVar2 = 6;
  do {
    local_c = 0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  LOCK();
  UNLOCK();
  local_8 = 0;
  local_24 = &LAB_005c55f3;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  puStack_2c = (undefined4 *)0x5c553f;
  FUN_00429c6c(&stack0xffffffe4,param_2,0xfc);
  puStack_2c = (undefined4 *)&stack0xffffffe4;
  uStack_30 = 1;
  puStack_34 = &local_c;
  local_38 = 0x5c5555;
  FUN_005c4f30(param_1,0,local_8);
  if (param_2 == -1) {
    puStack_2c = (undefined4 *)0x5c558b;
    FUN_0040b184(&local_24,local_8,&DAT_005c5604);
    puStack_2c = (undefined4 *)0x5c5596;
    (**(code **)(**(int **)(param_1 + 0xc) + 0x38))(*(int **)(param_1 + 0xc),local_24);
  }
  else {
    puStack_2c = (undefined4 *)0x5c556a;
    FUN_0040b184(&local_20,local_8,&DAT_005c5604);
    puStack_2c = (undefined4 *)0x5c5577;
    (**(code **)(**(int **)(param_1 + 0xc) + 0x3c))(*(int **)(param_1 + 0xc),param_2,local_20);
  }
  puStack_2c = (undefined4 *)0x5c55a4;
  FUN_00429c6c(&local_38,param_2,0xfc);
  puStack_2c = &local_38;
  uStack_30 = 0;
  puStack_34 = &local_28;
  local_38 = 0x5c55ba;
  FUN_005c4f30(param_1,0,local_8);
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_005c55fa;
  local_24 = (undefined1 *)0x5c55cf;
  FUN_004249e8(&local_38,local_28,puVar1);
  local_24 = (undefined1 *)0x5c55e2;
  FUN_00408e44(&local_28,&DAT_005c0e3c,3);
  local_24 = (undefined1 *)0x5c55ea;
  FUN_004249e8(&stack0xffffffe4);
  local_24 = (undefined1 *)0x5c55f2;
  FUN_0040b140(&local_c);
  return;
}
