// rea decompile_all
// name: FUN_005f002c
// address: 0x5f002c
// body: available
// range: 0x5f002c-0x5f00aa inclusive
// range: 0x5f00b2-0x5f00b4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f0077 (push 0x5f00ab followed by fs-segment stack chaining); handler 0x5f00ab lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f002c(int *param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int *local_8;

  puStack_c = (undefined1 *)0x5f003b;
  local_8 = param_1;
  FUN_004c387c(param_1);
  if (((*(byte *)(local_8[0x9c] + 0x2c) & 8) != 0) && (*(char *)((int)local_8 + 0x2b3) == '\0')) {
    puStack_c = (undefined1 *)0x5f005e;
    cVar1 = FUN_004c4988(local_8);
    if (cVar1 != '\0') {
      *(undefined1 *)((int)local_8 + 0x2b3) = 1;
      puStack_10 = &LAB_005f00ab;
      uStack_14 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_14;
      puStack_c = &stack0xfffffffc;
      cVar1 = (**(code **)(*local_8 + 0x5c))();
      FUN_005ef574(local_8,0xfffffdfe,-(uint)(cVar1 != '\0'));
      *in_FS_OFFSET = uStack_14;
      *(undefined1 *)((int)local_8 + 0x2b3) = 0;
      return;
    }
  }
  return;
}
