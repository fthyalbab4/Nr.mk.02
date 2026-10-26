// rea decompile_all
// name: FUN_00603360
// address: 0x603360
// body: available
// range: 0x603360-0x60344a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x60337a (push 0x60344b followed by fs-segment stack chaining); handler 0x60344b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00603360(int param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined1 *puStackY_40;
  undefined4 in_stack_ffffffc8;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_0060344b;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if (*(char *)(param_1 + 8) == '\0') {
    puStack_20 = &stack0xfffffffc;
    FUN_004168b0(&local_8,0,0,*(uint *)(param_1 + 4) >> 0x18,0);
    FUN_0040839c(param_2,local_8,&LAB_00603464);
    FUN_004168b0(&local_c);
    FUN_00408480(param_2,3);
    in_stack_ffffffc8 = *param_2;
    FUN_004168b0(&local_10);
    puStackY_40 = &LAB_00603464;
    FUN_00408480(param_2,3);
    FUN_004168b0(&local_14);
    FUN_004082dc(param_2,local_14);
  }
  else {
    FUN_00407eb8(param_2,0);
  }
  *in_FS_OFFSET = puStackY_40;
  thunk_FUN_00406e80(&local_14,4,in_stack_ffffffc8,&LAB_00603452);
  return;
}
