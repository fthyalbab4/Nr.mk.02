// rea decompile_all
// name: FUN_0043abb4
// address: 0x43abb4
// body: available
// range: 0x43abb4-0x43ac41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43abd5 (push 0x43ac61 followed by fs-segment stack chaining); handler 0x43ac61 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43ac0a (push 0x43ac42 followed by fs-segment stack chaining); handler 0x43ac42 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043abb4(undefined4 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  char local_e;
  undefined1 local_d;
  undefined4 local_c;
  undefined4 *local_8;

  puStack_14 = (undefined1 *)0x43abca;
  local_c = param_2;
  local_8 = param_1;
  (**(code **)(*DAT_00787f5c + 0x14))();
  puStack_18 = &LAB_0043ac61;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_e = (*(ushort *)(local_8 + 7) & 0x201) == 0;
  puStack_14 = &stack0xfffffffc;
  if ((bool)local_e) {
    puStack_20 = (undefined1 *)0x43abff;
    puStack_14 = &stack0xfffffffc;
    FUN_0043aa44();
  }
  puStack_24 = &LAB_0043ac42;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  local_d = FUN_0043ab28(*local_8);
  if (local_e != '\0') {
    FUN_0043aa9c();
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0043ac49;
  if (local_e != '\0') {
    puStack_24 = (undefined1 *)0x43ac41;
    FUN_0043aacc(0,uStack_28,puVar1);
  }
  return;
}
