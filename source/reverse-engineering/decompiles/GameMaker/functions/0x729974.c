// rea decompile_all
// name: FUN_00729974
// address: 0x729974
// body: available
// range: 0x729974-0x729afb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x729994 (push 0x729afc followed by fs-segment stack chaining); handler 0x729afc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00729974(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined4 local_58;
  undefined1 local_54 [64];
  uint local_14;
  uint local_10;
  undefined1 local_9;
  undefined4 local_8;

  puStack_68 = &stack0xfffffffc;
  local_58 = 0;
  puStack_6c = &LAB_00729afc;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  local_8 = param_3;
  uVar3 = FUN_007272d8(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x138),0);
  iVar4 = FUN_00405cbc(uVar3,&PTR_LAB_00725010);
  *(int *)(param_1 + 0x14) = iVar4;
  if (*(char *)(iVar4 + 0x20) != '\0') {
    FUN_007286c8(param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x458);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x45c);
  local_14 = FUN_007267f4(0xffffffff,&local_8,4);
  FUN_0072b310(*(undefined4 *)(param_1 + 0xc),param_1 + 0x20,param_1 + 0x24);
  FUN_00726ad4(param_2,local_54);
  iVar4 = FUN_0043f234(param_2);
  *(int *)(param_1 + 0x4c) = iVar4 + param_4;
  uVar3 = FUN_0040431c(*(int *)(param_1 + 0x20) + 1);
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  uVar3 = FUN_0040431c(*(int *)(param_1 + 0x20) + 1);
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_00404f08(*(undefined4 *)(param_1 + 0x40),*(int *)(param_1 + 0x20) + 1,0);
  *(undefined1 *)(param_1 + 0x48) = 1;
  cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 0x134);
  if (cVar1 == '\0') {
    FUN_007295dc(param_1,param_2,local_54,&local_14,param_4);
  }
  else if (cVar1 == '\x01') {
    FUN_00728fd8(param_1,param_2,local_54,&local_14,param_4);
  }
  FUN_00726b88(local_54);
  FUN_00404338(*(undefined4 *)(param_1 + 0x40),*(int *)(param_1 + 0x20) + 1);
  FUN_00404338(*(undefined4 *)(param_1 + 0x44),*(int *)(param_1 + 0x20) + 1);
  (**(code **)(*param_2 + 0xc))(param_2,&local_10,4);
  local_14 = local_14 ^ 0xffffffff;
  local_10 = FUN_00726894(local_10);
  local_9 = local_10 == local_14;
  if (!(bool)local_9) {
    FUN_0040b75c(PTR_PTR_007825b8,&local_58);
    FUN_0072b474(*(undefined4 *)(param_1 + 0xc),&PTR_LAB_0072301c,local_58);
  }
  puVar2 = puStack_68;
  *in_FS_OFFSET = uStack_70;
  puStack_68 = &LAB_00729b03;
  puStack_6c = (undefined1 *)0x729afb;
  thunk_FUN_00406e5c(&local_58,uStack_70,puVar2);
  return;
}
