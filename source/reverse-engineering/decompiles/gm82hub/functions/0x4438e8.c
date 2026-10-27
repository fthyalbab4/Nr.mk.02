// rea decompile_all
// name: FUN_004438e8
// address: 0x4438e8
// body: available
// range: 0x4438e8-0x4439f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44390d (push 0x4439f2 followed by fs-segment stack chaining); handler 0x4439f2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004438e8(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 extraout_var;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_10;
  int local_c;
  int local_8;

  local_c = 0;
  puStack_1c = (undefined1 *)0x443902;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_20 = &LAB_004439f2;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_004083e8(&local_c,local_8,0xfde9);
  iVar2 = local_c;
  if ((local_c != 0) && (*(short *)(local_c + -10) != 1)) {
    iVar2 = FUN_004074b8(&local_c,local_c,CONCAT22(extraout_var,0xfde9));
  }
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = *(int *)(iVar2 + -4);
  }
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar2 = FUN_00407488(&local_8,local_8);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  if (iVar4 < iVar3 * 2) {
    FUN_004437b4(param_1,local_c);
  }
  else {
    FUN_00443adc(param_1,0x12);
    iVar2 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar2 = FUN_00407488(&local_8,local_8);
    }
    local_10 = 0;
    if (iVar2 != 0) {
      local_10 = *(int *)(iVar2 + -4);
    }
    FUN_00441578(param_1,&local_10,4);
    FUN_00441578(param_1,local_8,local_10 * 2);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004439f9;
  puStack_20 = (undefined1 *)0x4439e9;
  FUN_004072d8(&local_c,uStack_24,puVar1);
  puStack_20 = (undefined1 *)0x4439f1;
  thunk_FUN_004072d8(&local_8);
  return;
}
