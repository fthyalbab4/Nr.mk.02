// rea decompile_all
// name: FUN_006aca8c
// address: 0x6aca8c
// body: available
// range: 0x6aca8c-0x6acb3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6acac8 (push 0x6acb3e followed by fs-segment stack chaining); handler 0x6acb3e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006aca8c(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_1c = 0;
  local_14 = *param_2;
  local_10 = param_2[1];
  local_c = param_2[2];
  puStack_2c = (undefined1 *)0x6acaaf;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_2c = (undefined1 *)0x6acabd;
  FUN_00408f60(&local_14,&DAT_006ab1e4);
  puStack_30 = &LAB_006acb3e;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  cVar2 = FUN_00696fb4(local_10,&local_18);
  if (cVar2 == '\0') {
    FUN_0040839c(&local_1c,L"Unknown function or script: ",local_10);
    FUN_006ae3bc(local_8,local_c,local_1c);
    *param_3 = 0xffffffff;
  }
  else {
    *param_3 = 6;
    param_3[1] = local_18;
  }
  puVar1 = puStack_2c;
  param_3[2] = local_c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_006acb45;
  puStack_30 = (undefined1 *)0x6acb27;
  thunk_FUN_00406e5c(&local_1c,uStack_34,puVar1);
  puStack_30 = (undefined1 *)0x6acb35;
  FUN_00408df4(&local_14,&DAT_006ab1e4);
  puStack_30 = (undefined1 *)0x6acb3d;
  thunk_FUN_00406e5c(&local_8);
  return;
}
