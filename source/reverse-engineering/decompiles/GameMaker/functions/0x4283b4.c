// rea decompile_all
// name: FUN_004283b4
// address: 0x4283b4
// body: available
// range: 0x4283b4-0x428428 inclusive
// range: 0x428430-0x428438 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4283f3 (push 0x428429 followed by fs-segment stack chaining); handler 0x428429 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004283b4(undefined2 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_34;
  undefined1 *puStackY_30;
  VARIANTARG local_24;
  int *local_14;
  char local_d;
  undefined4 *local_c;

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  local_c = param_2;
  local_d = FUN_0042c960(*param_1,&local_14);
  if (local_d != '\0') {
    puStackY_30 = (undefined1 *)0x4283e8;
    VariantInit(&local_24);
    puStackY_30 = &LAB_00428429;
    uStackY_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_34;
    (**(code **)(*local_14 + 0x1c))(local_14,&local_24,param_1);
    FUN_00406eb0(local_c,local_24.n1._8_4_);
    puVar1 = puStackY_30;
    *in_FS_OFFSET = 0x100;
    puStackY_30 = (undefined1 *)0x428430;
    uStackY_34 = 0x428428;
    uVar2 = FUN_004249d4(&local_24,0x100,puVar1);
    return uVar2;
  }
  return 0;
}
