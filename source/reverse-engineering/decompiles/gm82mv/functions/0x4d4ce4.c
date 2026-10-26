// rea decompile_all
// name: FUN_004d4ce4
// address: 0x4d4ce4
// body: available
// range: 0x4d4ce4-0x4d4d51 inclusive
// range: 0x4d4d59-0x4d4d66 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d4d19 (push 0x4d4d52 followed by fs-segment stack chaining); handler 0x4d4d52 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d4ce4(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = (undefined1 *)0x4d4cfb;
  cVar2 = FUN_004061f8(param_2,&PTR_FUN_004d2430);
  if (cVar2 != '\0') {
    puStack_14 = (undefined1 *)0x4d4d0b;
    uVar3 = FUN_00405fac(&LAB_004319cc,1);
    puStack_18 = &LAB_004d4d52;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_14 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0x40))(param_1,uVar3);
    FUN_0043c854(uVar3);
    (**(code **)(*param_2 + 0x3c))(param_2,uVar3);
    puVar1 = puStack_14;
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x4d4d62;
    puStack_18 = (undefined1 *)0x4d4d51;
    FUN_00405fdc(uVar3,uStack_1c,puVar1);
    return;
  }
  puStack_14 = (undefined1 *)0x4d4d62;
  FUN_00439cd8(param_1,param_2);
  return;
}
