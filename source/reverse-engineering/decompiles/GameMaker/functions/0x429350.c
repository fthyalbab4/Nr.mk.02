// rea decompile_all
// name: FUN_00429350
// address: 0x429350
// body: available
// range: 0x429350-0x4293ea inclusive
// range: 0x4293f2-0x429407 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x429377 (push 0x429408 followed by fs-segment stack chaining); handler 0x429408 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4293a2 (push 0x4293eb followed by fs-segment stack chaining); handler 0x4293eb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00429350(undefined2 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_28;
  VARIANTARG local_24;
  int *local_14;
  char local_d;
  undefined4 *local_c;

  puStack_30 = &stack0xfffffffc;
  local_28 = 0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  puStack_34 = &LAB_00429408;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_c = param_2;
  local_d = FUN_0042c960(*param_1,&local_14);
  puVar2 = puStack_30;
  if (local_d != '\0') {
    puStack_40 = (undefined1 *)0x429397;
    VariantInit(&local_24);
    puStack_40 = &LAB_004293eb;
    uStack_44 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_44;
    (**(code **)(*local_14 + 0x1c))(local_14,&local_24,param_1,8);
    puVar3 = local_c;
    FUN_00408074(&local_28,local_24.n1._8_4_);
    FUN_004086a8(local_28,1,0x7fffffff);
    uVar1 = uStack_44;
    *in_FS_OFFSET = puVar3;
    uStack_44 = 0x4293f2;
    FUN_004249d4(&local_24,puVar3,uVar1);
    return;
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0042940f;
  puStack_34 = (undefined1 *)0x429407;
  thunk_FUN_00406e5c(&local_28,uStack_38,puVar2);
  return;
}
