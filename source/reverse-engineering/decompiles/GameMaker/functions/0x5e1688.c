// rea decompile_all
// name: FUN_005e1688
// address: 0x5e1688
// body: available
// range: 0x5e1688-0x5e16f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e16a1 (push 0x5e16f8 followed by fs-segment stack chaining); handler 0x5e16f8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e1688(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  char local_5;

  puStack_1c = &stack0xfffffffc;
  local_14 = 0;
  puStack_20 = &LAB_005e16f8;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_005e1704(param_1,param_2,&local_5);
  if (local_5 != '\0') {
    local_c = 0x11;
    puVar3 = &local_10;
    uVar2 = 0;
    local_10 = param_1;
    FUN_0040b75c(PTR_PTR_00781e4c,&local_14);
    FUN_0041bef4(&PTR_LAB_005dfefc,1,local_14,uVar2,puVar3);
    FUN_00406618();
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005e16ff;
  puStack_20 = (undefined1 *)0x5e16f7;
  thunk_FUN_00406e5c(&local_14,uStack_24,puVar1);
  return;
}
