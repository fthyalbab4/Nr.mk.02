// rea decompile_all
// name: FUN_005d94f0
// address: 0x5d94f0
// body: available
// range: 0x5d94f0-0x5d9596 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d9518 (push 0x5d9597 followed by fs-segment stack chaining); handler 0x5d9597 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d94f0(int param_1,undefined4 param_2,short *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined *puVar4;
  undefined4 uVar5;
  short **ppsVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  short *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [32];

  puStack_44 = (undefined1 *)0x5d950d;
  FUN_00408d1c(local_24,&LAB_0040f2fc);
  puStack_48 = &LAB_005d9597;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_44 = &stack0xfffffffc;
  FUN_005d7240(param_1);
  local_30 = &DAT_0077d6d4;
  local_2c = 1;
  local_28 = 1;
  if (*param_3 == 9) {
    uVar2 = 8;
  }
  else {
    uVar2 = 4;
  }
  uVar9 = 0;
  puVar8 = local_24;
  uVar7 = 0;
  ppsVar6 = &local_34;
  uVar5 = 0;
  piVar1 = *(int **)(param_1 + 0x28c);
  puVar4 = PTR_DAT_00781e38;
  local_34 = param_3;
  iVar3 = (**(code **)(*piVar1 + 0x18))();
  if (iVar3 != 0) {
    FUN_005b70f0(iVar3,local_24);
  }
  *in_FS_OFFSET = piVar1;
  FUN_00408df4(local_24,&LAB_0040f2fc,puVar4,&LAB_005d959e,uVar5,uVar2,ppsVar6,uVar7,puVar8,uVar9);
  return;
}
