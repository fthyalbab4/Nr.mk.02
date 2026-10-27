// rea decompile_all
// name: FUN_006b386c
// address: 0x6b386c
// body: available
// range: 0x6b386c-0x6b3e76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b3896 (push 0x6b3e77 followed by fs-segment stack chaining); handler 0x6b3e77 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b386c(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_FS_OFFSET;
  undefined4 uVar6;
  int *piStack_64;
  int iStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  bool local_31;
  int local_30;
  bool local_29;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  puStack_58 = &stack0xfffffffc;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_8 = 0;
  puStack_5c = &LAB_006b3e77;
  iStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_60;
  FUN_00407eb8(param_1 + 0x318,0);
  FUN_00407eb8(param_1 + 0x31c,0);
  FUN_00407eb8(param_1 + 800,0);
  piStack_64 = (int *)0x6b38cb;
  FUN_004eed28(*(undefined4 *)(param_1 + 0x284));
  if (*PTR_DAT_00782644 != '\0') {
    iVar5 = *(int *)(param_1 + 0x2ec);
    iVar4 = *(int *)(param_1 + 0x2f0);
    iVar3 = FUN_00409a18(*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 4 + iVar5 * 0x10));
    if (iVar3 <= iVar4) {
      iVar4 = FUN_00409a18(*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 4 + iVar5 * 0x10));
    }
    piStack_64 = (int *)0x6b3924;
    iVar3 = FUN_00409a18(*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 4 + iVar5 * 0x10));
    if (0 < iVar3) {
      FUN_006b7d0c(param_1,iVar5,&local_8);
      local_10 = FUN_006aff9c(local_8,iVar4);
      local_10 = local_10 + 1;
      local_14 = FUN_006b0028(local_8,iVar4);
      local_14 = local_14 + 1;
      piStack_64 = &local_8;
      FUN_004086a8(local_8,local_10,local_14 - local_10);
      if (local_8 != 0) {
        FUN_006bb094(local_8,&local_38);
        FUN_00407f0c(&local_8,local_38);
        if (*(int *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 + iVar5 * 0x10) + 4 + local_10 * 0xc) ==
            3) {
          FUN_00407f0c(&local_8,0);
        }
        if (*(int *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 + iVar5 * 0x10) + 4 + local_10 * 0xc) ==
            2) {
          FUN_00407f0c(&local_8,0);
        }
        if (local_8 != 0) {
          FUN_00407eb8(param_1 + 0x318,local_8);
          FUN_004eed28(*(undefined4 *)(param_1 + 0x284));
          goto LAB_006b3e54;
        }
      }
    }
    local_c = 0;
    do {
      do {
        do {
          do {
            while (iVar4 = iVar4 + -1, iVar4 < 0) {
              if (iVar5 == 0) goto LAB_006b3e54;
              iVar5 = iVar5 + -1;
              iVar4 = FUN_00409a18(*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 4 + iVar5 * 0x10));
            }
          } while ((*(int *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 + iVar5 * 0x10) + 4 +
                            iVar4 * 0xc) == 3) ||
                  (*(int *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 + iVar5 * 0x10) + 4 + iVar4 * 0xc
                           ) == 2));
          if (*(short *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 + iVar5 * 0x10) + iVar4 * 0xc) ==
              0x3b) goto LAB_006b3e54;
          if (*(short *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 + iVar5 * 0x10) + iVar4 * 0xc) ==
              0x29) {
            local_c = local_c + 1;
          }
        } while ((*(short *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 + iVar5 * 0x10) + iVar4 * 0xc)
                  != 0x28) || (local_c = local_c + -1, -1 < local_c));
        FUN_006b7d0c(param_1,iVar5,&local_8);
        uVar6 = 0x6b3aca;
        local_10 = FUN_006b0094(local_8,iVar4);
        piStack_64 = &local_8;
        FUN_004086a8(local_8,local_10 + 1,iVar4 - local_10,uVar6);
      } while (local_8 == 0);
      local_1c = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        local_1c = FUN_00407048(&local_8,local_8);
      }
      local_20 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        local_20 = FUN_00407048(&local_8,local_8);
      }
      local_24 = local_20;
      if (local_20 != 0) {
        local_24 = *(int *)(local_20 + -4);
      }
      cVar2 = FUN_006aff6c(*(undefined2 *)(local_1c + -2 + local_24 * 2));
    } while (cVar2 == '\0');
    FUN_006bb094(local_8,&local_3c);
    FUN_00407f0c(&local_8,local_3c);
    if (local_8 != 0) {
      local_c = 0;
      local_18 = 0;
      while ((iVar4 = iVar4 + 1, iVar5 <= *(int *)(param_1 + 0x2ec) &&
             ((iVar5 != *(int *)(param_1 + 0x2ec) || (iVar4 < *(int *)(param_1 + 0x2f0)))))) {
        while ((iVar3 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8)), iVar5 < iVar3 &&
               (iVar3 = FUN_00409a18(*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 4 + iVar5 * 0x10)),
               iVar3 <= iVar4))) {
          iVar5 = iVar5 + 1;
          iVar4 = 0;
        }
        iVar3 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
        if (iVar3 <= iVar5) break;
        if ((*(int *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 + iVar5 * 0x10) + 4 + iVar4 * 0xc) != 3
            ) && (*(int *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 + iVar5 * 0x10) + 4 + iVar4 * 0xc)
                  != 2)) {
          if (*(short *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 + iVar5 * 0x10) + iVar4 * 0xc) ==
              0x29) {
            local_c = local_c + 1;
          }
          if (*(short *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 + iVar5 * 0x10) + iVar4 * 0xc) ==
              0x28) {
            local_c = local_c + -1;
          }
          if (*(short *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 + iVar5 * 0x10) + iVar4 * 0xc) ==
              0x5d) {
            local_c = local_c + 1;
          }
          if (*(short *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 + iVar5 * 0x10) + iVar4 * 0xc) ==
              0x5b) {
            local_c = local_c + -1;
          }
          if ((*(short *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 + iVar5 * 0x10) + iVar4 * 0xc) ==
               0x2c) && (local_c == 0)) {
            local_18 = local_18 + 1;
          }
        }
      }
      local_10 = -1;
      iVar5 = 0;
      do {
        FUN_00407058(&local_8);
        iVar4 = FUN_00408238();
        if (iVar4 <= iVar5) break;
        iVar5 = iVar5 + 1;
        FUN_00408034(&local_40,*(undefined2 *)(local_8 + -2 + iVar5 * 2));
        FUN_004082dc(param_1 + 0x318,local_40);
        iVar4 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          iVar4 = FUN_00407048(&local_8,local_8);
        }
        if (*(short *)(iVar4 + -2 + iVar5 * 2) == 0x2c) {
          local_29 = true;
        }
        else {
          local_28 = local_8;
          if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
            local_28 = FUN_00407048(&local_8,local_8);
          }
          local_29 = *(short *)(local_28 + -2 + iVar5 * 2) == 0x28;
        }
      } while ((local_29 == false) || (local_10 = local_10 + 1, local_10 != local_18));
      do {
        FUN_00407058(&local_8);
        iVar4 = FUN_00408238();
        if (iVar4 <= iVar5) goto LAB_006b3e38;
        iVar3 = iVar5 + 1;
        iVar4 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          iVar4 = FUN_00407048(&local_8,local_8);
        }
        if (*(short *)(iVar4 + -2 + iVar3 * 2) == 0x2c) {
          local_31 = true;
        }
        else {
          local_30 = local_8;
          if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
            local_30 = FUN_00407048(&local_8,local_8);
          }
          local_31 = *(short *)(local_30 + -2 + iVar3 * 2) == 0x29;
        }
        if (local_31 != false) goto LAB_006b3e38;
        FUN_00408034(&local_44,*(undefined2 *)(local_8 + -2 + iVar3 * 2));
        FUN_004082dc(param_1 + 0x31c,local_44);
        iVar5 = iVar3;
      } while( true );
    }
  }
  goto LAB_006b3e54;
LAB_006b3e38:
  while( true ) {
    FUN_00407058(&local_8);
    iVar4 = FUN_00408238();
    if (iVar4 <= iVar5) break;
    iVar5 = iVar5 + 1;
    FUN_00408034(&local_48,*(undefined2 *)(local_8 + -2 + iVar5 * 2));
    FUN_004082dc(param_1 + 800,local_48);
  }
  FUN_004eed28(*(undefined4 *)(param_1 + 0x284));
LAB_006b3e54:
  puVar1 = puStack_5c;
  *in_FS_OFFSET = (int)piStack_64;
  puStack_5c = &LAB_006b3e7e;
  iStack_60 = 0x6b3e6e;
  thunk_FUN_00406e80(&local_48,5,puVar1);
  iStack_60 = 0x6b3e76;
  thunk_FUN_00406e5c(&local_8);
  return;
}
