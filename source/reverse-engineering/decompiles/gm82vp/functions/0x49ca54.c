// rea decompile_all
// name: FUN_0049ca54
// address: 0x49ca54
// body: available
// range: 0x49ca54-0x49cb10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x49ca6e (push 0x49cb11 followed by fs-segment stack chaining); handler 0x49cb11 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049ca54(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  int local_c;
  undefined2 local_6;

  puStack_18 = &stack0xfffffffc;
  local_10 = 0;
  puStack_1c = &LAB_0049cb11;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_6 = 0;
  if (((*(byte *)(param_1 + 0x6c) & 0x40) != 0) &&
     (((*(byte *)(param_1 + 0x6e) & 1) != 0 || (*PTR_DAT_00688e94 == '\0')))) {
    local_6 = 0x20;
  }
  local_c = param_1;
  if ((*(byte *)(param_1 + 0x6c) & 0x40) == 0) {
    FUN_0049c86c(*(undefined4 *)(param_2 + 0x1c),param_1 + 0x88,0,&stack0xfffffffc);
    (**(code **)(**(int **)(local_c + 0x8c) + 0x38))
              (*(int **)(local_c + 0x8c),*(undefined4 *)(local_c + 0x88));
  }
  else {
    puStack_18 = &stack0xfffffffc;
    FUN_0049c8c0(*(undefined4 *)(param_2 + 0x1c),param_2,0,&stack0xfffffffc);
    (**(code **)(**(int **)(local_c + 0x8c) + 0xc))(*(int **)(local_c + 0x8c),0,&local_10);
    FUN_00408194(local_c + 0x88,local_10);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0049cb18;
  puStack_1c = (undefined1 *)0x49cb10;
  thunk_FUN_004072d8(&local_10,uStack_20,puVar1);
  return;
}
