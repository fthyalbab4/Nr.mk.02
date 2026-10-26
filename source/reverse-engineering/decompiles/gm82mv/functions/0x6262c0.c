// rea decompile_all
// name: FUN_006262c0
// address: 0x6262c0
// body: available
// range: 0x6262c0-0x626322 inclusive
// range: 0x626334-0x62634d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6262e1 (push 0x62634e followed by fs-segment stack chaining); handler 0x62634e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62630b (push 0x626323 followed by fs-segment stack chaining); handler 0x626323 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006262c0(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_8;

  puStack_1c = (undefined1 *)0x6262d6;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_20 = &LAB_0062634e;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  puStack_1c = &stack0xfffffffc;
  if (*(char *)(param_1 + 0xc) != '\0') {
    puStack_28 = (undefined1 *)0x6262f6;
    puStack_1c = &stack0xfffffffc;
    cVar2 = FUN_00416b0c(local_8);
    if ((cVar2 == '\0') || (*(char *)(param_1 + 0x24) != '\0')) {
      puStack_2c = &LAB_00626323;
      uStack_30 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_30;
      puStack_28 = &stack0xfffffffc;
      FUN_0043d470(*(undefined4 *)(param_1 + 0x18),local_8);
      *in_FS_OFFSET = uStack_30;
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = local_24;
  puStack_1c = &LAB_00626355;
  puStack_20 = (undefined1 *)0x62634d;
  thunk_FUN_004072d8(&local_8,local_24,puVar1);
  return;
}
