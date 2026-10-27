// rea decompile_all
// name: FUN_004f8b4c
// address: 0x4f8b4c
// body: available
// range: 0x4f8b4c-0x4f8bdd inclusive
// range: 0x4f8be5-0x4f8c1a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f8b7a (push 0x4f8c1b followed by fs-segment stack chaining); handler 0x4f8c1b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f8bb2 (push 0x4f8bde followed by fs-segment stack chaining); handler 0x4f8bde lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f8b4c(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  char local_11;
  int local_10;
  int local_c;
  int *local_8;

  puStack_18 = &stack0xfffffffc;
  local_11 = (*(byte *)((int)param_1 + 0x56) & 1) != 0;
  param_1[0x15] = param_1[0x15] | 0x10000;
  puStack_1c = &LAB_004f8c1b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_c = param_2;
  local_8 = param_1;
  if (*(int *)(param_2 + 0xc) == 1) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  else {
    if (((*(byte *)(param_2 + 8) & 1) == 0) || (*(char *)((int)param_1 + 0x59) != '\0')) {
      puStack_18 = &stack0xfffffffc;
      local_10 = SaveDC(*(HDC *)(param_2 + 4));
      uVar1 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffffd4;
      FUN_004f49bc(local_8,local_c);
      *in_FS_OFFSET = uVar1;
      RestoreDC(*(HDC *)(local_c + 4),local_10);
      return;
    }
    puStack_18 = &stack0xfffffffc;
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  *in_FS_OFFSET = uStack_20;
  if (local_11 == '\0') {
    local_8[0x15] = local_8[0x15] & 0xfffeffff;
  }
  return;
}
