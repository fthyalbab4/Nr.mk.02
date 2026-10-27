// rea decompile_all
// name: FUN_00491744
// address: 0x491744
// body: available
// range: 0x491744-0x4917be inclusive
// range: 0x4917c6-0x4917ca inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x49177c (push 0x4917bf followed by fs-segment stack chaining); handler 0x4917bf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00491744(int *param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = (undefined1 *)0x49175c;
  cVar3 = FUN_00405c98(param_2,&PTR_FUN_0048ff44);
  if (cVar3 != '\0') {
    if ((int *)param_1[1] != (int *)0x0) {
      puStack_14 = (undefined1 *)0x491771;
      (**(code **)(*(int *)param_1[1] + 0x20))();
    }
    puStack_18 = &LAB_004917bf;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_14 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0x20))(param_1,*(undefined4 *)(param_2 + 0x10));
    (**(code **)(*param_1 + 0x28))(param_1,*(undefined4 *)(param_2 + 0x18));
    (**(code **)(*param_1 + 0x24))(param_1,*(undefined4 *)(param_2 + 0x14));
    puVar2 = puStack_14;
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x4917c6;
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      puStack_18 = (undefined1 *)0x4917be;
      (**(code **)(*piVar1 + 0x24))(piVar1,*piVar1,puVar2);
    }
    return;
  }
  return;
}
