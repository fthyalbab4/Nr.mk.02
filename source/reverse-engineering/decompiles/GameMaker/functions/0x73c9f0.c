// rea decompile_all
// name: FUN_0073c9f0
// address: 0x73c9f0
// body: available
// range: 0x73c9f0-0x73caad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x73ca12 (push 0x73caae followed by fs-segment stack chaining); handler 0x73caae lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0073c9f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_234;
  undefined1 *puStack_230;
  undefined1 *puStack_22c;
  undefined4 local_220;
  undefined4 local_21a [2];
  undefined4 local_212;
  undefined1 local_20e [522];

  puStack_22c = &stack0xfffffffc;
  local_220 = 0;
  puStack_230 = &LAB_0073caae;
  uStack_234 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_234;
  local_212 = 0;
  iVar2 = FUN_0073c518(param_1,param_2,local_21a,0xc);
  if (iVar2 != 0) {
    if (*(char *)(param_4 + -1) == '\0') {
      iVar2 = FUN_0073c4e8(param_1,param_2,local_20e,0x20a);
      if (iVar2 != 0) {
        FUN_004080c8(&local_220,local_20e,0x105);
        (**(code **)(**(int **)(param_4 + -8) + 0x3c))
                  (*(int **)(param_4 + -8),local_220,local_21a[0]);
      }
    }
    else {
      (**(code **)(**(int **)(param_4 + -8) + 0x3c))(*(int **)(param_4 + -8),0,local_21a[0]);
    }
  }
  puVar1 = puStack_22c;
  *in_FS_OFFSET = uStack_234;
  puStack_22c = &LAB_0073cab5;
  puStack_230 = (undefined1 *)0x73caad;
  thunk_FUN_00406e5c(&local_220,uStack_234,puVar1);
  return;
}
