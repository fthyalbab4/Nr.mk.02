// rea decompile_all
// name: FUN_0043a950
// address: 0x43a950
// body: available
// range: 0x43a950-0x43a9f2 inclusive
// range: 0x43a9fa-0x43aa08 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43a983 (push 0x43a9f3 followed by fs-segment stack chaining); handler 0x43a9f3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043a950(int *param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = (undefined1 *)0x43a968;
  cVar2 = FUN_004061f8(param_2,&PTR_FUN_0042fa88);
  if (cVar2 != '\0') {
    puStack_14 = (undefined1 *)0x43a978;
    FUN_0043aa0c(param_1);
    puStack_18 = &LAB_0043a9f3;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_14 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0x44))();
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 4);
    *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
    *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 0xc);
    *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(param_2 + 6);
    FUN_00408194(param_1 + 2,*(undefined4 *)(param_2 + 8));
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 0x10);
    (**(code **)(*param_1 + 0x40))(param_1,param_2);
    puVar1 = puStack_14;
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x43aa04;
    puStack_18 = (undefined1 *)0x43a9f2;
    FUN_0043aad4(param_1,uStack_1c,puVar1);
    return;
  }
  puStack_14 = (undefined1 *)0x43aa04;
  FUN_00439c08(param_1,param_2);
  return;
}
