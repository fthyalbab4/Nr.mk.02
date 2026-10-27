// rea decompile_all
// name: FUN_0044f144
// address: 0x44f144
// body: available
// range: 0x44f144-0x44f35a inclusive
// range: 0x44f362-0x44f3be inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44f175 (push 0x44f3bf followed by fs-segment stack chaining); handler 0x44f3bf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44f27e (push 0x44f35b followed by fs-segment stack chaining); handler 0x44f35b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044f144(int param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  int *local_38;
  undefined4 local_34;
  int *local_30;
  int *local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int *local_14;
  undefined4 local_10;
  int local_c;
  int local_8;

  puStack_48 = &stack0xfffffffc;
  local_38 = (int *)0x0;
  local_34 = 0;
  local_30 = (int *)0x0;
  local_2c = (int *)0x0;
  local_10 = 0;
  local_14 = (int *)0x0;
  puStack_4c = &LAB_0044f3bf;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  local_20 = 0;
  puVar1 = &stack0xfffffffc;
  local_1c = param_3;
  local_18 = param_2;
  local_8 = param_1;
  if (param_3 != 0) {
    puStack_54 = (undefined1 *)0x44f191;
    FUN_00407eb8(param_1 + 0x20,param_3);
    puVar1 = puStack_48;
  }
  puStack_48 = puVar1;
  iVar4 = *(int *)(*(int *)(local_8 + 0x14) + 8);
  if (iVar4 == 0) {
    puStack_54 = (undefined1 *)0x44f1b0;
    FUN_0041bfec(&PTR_LAB_0044dfb4,1,PTR_PTR_007824dc);
    puStack_54 = (undefined1 *)0x44f1b5;
    FUN_00406618();
  }
  else if (-1 < iVar4 + -1) {
    iVar5 = 0;
    do {
      puStack_54 = (undefined1 *)0x44f1ce;
      iVar3 = FUN_0043b048(*(undefined4 *)(local_8 + 0x14),iVar5);
      puStack_54 = (undefined1 *)0x44f1d9;
      FUN_0040b158(&local_10,*(undefined4 *)(iVar3 + 4));
      puStack_54 = (undefined1 *)0x44f1e9;
      FUN_0040b184(&local_2c,local_10,&DAT_0044f3d0);
      puStack_54 = (undefined1 *)0x44f1f7;
      cVar2 = (**(code **)(*local_2c + 0x38))(local_2c,local_18,local_1c);
      if (cVar2 != '\0') {
        local_20 = local_20 + 1;
        local_c = iVar5;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_20 == 0) {
    puStack_54 = (undefined1 *)0x44f21d;
    FUN_0041bfec(&PTR_LAB_0044dfb4,1,PTR_PTR_00782500);
    puStack_54 = (undefined1 *)0x44f222;
    FUN_00406618();
  }
  if (local_20 == 1) {
    puStack_58 = (undefined1 *)0x44f234;
    puStack_54 = &stack0xfffffffc;
    FUN_0044f0b0(local_18,local_1c);
  }
  else if (*(int *)(local_8 + 0xc) == 0) {
    puStack_58 = (undefined1 *)0x44f37d;
    puStack_54 = &stack0xfffffffc;
    FUN_0044f0b0(local_18,local_1c);
  }
  else {
    puStack_54 = (undefined1 *)0x44f25a;
    FUN_0040b184(&local_14,*(undefined4 *)(local_8 + 0xc),&DAT_0044f3e0);
    if (local_14 != (int *)0x0) {
      puStack_54 = (undefined1 *)0x44f270;
      local_24 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
      puStack_58 = &LAB_0044f35b;
      uStack_5c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_5c;
      iVar4 = *(int *)(*(int *)(local_8 + 0x14) + 8);
      puStack_54 = &stack0xfffffffc;
      if (-1 < iVar4 + -1) {
        iVar5 = 0;
        puStack_54 = &stack0xfffffffc;
        do {
          local_28 = FUN_0043b048(*(undefined4 *)(local_8 + 0x14),iVar5);
          FUN_0040b158(&local_10,*(undefined4 *)(local_28 + 4));
          FUN_0040b184(&local_30,local_10,&DAT_0044f3d0);
          cVar2 = (**(code **)(*local_30 + 0x38))(local_30,local_18,local_1c);
          if (cVar2 != '\0') {
            (**(code **)(**(int **)(local_28 + 4) + 0xc))(*(int **)(local_28 + 4),&local_34);
            (**(code **)(*local_24 + 0x3c))(local_24,local_34,local_28);
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar4 = (**(code **)(*local_14 + 0x14))(local_14,local_24);
      if (iVar4 < 0) {
        FUN_0044f0b0(local_18,local_1c);
      }
      else {
        iVar4 = (**(code **)(*local_24 + 0x18))(local_24,iVar4);
        FUN_0040b158(&local_10,*(undefined4 *)(iVar4 + 4));
        FUN_0040b184(&local_38,local_10,&DAT_0044f3d0);
        (**(code **)(*local_38 + 0x3c))(local_38,local_18,local_1c);
      }
      puVar1 = puStack_54;
      *in_FS_OFFSET = uStack_5c;
      puStack_54 = (undefined1 *)0x44f37e;
      puStack_58 = (undefined1 *)0x44f35a;
      FUN_00405a7c(local_24,uStack_5c,puVar1);
      return;
    }
    puStack_58 = (undefined1 *)0x44f36e;
    puStack_54 = &stack0xfffffffc;
    FUN_0044f0b0(local_18,local_1c);
  }
  puVar1 = puStack_48;
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_0044f3c6;
  puStack_4c = (undefined1 *)0x44f393;
  FUN_0040b140(&local_38,uStack_50,puVar1);
  puStack_4c = (undefined1 *)0x44f39b;
  thunk_FUN_00406e5c(&local_34);
  puStack_4c = (undefined1 *)0x44f3ae;
  FUN_00408e44(&local_30,&DAT_0044dee8,2);
  puStack_4c = (undefined1 *)0x44f3b6;
  FUN_0040b140(&local_14);
  puStack_4c = (undefined1 *)0x44f3be;
  FUN_0040b140(&local_10);
  return;
}
