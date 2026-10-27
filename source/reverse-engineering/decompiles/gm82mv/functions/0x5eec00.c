// rea decompile_all
// name: FUN_005eec00
// address: 0x5eec00
// body: available
// range: 0x5eec00-0x5eec81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5eec28 (push 0x5eec82 followed by fs-segment stack chaining); handler 0x5eec82 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005eec00(int param_1,undefined4 param_2,undefined2 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 local_24 [32];

  puStack_34 = (undefined1 *)0x5eec1d;
  FUN_00408ff8(local_24,&LAB_0040f3f0);
  puStack_38 = &LAB_005eec82;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  FUN_005ed5ec(param_1);
  *param_3 = 0;
  uVar8 = 0;
  puVar7 = local_24;
  puVar6 = &DAT_006884b8;
  uVar5 = 2;
  uVar4 = 0;
  piVar1 = *(int **)(param_1 + 0x28c);
  puVar3 = PTR_DAT_00688e80;
  iVar2 = (**(code **)(*piVar1 + 0x18))();
  if (iVar2 != 0) {
    FUN_005372d0(iVar2,local_24);
  }
  *in_FS_OFFSET = piVar1;
  FUN_004090d0(local_24,&LAB_0040f3f0,puVar3,&LAB_005eec89,uVar4,uVar5,puVar6,param_3,puVar7,uVar8);
  return;
}
