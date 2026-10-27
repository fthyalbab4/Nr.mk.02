// rea decompile_all
// name: FUN_006137e4
// address: 0x6137e4
// body: available
// range: 0x6137e4-0x613873 inclusive
// range: 0x613898-0x6138a7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x613815 (push 0x613891 followed by fs-segment stack chaining); handler 0x613891 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x61384c (push 0x613874 followed by fs-segment stack chaining); handler 0x613874 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006137e4(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  if (param_2 != 0) {
    puStack_1c = (undefined1 *)0x613807;
    uVar2 = FUN_00405a4c(&LAB_00433630,1);
    puStack_20 = &LAB_00613891;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_28 = (undefined1 *)0x0;
    puStack_2c = (undefined1 *)0x613827;
    puStack_1c = &stack0xfffffffc;
    FUN_005e345c(uVar2,param_2,0xffffffff);
    puStack_28 = (undefined1 *)0x0;
    puStack_2c = (undefined1 *)0x0;
    uStack_30 = 0x613833;
    FUN_0043f254(uVar2);
    puStack_28 = (undefined1 *)0x61383e;
    uVar3 = FUN_005e403c(param_1,1,0);
    puStack_2c = &LAB_00613874;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    FUN_006135e0(uVar3,uVar2,0xffffffff);
    puVar1 = puStack_2c;
    *in_FS_OFFSET = param_3;
    puStack_2c = &LAB_0061387b;
    uStack_30 = 0x613873;
    FUN_00405a7c(uVar3,param_3,puVar1);
    return;
  }
  puStack_1c = (undefined1 *)0x6138a1;
  FUN_00407eb8(param_3,0);
  return;
}
