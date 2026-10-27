// rea decompile_all
// name: FUN_00610ae8
// address: 0x610ae8
// body: available
// range: 0x610ae8-0x610e05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x610b2f (push 0x610e06 followed by fs-segment stack chaining); handler 0x610e06 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00610ae8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  short sVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_EDX;
  int iVar6;
  int iVar7;
  int *in_FS_OFFSET;
  bool bVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  char local_23;
  short local_22;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  puStack_54 = (undefined1 *)0x610b1c;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_54 = (undefined1 *)0x610b24;
  thunk_FUN_00407660(local_c);
  puStack_58 = &LAB_00610e06;
  puStack_5c = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_5c;
  local_14 = 1;
  iVar6 = 1;
  local_18 = 1;
  iVar7 = 0;
  local_22 = 0x20;
  local_23 = '\0';
  puStack_54 = &stack0xfffffffc;
  FUN_00407058(&local_8);
  local_1c = FUN_00408238();
  FUN_00407058(&local_c);
  local_20 = FUN_00408238();
  FUN_00407eb8(param_4,0);
  if (0 < local_1c) {
    do {
      iVar4 = FUN_00407058(&local_8);
      if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= iVar6 - 1U)) {
        iVar4 = thunk_FUN_00404478();
      }
      sVar1 = *(short *)(iVar4 + -2 + iVar6 * 2);
      cVar3 = FUN_00415618(sVar1);
      if (cVar3 == '\0') {
        uVar9 = 0x610bce;
        iVar5 = FUN_00407058(&local_c);
        iVar4 = 0;
        if ((iVar5 == 0) || (*(int *)(iVar5 + -4) == 0)) {
          uVar9 = 0x610be2;
          iVar5 = thunk_FUN_00404478();
          iVar4 = extraout_EDX;
        }
        if (sVar1 == *(short *)(iVar5 + -2 + (iVar4 + 1) * 2)) {
          if (local_22 == 0x20) {
            puStack_5c = &local_28;
            FUN_004086a8(local_8,iVar6,local_20,uVar9);
            local_23 = FUN_005e3940(local_c,local_28);
            if (local_23 != '\0') {
              iVar7 = local_20 + -1;
              if (SBORROW4(local_20,1)) {
                iVar7 = FUN_00405944();
              }
              bVar8 = SCARRY4(iVar6,iVar7);
              iVar6 = iVar6 + iVar7;
              iVar7 = iVar6;
              if (bVar8) {
                FUN_00405944();
              }
            }
          }
        }
        else {
          FUN_00408034(&local_2c,sVar1);
          cVar3 = FUN_005e3ac0(local_2c,1,local_10);
          if (cVar3 == '\0') {
            FUN_00408034(&local_30,sVar1);
            cVar3 = FUN_005e3ac0(local_30,1,&DAT_00610e24);
            if (cVar3 != '\0') {
              if (sVar1 == local_22) {
                local_22 = 0x20;
              }
              else if (local_22 == 0x20) {
                local_22 = sVar1;
              }
            }
          }
          else if (local_22 == 0x20) {
            iVar7 = iVar6;
          }
        }
      }
      else {
        bVar8 = SCARRY4(iVar6,1);
        iVar6 = iVar6 + 1;
        if (bVar8) {
          FUN_00405944();
        }
        bVar8 = SCARRY4(local_14,1);
        local_14 = local_14 + 1;
        if (bVar8) {
          FUN_00405944();
        }
      }
      bVar8 = SCARRY4(iVar6,1);
      iVar6 = iVar6 + 1;
      if (bVar8) {
        FUN_00405944();
      }
      bVar8 = SCARRY4(local_14,1);
      local_14 = local_14 + 1;
      if (bVar8) {
        FUN_00405944();
      }
      FUN_00408034(&local_34,local_22);
      uVar9 = 0x610cc9;
      cVar3 = FUN_005e3ac0(local_34,1,&DAT_00610e24);
      if ((cVar3 == '\0') && ((local_23 != '\0' || ((param_5 < local_14 && (local_18 < iVar7)))))) {
        iVar4 = iVar6 - iVar7;
        if (SBORROW4(iVar6,iVar7)) {
          uVar9 = 0x610cf7;
          iVar4 = FUN_00405944();
        }
        puStack_5c = &local_38;
        iVar5 = iVar7 - local_18;
        local_14 = iVar4;
        if (SBORROW4(iVar7,local_18)) {
          FUN_00405944();
          iVar5 = extraout_ECX;
        }
        iVar4 = iVar5 + 1;
        if (SCARRY4(iVar5,1)) {
          FUN_00405944();
          iVar4 = extraout_ECX_00;
        }
        FUN_004086a8(local_8,local_18,iVar4,uVar9);
        FUN_004082dc(param_4,local_38);
        FUN_00408034(&local_3c,sVar1);
        uVar9 = FUN_005e3ac0(local_3c,1,&DAT_00610e24);
        if ((char)uVar9 == '\0') {
          while (iVar6 <= local_1c) {
            puStack_5c = (undefined4 *)&LAB_00610e44;
            FUN_00408480(&local_40,3);
            uVar9 = FUN_005e3ac0(local_8,iVar6,local_40);
            if ((char)uVar9 == '\0') break;
            bVar8 = SCARRY4(iVar6,1);
            iVar6 = iVar6 + 1;
            if (bVar8) {
              uVar9 = FUN_00405944();
            }
          }
          if ((local_23 == '\0') && (iVar6 < local_1c)) {
            FUN_004082dc(param_4,local_c);
            uVar9 = param_4;
          }
        }
        bVar8 = SCARRY4(iVar7,1);
        iVar7 = iVar7 + 1;
        if (bVar8) {
          FUN_00405944(uVar9);
        }
        local_23 = '\0';
        local_18 = iVar7;
      }
    } while (iVar6 <= local_1c);
  }
  puVar10 = &local_44;
  FUN_004086a8(local_8,local_18,0x7fffffff);
  FUN_004082dc(param_4,local_44);
  puVar2 = puStack_58;
  *in_FS_OFFSET = (int)puVar10;
  puStack_58 = &LAB_00610e0d;
  puStack_5c = (undefined4 *)0x610df8;
  thunk_FUN_00406e80(&local_44,8,puVar2);
  puStack_5c = (undefined4 *)0x610e05;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
