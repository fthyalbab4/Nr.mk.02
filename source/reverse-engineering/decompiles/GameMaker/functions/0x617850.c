// rea decompile_all
// name: FUN_00617850
// address: 0x617850
// body: available
// range: 0x617850-0x6178b2 inclusive
// range: 0x6178ba-0x6178c5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x617873 (push 0x6178b3 followed by fs-segment stack chaining); handler 0x6178b3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00617850(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 local_9;
  int local_8;

  if (*(int *)(param_1 + 0x44) != 0) {
    uStack_10 = 0x617868;
    local_8 = param_1;
    FUN_0044bb18();
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    if (((*(char *)(local_8 + 0xd) == '\0') && ((*(byte *)(local_8 + 0x51) & 1) == 0)) &&
       (*(char *)(local_8 + 0xe) == '\0')) {
      local_9 = 0;
    }
    else {
      local_9 = 1;
    }
    *in_FS_OFFSET = uStack_18;
    uStack_10 = 0x6178be;
    uStack_14 = 0x6178b2;
    uVar1 = FUN_0044bb20(*(undefined4 *)(local_8 + 0x44),uStack_18,&stack0xfffffffc);
    return uVar1;
  }
  return 1;
}
