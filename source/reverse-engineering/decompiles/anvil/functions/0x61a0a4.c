// rea decompile_all
// name: FUN_0061a0a4
// address: 0x61a0a4
// body: available
// range: 0x61a0a4-0x61a16e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x61a0bf (push 0x61a16f followed by fs-segment stack chaining); handler 0x61a16f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061a0a4(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined **ppuStackY_4c;
  wchar_t *in_stack_ffffffbc;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_0061a16f;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if ((param_2 < 0) && (0xf < param_2)) {
    param_2 = 0;
  }
  puVar1 = &stack0xfffffffc;
  if ((*PTR_DAT_006892e8 != '\0') && (puVar1 = &stack0xfffffffc, DAT_0068868c <= param_2)) {
    FUN_0041636c(param_2,&local_c,param_3,&PTR_DAT_0061a1fc,&DAT_0061a1ec,&DAT_0061a1d8,
                 PTR_PTR_00688690,L"Illegal array index in script \"");
    in_stack_ffffffbc = L"], but only ";
    FUN_0041636c(DAT_0068868c,&local_10);
    ppuStackY_4c = &PTR_PTR_0061a268;
    FUN_0040875c(&local_8,9);
    FUN_006113b0(local_8,0);
    puVar1 = puStack_20;
  }
  puStack_20 = puVar1;
  FUN_00409360(param_3,PTR_DAT_00688dc8 + param_2 * 0x18,&DAT_00615f70);
  *in_FS_OFFSET = ppuStackY_4c;
  thunk_FUN_004072fc(&local_10,3,in_stack_ffffffbc,&LAB_0061a176);
  return;
}
