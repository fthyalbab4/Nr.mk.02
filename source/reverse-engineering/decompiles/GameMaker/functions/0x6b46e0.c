// rea decompile_all
// name: FUN_006b46e0
// address: 0x6b46e0
// body: available
// range: 0x6b46e0-0x6b48d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b46f9 (push 0x6b48d2 followed by fs-segment stack chaining); handler 0x6b48d2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b46e0(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 local_18 [16];
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  puStack_24 = &LAB_006b48d2;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar1 = &stack0xfffffffc;
  if (1 < DAT_00790030) {
    FUN_0045bda4(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x48),0);
    if (DAT_00790030 == 2) {
      FUN_0045bc24(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x48),0xffff00);
    }
    if (DAT_00790030 == 3) {
      FUN_0045bc24(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x48),0xff);
    }
    if (DAT_00790030 == 4) {
      FUN_0045bc24(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x48),0xffff);
    }
    FUN_00438c38(DAT_00790024,DAT_00790028,DAT_0079003c * *(int *)(param_1 + 0x2dc) + DAT_00790024,
                 local_18,DAT_00790028 + *(int *)(param_1 + 0x2e0));
    (**(code **)(**(int **)(param_1 + 0x270) + 0x4c))(*(int **)(param_1 + 0x270),local_18);
    puVar1 = puStack_20;
  }
  puStack_20 = puVar1;
  FUN_0045bda4(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x48),1);
  FUN_0045b0d0(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x40),0);
  FUN_0045b498(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x40),0);
  if ((*(byte *)(param_1 + 0x32e) & DAT_00790038) != 0) {
    FUN_0045b0d0(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x40),
                 *(undefined4 *)(PTR_DAT_00781914 + DAT_00790034 * 4));
    if ((*PTR_DAT_00781924 != '\0') && (DAT_00790034 == 1)) {
      FUN_0045b498(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x40),1);
    }
    if (DAT_00790034 == 3) {
      FUN_0045b498(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x40),2);
    }
  }
  if (DAT_00790030 == 1) {
    FUN_0045b0d0(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x40),0xffffff);
  }
  FUN_00407f0c(&local_8,DAT_00790040);
  uVar2 = local_8;
  (**(code **)(**(int **)(param_1 + 0x270) + 0x88))
            (*(int **)(param_1 + 0x270),DAT_00790024,DAT_00790028);
  DAT_00790024 = 0xffffffff;
  DAT_00790030 = 0xffffd8f1;
  FUN_00407eb8(&DAT_00790040,0);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uVar2;
  puStack_24 = &LAB_006b48d9;
  uStack_28 = 0x6b48d1;
  thunk_FUN_00406e5c(&local_8,uVar2,puVar1);
  return;
}
