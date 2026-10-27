// rea decompile_all
// name: FUN_00443a00
// address: 0x443a00
// body: available
// range: 0x443a00-0x443ac6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x443a1c (push 0x443ac7 followed by fs-segment stack chaining); handler 0x443ac7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00443a00(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_c;
  int local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00443ac7;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004083e8(&local_8,param_2,0xfde9);
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 1)) {
    iVar2 = FUN_004074b8(&local_8,local_8,CONCAT22(extraout_var,0xfde9));
  }
  local_c = 0;
  if (iVar2 != 0) {
    local_c = *(int *)(iVar2 + -4);
  }
  if (0xff < local_c) {
    local_c = 0xff;
  }
  FUN_00441578(param_1,&local_c,1);
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 1)) {
    FUN_004074b8(&local_8,local_8,CONCAT22(extraout_var_00,0xfde9));
  }
  uVar3 = thunk_FUN_00407af8(&local_8);
  FUN_00441578(param_1,uVar3,local_c);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00443ace;
  puStack_1c = (undefined1 *)0x443ac6;
  FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
