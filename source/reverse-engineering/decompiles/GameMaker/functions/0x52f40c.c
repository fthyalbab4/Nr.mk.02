// rea decompile_all
// name: FUN_0052f40c
// address: 0x52f40c
// body: available
// range: 0x52f40c-0x52f462 inclusive
// range: 0x52f47a-0x52f48b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52f44b (push 0x52f463 followed by fs-segment stack chaining); handler 0x52f463 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0052f40c(undefined4 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int *local_8;

  local_8 = (int *)0x0;
  puStack_1c = (undefined1 *)0x52f423;
  cVar2 = FUN_0052f114(param_1);
  if (cVar2 != '\0') {
    puStack_1c = (undefined1 *)0x52f433;
    local_8 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
    puStack_1c = (undefined1 *)0x52f43d;
    uVar3 = FUN_0052f2e4(param_1);
    puStack_20 = &LAB_0052f463;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    (**(code **)(*local_8 + 0x5c))(local_8,uVar3);
    puVar1 = puStack_1c;
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x52f482;
    FUN_00405a7c(uVar3,uStack_24,puVar1);
  }
  return local_8;
}
