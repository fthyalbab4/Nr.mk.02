// rea decompile_all
// name: FUN_004b65d4
// address: 0x4b65d4
// body: available
// range: 0x4b65d4-0x4b66d0 inclusive
// range: 0x4b66d8-0x4b66e4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b6681 (push 0x4b66d1 followed by fs-segment stack chaining); handler 0x4b66d1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b65d4(int *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined1 local_a;
  byte local_9;
  int *local_8;

  local_8 = param_1;
  if ((*(byte *)((int)param_1 + 0x55) & 0x20) != 0) {
    puStack_14 = (undefined1 *)0x4b65f3;
    uVar2 = FUN_0047d960(param_1);
    *(undefined1 *)((int)local_8 + 0x2d1) = uVar2;
    puStack_14 = (undefined1 *)0x4b6608;
    iVar3 = FUN_00405a4c(&LAB_00433630,1);
    local_8[0xb1] = iVar3;
    puStack_14 = (undefined1 *)0x4b6619;
    local_9 = FUN_004b6acc(local_8);
    local_a = (*(byte *)(local_8 + 7) & 0x10) != 0;
    puStack_14 = (undefined1 *)0x4b6638;
    FUN_004b6ad8(local_8,local_a | local_9);
    puStack_14 = (undefined1 *)0x4b6643;
    iVar3 = (**(code **)(*local_8 + 0xf4))();
    local_8[0xc0] = iVar3;
    puStack_14 = (undefined1 *)0x4b6657;
    iVar3 = (**(code **)(*local_8 + 0xf8))();
    local_8[0xc1] = iVar3;
    puStack_14 = (undefined1 *)0x4b6676;
    FUN_0043f4c0(local_8[0xb1],&local_a,1);
    puStack_18 = &LAB_004b66d1;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_14 = &stack0xfffffffc;
    uVar4 = FUN_0042202c();
    (**(code **)(*(int *)local_8[0xb0] + 0x88))((int *)local_8[0xb0],local_8[0xb1],uVar4);
    FUN_0043f254(local_8[0xb1]);
    puVar1 = puStack_14;
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x4b66d8;
    puStack_18 = (undefined1 *)0x4b66d0;
    FUN_004b6ad8(local_8,local_9,puVar1);
    return;
  }
  puStack_14 = (undefined1 *)0x4b66e0;
  FUN_0047e08c(param_1);
  return;
}
