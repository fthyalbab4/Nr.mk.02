// rea decompile_all
// name: FUN_00708df8
// address: 0x708df8
// body: available
// range: 0x708df8-0x708e58 inclusive
// range: 0x708e70-0x708e81 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x708e41 (push 0x708e59 followed by fs-segment stack chaining); handler 0x708e59 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00708df8(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_c;
  int *local_8;

  local_8 = (int *)0x0;
  puStack_20 = (undefined1 *)0x708e17;
  FUN_0043f488(param_1,&local_c,4);
  if (local_c != -1) {
    puStack_20 = (undefined1 *)0x708e29;
    local_8 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
    puStack_20 = (undefined1 *)0x708e33;
    uVar2 = FUN_0052f2e4(param_1);
    puStack_24 = &LAB_00708e59;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    (**(code **)(*local_8 + 0x5c))(local_8,uVar2);
    puVar1 = puStack_20;
    *in_FS_OFFSET = uStack_28;
    puStack_20 = (undefined1 *)0x708e78;
    FUN_00405a7c(uVar2,uStack_28,puVar1);
  }
  return local_8;
}
