// rea decompile_all
// name: FUN_00556cec
// address: 0x556cec
// body: available
// range: 0x556cec-0x556d66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x556d0b (push 0x556d67 followed by fs-segment stack chaining); handler 0x556d67 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00556cec(undefined4 param_1,int param_2,int *param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_00556d67;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  cVar2 = FUN_00556a18(param_1,param_2,&local_8);
  if (cVar2 == '\0') {
    FUN_00408194(param_4,0);
    *param_3 = 0;
  }
  else {
    FUN_005567cc(param_1,*(undefined4 *)(local_8 + 8),&local_c);
    FUN_00556bb0(local_c,param_4);
    *param_3 = param_2 - *(int *)(local_8 + 0xc);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00556d6e;
  puStack_20 = (undefined1 *)0x556d66;
  thunk_FUN_004072d8(&local_c,uStack_24,puVar1);
  return;
}
