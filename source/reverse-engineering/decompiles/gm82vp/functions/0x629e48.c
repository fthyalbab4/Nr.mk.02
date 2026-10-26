// rea decompile_all
// name: FUN_00629e48
// address: 0x629e48
// body: available
// range: 0x629e48-0x629ec6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x629e6b (push 0x629ec7 followed by fs-segment stack chaining); handler 0x629ec7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00629e48(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;

  puStack_2c = (undefined1 *)0x629e60;
  local_8 = param_1;
  FUN_0040b2dc(param_1);
  puStack_30 = &LAB_00629ec7;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  if (local_8 != (int *)0x0) {
    local_14 = param_6;
    local_10 = param_5;
    local_c = param_4;
    puStack_2c = &stack0xfffffffc;
    local_1c = param_2;
    local_18 = param_3;
    iVar2 = FUN_00629c60(&local_1c);
    if (iVar2 != 0) {
      (**(code **)(*local_8 + 0x98))();
    }
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00629ece;
  puStack_30 = (undefined1 *)0x629ec6;
  FUN_0040b268(&local_8,uStack_34,puVar1);
  return;
}
