// rea decompile_all
// name: FUN_005e2834
// address: 0x5e2834
// body: available
// range: 0x5e2834-0x5e28bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e2853 (push 0x5e28bc followed by fs-segment stack chaining); handler 0x5e28bc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e2834(undefined2 param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int extraout_EDX;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_c;
  int local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_005e28bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  if (param_2 == 0) {
    local_c = FUN_004213b8();
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  FUN_00409be0(&local_8,&DAT_00412fa0,1,1);
  iVar2 = 0;
  if ((local_8 == 0) || (iVar3 = local_8, *(int *)(local_8 + -4) == 0)) {
    iVar2 = thunk_FUN_00404478();
    iVar3 = extraout_EDX;
  }
  *(undefined2 *)(iVar3 + iVar2 * 2) = param_1;
  FUN_004217ec(local_c,local_8,param_3);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005e28c3;
  puStack_1c = (undefined1 *)0x5e28bb;
  FUN_00409ce0(&local_8,&DAT_00412fa0,puVar1);
  return;
}
