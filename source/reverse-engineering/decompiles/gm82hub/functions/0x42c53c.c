// rea decompile_all
// name: FUN_0042c53c
// address: 0x42c53c
// body: available
// range: 0x42c53c-0x42c629 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42c55e (push 0x42c62a followed by fs-segment stack chaining); handler 0x42c62a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042c53c(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  code *local_c;
  int *local_8;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  puStack_28 = &LAB_0042c62a;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  cVar1 = **(char **)*param_2;
  if ((cVar1 == '\x05') || (cVar1 == '\n')) {
    FUN_0040840c(&local_10,param_3);
    FUN_0042c8a4(param_1,param_2,local_10);
  }
  else if (cVar1 == '\v') {
    pcVar2 = (code *)param_2[2];
    if (((uint)pcVar2 & 0xff000000) == 0xff000000) {
      puStack_24 = &stack0xfffffffc;
      FUN_00407e0c(((uint)pcVar2 & 0xffffff) + (int)param_1,param_3);
    }
    else {
      local_c = pcVar2;
      if (((uint)pcVar2 & 0xff000000) == 0xfe000000) {
        local_c = *(code **)(*param_1 + (int)(short)pcVar2);
      }
      local_8 = param_1;
      if (param_2[4] == -0x80000000) {
        puStack_24 = &stack0xfffffffc;
        (*local_c)(param_1,param_3);
      }
      else {
        puStack_24 = &stack0xfffffffc;
        (*local_c)(param_1,param_2[4],param_3);
      }
    }
  }
  else {
    puStack_24 = &stack0xfffffffc;
    if (cVar1 == '\x12') {
      puStack_24 = &stack0xfffffffc;
      FUN_0040840c(&local_14,param_3);
      FUN_0042c8a4(param_1,param_2,local_14);
    }
  }
  puVar3 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0042c631;
  puStack_28 = (undefined1 *)0x42c629;
  thunk_FUN_004072fc(&local_14,2,puVar3);
  return;
}
