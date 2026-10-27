// rea decompile_all
// name: FUN_004f5850
// address: 0x4f5850
// body: available
// range: 0x4f5850-0x4f58c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f586c (push 0x4f58c1 followed by fs-segment stack chaining); handler 0x4f58c1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f5850(int param_1,uint param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_004f58c1;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (*(int *)(param_1 + 0x14) + -1 < (int)(param_2 & 0xff)) {
    puStack_18 = &stack0xfffffffc;
    FUN_0040b9d0(PTR_LAB_00689064,&local_c);
    FUN_004f62b8(*(undefined4 *)(param_1 + 0xc),&LAB_004edd28,local_c);
  }
  else {
    iVar2 = FUN_004f21c8(param_1);
    local_8 = *(undefined4 *)(iVar2 + 0x49 + (param_2 & 0xff) * 4);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004f58c8;
  puStack_1c = (undefined1 *)0x4f58c0;
  thunk_FUN_004072d8(&local_c,uStack_20,puVar1);
  return;
}
