// rea decompile_all
// name: FUN_0074a208
// address: 0x74a208
// body: available
// range: 0x74a208-0x74a282 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x74a221 (push 0x74a283 followed by fs-segment stack chaining); handler 0x74a283 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074a208(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_0074a283;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar3 = FUN_004157d0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x10));
  if (iVar3 == 0) {
    FUN_0074a9dc(*(undefined4 *)(param_2 + 8),&local_8);
    uVar2 = local_8;
    FUN_0074a9dc(*(undefined4 *)(param_1 + 8),&local_c);
    FUN_004157d0(local_c,uVar2);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0074a28a;
  puStack_20 = (undefined1 *)0x74a282;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
