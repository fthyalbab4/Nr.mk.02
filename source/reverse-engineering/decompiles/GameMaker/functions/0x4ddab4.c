// rea decompile_all
// name: FUN_004ddab4
// address: 0x4ddab4
// body: available
// range: 0x4ddab4-0x4ddbd9 inclusive
// range: 0x4ddbf8-0x4ddc06 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ddb89 (push 0x4ddbda followed by fs-segment stack chaining); handler 0x4ddbda lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_004ddab4(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  char local_5;

  local_5 = '\x01';
  local_c = *(int *)(*param_1 + 100);
  if (local_c != 0) {
    puStack_1c = (undefined1 *)param_4;
    puStack_20 = (undefined1 *)0x4ddae2;
    local_5 = FUN_004ddab4(&local_c,param_2 + 1);
  }
  if ((local_5 != '\0') && (local_5 != '\x03')) {
    if (local_5 == '\x02') {
      if ((*(int *)(param_4 + -4) == 0) ||
         (*(short *)(*(int *)(param_4 + -4) + 0x60) != *(short *)(param_4 + -6))) {
        puStack_1c = (undefined1 *)0x4ddb30;
        uVar1 = FUN_004dd678(*(undefined4 *)(param_4 + -0xc),*(undefined2 *)(param_4 + -6),2);
        *(undefined4 *)(param_4 + -4) = uVar1;
        if (*(int *)(param_4 + -4) == 0) {
          return '\x03';
        }
      }
      puStack_1c = (undefined1 *)0x4ddb55;
      iVar2 = thunk_FUN_004ddaaa(*(undefined4 *)(param_4 + -4),param_2);
      *param_1 = iVar2;
      if (*param_1 == 0) {
        return local_5;
      }
      if (*(int *)(*param_1 + 100) != local_c) {
        return local_5;
      }
      if (param_2 == 0) {
        local_5 = '\x01';
      }
    }
    if (*(char *)(*param_1 + 0x39) == '\0') {
      local_5 = '\0';
    }
    else {
      puStack_20 = &LAB_004ddbda;
      uStack_24 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_24;
      puStack_1c = &stack0xfffffffc;
      if ((*(byte *)(*(int *)(param_4 + -0xc) + 0x1c) & 0x10) == 0) {
        puStack_1c = &stack0xfffffffc;
        FUN_004dc340(*param_1);
      }
      (**(code **)(*(int *)*param_1 + 0x48))();
      if ((*(int *)(param_4 + -4) == 0) ||
         ((*param_1 != *(int *)(param_4 + -4) &&
          (*(short *)(*(int *)(param_4 + -4) + 0x60) != *(short *)(param_4 + -6))))) {
        local_5 = '\x02';
      }
      *in_FS_OFFSET = uStack_24;
    }
  }
  return local_5;
}
