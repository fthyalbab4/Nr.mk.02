// rea decompile_all
// name: FUN_0040a148
// address: 0x40a148
// body: available
// range: 0x40a148-0x40a1d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x40a163 (push 0x40a1d8 followed by fs-segment stack chaining); handler 0x40a1d8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040a148(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_8;

  puStack_10 = (undefined1 *)0x40a158;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_14 = &LAB_0040a1d8;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  iVar2 = local_8;
  puStack_10 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_10 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_10 = &stack0xfffffffc;
    iVar2 = FUN_00407048(&local_8,local_8);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  if (0 < iVar3) {
    do {
      iVar2 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar2 = FUN_00407048(&local_8,local_8);
      }
    } while ((*(short *)(iVar2 + -2 + iVar3 * 2) != 0x2d) && (iVar3 = iVar3 + -1, iVar3 != 0));
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0040a1df;
  puStack_14 = (undefined1 *)0x40a1d7;
  thunk_FUN_00406e5c(&local_8,uStack_18,puVar1);
  return;
}
