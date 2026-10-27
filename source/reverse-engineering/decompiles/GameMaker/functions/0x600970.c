// rea decompile_all
// name: FUN_00600970
// address: 0x600970
// body: available
// range: 0x600970-0x600aa9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x600990 (push 0x600aaa followed by fs-segment stack chaining); handler 0x600aaa lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00600970(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int *in_FS_OFFSET;
  bool bVar4;
  int iStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_34 = &stack0xfffffffc;
  local_8 = 0;
  puStack_38 = &LAB_00600aaa;
  iStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_3c;
  local_c = param_3;
  (**(code **)(*param_1 + 0x70))(param_1,1,1);
  FUN_005e2a28(param_2,local_c,param_4);
  piVar1 = (int *)param_1[0x29];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x44))(piVar1,&local_8);
  }
  local_14 = FUN_00409a18(local_8);
  local_10 = 0;
  if (0 < local_14) {
    do {
      iVar3 = local_14 - local_10;
      if (SBORROW4(local_14,local_10)) {
        iVar3 = FUN_00405944();
      }
      iVar3 = (**(code **)(*param_1 + 0x60))(param_1,local_8,local_10,iVar3);
      if (iVar3 < 0) {
        local_24 = 0x274a;
        local_20 = 0x2745;
        local_1c = 0x2746;
        local_18 = FUN_005f4458(*(undefined4 *)PTR_DAT_007826d0,iVar3,&local_24,2);
        *(undefined1 *)((int)param_1 + 0x91) = 1;
        (**(code **)(*param_1 + 0x78))();
        (**(code **)(**(int **)PTR_DAT_007826d0 + 0x4c))(*(int **)PTR_DAT_007826d0,local_18);
      }
      FUN_005f57f0(&PTR_FUN_005f54dc,0,0);
      if (iVar3 == 0) {
        *(undefined1 *)((int)param_1 + 0x91) = 1;
      }
      (**(code **)(*param_1 + 0x70))(param_1,1,0);
      (**(code **)(*param_1 + 0x3c))
                (param_1,CONCAT31((int3)(iVar3 >> 0x1f),1),*param_1,iVar3,iVar3 >> 0x1f);
      bVar4 = SCARRY4(local_10,iVar3);
      local_10 = local_10 + iVar3;
      if (bVar4) {
        FUN_00405944();
      }
    } while (local_10 < local_14);
  }
  puVar2 = puStack_38;
  *in_FS_OFFSET = (int)&local_8;
  puStack_38 = &LAB_00600ab1;
  iStack_3c = 0x600aa9;
  FUN_00409ce0(&local_8,&DAT_004108f8,puVar2);
  return;
}
