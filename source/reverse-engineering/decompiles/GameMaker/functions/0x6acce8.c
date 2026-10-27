// rea decompile_all
// name: FUN_006acce8
// address: 0x6acce8
// body: available
// range: 0x6acce8-0x6acea1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6acd0c (push 0x6acea2 followed by fs-segment stack chaining); handler 0x6acea2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006acce8(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined1 local_d;
  int *local_c;
  undefined4 local_8;

  puStack_30 = (undefined1 *)0x6acd01;
  local_c = param_3;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_34 = &LAB_006acea2;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  *PTR_DAT_00781dc4 = 0;
  local_d = 0;
  *local_c = *param_2;
  puStack_30 = &stack0xfffffffc;
  uVar3 = FUN_00409a18(param_2[1]);
  FUN_00409be0(local_c + 1,&DAT_006ac9ac,1,uVar3);
  if (-1 < *param_2 + -1) {
    iVar4 = 0;
    local_14 = *param_2;
    do {
      if ((*(int *)(param_2[1] + iVar4 * 0xc) == 0) &&
         (*(int *)(param_2[1] + 0xc + iVar4 * 0xc) == 0x6a)) {
        FUN_006aca8c(local_8,param_2[1] + iVar4 * 0xc,&local_20);
        iVar1 = local_c[1];
        *(undefined4 *)(iVar1 + iVar4 * 0xc) = local_20;
        *(undefined4 *)(iVar1 + 4 + iVar4 * 0xc) = local_1c;
        *(undefined4 *)(iVar1 + 8 + iVar4 * 0xc) = local_18;
      }
      else if (*(int *)(param_2[1] + iVar4 * 0xc) == 0) {
        FUN_006acb94(local_8,param_2[1] + iVar4 * 0xc,&local_20);
        iVar1 = local_c[1];
        *(undefined4 *)(iVar1 + iVar4 * 0xc) = local_20;
        *(undefined4 *)(iVar1 + 4 + iVar4 * 0xc) = local_1c;
        *(undefined4 *)(iVar1 + 8 + iVar4 * 0xc) = local_18;
      }
      else if (*(int *)(param_2[1] + iVar4 * 0xc) == 1) {
        FUN_006acc18(local_8,param_2[1] + iVar4 * 0xc,&local_20);
        iVar1 = local_c[1];
        *(undefined4 *)(iVar1 + iVar4 * 0xc) = local_20;
        *(undefined4 *)(iVar1 + 4 + iVar4 * 0xc) = local_1c;
        *(undefined4 *)(iVar1 + 8 + iVar4 * 0xc) = local_18;
      }
      else if (*(int *)(param_2[1] + iVar4 * 0xc) == 2) {
        FUN_006acc80(local_8,param_2[1] + iVar4 * 0xc,&local_20);
        iVar1 = local_c[1];
        *(undefined4 *)(iVar1 + iVar4 * 0xc) = local_20;
        *(undefined4 *)(iVar1 + 4 + iVar4 * 0xc) = local_1c;
        *(undefined4 *)(iVar1 + 8 + iVar4 * 0xc) = local_18;
      }
      else {
        FUN_006aca28(local_8,param_2[1] + iVar4 * 0xc,&local_20);
        iVar1 = local_c[1];
        *(undefined4 *)(iVar1 + iVar4 * 0xc) = local_20;
        *(undefined4 *)(iVar1 + 4 + iVar4 * 0xc) = local_1c;
        *(undefined4 *)(iVar1 + 8 + iVar4 * 0xc) = local_18;
      }
      if (*PTR_DAT_00781dc4 != '\0') goto LAB_006ace8c;
      iVar4 = iVar4 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  local_d = 1;
LAB_006ace8c:
  puVar2 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_006acea9;
  puStack_34 = (undefined1 *)0x6acea1;
  thunk_FUN_00406e5c(&local_8,uStack_38,puVar2);
  return;
}
