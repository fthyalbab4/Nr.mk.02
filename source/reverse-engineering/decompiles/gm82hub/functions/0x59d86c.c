// rea decompile_all
// name: FUN_0059d86c
// address: 0x59d86c
// body: available
// range: 0x59d86c-0x59d8f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59d880 (push 0x59d8f6 followed by fs-segment stack chaining); handler 0x59d8f6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059d86c(int param_1)

{
  char cVar1;
  HWND pHVar2;
  undefined4 *in_FS_OFFSET;
  UINT_PTR UVar3;
  undefined4 uStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined1 local_6c [100];
  int local_8;

  puStack_70 = &stack0xfffffffc;
  puStack_74 = &LAB_0059d8f6;
  uStack_78 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_78;
  cVar1 = *(char *)(param_1 + 0x318);
  local_8 = param_1;
  if (cVar1 == '\x01') {
    UVar3 = 1;
    pHVar2 = (HWND)FUN_004c45dc(param_1);
    KillTimer(pHVar2,UVar3);
  }
  else if ((byte)(cVar1 - 2U) < 2) {
    puStack_70 = &stack0xfffffffc;
    FUN_005992f4(param_1,local_6c);
    FUN_00599d18(local_8,local_6c);
  }
  else if ((byte)(cVar1 - 4U) < 2) {
    puStack_70 = &stack0xfffffffc;
    FUN_0059a27c(param_1);
    UVar3 = 1;
    pHVar2 = (HWND)FUN_004c45dc(local_8);
    KillTimer(pHVar2,UVar3);
  }
  *in_FS_OFFSET = uStack_78;
  *(undefined1 *)(local_8 + 0x318) = 0;
  return;
}
