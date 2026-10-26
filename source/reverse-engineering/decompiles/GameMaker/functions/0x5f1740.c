// rea decompile_all
// name: FUN_005f1740
// address: 0x5f1740
// body: available
// range: 0x5f1740-0x5f18ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f1760 (push 0x5f18ef followed by fs-segment stack chaining); handler 0x5f18ef lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005f1848) */
/* WARNING: Removing unreachable block (ram,0x005f17f2) */
/* WARNING: Removing unreachable block (ram,0x005f181f) */
/* WARNING: Removing unreachable block (ram,0x005f1867) */

void FUN_005f1740(int *param_1,undefined4 param_2,int *param_3,undefined2 param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_40 = &stack0xfffffffc;
  local_8 = 0;
  puStack_44 = &LAB_005f18ef;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  local_c = param_2;
  FUN_005f162c(param_1,param_2,param_5,local_30,local_20,param_4);
  iVar2 = FUN_00409a18(*param_3);
  iVar3 = iVar2 + 0x28;
  if (SCARRY4(iVar2,0x28)) {
    iVar3 = FUN_00405944();
  }
  FUN_00409be0(&local_8,&DAT_004108f8,1,iVar3);
  iVar2 = 0;
  if ((local_8 == 0) || (iVar3 = local_8, *(int *)(local_8 + -4) == 0)) {
    iVar2 = thunk_FUN_00404478();
    iVar3 = extraout_EDX;
  }
  FUN_0040450c(local_20,iVar3 + iVar2,0x1c);
  if ((local_8 == 0) || (iVar2 = local_8, *(uint *)(local_8 + -4) < 0x1d)) {
    iVar2 = thunk_FUN_00404478();
  }
  FUN_0040450c(local_30,iVar2 + 0x1c,0x1c);
  local_10 = FUN_00409a18(*param_3);
  uVar4 = (**(code **)(**(int **)PTR_DAT_007826d0 + 0x30))(*(int **)PTR_DAT_007826d0,local_10);
  FUN_005e0790(uVar4,&local_8,0x38);
  if ((local_8 == 0) || (iVar2 = local_8, *(uint *)(local_8 + -4) < 0x3d)) {
    iVar2 = thunk_FUN_00404478();
  }
  FUN_00404f08(iVar2 + 0x3c,3,0);
  if ((local_8 == 0) || (iVar2 = local_8, *(uint *)(local_8 + -4) < 0x40)) {
    iVar2 = thunk_FUN_00404478();
  }
  *(undefined1 *)(iVar2 + 0x3f) = 0x3a;
  iVar3 = 2;
  iVar2 = *param_3;
  if ((iVar2 == 0) || (*(uint *)(iVar2 + -4) < 3)) {
    iVar3 = thunk_FUN_00404478();
    iVar2 = extraout_EDX_00;
  }
  *(undefined1 *)(iVar2 + iVar3) = 0;
  iVar3 = 3;
  iVar2 = *param_3;
  if ((iVar2 == 0) || (*(uint *)(iVar2 + -4) < 4)) {
    iVar3 = thunk_FUN_00404478();
    iVar2 = extraout_EDX_01;
  }
  *(undefined1 *)(iVar2 + iVar3) = 0;
  uVar5 = 0x40;
  uVar4 = FUN_00409a18(*param_3);
  FUN_005e0648(*param_3,0,&local_8,uVar4,uVar5);
  uVar4 = (**(code **)(*param_1 + 0x94))(param_1,local_8);
  uVar4 = FUN_005e0348(uVar4);
  FUN_005e0778(uVar4,param_3,param_6);
  puVar1 = puStack_40;
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_005f18f6;
  puStack_44 = (undefined1 *)0x5f18ee;
  FUN_00409ce0(&local_8,&DAT_004108f8,puVar1);
  return;
}
