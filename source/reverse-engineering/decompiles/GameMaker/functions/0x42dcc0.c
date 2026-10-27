// rea decompile_all
// name: FUN_0042dcc0
// address: 0x42dcc0
// body: available
// range: 0x42dcc0-0x42ddd2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42dce5 (push 0x42ddd3 followed by fs-segment stack chaining); handler 0x42ddd3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042dcc0(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  undefined4 local_110;
  undefined1 local_10c [256];
  code *local_c;
  int *local_8;

  puStack_120 = &stack0xfffffffc;
  local_110 = 0;
  puStack_124 = &LAB_0042ddd3;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  cVar1 = **(char **)*param_2;
  if (cVar1 == '\x05') {
    FUN_0040816c(local_10c,param_3,0xff);
    FUN_0042d504(param_1,param_2,local_10c);
  }
  else if (cVar1 == '\n') {
    puStack_120 = &stack0xfffffffc;
    FUN_0042db6c(param_1,param_2,param_3);
  }
  else if (cVar1 == '\v') {
    puStack_120 = &stack0xfffffffc;
    FUN_00408144(&local_110,param_3);
    uStack_128 = 0x42dd56;
    FUN_0042d958(param_1,param_2,local_110);
  }
  else if (cVar1 == '\x12') {
    pcVar2 = (code *)param_2[2];
    if (((uint)pcVar2 & 0xff000000) == 0xff000000) {
      puStack_120 = &stack0xfffffffc;
      FUN_00407eb8(((uint)pcVar2 & 0xffffff) + (int)param_1,param_3);
    }
    else {
      local_c = pcVar2;
      if (((uint)pcVar2 & 0xff000000) == 0xfe000000) {
        local_c = *(code **)(*param_1 + (int)(short)pcVar2);
      }
      local_8 = param_1;
      if (param_2[4] == -0x80000000) {
        puStack_120 = &stack0xfffffffc;
        (*local_c)(param_1,param_3);
      }
      else {
        puStack_120 = &stack0xfffffffc;
        (*local_c)(param_1,param_2[4],param_3);
      }
    }
  }
  *in_FS_OFFSET = puStack_124;
  puStack_120 = (undefined1 *)0x42ddd2;
  FUN_00407a78(&local_110,puStack_124,unaff_EDI);
  return;
}
