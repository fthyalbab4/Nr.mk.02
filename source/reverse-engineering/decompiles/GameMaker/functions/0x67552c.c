// rea decompile_all
// name: FUN_0067552c
// address: 0x67552c
// body: available
// range: 0x67552c-0x675622 inclusive
// range: 0x67563a-0x67564f inclusive
// range: 0x675657-0x675660 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x675587 (push 0x675650 followed by fs-segment stack chaining); handler 0x675650 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6755a0 (push 0x675623 followed by fs-segment stack chaining); handler 0x675623 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0067552c(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x44) != 0) {
      puStack_1c = (undefined1 *)0x675553;
      FUN_00405a7c();
      puStack_1c = (undefined1 *)0x67555c;
      FUN_006744ec(param_2,0);
    }
    puStack_1c = (undefined1 *)0x67556a;
    iVar2 = FUN_00405d08(param_1,param_2);
    if (iVar2 != 0) {
      *(short *)(param_1 + 0x6b) = (short)param_1[0x6b] + 1;
      puStack_20 = &LAB_00675650;
      uStack_24 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_24;
      puStack_28 = (undefined1 *)0x675592;
      puStack_1c = &stack0xfffffffc;
      piVar3 = (int *)(**(code **)(iVar2 + 0x2c))(iVar2,1,param_1);
      puStack_2c = &LAB_00675623;
      uStack_30 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_30;
      puStack_28 = &stack0xfffffffc;
      uVar4 = (**(code **)(*param_1 + 0x120))();
      (**(code **)(*piVar3 + 0x70))(piVar3,(&DAT_0077f384)[uVar4 & 0x7f]);
      FUN_004ed948(piVar3,6);
      piVar3[0x6c] = (int)param_1;
      (**(code **)(*piVar3 + 0x78))(piVar3,param_1);
      (**(code **)(*piVar3 + 0x80))(piVar3,*(undefined1 *)((int)param_1 + 0x61));
      (**(code **)(*piVar3 + 0xec))(piVar3,param_2);
      FUN_006744ec(piVar3[0x6d],piVar3);
      (**(code **)(*piVar3 + 0x68))();
      puVar1 = puStack_1c;
      *in_FS_OFFSET = uStack_30;
      *in_FS_OFFSET = uStack_24;
      puStack_1c = (undefined1 *)0x675657;
      puStack_20 = (undefined1 *)0x67564f;
      uVar5 = FUN_004f2c1c(param_1,uStack_24,puVar1);
      return uVar5;
    }
  }
  return 0;
}
