// rea decompile_all
// name: FUN_0043b5c8
// address: 0x43b5c8
// body: available
// range: 0x43b5c8-0x43b639 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43b5df (push 0x43b63a followed by fs-segment stack chaining); handler 0x43b63a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043b5c8(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *in_FS_OFFSET;
  int iStack_24;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0043b63a;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  iVar2 = FUN_00405a4c(&DAT_0043b55c,1);
  iVar3 = iVar2;
  if (iVar2 != 0) {
    iVar3 = iVar2 + 8;
  }
  iStack_24 = 0x43b601;
  FUN_0040b158(&local_8,iVar3);
  *(undefined4 *)(iVar2 + 0xc) = param_2;
  if ((*(int *)(param_1 + 4) != 0) && (1 < *(int *)(param_1 + 8))) {
    if (iVar2 != 0) {
      iVar2 = iVar2 + 0x10;
    }
    FUN_0043b3cc(*(int *)(param_1 + 4),0,*(int *)(param_1 + 8) + -1);
    iStack_24 = iVar2;
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = iStack_24;
  puStack_1c = &LAB_0043b641;
  iStack_20 = 0x43b639;
  FUN_0040b140(&local_8,iStack_24,puVar1);
  return;
}
