// rea decompile_all
// name: FUN_005c6ea4
// address: 0x5c6ea4
// body: available
// range: 0x5c6ea4-0x5c6f29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c6ec3 (push 0x5c6f2a followed by fs-segment stack chaining); handler 0x5c6f2a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c6ea4(int param_1,undefined4 param_2,int *param_3,int param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  bVar5 = 0;
  puStack_14 = (undefined1 *)0x5c6eb8;
  thunk_FUN_00407660(param_4);
  puStack_18 = &LAB_005c6f2a;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  piVar2 = (int *)FUN_005c5ba0(param_2,1,param_1);
  if (param_4 == 0) {
    FUN_005c85dc(param_1,&param_4);
  }
  piVar4 = piVar2 + (uint)bVar5 * -2 + 0x15;
  piVar3 = param_3 + (uint)bVar5 * -2 + 1;
  piVar2[0x14] = *param_3;
  *piVar4 = *piVar3;
  piVar4[(uint)bVar5 * -2 + 1] = piVar3[(uint)bVar5 * -2 + 1];
  (piVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (piVar3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  FUN_00407eb8(piVar2 + 0x19,param_5);
  FUN_00407eb8(piVar2 + 0x18,param_4);
  if (*(int *)(param_1 + 0x10) != 0) {
    (**(code **)(*piVar2 + 0x18))(piVar2,*(undefined4 *)(param_1 + 0x10));
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005c6f31;
  puStack_18 = (undefined1 *)0x5c6f29;
  thunk_FUN_00406e5c(&param_4,uStack_1c,puVar1);
  return;
}
