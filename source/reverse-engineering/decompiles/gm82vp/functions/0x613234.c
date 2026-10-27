// rea decompile_all
// name: FUN_00613234
// address: 0x613234
// body: available
// range: 0x613234-0x6132d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x613267 (push 0x6132d4 followed by fs-segment stack chaining); handler 0x6132d4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00613234(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_18 = 0;
  local_10 = *param_2;
  local_c = param_2[1];
  local_8 = param_2[2];
  puStack_28 = (undefined1 *)0x61325c;
  FUN_0040923c(&local_10,&DAT_00611918);
  puStack_2c = &LAB_006132d4;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  cVar2 = FUN_005892ac(local_c,&local_14);
  if (cVar2 == '\0') {
    FUN_00408678(&local_18,L"Unknown function or script: ",local_c);
    FUN_00610d7c(param_1,local_8,local_18);
    *param_3 = 0xffffffff;
  }
  else {
    *param_3 = 6;
    param_3[1] = local_14;
  }
  puVar1 = puStack_28;
  param_3[8] = local_8;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_006132db;
  puStack_2c = (undefined1 *)0x6132c5;
  thunk_FUN_004072d8(&local_18,uStack_30,puVar1);
  puStack_2c = (undefined1 *)0x6132d3;
  FUN_004090d0(&local_10,&DAT_00611918);
  return;
}
