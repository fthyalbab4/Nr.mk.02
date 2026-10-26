// rea decompile_all
// name: FUN_0049bee4
// address: 0x49bee4
// body: available
// range: 0x49bee4-0x49c072 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x49bf06 (push 0x49c073 followed by fs-segment stack chaining); handler 0x49c073 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049bee4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_FS_OFFSET;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puStack_34;
  undefined1 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  puStack_2c = (undefined4 *)&stack0xfffffffc;
  local_1c = 0;
  local_18 = 0;
  local_8 = 0;
  puStack_30 = &LAB_0049c073;
  puStack_34 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_34;
  local_c = param_1;
  FUN_004081e8(&local_8,*(undefined4 *)(*(int *)(param_1 + 8) + 0x70));
  iVar4 = 1;
  iVar2 = FUN_0041d99c(&DAT_0049c090,local_8);
  puVar1 = puStack_2c;
  while (iVar2 != 0) {
    uVar6 = 0x49bf44;
    puStack_2c = puVar1;
    iVar3 = FUN_0049dadc(*(undefined4 *)(*(int *)(local_c + 4) + 0x58));
    puStack_2c = (undefined4 *)(iVar3 + 0xc);
    uVar5 = 0x49bf58;
    FUN_00408984(local_8,iVar4,iVar2 - iVar4,uVar6);
    if (PTR_DAT_00689688[0xc] == '\0') {
      iVar4 = FUN_00410620(&DAT_0049c090,local_8,iVar2 + 1);
    }
    else {
      puStack_2c = &local_18;
      FUN_00408984(local_8,iVar2 + 1,0x7fffffff,uVar5);
      iVar4 = FUN_0041d99c(&DAT_0049c090,local_18);
      if (iVar4 != 0) {
        iVar4 = iVar4 + iVar2;
      }
    }
    if (iVar4 == 0) {
      local_10 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        puStack_30 = (undefined1 *)0x49bfcb;
        local_10 = FUN_00407488(&local_8,local_8);
      }
      local_14 = local_10;
      if (local_10 != 0) {
        local_14 = *(int *)(local_10 + -4);
      }
      iVar4 = local_14 + 1;
    }
    puStack_34 = (undefined4 *)0x49bffd;
    FUN_00408984(local_8,iVar2 + 1,(iVar4 - iVar2) + -1);
    iVar4 = iVar4 + 1;
    if (PTR_DAT_00689688[0xc] == '\0') {
      puStack_34 = (undefined4 *)0x49c018;
      iVar2 = FUN_00410620(&DAT_0049c090,local_8,iVar4);
      puVar1 = puStack_2c;
    }
    else {
      puStack_34 = &local_1c;
      FUN_00408984(local_8,iVar4,0x7fffffff);
      iVar3 = FUN_0041d99c(&DAT_0049c090,local_1c);
      iVar2 = 0;
      puVar1 = puStack_2c;
      if (iVar3 != 0) {
        iVar2 = iVar4 + iVar3 + -1;
      }
    }
  }
  *in_FS_OFFSET = (int)puStack_34;
  puStack_2c = (undefined4 *)&LAB_0049c07a;
  puStack_30 = (undefined1 *)0x49c06a;
  thunk_FUN_004072fc(&local_1c,2,puVar1);
  puStack_30 = (undefined1 *)0x49c072;
  thunk_FUN_004072d8(&local_8);
  return;
}
