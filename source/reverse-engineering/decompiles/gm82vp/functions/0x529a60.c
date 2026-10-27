// rea decompile_all
// name: FUN_00529a60
// address: 0x529a60
// body: available
// range: 0x529a60-0x529abc inclusive
// range: 0x529ac4-0x529ac7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x529a85 (push 0x529abd followed by fs-segment stack chaining); handler 0x529abd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00529a60(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;

  if (param_1 != 0) {
    puStack_10 = (undefined1 *)0x529a77;
    uVar2 = FUN_00462804(&PTR_FUN_00458e94,1);
    puStack_14 = &LAB_00529abd;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    FUN_0046410c(uVar2,param_1);
    FUN_00529908(uVar2);
    puVar1 = puStack_10;
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x529ac4;
    puStack_14 = (undefined1 *)0x529ab4;
    FUN_00464958(uVar2,uStack_18,puVar1);
    puStack_14 = (undefined1 *)0x529abc;
    FUN_00405fdc(uVar2);
    return;
  }
  return;
}
