// rea decompile_all
// name: FUN_0048ee2c
// address: 0x48ee2c
// body: available
// range: 0x48ee2c-0x48ef28 inclusive
// range: 0x48ef30-0x48ef3c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48eed9 (push 0x48ef29 followed by fs-segment stack chaining); handler 0x48ef29 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048ee2c(int *param_1)

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
    puStack_14 = (undefined1 *)0x48ee4b;
    uVar2 = FUN_00477740(param_1);
    *(undefined1 *)((int)local_8 + 0x2d1) = uVar2;
    puStack_14 = (undefined1 *)0x48ee60;
    iVar3 = FUN_00405fac(&LAB_004319cc,1);
    local_8[0xb1] = iVar3;
    puStack_14 = (undefined1 *)0x48ee71;
    local_9 = FUN_0048f324(local_8);
    local_a = (*(byte *)(local_8 + 7) & 0x10) != 0;
    puStack_14 = (undefined1 *)0x48ee90;
    FUN_0048f330(local_8,local_a | local_9);
    puStack_14 = (undefined1 *)0x48ee9b;
    iVar3 = (**(code **)(*local_8 + 0xf4))();
    local_8[0xc0] = iVar3;
    puStack_14 = (undefined1 *)0x48eeaf;
    iVar3 = (**(code **)(*local_8 + 0xf8))();
    local_8[0xc1] = iVar3;
    puStack_14 = (undefined1 *)0x48eece;
    FUN_0043cac0(local_8[0xb1],&local_a,1);
    puStack_18 = &LAB_0048ef29;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_14 = &stack0xfffffffc;
    uVar4 = FUN_004221c0();
    (**(code **)(*(int *)local_8[0xb0] + 0x88))((int *)local_8[0xb0],local_8[0xb1],uVar4);
    FUN_0043c854(local_8[0xb1]);
    puVar1 = puStack_14;
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x48ef30;
    puStack_18 = (undefined1 *)0x48ef28;
    FUN_0048f330(local_8,local_9,puVar1);
    return;
  }
  puStack_14 = (undefined1 *)0x48ef38;
  FUN_00477e6c(param_1);
  return;
}
