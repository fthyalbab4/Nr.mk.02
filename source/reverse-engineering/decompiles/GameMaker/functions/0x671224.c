// rea decompile_all
// name: FUN_00671224
// address: 0x671224
// body: available
// range: 0x671224-0x671287 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x67123e (push 0x671288 followed by fs-segment stack chaining); handler 0x671288 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00671224(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_c = 0;
  puStack_18 = &LAB_00671288;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  piVar2 = *(int **)(param_1 + 0xe0);
  puVar1 = &stack0xfffffffc;
  local_8 = param_2;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_0067a47c(DAT_0078a1e8,0);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  (**(code **)(*piVar2 + 8))(piVar2,&local_c);
  FUN_004467a8(local_8,local_c);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0067128f;
  puStack_18 = (undefined1 *)0x671287;
  thunk_FUN_00406e5c(&local_c,uStack_1c,puVar1);
  return;
}
