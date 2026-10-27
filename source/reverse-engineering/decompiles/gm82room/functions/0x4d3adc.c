// rea decompile_all
// name: FUN_004d3adc
// address: 0x4d3adc
// body: available
// range: 0x4d3adc-0x4d3b6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d3af1 (push 0x4d3b70 followed by fs-segment stack chaining); handler 0x4d3b70 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d3adc(int param_1)

{
  undefined1 *puVar1;
  HIMAGELIST p_Var2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004d3b70;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  p_Var2 = ImageList_Create(*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x34),
                            *(uint *)(&DAT_00681a74 + (uint)*(byte *)(param_1 + 0x70) * 4) |
                            *(uint *)(&DAT_00681a90 + (uint)*(byte *)(param_1 + 0x45) * 4),
                            *(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x3c));
  *(HIMAGELIST *)(param_1 + 0x40) = p_Var2;
  if (p_Var2 == (HIMAGELIST)0x0) {
    FUN_0040b9d0(PTR_LAB_006891a8,&local_8);
    FUN_0041bd4c(&LAB_0042dc24,1,local_8);
    FUN_00406ab4();
  }
  if (*(int *)(param_1 + 0x48) != 0x1fffffff) {
    FUN_004d43b4(param_1,*(int *)(param_1 + 0x48));
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004d3b77;
  puStack_1c = (undefined1 *)0x4d3b6f;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
