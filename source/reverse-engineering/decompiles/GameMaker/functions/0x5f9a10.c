// rea decompile_all
// name: FUN_005f9a10
// address: 0x5f9a10
// body: available
// range: 0x5f9a10-0x5f9b97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f9a2e (push 0x5f9b98 followed by fs-segment stack chaining); handler 0x5f9b98 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f9a10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *in_FS_OFFSET;
  undefined4 *puVar8;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_005f9b98;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  puVar8 = (undefined4 *)0x5f9a3e;
  local_8 = param_2;
  iVar4 = FUN_005e1ab0(param_2,param_3,param_5);
  if (iVar4 != 0) {
    puVar5 = (undefined4 *)FUN_005e187c(param_4,0);
    FUN_005f8a64(param_1,iVar4,puVar5);
    if (*(int *)(param_1 + 0x20) == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      if ((int)param_4 < 0) {
        puVar8 = &local_c;
        FUN_005e2a28(local_8,iVar4,param_5);
        FUN_00409d1c(param_1 + 4,local_c,&DAT_004108f8);
        *(int *)(param_1 + 0x20) = iVar4;
      }
      else {
        if (SCARRY4((int)param_4,iVar4)) {
          FUN_00405944();
        }
        *(int *)(param_1 + 0x20) = (int)param_4 + iVar4;
        FUN_00409be0(param_1 + 4,&DAT_004108f8,1,(int)param_4 + iVar4);
        FUN_005e0648(local_8,param_5,param_1 + 4,iVar4,param_4);
        puVar8 = param_4;
      }
    }
    else if ((int)param_4 < 0) {
      FUN_005f9068(param_1,0);
      iVar6 = FUN_005f9464(param_1);
      iVar2 = *(int *)(param_1 + 0x20);
      iVar7 = iVar6 - iVar2;
      if (SBORROW4(iVar6,iVar2)) {
        iVar7 = FUN_00405944();
      }
      iVar6 = iVar7 - *(int *)(param_1 + 0x10);
      if (SBORROW4(iVar7,*(int *)(param_1 + 0x10))) {
        iVar6 = FUN_00405944();
      }
      if (iVar6 < iVar4) {
        if (SCARRY4(iVar2,iVar4)) {
          FUN_00405944();
        }
        iVar6 = *(int *)(param_1 + 0xc);
        if (SCARRY4(iVar2 + iVar4,*(int *)(param_1 + 0xc))) {
          FUN_00405944();
        }
        FUN_00409be0(param_1 + 4,&DAT_004108f8,1,iVar2 + iVar4 + iVar6);
      }
      puVar8 = (undefined4 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x20));
      if (SCARRY4(*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x20))) {
        puVar8 = (undefined4 *)FUN_00405944();
      }
      FUN_005e0648(local_8,param_5,param_1 + 4,iVar4,puVar8);
      piVar1 = (int *)(param_1 + 0x20);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + iVar4;
      if (SCARRY4(iVar2,iVar4)) {
        puVar8 = (undefined4 *)0x5f9b59;
        FUN_00405944();
      }
    }
    else {
      puVar8 = puVar5;
      FUN_005e0648(local_8,param_5,param_1 + 4,iVar4,puVar5);
      if (*(int *)(param_1 + 0x20) <= (int)puVar5) {
        if (SCARRY4((int)puVar5,iVar4)) {
          puVar8 = (undefined4 *)0x5f9b79;
          FUN_00405944();
        }
        *(int *)(param_1 + 0x20) = (int)puVar5 + iVar4;
      }
    }
  }
  puVar3 = puStack_20;
  *in_FS_OFFSET = (int)puVar8;
  puStack_20 = &LAB_005f9b9f;
  iStack_24 = 0x5f9b97;
  FUN_00409ce0(&local_c,&DAT_004108f8,puVar3);
  return;
}
