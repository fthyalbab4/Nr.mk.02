// rea decompile_all
// name: FUN_0071c51c
// address: 0x71c51c
// body: available
// range: 0x71c51c-0x71c610 inclusive
// range: 0x71c645-0x71c6f2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x71c540 (push 0x71c6f3 followed by fs-segment stack chaining); handler 0x71c6f3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0071c51c(undefined4 param_1,int param_2,char param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  int local_8;

  puStack_20 = (undefined1 *)0x71c535;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_24 = &LAB_0071c6f3;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar2 = FUN_004dee2c(&PTR_FUN_004d7824,1,0);
  FUN_004de514(iVar2,1);
  FUN_004de0a0(iVar2,*(undefined4 *)PTR_DAT_007819b0);
  if (local_8 != 0) {
    iVar3 = FUN_004d89cc(&PTR_FUN_004d5e80,1,*(undefined4 *)(iVar2 + 0x38));
    FUN_004dbc6c(iVar3,local_8);
    FUN_004dbe60(iVar3,0xffffffff);
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x8c) = DAT_0079a9f4;
    *(undefined1 **)(iVar3 + 0x88) = &LAB_0071c3f0;
    if (param_3 != '\0') {
      *(undefined4 *)(iVar3 + 0x88) = param_8;
      *(undefined4 *)(iVar3 + 0x8c) = param_9;
      *(undefined4 *)(iVar3 + 0x90) = param_6;
      *(undefined4 *)(iVar3 + 0x94) = param_7;
      *(undefined4 *)(iVar3 + 0xa0) = param_4;
      *(undefined4 *)(iVar3 + 0xa4) = param_5;
    }
    FUN_004dc190(*(undefined4 *)(iVar2 + 0x38),iVar3);
  }
  local_10 = 0;
  switch(param_1) {
  case 1:
    local_10 = DAT_0079a9b8;
    break;
  case 2:
    local_10 = DAT_0079a9bc;
    break;
  case 3:
    local_10 = DAT_0079a9c0;
    break;
  case 4:
    local_10 = DAT_0079a9c4;
    break;
  case 6:
    local_10 = DAT_0079a9c8;
    break;
  case 7:
    local_10 = DAT_0079a9d0;
    break;
  case 8:
    local_10 = DAT_0079a9cc;
    break;
  case 9:
    local_10 = DAT_0079a9d4;
    break;
  case 0xc:
    local_10 = DAT_0079a9d8;
  }
  iVar3 = FUN_004ad490(local_10);
  if (-1 < iVar3 + -1) {
    iVar5 = 0;
    do {
      uVar6 = param_4;
      uVar7 = param_5;
      uVar8 = param_6;
      uVar9 = param_7;
      uVar10 = param_8;
      uVar11 = param_9;
      uVar4 = FUN_004ad3b4(local_10,iVar5);
      FUN_0071c3fc(*(undefined4 *)(iVar2 + 0x38),uVar4,param_3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11
                  );
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0071c6fa;
  puStack_24 = (undefined1 *)0x71c6f2;
  thunk_FUN_00406e5c(&local_8,uStack_28,puVar1);
  return;
}
