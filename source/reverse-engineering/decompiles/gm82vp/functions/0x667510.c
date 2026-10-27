// rea decompile_all
// name: FUN_00667510
// address: 0x667510
// body: available
// range: 0x667510-0x667694 inclusive
// range: 0x6676a6-0x6676bf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x66753a (push 0x6676c0 followed by fs-segment stack chaining); handler 0x6676c0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x667553 (push 0x667695 followed by fs-segment stack chaining); handler 0x667695 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00667510(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar5;
  float10 fVar6;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  undefined4 uStack_308;
  undefined1 *puStack_304;
  undefined1 *puStack_300;
  undefined4 local_2fc;
  undefined1 *puStack_2f8;
  undefined1 *puStack_2f4;
  undefined1 local_2e4 [720];
  int local_14;
  int local_10;
  undefined1 local_9;
  undefined4 local_8;

  puStack_2f4 = (undefined1 *)0x667529;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_2f8 = &LAB_006676c0;
  local_2fc = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2fc;
  local_9 = 0;
  puStack_300 = (undefined1 *)0x667548;
  puStack_2f4 = &stack0xfffffffc;
  FUN_006674d8(param_1);
  puStack_304 = &LAB_00667695;
  uStack_308 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_308;
  puStack_300 = &stack0xfffffffc;
  FUN_00404be0(local_2e4,local_8);
  FUN_00404960(local_2e4);
  FUN_0040448c();
  iVar3 = FUN_0040511c(local_2e4);
  FUN_004053e0(local_2e4);
  FUN_0040448c();
  if (iVar3 == 100) {
    uVar4 = FUN_0040511c(local_2e4);
    *(undefined4 *)(param_1 + 4) = uVar4;
    FUN_004053e0(local_2e4);
    FUN_0040448c();
    FUN_00409dfc(param_1 + 8,&DAT_0066712c,1,*(undefined4 *)(param_1 + 4));
    if (-1 < *(int *)(param_1 + 4) + -1) {
      local_10 = 0;
      local_14 = *(int *)(param_1 + 4);
      do {
        puVar1 = (undefined4 *)(*(int *)(param_1 + 8) + local_10 * 0x58);
        uVar4 = FUN_0040511c(local_2e4);
        *puVar1 = uVar4;
        FUN_00405374(local_2e4);
        *(double *)(puVar1 + 2) = (double)in_ST0;
        fVar5 = in_ST7;
        FUN_00405374(local_2e4);
        *(double *)(puVar1 + 4) = (double)in_ST1;
        fVar6 = fVar5;
        FUN_00405374(local_2e4);
        *(double *)(puVar1 + 6) = (double)in_ST2;
        in_ST0 = fVar6;
        FUN_00405374(local_2e4);
        *(double *)(puVar1 + 8) = (double)in_ST3;
        in_ST1 = in_ST0;
        FUN_00405374(local_2e4);
        *(double *)(puVar1 + 10) = (double)in_ST4;
        in_ST2 = in_ST1;
        FUN_00405374(local_2e4);
        *(double *)(puVar1 + 0xc) = (double)in_ST5;
        in_ST3 = in_ST2;
        FUN_00405374(local_2e4);
        *(double *)(puVar1 + 0xe) = (double)in_ST6;
        in_ST4 = in_ST3;
        FUN_00405374(local_2e4);
        *(double *)(puVar1 + 0x10) = (double)in_ST7;
        in_ST5 = in_ST4;
        FUN_00405374(local_2e4);
        *(double *)(puVar1 + 0x12) = (double)fVar5;
        in_ST6 = in_ST5;
        FUN_00405374(local_2e4);
        *(double *)(puVar1 + 0x14) = (double)fVar6;
        in_ST7 = in_ST6;
        FUN_004053e0(local_2e4);
        FUN_0040448c();
        local_10 = local_10 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    FUN_00404ca4(local_2e4);
    FUN_0040448c();
    *in_FS_OFFSET = uStack_308;
    local_9 = 1;
  }
  else {
    FUN_00404ca4(local_2e4);
    FUN_0040448c();
    *in_FS_OFFSET = uStack_308;
  }
  puVar2 = puStack_2f4;
  *in_FS_OFFSET = local_2fc;
  puStack_2f4 = &LAB_006676c7;
  puStack_2f8 = (undefined1 *)0x6676bf;
  thunk_FUN_004072d8(&local_8,local_2fc,puVar2);
  return;
}
