// rea decompile_all
// name: FUN_00653d30
// address: 0x653d30
// body: available
// range: 0x653d30-0x653ed9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x653d4a (push 0x653eda followed by fs-segment stack chaining); handler 0x653eda lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00653d30(int param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_24 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_28 = &LAB_00653eda;
  puStack_2c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_2c;
  local_8 = param_1;
  piVar2 = (int *)FUN_00514e78(&PTR_LAB_006529e0,1,0);
  uVar7 = *(undefined4 *)PTR_DAT_00781dd0;
  uVar6 = *(undefined4 *)PTR_DAT_00781d90;
  uVar3 = FUN_00515a68(piVar2);
  uVar4 = FUN_00515a48(piVar2);
  (**(code **)(*piVar2 + 0x98))(piVar2,uVar4,uVar3,uVar6,uVar7);
  piVar2[0x10c] = local_8;
  iVar5 = FUN_00655d50(local_8);
  piVar2[0x108] = iVar5;
  iVar5 = FUN_00652860(&DAT_0065267c,1);
  piVar2[0x109] = iVar5;
  FUN_006528a4(iVar5,piVar2[0x108]);
  FUN_00655b40(piVar2[0x10c],&local_c);
  FUN_00407eb8(piVar2 + 0x10a,local_c);
  *(undefined1 *)(piVar2 + 0x10b) = 0;
  iVar5 = FUN_006b7ff0(&PTR_LAB_006af010,1,piVar2[0xf1]);
  piVar2[0x10d] = iVar5;
  FUN_00518874(piVar2,iVar5);
  FUN_006b83b8(piVar2[0x10d],*(undefined4 *)(piVar2[0x108] + 4));
  iVar5 = piVar2[0x10d];
  *(int **)(iVar5 + 0x2d4) = piVar2;
  *(undefined1 **)(iVar5 + 0x2d0) = &LAB_006540e0;
  FUN_004f796c(iVar5,CONCAT22(extraout_var,1));
  FUN_004f7984(piVar2[0x10d],1);
  (**(code **)(*(int *)piVar2[0x10d] + 0xe8))();
  FUN_00655b40(piVar2[0x10c],&local_10);
  FUN_004ee6d8(piVar2[0xef],local_10);
  FUN_00653f20(piVar2);
  FUN_004ee6a0(piVar2[0xef],&local_18);
  FUN_0040839c(&local_14,L"Script Properties: ",local_18);
  FUN_004ee6d8(piVar2,local_14);
  FUN_006dfbf0(*(undefined4 *)PTR_DAT_00781a58,piVar2);
  puVar1 = puStack_2c;
  piVar2[0xae] = 2;
  *in_FS_OFFSET = uVar6;
  puStack_2c = &LAB_00653ee1;
  thunk_FUN_00406e5c(&local_18,uVar6,puVar1);
  thunk_FUN_00406e80(&local_14,3);
  return;
}
