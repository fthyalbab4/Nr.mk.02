// rea decompile_all
// name: FUN_0052f168
// address: 0x52f168
// body: available
// range: 0x52f168-0x52f230 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52f18d (push 0x52f231 followed by fs-segment stack chaining); handler 0x52f231 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052f168(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  local_c = 0;
  puStack_1c = (undefined1 *)0x52f182;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_20 = &LAB_0052f231;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_0040810c(&local_c,local_8,0xfde9);
  iVar2 = local_c;
  if ((local_c != 0) && (*(short *)(local_c + -10) != 1)) {
    iVar2 = FUN_00407078(&local_c,local_c,CONCAT22(extraout_var,0xfde9));
  }
  local_10 = 0;
  if (iVar2 != 0) {
    local_10 = *(undefined4 *)(iVar2 + -4);
  }
  FUN_0043f4c0(param_1,&local_10,4);
  if ((local_c != 0) && (*(short *)(local_c + -10) != 1)) {
    FUN_00407078(&local_c,local_c,CONCAT22(extraout_var_00,0xfde9));
  }
  uVar3 = thunk_FUN_00407688(&local_c);
  FUN_0043f4c0(param_1,uVar3,local_10);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0052f238;
  puStack_20 = (undefined1 *)0x52f228;
  FUN_00406e5c(&local_c,uStack_24,puVar1);
  puStack_20 = (undefined1 *)0x52f230;
  thunk_FUN_00406e5c(&local_8);
  return;
}
