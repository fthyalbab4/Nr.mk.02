// rea decompile_all
// name: FUN_005b3b20
// address: 0x5b3b20
// body: available
// range: 0x5b3b20-0x5b3c2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b3b43 (push 0x5b3c2d followed by fs-segment stack chaining); handler 0x5b3c2d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b3b20(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_18;
  undefined4 local_8;

  puStack_28 = (undefined1 *)0x5b3b38;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_2c = &LAB_005b3c2d;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_005b32a4(param_1);
  iVar4 = FUN_00701bf8(&DAT_00700d94,1);
  cVar3 = FUN_007026a4(iVar4,local_8);
  if (cVar3 == '\0') {
    FUN_00405a7c(iVar4);
  }
  else {
    *(int *)(param_1 + 4) = param_3;
    if (param_3 < 1) {
      *(undefined4 *)(param_1 + 4) = 1;
    }
    iVar5 = *(int *)(iVar4 + 4) / *(int *)(param_1 + 4);
    uVar1 = *(undefined4 *)(iVar4 + 8);
    FUN_00409be0(param_1 + 0x30,&DAT_005b2754,1,*(int *)(param_1 + 4));
    local_18 = *(int *)(param_1 + 4);
    if (-1 < local_18 + -1) {
      iVar7 = 0;
      do {
        uVar6 = FUN_00701c28(&DAT_00700d94,1,iVar5,uVar1);
        *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar7 * 4) = uVar6;
        FUN_00702e40(*(undefined4 *)(*(int *)(param_1 + 0x30) + iVar7 * 4),0,0,0,uVar1,iVar5,0,
                     iVar5 * iVar7,iVar4);
        iVar7 = iVar7 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
    FUN_00405a7c(iVar4);
    FUN_005b2f20(param_1);
  }
  puVar2 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_005b3c34;
  puStack_2c = (undefined1 *)0x5b3c2c;
  thunk_FUN_00406e5c(&local_8,uStack_30,puVar2);
  return;
}
