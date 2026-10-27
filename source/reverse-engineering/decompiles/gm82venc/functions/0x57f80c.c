// rea decompile_all
// name: FUN_0057f80c
// address: 0x57f80c
// body: available
// range: 0x57f80c-0x57fabe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x57f836 (push 0x57fabf followed by fs-segment stack chaining); handler 0x57fabf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057f80c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  int local_38;
  int local_24;
  undefined4 local_20;
  double local_1c;
  double local_14;
  undefined4 local_8;

  local_24 = 0;
  puStack_54 = (undefined1 *)0x57f82b;
  local_20 = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_2);
  puStack_58 = &LAB_0057fabf;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  puStack_54 = &stack0xfffffffc;
  FUN_0057ebcc(local_20,local_8,&local_24);
  FUN_0057fae0(local_8,local_20);
  FUN_00404874();
  local_1c = (double)in_ST0;
  FUN_00404864();
  local_14 = (double)in_ST1;
  iVar2 = local_24;
  if ((local_24 != 0) && (*(short *)(local_24 + -10) != 1)) {
    iVar2 = FUN_004074b8(&local_24,local_24,0);
  }
  local_38 = 0;
  if (iVar2 != 0) {
    local_38 = *(int *)(iVar2 + -4);
  }
  if (0 < local_38) {
    iVar2 = 1;
    do {
      iVar3 = local_24;
      if ((local_24 != 0) && (*(short *)(local_24 + -10) != 1)) {
        iVar3 = FUN_004074b8(&local_24,local_24,0);
      }
      uVar4 = FUN_00514868(param_3,param_8);
      iVar5 = local_24;
      if ((local_24 != 0) && (*(short *)(local_24 + -10) != 1)) {
        iVar5 = FUN_004074b8(&local_24,local_24,0);
      }
      FUN_0057e544(local_8,*(undefined1 *)(iVar5 + -1 + iVar2));
      uVar6 = FUN_00514868(param_3,param_8);
      iVar5 = local_24;
      if ((local_24 != 0) && (*(short *)(local_24 + -10) != 1)) {
        iVar5 = FUN_004074b8(&local_24,local_24,0);
      }
      FUN_0057e544(local_8,*(undefined1 *)(iVar5 + -1 + iVar2));
      uVar7 = FUN_00514868(param_6,param_7);
      uVar8 = FUN_00514868(param_6,param_7);
      FUN_0057f618(*(undefined1 *)(iVar3 + -1 + iVar2),uVar4,uVar6,uVar8,uVar7);
      iVar3 = local_24;
      if ((local_24 != 0) && (*(short *)(local_24 + -10) != 1)) {
        iVar3 = FUN_004074b8(&local_24,local_24,0);
      }
      FUN_0057e544(local_8,*(undefined1 *)(iVar3 + -1 + iVar2));
      iVar3 = local_24;
      if ((local_24 != 0) && (*(short *)(local_24 + -10) != 1)) {
        iVar3 = FUN_004074b8(&local_24,local_24,0);
      }
      FUN_0057e544(local_8,*(undefined1 *)(iVar3 + -1 + iVar2));
      iVar3 = local_24;
      if ((local_24 != 0) && (*(short *)(local_24 + -10) != 1)) {
        iVar3 = FUN_004074b8(&local_24,local_24,0);
      }
      FUN_0057e544(local_8,*(undefined1 *)(iVar3 + -1 + iVar2));
      iVar2 = iVar2 + 1;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  puVar1 = puStack_54;
  *in_FS_OFFSET = uStack_5c;
  puStack_54 = &LAB_0057fac6;
  puStack_58 = (undefined1 *)0x57fab6;
  FUN_004072d8(&local_24,uStack_5c,puVar1);
  puStack_58 = (undefined1 *)0x57fabe;
  thunk_FUN_004072d8(&local_20);
  return;
}
