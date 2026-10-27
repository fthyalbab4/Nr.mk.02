// rea decompile_all
// name: FUN_004504a4
// address: 0x4504a4
// body: available
// range: 0x4504a4-0x45062f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4504d2 (push 0x450677 followed by fs-segment stack chaining); handler 0x450677 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4504ef (push 0x45064d followed by fs-segment stack chaining); handler 0x45064d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x450547 (push 0x450630 followed by fs-segment stack chaining); handler 0x450630 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004504a4(int *param_1,int param_2,int *param_3,char param_4,char param_5)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_FS_OFFSET;
  undefined4 uVar6;
  undefined4 *puStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  int iStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  int iStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  undefined4 local_10;
  int local_c;
  int local_8;

  local_28 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_34 = (undefined1 *)0x4504c7;
  local_14 = param_3;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_38 = &LAB_00450677;
  iStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_3c;
  puStack_40 = (undefined1 *)0x4504e1;
  puStack_34 = &stack0xfffffffc;
  local_20 = (int *)FUN_0043c790(&PTR_FUN_00430700,1);
  puStack_44 = &LAB_0045064d;
  iStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_48;
  puStack_4c = (undefined1 *)0x4504fc;
  puStack_40 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x48))(param_1,local_20);
  iVar3 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    puStack_4c = (undefined1 *)0x450519;
    iVar3 = FUN_00407488(&local_8,local_8);
  }
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + -4);
  }
  local_18 = (uint)(0 < iVar4) + iVar4 + 1;
  puStack_4c = (undefined1 *)0x45053c;
  FUN_0043aa0c(local_14);
  puStack_50 = &LAB_00450630;
  puStack_54 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_54;
  puStack_4c = &stack0xfffffffc;
  iVar3 = (**(code **)(*local_20 + 0x14))();
  if (-1 < iVar3 + -1) {
    local_1c = 0;
    local_24 = iVar3;
    do {
      uVar6 = 0x450574;
      (**(code **)(*local_20 + 0xc))(local_20,local_1c,&local_c);
      iVar3 = local_c;
      if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
        uVar6 = 0x450591;
        iVar3 = FUN_00407488(&local_c,local_c);
      }
      iVar5 = 0;
      if (iVar3 != 0) {
        iVar5 = *(int *)(iVar3 + -4);
      }
      if (iVar4 == 0) {
LAB_004505c6:
        puStack_54 = &local_10;
        FUN_00408984(local_c,local_18,(iVar5 + 1) - local_18);
        if (param_4 == '\0') {
          iVar3 = FUN_00408d44(PTR_DAT_0067d1d4,local_10);
          if (iVar3 != 0) goto LAB_0045060e;
        }
        if (param_5 != '\0') {
          FUN_004081e8(&local_c,local_10);
        }
        (**(code **)(*local_14 + 0x38))(local_14,local_c);
      }
      else if (iVar4 < iVar5) {
        puStack_54 = &local_28;
        FUN_00408984(local_c,1,iVar4,uVar6);
        cVar2 = FUN_00415880(local_8,local_28);
        if (cVar2 != '\0') goto LAB_004505c6;
      }
LAB_0045060e:
      local_1c = local_1c + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  puVar1 = puStack_4c;
  *in_FS_OFFSET = (int)puStack_54;
  puStack_4c = &LAB_00450637;
  puStack_50 = (undefined1 *)0x45062f;
  FUN_0043aad4(local_14,puStack_54,puVar1);
  return;
}
