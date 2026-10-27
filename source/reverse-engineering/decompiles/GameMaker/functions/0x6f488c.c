// rea decompile_all
// name: FUN_006f488c
// address: 0x6f488c
// body: available
// range: 0x6f488c-0x6f4a4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6f48aa (push 0x6f4a4b followed by fs-segment stack chaining); handler 0x6f4a4b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f488c(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_18 = &stack0xfffffffc;
  local_10 = 4;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_1c = &LAB_006f4a4b;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  local_24 = 0x6f48bb;
  FUN_006f5920(*(undefined4 *)(param_1 + 0x40c),&local_8);
  local_24 = 0x6f48c9;
  FUN_004ee6d8(*(undefined4 *)(param_1 + 0x398),local_8);
  local_24 = 0x6f48d7;
  FUN_004ee6a0(*(undefined4 *)(param_1 + 0x398),&local_10);
  local_24 = 0x6f48e7;
  FUN_0040839c(&local_c,L"Sprite Properties: ",local_10);
  local_24 = 0x6f48f1;
  FUN_004ee6d8(param_1,local_c);
  local_24 = 0x6f48fc;
  uVar3 = FUN_005b2ec4(*(undefined4 *)(param_1 + 0x3fc));
  local_24 = 0x6f4904;
  FUN_0041666c(uVar3,&local_18);
  local_24 = 0x6f4914;
  FUN_0040839c(&stack0xffffffec,L"Width: ",local_18);
  local_24 = 0x6f4922;
  FUN_004ee6d8(*(undefined4 *)(param_1 + 0x3a4),unaff_EBX);
  local_24 = 0x6f492d;
  uVar3 = FUN_005b2edc(*(undefined4 *)(param_1 + 0x3fc));
  local_24 = 0x6f4935;
  FUN_0041666c(uVar3,&local_20);
  local_24 = 0x6f4945;
  FUN_0040839c(&local_1c,L"Height: ",local_20);
  local_24 = 0x6f4953;
  FUN_004ee6d8(*(undefined4 *)(param_1 + 0x3a8),local_1c);
  local_24 = 0x6f4964;
  FUN_0041666c(*(undefined4 *)(*(int *)(param_1 + 0x3fc) + 4),&local_28);
  local_24 = 0x6f4974;
  FUN_0040839c(&local_24,L"Number of subimages: ",local_28);
  uVar3 = local_24;
  local_24 = 0x6f4982;
  FUN_004ee6d8(*(undefined4 *)(param_1 + 0x3a0),uVar3);
  *(undefined4 *)(param_1 + 0x410) = 0;
  local_24 = 0x6f4991;
  FUN_006f462c(param_1);
  local_24 = 0x6f49a5;
  FUN_00530760(*(undefined4 *)(param_1 + 0x3dc),*(undefined4 *)(*(int *)(param_1 + 0x3fc) + 8));
  local_24 = 0x6f49b9;
  FUN_00530760(*(undefined4 *)(param_1 + 0x3e0),*(undefined4 *)(*(int *)(param_1 + 0x3fc) + 0xc));
  local_24 = 0x6f49d1;
  (**(code **)(**(int **)(param_1 + 0x3f0) + 0xf0))
            (*(int **)(param_1 + 0x3f0),*(undefined1 *)(*(int *)(param_1 + 0x3fc) + 0x18));
  local_24 = 0x6f49ec;
  (**(code **)(**(int **)(param_1 + 0x3f4) + 0xf0))
            (*(int **)(param_1 + 0x3f4),*(int *)(*(int *)(param_1 + 0x3fc) + 0x10) == 0);
  iVar1 = *(int *)(param_1 + 0x3fc);
  if ((((*(int *)(iVar1 + 0x10) == 0) || (*(int *)(iVar1 + 0x10) == 1)) &&
      (*(int *)(iVar1 + 0x14) == 0)) && (*(int *)(iVar1 + 0x1c) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  local_24 = 0x6f4a1b;
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3ec),uVar3);
  puVar2 = local_18;
  *in_FS_OFFSET = local_20;
  local_18 = &LAB_006f4a52;
  local_1c = (undefined1 *)0x6f4a35;
  thunk_FUN_00406e80(&local_28,6,puVar2);
  local_1c = (undefined1 *)0x6f4a3d;
  thunk_FUN_00406e5c(&local_10);
  local_1c = (undefined1 *)0x6f4a4a;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
