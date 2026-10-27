// rea decompile_all
// name: FUN_004ae12c
// address: 0x4ae12c
// body: available
// range: 0x4ae12c-0x4ae1b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ae15d (push 0x4ae1b2 followed by fs-segment stack chaining); handler 0x4ae1b2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ae12c(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  char cVar3;
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = (undefined1 *)0x4ae141;
  cVar2 = FUN_004f7a54(*(undefined4 *)(param_1 + 4));
  if (cVar2 != '\0') {
    puStack_14 = (undefined1 *)0x4ae152;
    FUN_004ae6b8(param_1);
  }
  puStack_18 = &LAB_004ae1b2;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_004aebe0(param_1);
  cVar3 = FUN_004f7a54(*(undefined4 *)(param_1 + 4));
  if (cVar3 != '\0') {
    hWnd = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 4));
    SendMessageW(hWnd,0x1101,0,-0x10000);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004ae1b9;
  if (cVar2 != '\0') {
    puStack_18 = (undefined1 *)0x4ae1b1;
    FUN_004ae704(param_1,uStack_1c,puVar1);
  }
  return;
}
