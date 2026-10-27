// rea decompile_all
// name: FUN_00562898
// address: 0x562898
// body: available
// range: 0x562898-0x5629e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5628b5 (push 0x5629e9 followed by fs-segment stack chaining); handler 0x5629e9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00562898(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 uStack_8;

  puStack_2c = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_30 = &LAB_005629e9;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  uStack_8 = 0;
  FUN_005627ec(param_1);
  iVar4 = FUN_0052f024(param_2);
  if ((499 < iVar4) && (iVar4 < 0x209)) {
    FUN_0052f060(param_2,&local_10);
    FUN_00407eb8(param_1 + 4,local_10);
    uVar5 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 8) = uVar5;
    FUN_0052f060(param_2,&local_14);
    FUN_00407eb8(param_1 + 0xc,local_14);
    uVar5 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x10) = uVar5;
    FUN_0052f038(param_2);
    *(double *)(param_1 + 0x18) = (double)in_ST0;
    FUN_0052f060(param_2,&local_18);
    FUN_00407eb8(param_1 + 0x20,local_18);
    FUN_0052f060(param_2,&local_1c);
    FUN_00407eb8(param_1 + 0x24,local_1c);
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0x28) = uVar2;
    uVar5 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x34) = uVar5;
    uVar5 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    FUN_00409be0(param_1 + 0x30,&DAT_005621bc,1,uVar5);
    if (-1 < *(int *)(param_1 + 0x2c) + -1) {
      iVar4 = 0;
      local_c = *(int *)(param_1 + 0x2c);
      do {
        uVar5 = FUN_00561d08(&DAT_005615a8,1,0);
        *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar4 * 4) = uVar5;
        cVar3 = FUN_00561f70(*(undefined4 *)(*(int *)(param_1 + 0x30) + iVar4 * 4),param_2);
        if (cVar3 == '\0') goto LAB_005629ce;
        iVar4 = iVar4 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    FUN_00562694(param_1);
    uStack_8 = CONCAT13(1,(undefined3)uStack_8);
  }
LAB_005629ce:
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_005629f0;
  puStack_30 = (undefined1 *)0x5629e8;
  thunk_FUN_00406e80(&local_1c,4,puVar1);
  return;
}
