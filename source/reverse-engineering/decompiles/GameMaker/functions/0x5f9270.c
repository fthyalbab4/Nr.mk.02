// rea decompile_all
// name: FUN_005f9270
// address: 0x5f9270
// body: available
// range: 0x5f9270-0x5f93ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f9293 (push 0x5f93eb followed by fs-segment stack chaining); handler 0x5f93eb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f9270(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int iVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  char local_19;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  puStack_34 = &stack0xfffffffc;
  local_28 = 0;
  local_24 = 0;
  puStack_38 = &LAB_005f93eb;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_10 = -1;
  puVar3 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (0 < *(int *)(param_1 + 0x20)) {
    iVar4 = FUN_00409a18(param_2);
    if (iVar4 == 0) {
      FUN_0040b75c(PTR_PTR_00782548,&local_24);
      FUN_005df624(&PTR_LAB_005deea4,local_24);
    }
    if ((param_3 < 0) || (*(int *)(local_8 + 0x20) <= param_3)) {
      FUN_0040b75c(PTR_PTR_00781bec,&local_28);
      FUN_005df624(&PTR_LAB_005deea4,local_28);
    }
    local_18 = FUN_00409a18(local_c);
    iVar4 = *(int *)(local_8 + 0x10);
    local_14 = iVar4 + *(int *)(local_8 + 0x20);
    if (SCARRY4(iVar4,*(int *)(local_8 + 0x20))) {
      iVar4 = FUN_00405944();
      local_14 = extraout_EDX;
    }
    iVar6 = iVar4 + param_3;
    if (SCARRY4(iVar4,param_3)) {
      FUN_00405944();
      iVar6 = extraout_ECX;
    }
    iVar4 = local_14 - local_18;
    if (SBORROW4(local_14,local_18)) {
      iVar4 = FUN_00405944();
      iVar6 = extraout_ECX_00;
    }
    puVar3 = puStack_34;
    if (iVar6 <= iVar4) {
      local_20 = (iVar4 - iVar6) + 1;
      do {
        local_19 = '\x01';
        iVar4 = local_18 + -1;
        if (SBORROW4(local_18,1)) {
          FUN_00405944();
          iVar6 = extraout_ECX_01;
          iVar4 = extraout_EDX_00;
        }
        if (-1 < iVar4) {
          iVar4 = iVar4 + 1;
          uVar5 = 0;
          do {
            iVar7 = uVar5 + iVar6;
            if (SCARRY4(uVar5,iVar6)) {
              uVar5 = FUN_00405944();
              iVar6 = extraout_ECX_02;
              iVar4 = extraout_EDX_01;
            }
            if (local_14 <= iVar7) break;
            uVar8 = uVar5 + iVar6;
            if (SCARRY4(uVar5,iVar6)) {
              uVar5 = FUN_00405944();
              iVar6 = extraout_ECX_03;
              iVar4 = extraout_EDX_02;
            }
            iVar7 = *(int *)(local_8 + 4);
            if ((iVar7 == 0) || (*(uint *)(iVar7 + -4) <= uVar8)) {
              uVar5 = thunk_FUN_00404478();
              iVar6 = extraout_ECX_04;
              iVar4 = extraout_EDX_03;
            }
            iVar2 = local_c;
            cVar1 = *(char *)(iVar7 + uVar8);
            if ((local_c == 0) || (*(uint *)(local_c + -4) <= uVar5)) {
              uVar5 = thunk_FUN_00404478();
              iVar6 = extraout_ECX_05;
              iVar4 = extraout_EDX_04;
            }
            if (cVar1 != *(char *)(iVar2 + uVar5)) {
              local_19 = '\0';
              break;
            }
            uVar5 = uVar5 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        if (local_19 != '\0') {
          iVar4 = iVar6 - *(int *)(local_8 + 0x10);
          if (SBORROW4(iVar6,*(int *)(local_8 + 0x10))) {
            FUN_00405944();
            iVar6 = extraout_ECX_06;
            iVar4 = extraout_EDX_05;
          }
          puVar3 = puStack_34;
          local_10 = iVar4;
          if (iVar4 != -1) break;
        }
        iVar6 = iVar6 + 1;
        local_20 = local_20 + -1;
        puVar3 = puStack_34;
      } while (local_20 != 0);
    }
  }
  puStack_34 = puVar3;
  puVar3 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_005f93f2;
  puStack_38 = (undefined1 *)0x5f93ea;
  thunk_FUN_00406e80(&local_28,2,puVar3);
  return;
}
