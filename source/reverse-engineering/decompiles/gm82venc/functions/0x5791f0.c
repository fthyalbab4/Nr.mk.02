// rea decompile_all
// name: FUN_005791f0
// address: 0x5791f0
// body: available
// range: 0x5791f0-0x579407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x579253 (push 0x579408 followed by fs-segment stack chaining); handler 0x579408 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005791f0(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_fffffef4;
  undefined4 *puVar3;
  undefined4 uStack_100;
  undefined1 *puStack_fc;
  undefined1 *puStack_f8;
  undefined4 local_e8;
  undefined4 local_e4 [35];
  int local_58;
  int local_54;
  undefined4 local_50 [17];
  int local_c;

  local_e8 = 0;
  for (iVar2 = param_5 * 6 + 5; -1 < iVar2; iVar2 = iVar2 + -1) {
  }
  puStack_f8 = (undefined1 *)0x579248;
  local_58 = param_2;
  local_54 = param_1;
  local_c = param_3;
  FUN_0040902c(local_50,"\n\nAnsiString",0x11);
  puStack_fc = &LAB_00579408;
  uStack_100 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_100;
  *param_4 = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  if ((local_54 < 0) || (DAT_00686ac4 <= local_54)) {
    puStack_f8 = &stack0xfffffffc;
    FUN_0041636c(local_54,&local_e8);
    puVar3 = (undefined4 *)0x57929c;
    FUN_00408678(PTR_DAT_00689674,&PTR_DAT_00579434,local_e8);
  }
  else if (*(int *)(DAT_0084efc4 + 0x14 + local_54 * 0x60) == local_58) {
    if (*(int *)(DAT_0084efc4 + 4 + local_54 * 0x60) == 0) {
      puVar3 = (undefined4 *)0x5792ea;
      puStack_f8 = &stack0xfffffffc;
      FUN_00408194(PTR_DAT_00689674,L"Calling DLL function - unable to load DLL");
    }
    else {
      if (-1 < local_58) {
        iVar2 = local_58 + 1;
        puVar1 = (undefined4 *)(local_c + 8);
        puVar3 = local_e4;
        do {
          *puVar3 = *puVar1;
          puVar3[1] = puVar1[1];
          puVar3 = puVar3 + 2;
          puVar1 = puVar1 + 6;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      puStack_f8 = &stack0xfffffffc;
      if (-1 < local_58) {
        iVar2 = local_58 + 1;
        puVar1 = (undefined4 *)(local_c + 0x10);
        puVar3 = local_50;
        puStack_f8 = &stack0xfffffffc;
        do {
          FUN_0040732c(puVar3,*puVar1);
          puVar3 = puVar3 + 1;
          puVar1 = puVar1 + 6;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      if (*(int *)(DAT_0084efc4 + 0x10 + local_54 * 0x60) == 1) {
        if (local_58 < 5) {
          puVar3 = local_50;
          FUN_00576414(local_54,local_e4,0x10,param_4,0x10);
          in_stack_fffffef4 = param_4;
        }
        else {
          FUN_00575bc8(local_54,local_e4,0x10,param_4);
          puVar3 = param_4;
        }
      }
      else if (local_58 < 5) {
        puVar3 = local_50;
        FUN_00577d38(local_54,local_e4,0x10,param_4,0x10);
        in_stack_fffffef4 = param_4;
      }
      else {
        FUN_005774a0(local_54,local_e4,0x10,param_4);
        puVar3 = param_4;
      }
    }
  }
  else {
    puVar3 = (undefined4 *)0x5792c9;
    puStack_f8 = &stack0xfffffffc;
    FUN_00408194(PTR_DAT_00689674,L"Calling DLL function with wrong number of arguments.");
  }
  *in_FS_OFFSET = in_stack_fffffef4;
  thunk_FUN_004072d8(&local_e8,in_stack_fffffef4,puVar3,&LAB_0057940f);
  FUN_00409120(local_50,"\n\nAnsiString",0x11);
  return local_c;
}
