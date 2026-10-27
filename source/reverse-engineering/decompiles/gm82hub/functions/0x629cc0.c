// rea decompile_all
// name: FUN_00629cc0
// address: 0x629cc0
// body: available
// range: 0x629cc0-0x629d34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x629ce9 (push 0x629d35 followed by fs-segment stack chaining); handler 0x629d35 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00629cc0(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  int *local_8;

  puStack_18 = (undefined1 *)0x629cd6;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040b2dc(param_1);
  puStack_18 = (undefined1 *)0x629cde;
  thunk_FUN_00407ad0(local_c);
  puStack_1c = &LAB_00629d35;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  if ((local_8 != (int *)0x0) &&
     (puStack_18 = &stack0xfffffffc, iVar2 = FUN_006299c4(local_c), iVar2 != 0)) {
    (**(code **)(*local_8 + 0x98))();
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00629d3c;
  puStack_1c = (undefined1 *)0x629d2c;
  thunk_FUN_004072d8(&local_c,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0x629d34;
  FUN_0040b268(&local_8);
  return;
}
