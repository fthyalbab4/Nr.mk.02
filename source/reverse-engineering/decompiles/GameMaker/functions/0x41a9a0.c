// rea decompile_all
// name: FUN_0041a9a0
// address: 0x41a9a0
// body: available
// range: 0x41a9a0-0x41aa26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41a9bc (push 0x41aa27 followed by fs-segment stack chaining); handler 0x41aa27 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041a9a0(int param_1)

{
  undefined1 *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;

  puStack_14 = (undefined1 *)0x41a9b1;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_18 = &LAB_0041aa27;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar4 = 1;
  puStack_14 = &stack0xfffffffc;
  while( true ) {
    FUN_00407058(&local_8);
    iVar3 = FUN_00408238();
    puVar1 = puStack_14;
    if ((((iVar3 < iVar4) || (uVar2 = *(ushort *)(local_8 + -2 + iVar4 * 2) & 0xdf, uVar2 == 0x44))
        || (uVar2 == 0x45)) || ((uVar2 == 0x4d || (uVar2 == 0x59)))) break;
    iVar4 = iVar4 + 1;
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0041aa2e;
  puStack_18 = (undefined1 *)0x41aa26;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
