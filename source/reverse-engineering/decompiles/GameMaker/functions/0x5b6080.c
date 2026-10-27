// rea decompile_all
// name: FUN_005b6080
// address: 0x5b6080
// body: available
// range: 0x5b6080-0x5b61a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b6099 (push 0x5b61a9 followed by fs-segment stack chaining); handler 0x5b61a9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b6080(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  ICreateErrorInfo **pperrinfo;
  uint uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  IErrorInfo *local_c;
  int *local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = (IErrorInfo *)0x0;
  local_10 = 0;
  puStack_24 = &LAB_005b61a9;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  pperrinfo = (ICreateErrorInfo **)FUN_0040b140(&local_8);
  uVar3 = CreateErrorInfo(pperrinfo);
  if ((uVar3 & 0x80000000) == 0) {
    (**(code **)(*local_8 + 0xc))();
    bVar5 = true;
    thunk_FUN_00407d2c(param_5);
    if (!bVar5) {
      FUN_00407c60(param_5);
      (**(code **)(*local_8 + 0x10))();
    }
    bVar5 = true;
    thunk_FUN_00407d2c(param_4);
    if (!bVar5) {
      FUN_00407c60(param_4);
      (**(code **)(*local_8 + 0x18))();
    }
    cVar2 = FUN_00405c98(param_1,&PTR_LAB_00410b4c);
    if (cVar2 != '\0') {
      FUN_00408144(&local_10,*(undefined4 *)(param_1 + 4));
      FUN_00407c60(local_10);
      (**(code **)(*local_8 + 0x14))();
      (**(code **)(*local_8 + 0x1c))();
      FUN_00405c98(param_1,&PTR_LAB_005b5dc8);
    }
    FUN_0040b140(&local_c);
    iVar4 = (**(code **)*local_8)();
    if (iVar4 == 0) {
      SetErrorInfo(0,local_c);
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005b61b0;
  puStack_24 = (undefined1 *)0x5b6198;
  FUN_00407a78(&local_10,uStack_28,puVar1);
  puStack_24 = (undefined1 *)0x5b61a0;
  FUN_0040b140(&local_c);
  puStack_24 = (undefined1 *)0x5b61a8;
  FUN_0040b140(&local_8);
  return;
}
