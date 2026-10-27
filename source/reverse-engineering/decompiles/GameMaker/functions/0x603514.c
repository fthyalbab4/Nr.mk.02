// rea decompile_all
// name: FUN_00603514
// address: 0x603514
// body: available
// range: 0x603514-0x60359b inclusive
// range: 0x6035b3-0x6035bc inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x603539 (push 0x60359c followed by fs-segment stack chaining); handler 0x60359c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00603514(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  char local_9;
  int local_8;

  puStack_1c = (undefined1 *)0x60352b;
  local_8 = FUN_00603288(&PTR_FUN_00602ee0,1);
  puStack_20 = &LAB_0060359c;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_005e1704(param_2,local_8 + 10,&local_9);
  if (local_9 == '\0') {
    *(undefined1 *)(local_8 + 8) = 1;
    *in_FS_OFFSET = uStack_24;
  }
  else {
    uVar1 = FUN_005e0b6c(param_2,&local_9);
    *(undefined4 *)(local_8 + 4) = uVar1;
    if (local_9 == '\0') {
      *(undefined1 *)(local_8 + 8) = 0;
      *in_FS_OFFSET = uStack_24;
    }
    else {
      FUN_0041ef80(&local_8);
      *in_FS_OFFSET = uStack_24;
    }
  }
  return local_8;
}
