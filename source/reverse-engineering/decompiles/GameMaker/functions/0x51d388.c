// rea decompile_all
// name: FUN_0051d388
// address: 0x51d388
// body: available
// range: 0x51d388-0x51d401 inclusive
// range: 0x51d409-0x51d40c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x51d3bc (push 0x51d402 followed by fs-segment stack chaining); handler 0x51d402 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051d388(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;

  puStack_1c = &stack0xfffffffc;
  puStack_20 = (undefined1 *)0x51d39d;
  local_18 = param_1;
  local_14 = param_2;
  local_c = param_3;
  cVar2 = FUN_0051d330();
  puVar1 = puStack_1c;
  if (cVar2 != '\0') {
    puStack_1c = (undefined1 *)0x51d3ae;
    local_10 = FUN_00405a4c(&PTR_LAB_0042f444,1,puVar1);
    puStack_20 = &LAB_0051d402;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    FUN_0051d1e0(1);
    FUN_0051d1e0(2);
    FUN_0051d1e0(3);
    FUN_0051d1e0(4);
    FUN_0051d1e0(5);
    puVar1 = puStack_1c;
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x51d409;
    puStack_20 = (undefined1 *)0x51d401;
    FUN_00405a7c(local_10,uStack_24,puVar1);
    return;
  }
  return;
}
