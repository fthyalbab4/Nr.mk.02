// rea decompile_all
// name: FUN_0043f4f8
// address: 0x43f4f8
// body: available
// range: 0x43f4f8-0x43f5d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43f56d (push 0x43f5d4 followed by fs-segment stack chaining); handler 0x43f5d4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043f4f8(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4,int param_5
                 )

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int extraout_EDX;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  uint local_18;

  if ((param_5 == 0) && (param_4 == 0)) {
    puStack_2c = (undefined1 *)0x0;
    puStack_30 = (undefined1 *)0x0;
    uStack_34 = 0x43f51d;
    FUN_0043f254(param_2);
    puStack_2c = (undefined1 *)0x43f523;
    param_4 = (**(code **)*param_2)();
    param_5 = extraout_EDX;
  }
  if (param_5 == 0) {
    if (param_4 < 0xf001) {
LAB_0043f551:
      local_18 = param_4;
      goto LAB_0043f557;
    }
  }
  else if (param_5 < 1) goto LAB_0043f551;
  local_18 = 0xf000;
LAB_0043f557:
  puStack_2c = (undefined1 *)0x43f55f;
  uVar2 = FUN_0040431c(local_18);
  puStack_30 = &LAB_0043f5d4;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  do {
    puVar1 = puStack_2c;
    if ((param_5 == 0) && (param_4 == 0)) {
      *in_FS_OFFSET = uStack_34;
      puStack_2c = &LAB_0043f5db;
      puStack_30 = (undefined1 *)0x43f5d3;
      FUN_00404338(uVar2,local_18,puVar1);
      return;
    }
    uVar3 = local_18;
    if ((int)local_18 >> 0x1f == param_5) {
      if (param_4 <= local_18) {
LAB_0043f589:
        uVar3 = param_4;
      }
    }
    else if (param_5 <= (int)local_18 >> 0x1f) goto LAB_0043f589;
    FUN_0043f488(param_2,uVar2,uVar3);
    FUN_0043f4c0(param_1,uVar2,uVar3);
    bVar4 = param_4 < uVar3;
    param_4 = param_4 - uVar3;
    param_5 = (param_5 - ((int)uVar3 >> 0x1f)) - (uint)bVar4;
  } while( true );
}
