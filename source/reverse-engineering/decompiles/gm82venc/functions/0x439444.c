// rea decompile_all
// name: FUN_00439444
// address: 0x439444
// body: available
// range: 0x439444-0x4394b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43945b (push 0x4394b6 followed by fs-segment stack chaining); handler 0x4394b6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00439444(int param_1,undefined4 param_2)

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
  puStack_1c = &LAB_004394b6;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  iVar2 = FUN_00405fac(&DAT_004393d8,1);
  iVar3 = iVar2;
  if (iVar2 != 0) {
    iVar3 = iVar2 + 8;
  }
  iStack_24 = 0x43947d;
  FUN_0040b280(&local_8,iVar3);
  *(undefined4 *)(iVar2 + 0xc) = param_2;
  if ((*(int *)(param_1 + 4) != 0) && (1 < *(int *)(param_1 + 8))) {
    if (iVar2 != 0) {
      iVar2 = iVar2 + 0x10;
    }
    FUN_00439248(*(int *)(param_1 + 4),0,*(int *)(param_1 + 8) + -1);
    iStack_24 = iVar2;
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = iStack_24;
  puStack_1c = &LAB_004394bd;
  iStack_20 = 0x4394b5;
  FUN_0040b268(&local_8,iStack_24,puVar1);
  return;
}
