// rea decompile_all
// name: FUN_006d194c
// address: 0x6d194c
// body: available
// range: 0x6d194c-0x6d1ae2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6d1967 (push 0x6d1ae3 followed by fs-segment stack chaining); handler 0x6d1ae3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d194c(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  int local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  puStack_24 = &LAB_006d1ae3;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if (-1 < *(int *)(param_1 + 0x3bc) + -2) {
    local_10 = *(int *)(param_1 + 0x3bc) + -1;
    local_c = 0;
    puStack_20 = &stack0xfffffffc;
    do {
      iVar5 = *(int *)(param_1 + 0x3bc) + -2;
      if (local_c - iVar5 == 0 || local_c < iVar5) {
        iVar6 = (local_c - iVar5) + -1;
        do {
          iVar4 = FUN_004157d0(*(undefined4 *)(param_1 + 0x3c0 + iVar5 * 4),
                               *(undefined4 *)(param_1 + 0x3c4 + iVar5 * 4));
          if (0 < iVar4) {
            FUN_00407f0c(&local_8,*(undefined4 *)(param_1 + 0x3c0 + iVar5 * 4));
            FUN_00407eb8(param_1 + 0x3c0 + iVar5 * 4,*(undefined4 *)(param_1 + 0x3c4 + iVar5 * 4));
            FUN_00407eb8(param_1 + 0x3c4 + iVar5 * 4,local_8);
            uVar1 = *(undefined4 *)(param_1 + 0x1f7c8 + iVar5 * 4);
            *(undefined4 *)(param_1 + 0x1f7c8 + iVar5 * 4) =
                 *(undefined4 *)(param_1 + 0x1f7cc + iVar5 * 4);
            *(undefined4 *)(param_1 + 0x1f7cc + iVar5 * 4) = uVar1;
            uVar1 = *(undefined4 *)(param_1 + 0x2f1cc + iVar5 * 4);
            *(undefined4 *)(param_1 + 0x2f1cc + iVar5 * 4) =
                 *(undefined4 *)(param_1 + 0x2f1d0 + iVar5 * 4);
            *(undefined4 *)(param_1 + 0x2f1d0 + iVar5 * 4) = uVar1;
            uVar1 = *(undefined4 *)(param_1 + 0x3ebd0 + iVar5 * 4);
            *(undefined4 *)(param_1 + 0x3ebd0 + iVar5 * 4) =
                 *(undefined4 *)(param_1 + 0x3ebd4 + iVar5 * 4);
            *(undefined4 *)(param_1 + 0x3ebd4 + iVar5 * 4) = uVar1;
            uVar1 = *(undefined4 *)(param_1 + 0xfdc4 + iVar5 * 4);
            *(undefined4 *)(param_1 + 0xfdc4 + iVar5 * 4) =
                 *(undefined4 *)(param_1 + 0xfdc8 + iVar5 * 4);
            *(undefined4 *)(param_1 + 0xfdc8 + iVar5 * 4) = uVar1;
          }
          iVar5 = iVar5 + -1;
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0);
      }
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  (**(code **)(**(int **)(param_1 + 0x3ac) + 0x108))();
  local_10 = *(int *)(param_1 + 0x3bc);
  if (-1 < local_10 + -1) {
    local_c = 0;
    do {
      FUN_004b418c(*(undefined4 *)(*(int *)(param_1 + 0x3ac) + 0x2ac),
                   *(undefined4 *)(param_1 + 0xfdc4 + local_c * 4));
      piVar2 = *(int **)(*(int *)(param_1 + 0x3ac) + 0x2c0);
      (**(code **)(*piVar2 + 0x38))(piVar2,*(undefined4 *)(param_1 + 0x3c0 + local_c * 4));
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  puVar3 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_006d1aea;
  puStack_24 = (undefined1 *)0x6d1ae2;
  thunk_FUN_00406e5c(&local_8,uStack_28,puVar3);
  return;
}
