// rea decompile_all
// name: FUN_0043baa4
// address: 0x43baa4
// body: available
// range: 0x43baa4-0x43bbf9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43bac3 (push 0x43bc2c followed by fs-segment stack chaining); handler 0x43bc2c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43bad9 (push 0x43bbfa followed by fs-segment stack chaining); handler 0x43bbfa lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043baa4(int *param_1,short *param_2)

{
  short sVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  short *psVar5;
  short *psVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int *local_c;
  undefined4 local_8;

  puStack_30 = &stack0xfffffffc;
  local_8 = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_34 = &LAB_0043bc2c;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_3c = (undefined1 *)0x43bace;
  local_c = param_1;
  FUN_0043aa0c(param_1);
  puStack_40 = &LAB_0043bbfa;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_3c = &stack0xfffffffc;
  (**(code **)(*local_c + 0x44))();
  if (param_2 != (short *)0x0) {
    FUN_0043bf58(local_c,&local_14);
    iVar3 = FUN_0041561c(local_14,&LAB_0043bc48);
    if (iVar3 == 0) {
      while (psVar6 = param_2, *param_2 != 0) {
        for (; ((sVar1 = *psVar6, sVar1 != 0 && (sVar1 != 10)) && (sVar1 != 0xd));
            psVar6 = psVar6 + 1) {
        }
        iVar3 = (int)psVar6 - (int)param_2 >> 1;
        if (iVar3 < 0) {
          iVar3 = iVar3 + (uint)(((int)psVar6 - (int)param_2 & 1U) != 0);
        }
        FUN_004082d0(&local_8,param_2,iVar3);
        (**(code **)(*local_c + 0x38))(local_c,local_8);
        param_2 = psVar6;
        if (*psVar6 == 0xd) {
          param_2 = psVar6 + 1;
        }
        if (*param_2 == 10) {
          param_2 = param_2 + 1;
        }
      }
    }
    else {
      FUN_0043bf58(local_c,&local_18);
      local_1c = local_18;
      local_10 = 0;
      if (local_18 != 0) {
        local_10 = *(int *)(local_18 + -4);
      }
      while (*param_2 != 0) {
        FUN_0043bf58(local_c,&local_20);
        uVar4 = FUN_00408220(local_20);
        psVar5 = (short *)FUN_0041daa4(param_2,uVar4);
        for (psVar6 = param_2; (*psVar6 != 0 && (psVar5 != psVar6)); psVar6 = psVar6 + 1) {
        }
        iVar3 = (int)psVar6 - (int)param_2 >> 1;
        if (iVar3 < 0) {
          iVar3 = iVar3 + (uint)(((int)psVar6 - (int)param_2 & 1U) != 0);
        }
        FUN_004082d0(&local_8,param_2,iVar3);
        (**(code **)(*local_c + 0x38))(local_c,local_8);
        param_2 = psVar6;
        if (psVar5 == psVar6) {
          param_2 = psVar6 + local_10;
        }
      }
    }
  }
  puVar2 = puStack_3c;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_0043bc01;
  puStack_40 = (undefined1 *)0x43bbf9;
  FUN_0043aad4(local_c,uStack_44,puVar2);
  return;
}
