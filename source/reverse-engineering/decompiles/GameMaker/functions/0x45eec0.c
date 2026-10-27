// rea decompile_all
// name: FUN_0045eec0
// address: 0x45eec0
// body: available
// range: 0x45eec0-0x45f0aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45eef6 (push 0x45f0e2 followed by fs-segment stack chaining); handler 0x45f0e2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45ef22 (push 0x45f0ab followed by fs-segment stack chaining); handler 0x45f0ab lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045eec0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_c;
  int local_8;

  puStack_64 = &stack0xfffffffc;
  local_58 = 0;
  local_54 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_3c = 0;
  local_28 = 0;
  local_24 = 0;
  puStack_68 = &LAB_0045f0e2;
  uStack_6c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_6c;
  puStack_70 = (undefined1 *)0x45ef05;
  local_14 = param_3;
  local_c = param_2;
  local_8 = param_1;
  local_1c = (int *)FUN_0041fb94(&DAT_00413024,1);
  puStack_70 = (undefined1 *)0x45ef14;
  local_20 = (int *)FUN_0041fb94(&DAT_00413024,1);
  puStack_74 = &LAB_0045f0ab;
  uStack_78 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_78;
  local_18 = 0;
  iVar4 = *(int *)(local_8 + 8) + -1;
  puStack_70 = &stack0xfffffffc;
  puVar1 = &stack0xfffffffc;
  if (-1 < iVar4) {
    do {
      puVar3 = (undefined4 *)FUN_0043b048(local_8,iVar4);
      cVar2 = thunk_FUN_00405d3c(*puVar3,local_c);
      if ((cVar2 != '\0') && (puVar3[1] != 0)) {
        if (local_18 != 0) {
          FUN_0041f690(local_1c,CONCAT22(extraout_var,0x7c));
          FUN_0041f690(local_20,CONCAT22(extraout_var_00,0x3b));
        }
        if ((puVar3[2] == 0) && (puVar3[3] != 0)) {
          FUN_00416ca8(puVar3[3],&local_24);
          FUN_00407eb8(puVar3 + 2,local_24);
        }
        local_38 = puVar3[2];
        local_34 = 0x11;
        local_30 = puVar3[1];
        local_2c = 0x11;
        FUN_00417d4c(L"%s (*.%s)|*.%1:s",&local_38,1,&local_28);
        FUN_0041f2a8(local_1c,local_28);
        local_44 = puVar3[1];
        local_40 = 0x11;
        FUN_00417d4c(L"*.%s",&local_44,0,&local_3c);
        FUN_0041f2a8(local_20,local_3c);
        local_18 = local_18 + 1;
      }
      iVar4 = iVar4 + -1;
      puVar1 = puStack_70;
    } while (iVar4 != -1);
  }
  puStack_70 = puVar1;
  if (1 < local_18) {
    puVar3 = &local_48;
    FUN_0040b75c(PTR_PTR_00782590,&local_4c);
    local_38 = local_4c;
    local_34 = 0x11;
    (**(code **)(*local_20 + -0x24))(local_20,&local_50,*local_20,puVar3);
    local_30 = local_50;
    local_2c = 0x11;
    FUN_00417d4c(L"%s (%s)|%1:s|",&local_38,1,puVar3);
    FUN_0041ffe0(local_1c,0,local_48);
  }
  (**(code **)(*local_1c + -0x24))(local_1c,&local_54);
  FUN_00407eb8(local_14,local_54);
  (**(code **)(*local_20 + -0x24))(local_20,&local_58);
  FUN_00407eb8(param_4,local_58);
  puVar1 = puStack_70;
  *in_FS_OFFSET = uStack_78;
  puStack_70 = &LAB_0045f0b2;
  puStack_74 = (undefined1 *)0x45f0a2;
  FUN_00405a7c(local_1c,uStack_78,puVar1);
  puStack_74 = (undefined1 *)0x45f0aa;
  FUN_00405a7c(local_20);
  return;
}
