// rea decompile_all
// name: FUN_005032bc
// address: 0x5032bc
// body: available
// range: 0x5032bc-0x503361 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5032d8 (push 0x503362 followed by fs-segment stack chaining); handler 0x503362 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005032bc(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_28 = &LAB_00503362;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_8 = param_2;
  FUN_00503268(param_1,&local_c);
  local_14 = local_c;
  FUN_00415934(local_c,&local_10);
  uVar4 = local_10;
  FUN_00415934(local_8,&local_18);
  iVar2 = FUN_0041561c(local_18,uVar4);
  if (iVar2 != 0) {
    uVar4 = local_8;
    uVar3 = FUN_004c45dc(param_1);
    uVar4 = FUN_0040f050(uVar3,0x1a2,0,uVar4);
    (**(code **)(*param_1 + 0xf0))(param_1,uVar4);
    (**(code **)(*param_1 + 0x130))();
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00503369;
  puStack_28 = (undefined1 *)0x503354;
  thunk_FUN_004072d8(&local_18,uStack_2c,puVar1);
  puStack_28 = (undefined1 *)0x503361;
  thunk_FUN_004072fc(&local_10,2);
  return;
}
