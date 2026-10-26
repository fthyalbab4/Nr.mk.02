// rea decompile_all
// name: FUN_0045f8a8
// address: 0x45f8a8
// body: available
// range: 0x45f8a8-0x45f91e inclusive
// range: 0x45f936-0x45f96a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45f8e9 (push 0x45f91f followed by fs-segment stack chaining); handler 0x45f91f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045f8a8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  puStack_1c = (undefined1 *)0x45f8c4;
  iVar2 = FUN_0045f47c(DAT_00774530,param_2);
  if (iVar2 == 0) {
    puStack_1c = (undefined1 *)0x45f8d4;
    FUN_0045d0cc(PTR_PTR_007822dc);
  }
  puStack_1c = (undefined1 *)0x45f8db;
  piVar3 = (int *)(**(code **)(iVar2 + 0x50))(iVar2,1);
  puStack_20 = &LAB_0045f91f;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  piVar3[7] = param_1;
  puStack_1c = &stack0xfffffffc;
  iVar2 = FUN_00405d20(param_1,CONCAT22(extraout_var,0xfffc));
  piVar3[6] = iVar2;
  (**(code **)(*piVar3 + 100))(piVar3,param_2,param_3);
  puVar1 = puStack_20;
  *in_FS_OFFSET = param_4;
  puStack_20 = (undefined1 *)0x45f93e;
  FUN_00405a7c(*(undefined4 *)(param_1 + 0xc),param_4,puVar1);
  *(int **)(param_1 + 0xc) = piVar3;
  piVar3[5] = param_1;
  puStack_20 = (undefined1 *)0x45f952;
  iVar2 = FUN_00405d20(param_1,CONCAT22(extraout_var_00,0xfffd));
  piVar3[4] = iVar2;
  puStack_20 = (undefined1 *)0x45f962;
  FUN_00405d08(param_1,param_1);
  return;
}
