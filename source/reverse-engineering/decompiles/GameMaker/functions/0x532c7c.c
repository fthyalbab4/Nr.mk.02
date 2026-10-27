// rea decompile_all
// name: FUN_00532c7c
// address: 0x532c7c
// body: available
// range: 0x532c7c-0x532cfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x532c91 (push 0x532cfc followed by fs-segment stack chaining); handler 0x532cfc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00532c7c(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_18 = &LAB_00532cfc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  cVar3 = (**(code **)(**(int **)(param_1 + 0x460) + 0x40))();
  if (cVar3 != '\0') {
    FUN_004cf2f4(*(undefined4 *)(param_1 + 0x460),&local_8);
    FUN_004cf374(*(undefined4 *)(param_1 + 0x464),local_8);
    FUN_004cf2f4(*(undefined4 *)(param_1 + 0x460),&local_c);
    piVar1 = *(int **)(*(int *)(param_1 + 0x388) + 0x2c0);
    (**(code **)(*piVar1 + 0x68))(piVar1,local_c);
  }
  puVar2 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00532d03;
  puStack_18 = (undefined1 *)0x532cfb;
  thunk_FUN_00406e80(&local_c,2,puVar2);
  return;
}
