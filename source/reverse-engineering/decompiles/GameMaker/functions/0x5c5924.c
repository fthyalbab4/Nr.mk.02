// rea decompile_all
// name: FUN_005c5924
// address: 0x5c5924
// body: available
// range: 0x5c5924-0x5c59e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c5946 (push 0x5c59e6 followed by fs-segment stack chaining); handler 0x5c59e6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c5924(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *local_20;
  undefined4 local_8;

  local_20 = &stack0xfffffffc;
  iVar2 = 5;
  do {
    local_8 = 0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puStack_24 = &LAB_005c59e6;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined4 *)0x5c5958;
  FUN_00429c6c(&stack0xffffffe8,0xffffffff,0xff);
  puStack_2c = (undefined4 *)&stack0xffffffe8;
  local_30 = 1;
  FUN_005c4f30(param_1,1,param_2,&local_8);
  puStack_2c = (undefined4 *)0x5c597c;
  FUN_0040b184(&stack0xffffffe4,param_2,&DAT_005c59f8);
  puStack_2c = (undefined4 *)0x5c5987;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x44))(*(int **)(param_1 + 0xc),unaff_EDI);
  puStack_2c = (undefined4 *)0x5c5998;
  FUN_00429c6c(&local_30,0xffffffff,0xff);
  puStack_2c = &local_30;
  local_30 = 0;
  FUN_005c4f30(param_1,1,param_2,&local_20);
  puVar1 = local_20;
  *in_FS_OFFSET = uStack_28;
  local_20 = &LAB_005c59ed;
  puStack_24 = (undefined1 *)0x5c59c2;
  FUN_004249e8(&local_30,uStack_28,puVar1);
  puStack_24 = (undefined1 *)0x5c59d5;
  FUN_00408e44(&local_20,&DAT_005c0e3c,2);
  puStack_24 = (undefined1 *)0x5c59dd;
  FUN_004249e8(&stack0xffffffe8);
  puStack_24 = (undefined1 *)0x5c59e5;
  FUN_0040b140(&local_8);
  return;
}
