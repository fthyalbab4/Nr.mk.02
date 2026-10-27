// rea decompile_all
// name: FUN_0048fab4
// address: 0x48fab4
// body: available
// range: 0x48fab4-0x48fb83 inclusive
// range: 0x48fb8b-0x48fbf0 inclusive
// range: 0x48fbf8-0x48fc37 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48fb34 (push 0x48fb84 followed by fs-segment stack chaining); handler 0x48fb84 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48fba1 (push 0x48fbf1 followed by fs-segment stack chaining); handler 0x48fbf1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048fab4(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;

  iVar2 = param_1[0x76];
  if (iVar2 != param_1[0x7a]) {
    cVar1 = *(char *)((int)param_1 + 0x5d);
    if (cVar1 == '\x01') {
      puStack_10 = (undefined1 *)0x48fb19;
      FUN_004edd14(param_1[0x6f],iVar2);
    }
    else {
      if (cVar1 == '\x02') {
        puStack_10 = (undefined1 *)0x48fb96;
        FUN_004f2c14(param_1[0xd]);
        puStack_14 = &LAB_0048fbf1;
        uStack_18 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_18;
        iVar2 = param_1[0x6f];
        puStack_10 = &stack0xfffffffc;
        FUN_004edcac(iVar2,(*(int *)(iVar2 + 0x4c) - param_1[0x76]) + *(int *)(iVar2 + 0x44));
        FUN_004edd14(param_1[0x6f],param_1[0x76]);
        puVar3 = puStack_10;
        *in_FS_OFFSET = uStack_18;
        puStack_10 = (undefined1 *)0x48fbf8;
        puStack_14 = (undefined1 *)0x48fbf0;
        FUN_004f2c1c(param_1[0xd],uStack_18,puVar3);
        return;
      }
      if (cVar1 == '\x03') {
        puStack_10 = (undefined1 *)0x48fb04;
        FUN_004edce0(param_1[0x6f],iVar2);
      }
      else if (cVar1 == '\x04') {
        puStack_10 = (undefined1 *)0x48fb29;
        FUN_004f2c14(param_1[0xd]);
        puStack_14 = &LAB_0048fb84;
        uStack_18 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_18;
        iVar2 = param_1[0x6f];
        puStack_10 = &stack0xfffffffc;
        FUN_004edc78(iVar2,(*(int *)(iVar2 + 0x48) - param_1[0x76]) + *(int *)(iVar2 + 0x40));
        FUN_004edce0(param_1[0x6f],param_1[0x76]);
        puVar3 = puStack_10;
        *in_FS_OFFSET = uStack_18;
        puStack_10 = (undefined1 *)0x48fbf8;
        puStack_14 = (undefined1 *)0x48fb83;
        FUN_004f2c1c(param_1[0xd],uStack_18,puVar3);
        return;
      }
    }
    puStack_10 = (undefined1 *)0x48fc03;
    (**(code **)(*param_1 + 0x9c))();
    if (*(short *)((int)param_1 + 0x202) != 0) {
      puStack_10 = (undefined1 *)0x48fc22;
      (*(code *)param_1[0x80])(param_1[0x81],param_1);
    }
    param_1[0x7a] = param_1[0x76];
  }
  return;
}
