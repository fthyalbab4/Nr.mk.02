// rea decompile_all
// name: FUN_00662628
// address: 0x662628
// body: available
// range: 0x662628-0x662755 inclusive
// range: 0x66275d-0x662761 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x66267c (push 0x662756 followed by fs-segment stack chaining); handler 0x662756 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00662628(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  if (*(char *)((int)param_1 + 0x31a) != '\0') {
    return;
  }
  param_1[0xcf] = (int)param_1;
  if (*(short *)((int)param_1 + 0x35a) != 0) {
    puStack_14 = (undefined1 *)0x662671;
    (*(code *)param_1[0xd6])(param_1[0xd7],param_1);
  }
  puStack_18 = &LAB_00662756;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x1b4))();
  if (param_1[0xe3] == 0) {
LAB_006626d1:
    uVar2 = 1;
  }
  else {
    if (param_1[0xe3] != 0) {
      uVar3 = FUN_00673fd0(param_1[0xe3]);
      cVar1 = FUN_00405c98(uVar3,&PTR_FUN_00509914);
      if (cVar1 != '\0') {
        iVar4 = FUN_00673fd0(param_1[0xe3]);
        if (*(char *)(iVar4 + 0x6a) == '\0') goto LAB_006626d1;
      }
    }
    uVar2 = 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x120))();
  if ((cVar1 == '\0') && (param_1[0xe3] != 0)) {
    FUN_0067428c(param_1[0xe3]);
    (**(code **)(*param_1 + 0x9c))();
    uVar3 = FUN_00673fd0(param_1[0xe3]);
    (**(code **)(*param_1 + 0x1a0))(param_1,uVar3);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = (undefined1 *)0x66275d;
  if (*(short *)((int)param_1 + 0x362) != 0) {
    puStack_18 = (undefined1 *)0x662755;
    (*(code *)param_1[0xd8])(param_1[0xd9],param_1,uVar2);
  }
  return;
}
