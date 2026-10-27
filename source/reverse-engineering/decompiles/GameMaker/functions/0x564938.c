// rea decompile_all
// name: FUN_00564938
// address: 0x564938
// body: available
// range: 0x564938-0x564a7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x56495f (push 0x564a7c followed by fs-segment stack chaining); handler 0x564a7c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00564938(int param_1,undefined4 param_2,int *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  int *local_c;
  undefined4 local_8;

  puStack_30 = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_34 = &LAB_00564a7c;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  uStack_10 = 0;
  local_c = param_3;
  local_8 = param_2;
  FUN_00564860(param_1);
  iVar2 = FUN_0052f024(local_8);
  if ((699 < iVar2) && (iVar2 < 0x2bd)) {
    FUN_0052f060(local_8,&local_14);
    FUN_00407eb8(param_1 + 4,local_14);
    FUN_0052f060(local_8,&local_18);
    FUN_00407eb8(param_1 + 8,local_18);
    uVar3 = FUN_0052f024(local_8);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    FUN_0052f060(local_8,&local_1c);
    FUN_00407eb8(param_1 + 0x10,local_1c);
    FUN_0052f060(local_8,&local_20);
    FUN_00407eb8(param_1 + 0x14,local_20);
    uVar3 = FUN_0052f024(local_8);
    FUN_00564708(param_1,uVar3);
    iVar2 = *(int *)(param_1 + 0x1c);
    if (-1 < iVar2 + -1) {
      iVar4 = 0;
      do {
        FUN_005644fc(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar4 * 4),local_8);
        *(int *)(*(int *)(*(int *)(param_1 + 0x18) + iVar4 * 4) + 0x10) = *local_c;
        *local_c = *local_c + 1;
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uVar3 = FUN_0052f024(local_8);
    FUN_0056477c(param_1,uVar3);
    iVar2 = *(int *)(param_1 + 0x24);
    if (-1 < iVar2 + -1) {
      iVar4 = 0;
      do {
        FUN_005642f0(*(undefined4 *)(*(int *)(param_1 + 0x20) + iVar4 * 4),local_8);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uStack_10 = CONCAT13(1,(undefined3)uStack_10);
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00564a83;
  puStack_34 = (undefined1 *)0x564a7b;
  thunk_FUN_00406e80(&local_20,4,puVar1);
  return;
}
