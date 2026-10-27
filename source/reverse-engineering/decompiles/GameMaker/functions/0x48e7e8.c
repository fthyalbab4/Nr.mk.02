// rea decompile_all
// name: FUN_0048e7e8
// address: 0x48e7e8
// body: available
// range: 0x48e7e8-0x48e8f1 inclusive
// range: 0x48e911-0x48e922 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48e819 (push 0x48e90a followed by fs-segment stack chaining); handler 0x48e90a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048e7e8(int *param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;

  puStack_2c = &stack0xfffffffc;
  if (*(char *)((int)param_1 + 0x5e) == '\0') {
    puStack_2c = (undefined1 *)0x48e91c;
    FUN_004f601c(param_1,param_2);
  }
  else {
    *(undefined1 *)((int)param_1 + 0x279) = 1;
    puStack_30 = &LAB_0048e90a;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    iVar3 = *(int *)(param_2 + 4);
    cVar1 = *(char *)((int)param_1 + 0x5d);
    if (cVar1 == '\x01') {
      puVar2 = &stack0xfffffffc;
      if (param_1[0x13] == 0) {
        FUN_004edd14(param_1,*(int *)(iVar3 + 0x58) - *(int *)(iVar3 + 0x50));
        puVar2 = puStack_2c;
      }
    }
    else if (cVar1 == '\x02') {
      puVar2 = &stack0xfffffffc;
      if (param_1[0x13] == 0) {
        iVar3 = *(int *)(iVar3 + 0x58) - *(int *)(iVar3 + 0x50);
        puStack_2c = &stack0xfffffffc;
        (**(code **)(*param_1 + 0x98))
                  (param_1,param_1[0x10],param_1[0x11] - iVar3,iVar3,param_1[0x12]);
        puVar2 = puStack_2c;
      }
    }
    else if (cVar1 == '\x03') {
      puVar2 = &stack0xfffffffc;
      if (param_1[0x12] == 0) {
        puStack_2c = &stack0xfffffffc;
        FUN_004edce0(param_1,*(int *)(iVar3 + 0x54) - *(int *)(iVar3 + 0x4c));
        puVar2 = puStack_2c;
      }
    }
    else {
      puVar2 = &stack0xfffffffc;
      if ((cVar1 == '\x04') && (puVar2 = &stack0xfffffffc, param_1[0x12] == 0)) {
        iVar3 = *(int *)(iVar3 + 0x54) - *(int *)(iVar3 + 0x4c);
        puStack_2c = &stack0xfffffffc;
        (**(code **)(*param_1 + 0x98))
                  (param_1,param_1[0x10] - iVar3,param_1[0x11],param_1[0x13],iVar3);
        puVar2 = puStack_2c;
      }
    }
    puStack_2c = puVar2;
    FUN_004f601c(param_1,param_2);
    FUN_0040670c();
  }
  return;
}
