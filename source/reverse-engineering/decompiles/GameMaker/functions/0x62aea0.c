// rea decompile_all
// name: FUN_0062aea0
// address: 0x62aea0
// body: available
// range: 0x62aea0-0x62af1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62aec2 (push 0x62af20 followed by fs-segment stack chaining); handler 0x62af20 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062aea0(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_420;
  undefined1 *puStack_41c;
  undefined1 *puStack_418;
  undefined4 local_40c [258];

  puStack_418 = &stack0xfffffffc;
  local_40c[0] = 0;
  puStack_41c = &LAB_0062af20;
  uStack_420 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_420;
  (**(code **)PTR_DAT_00781c50)();
  uVar2 = (**(code **)PTR_DAT_007821bc)();
  FUN_00417b3c(uVar2,local_40c);
  FUN_004080e4(param_2,local_40c[0]);
  puVar1 = puStack_418;
  *in_FS_OFFSET = uStack_420;
  puStack_418 = &LAB_0062af27;
  puStack_41c = (undefined1 *)0x62af1f;
  FUN_00406e5c(local_40c,uStack_420,puVar1);
  return;
}
