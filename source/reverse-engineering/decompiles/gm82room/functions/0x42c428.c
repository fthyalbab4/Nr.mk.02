// rea decompile_all
// name: FUN_0042c428
// address: 0x42c428
// body: available
// range: 0x42c428-0x42c52d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42c44a (push 0x42c52e followed by fs-segment stack chaining); handler 0x42c52e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042c428(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  code *local_14;
  int *local_10;
  int *local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_18 = 0;
  local_8 = 0;
  puStack_28 = &LAB_0042c52e;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  cVar1 = **(char **)*param_2;
  local_c = param_1;
  if ((cVar1 == '\x05') || (cVar1 == '\n')) {
    FUN_0042c638(param_1,param_2,&local_8);
    FUN_00408420(param_3,local_8);
  }
  else if (cVar1 == '\v') {
    pcVar2 = (code *)param_2[1];
    if (((uint)pcVar2 & 0xff000000) == 0xff000000) {
      puStack_24 = &stack0xfffffffc;
      FUN_00407e0c(param_3,*(undefined4 *)(((uint)pcVar2 & 0xffffff) + (int)param_1));
    }
    else {
      local_14 = pcVar2;
      if (((uint)pcVar2 & 0xff000000) == 0xfe000000) {
        local_14 = *(code **)(*param_1 + (int)(short)pcVar2);
      }
      local_10 = param_1;
      if (param_2[4] == -0x80000000) {
        puStack_24 = &stack0xfffffffc;
        (*local_14)(param_1,param_3);
      }
      else {
        puStack_24 = &stack0xfffffffc;
        (*local_14)(param_1,param_2[4],param_3);
      }
    }
  }
  else if (cVar1 == '\x12') {
    puStack_24 = &stack0xfffffffc;
    FUN_0042c638(param_1,param_2,&local_18);
    FUN_00408420(param_3,local_18);
  }
  else {
    puStack_24 = &stack0xfffffffc;
    FUN_00407dd0(param_3);
  }
  *in_FS_OFFSET = puStack_28;
  puStack_24 = (undefined1 *)0x42c525;
  thunk_FUN_004072d8(&local_18,puStack_28,unaff_ESI);
  puStack_24 = (undefined1 *)0x42c52d;
  thunk_FUN_004072d8(&local_8);
  return;
}
