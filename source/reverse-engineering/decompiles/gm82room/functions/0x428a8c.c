// rea decompile_all
// name: FUN_00428a8c
// address: 0x428a8c
// body: available
// range: 0x428a8c-0x428b34 inclusive
// range: 0x428b3c-0x428b56 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x428ab6 (push 0x428b57 followed by fs-segment stack chaining); handler 0x428b57 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x428ae1 (push 0x428b35 followed by fs-segment stack chaining); handler 0x428b35 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00428a8c(undefined2 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar2;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_2c;
  undefined4 local_28;
  VARIANTARG local_24;
  int *local_14;
  char local_d;
  undefined4 *local_c;

  puStack_34 = &stack0xfffffffc;
  local_28 = 0;
  local_2c = 0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  puStack_38 = &LAB_00428b57;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_c = param_2;
  local_d = FUN_0042b560(*param_1,&local_14);
  puVar1 = puStack_34;
  if (local_d != '\0') {
    puStack_44 = (undefined1 *)0x428ad6;
    VariantInit(&local_24);
    puStack_44 = &LAB_00428b35;
    uStack_48 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_48;
    (**(code **)(*local_14 + 0x1c))(local_14,&local_24,param_1);
    puVar2 = &local_28;
    FUN_00408350(&local_2c,local_24.n1._8_4_);
    FUN_00408984(local_2c,1,0x7fffffff,puVar2);
    FUN_00408420(local_c,local_28);
    puVar1 = puStack_44;
    *in_FS_OFFSET = 8;
    puStack_44 = (undefined1 *)0x428b3c;
    uStack_48 = 0x428b34;
    FUN_00424ab4(&local_24,8,puVar1);
    return;
  }
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_00428b5e;
  puStack_38 = (undefined1 *)0x428b56;
  thunk_FUN_004072fc(&local_2c,2,puVar1);
  return;
}
