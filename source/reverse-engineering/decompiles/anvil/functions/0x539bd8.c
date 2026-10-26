// rea decompile_all
// name: FUN_00539bd8
// address: 0x539bd8
// body: available
// range: 0x539bd8-0x539c8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x539bf3 (push 0x539c8e followed by fs-segment stack chaining); handler 0x539c8e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00539bd8(undefined4 param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  int iVar3;
  int *in_FS_OFFSET;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_00539c8e;
  iStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_2c;
  FUN_0053a1e8(param_1,4,param_2);
  FUN_00543148(*param_2,CONCAT22(extraout_var_00,0x2c),CONCAT22(extraout_var,0x2e));
  iVar2 = FUN_005438c4(*param_2,CONCAT22(extraout_var_01,0x2e),1);
  local_c = *param_2;
  iVar3 = 0;
  if (local_c != 0) {
    iVar3 = *(int *)(local_c + -4);
  }
  FUN_00543754(*param_2,iVar2 + 1,(iVar3 - (iVar2 + 1)) + 1,&local_10);
  FUN_00408194(param_2,local_10);
  FUN_00415c04(*param_2,&local_14);
  FUN_00408194(param_2,local_14);
  puVar1 = puStack_28;
  *in_FS_OFFSET = (int)&local_8;
  puStack_28 = &LAB_00539c95;
  iStack_2c = 0x539c85;
  thunk_FUN_004072fc(&local_14,2,puVar1);
  iStack_2c = 0x539c8d;
  thunk_FUN_004072d8(&local_8);
  return;
}
