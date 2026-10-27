// rea decompile_all
// name: FUN_006f2a9c
// address: 0x6f2a9c
// body: available
// range: 0x6f2a9c-0x6f2d48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6f2ab7 (push 0x6f2d49 followed by fs-segment stack chaining); handler 0x6f2d49 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f2a9c(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  puStack_30 = &LAB_006f2d49;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  *(undefined1 *)(param_1 + 0x434) = 1;
  FUN_006f5920(*(undefined4 *)(param_1 + 0x42c),&local_c);
  FUN_0040839c(&local_8,L"Mask Properties: ",local_c);
  FUN_004ee6d8(param_1,local_8);
  uVar2 = FUN_005b2ec4(*(undefined4 *)(param_1 + 0x420));
  FUN_0041666c(uVar2,&local_14);
  FUN_0040839c(&local_10,L"Width: ",local_14);
  FUN_004ee6d8(*(undefined4 *)(param_1 + 0x3b0),local_10);
  uVar2 = FUN_005b2edc(*(undefined4 *)(param_1 + 0x420));
  FUN_0041666c(uVar2,&local_1c);
  FUN_0040839c(&local_18,L"Height: ",local_1c);
  FUN_004ee6d8(*(undefined4 *)(param_1 + 0x3b4),local_18);
  FUN_0041666c(*(undefined4 *)(*(int *)(param_1 + 0x420) + 4),&local_24);
  FUN_0040839c(&local_20,L"Number of subimages: ",local_24);
  FUN_004ee6d8(*(undefined4 *)(param_1 + 0x39c),local_20);
  (**(code **)(**(int **)(param_1 + 0x3c0) + 0xf0))
            (*(int **)(param_1 + 0x3c0),*(int *)(*(int *)(param_1 + 0x420) + 0x10) == 1);
  (**(code **)(**(int **)(param_1 + 0x3c4) + 0xf0))
            (*(int **)(param_1 + 0x3c4),*(int *)(*(int *)(param_1 + 0x420) + 0x10) == 2);
  (**(code **)(**(int **)(param_1 + 0x3c8) + 0xf0))
            (*(int **)(param_1 + 0x3c8),*(int *)(*(int *)(param_1 + 0x420) + 0x10) == 0);
  (**(code **)(**(int **)(param_1 + 0x3dc) + 0xf0))
            (*(int **)(param_1 + 0x3dc),*(undefined1 *)(*(int *)(param_1 + 0x420) + 0x18));
  FUN_004b3214(*(undefined4 *)(param_1 + 0x3d4),*(undefined4 *)(*(int *)(param_1 + 0x420) + 0x14));
  FUN_00530760(*(undefined4 *)(param_1 + 0x3d8),*(undefined4 *)(*(int *)(param_1 + 0x420) + 0x14));
  (**(code **)(**(int **)(param_1 + 0x404) + 0xf0))
            (*(int **)(param_1 + 0x404),*(int *)(*(int *)(param_1 + 0x420) + 0x1c) == 0);
  (**(code **)(**(int **)(param_1 + 0x40c) + 0xf0))
            (*(int **)(param_1 + 0x40c),*(int *)(*(int *)(param_1 + 0x420) + 0x1c) == 1);
  (**(code **)(**(int **)(param_1 + 0x408) + 0xf0))
            (*(int **)(param_1 + 0x408),*(int *)(*(int *)(param_1 + 0x420) + 0x1c) == 2);
  FUN_00530760(*(undefined4 *)(param_1 + 0x3f4),*(undefined4 *)(*(int *)(param_1 + 0x420) + 0x20));
  FUN_00530760(*(undefined4 *)(param_1 + 0x3f8),*(undefined4 *)(*(int *)(param_1 + 0x420) + 0x28));
  FUN_00530760(*(undefined4 *)(param_1 + 0x3fc),*(undefined4 *)(*(int *)(param_1 + 0x420) + 0x24));
  FUN_00530760(*(undefined4 *)(param_1 + 0x400),*(undefined4 *)(*(int *)(param_1 + 0x420) + 0x2c));
  uVar2 = (**(code **)(**(int **)(param_1 + 0x408) + 0xec))();
  (**(code **)(**(int **)(param_1 + 0x3f4) + 0x74))(*(int **)(param_1 + 0x3f4),uVar2);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x408) + 0xec))();
  (**(code **)(**(int **)(param_1 + 0x3f8) + 0x74))(*(int **)(param_1 + 0x3f8),uVar2);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x408) + 0xec))();
  (**(code **)(**(int **)(param_1 + 0x3fc) + 0x74))(*(int **)(param_1 + 0x3fc),uVar2);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x408) + 0xec))();
  (**(code **)(**(int **)(param_1 + 0x400) + 0x74))(*(int **)(param_1 + 0x400),uVar2);
  *(undefined4 *)(param_1 + 0x430) = 0;
  FUN_006f28f8(param_1);
  puVar1 = puStack_2c;
  *(undefined1 *)(param_1 + 0x434) = 0;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_006f2d50;
  puStack_30 = (undefined1 *)0x6f2d48;
  thunk_FUN_00406e80(&local_24,8,puVar1);
  return;
}
