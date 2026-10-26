// rea decompile_all
// name: FUN_0045e6d8
// address: 0x45e6d8
// body: available
// range: 0x45e6d8-0x45e722 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45e700 (push 0x45e723 followed by fs-segment stack chaining); handler 0x45e723 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045e6d8(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;

  puStack_10 = (undefined1 *)0xff00;
  puStack_14 = (undefined1 *)0x45e6f2;
  uVar2 = FUN_0043fc08(&PTR_LAB_00433204,1,param_2);
  puStack_14 = &LAB_0045e723;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x60))(param_1,uVar2);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0045e72a;
  puStack_14 = (undefined1 *)0x45e722;
  FUN_00405a7c(uVar2,uStack_18,puVar1);
  return;
}
