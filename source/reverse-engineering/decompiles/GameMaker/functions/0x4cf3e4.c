// rea decompile_all
// name: FUN_004cf3e4
// address: 0x4cf3e4
// body: available
// range: 0x4cf3e4-0x4cf47d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4cf402 (push 0x4cf47e followed by fs-segment stack chaining); handler 0x4cf47e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cf3e4(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *in_FS_OFFSET;
  int iStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;

  puStack_14 = (undefined1 *)0x4cf3f7;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_18 = &LAB_004cf47e;
  iStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_1c;
  iVar3 = local_8;
  puStack_14 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_14 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_14 = &stack0xfffffffc;
    iVar3 = FUN_00407048(&local_8,local_8);
  }
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + -4);
  }
  if (1 < iVar4) {
    cVar2 = FUN_0041d928(local_8,iVar4);
    if (cVar2 != '\0') {
      cVar2 = FUN_0041d9e8(&LAB_004cf498,local_8,iVar4 + -1);
      if (cVar2 == '\0') {
        iVar4 = iVar4 + -1;
      }
    }
  }
  FUN_004086a8(local_8,1,iVar4);
  puVar1 = puStack_18;
  *in_FS_OFFSET = param_1 + 0x7c;
  puStack_18 = &LAB_004cf485;
  iStack_1c = 0x4cf47d;
  thunk_FUN_00406e5c(&local_8,param_1 + 0x7c,puVar1);
  return;
}
