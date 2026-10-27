// rea decompile_all
// name: FUN_00419748
// address: 0x419748
// body: available
// range: 0x419748-0x4197af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x419762 (push 0x4197b0 followed by fs-segment stack chaining); handler 0x4197b0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00419748(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;

  puStack_c = (undefined1 *)0x419757;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_10 = &LAB_004197b0;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  iVar2 = local_8;
  puStack_c = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_c = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_c = &stack0xfffffffc;
    iVar2 = FUN_00407488(&local_8,local_8);
  }
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(iVar2 + -4);
  }
  FUN_00419704(local_8,uVar3);
  puVar1 = puStack_c;
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_004197b7;
  puStack_10 = (undefined1 *)0x4197af;
  thunk_FUN_004072d8(&local_8,uStack_14,puVar1);
  return;
}
