// rea decompile_all
// name: FUN_005fc090
// address: 0x5fc090
// body: available
// range: 0x5fc090-0x5fc48b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5fc0c9 (push 0x5fc48c followed by fs-segment stack chaining); handler 0x5fc48c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fc090(int param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_FS_OFFSET;
  undefined4 uVar5;
  int *piStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  bool local_35;
  int local_34;
  int local_30;
  bool local_29;
  int local_28;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;

  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_5c = (undefined1 *)0x5fc0be;
  local_1c = param_3;
  local_18 = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_60 = &LAB_005fc48c;
  piStack_64 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&piStack_64;
  puStack_5c = &stack0xfffffffc;
  (**(code **)(*(int *)*local_1c + 0x44))();
  FUN_005fc04c();
  FUN_00561280(local_8,&local_44);
  FUN_004081e8(&local_8,local_44);
  iVar4 = 1;
  while( true ) {
    FUN_00407498(&local_8);
    uVar5 = 0x5fc18b;
    iVar2 = FUN_00408514();
    if (iVar2 < iVar4) break;
    iVar2 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar2 = FUN_00407488(&local_8,local_8);
    }
    if (*(short *)(iVar2 + -2 + iVar4 * 2) == 10) {
      if (iVar4 == 1) {
        local_29 = true;
      }
      else {
        iVar2 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          iVar2 = FUN_00407488(&local_8,local_8);
        }
        local_29 = *(short *)(iVar2 + -4 + iVar4 * 2) != 0xd;
      }
      if (local_29 == false) {
        FUN_00408a54(&local_8,iVar4,1);
        iVar4 = iVar4 + -1;
      }
      else {
        iVar2 = thunk_FUN_00408c9c(&local_8);
        *(undefined2 *)(iVar2 + -2 + iVar4 * 2) = 0xd;
      }
    }
    iVar4 = iVar4 + 1;
  }
  local_20 = 1;
  iVar4 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    uVar5 = 0x5fc1b7;
    iVar4 = FUN_00407488(&local_8,local_8);
  }
  local_28 = 0;
  if (iVar4 != 0) {
    local_28 = *(int *)(iVar4 + -4);
  }
  if (local_20 <= local_28) {
    do {
      for (local_24 = local_20; local_24 <= local_28; local_24 = local_24 + 1) {
        uVar5 = 0x5fc1ea;
        iVar4 = FUN_00407498(&local_8);
        if (*(short *)(iVar4 + -2 + local_24 * 2) == 0xd) break;
      }
      piStack_64 = &local_c;
      FUN_00408984(local_8,local_20,local_24 - local_20,uVar5);
      if (local_18 < 0) {
        local_35 = true;
      }
      else {
        local_30 = local_c;
        if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
          local_30 = FUN_00407488(&local_c,local_c);
        }
        local_34 = local_30;
        if (local_30 != 0) {
          local_34 = *(int *)(local_30 + -4);
        }
        local_35 = local_34 == 0;
      }
      if (local_35 == false) {
        while( true ) {
          FUN_00407498(&local_c);
          uVar5 = 0x5fc449;
          iVar4 = FUN_00408514();
          if (iVar4 < 1) break;
          iVar4 = 1;
          while( true ) {
            FUN_00407498(&local_c);
            iVar2 = FUN_00408514();
            if (iVar2 < iVar4) break;
            iVar2 = FUN_00407498(&local_c);
            if (*(short *)(iVar2 + -2 + iVar4 * 2) == 0x20) break;
            iVar2 = FUN_00407498(&local_c);
            if (*(short *)(iVar2 + -2 + iVar4 * 2) == 0x2d) break;
            iVar4 = iVar4 + 1;
          }
          FUN_00408984(local_c,1,iVar4 + -1,&local_10);
          local_3c = local_c;
          if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
            local_3c = FUN_00407488(&local_c,local_c);
          }
          local_40 = local_3c;
          if (local_3c != 0) {
            local_40 = *(int *)(local_3c + -4);
          }
          if (iVar4 <= local_40) {
            FUN_00408310(&local_48,*(undefined2 *)(local_c + -2 + iVar4 * 2));
            FUN_004085b8(&local_10,local_48);
          }
          FUN_00408a54(&local_c,1,iVar4);
          while( true ) {
            iVar4 = FUN_0057fae0(DAT_00688644,local_10);
            if (local_18 <= iVar4) break;
            FUN_00407498(&local_c);
            iVar4 = FUN_00408514();
            if (iVar4 < 1) break;
            iVar4 = 1;
            while( true ) {
              FUN_00407498(&local_c);
              uVar5 = 0x5fc34a;
              iVar2 = FUN_00408514();
              if (iVar2 < iVar4) break;
              uVar5 = 0x5fc356;
              iVar2 = FUN_00407498(&local_c);
              if (*(short *)(iVar2 + -2 + iVar4 * 2) == 0x20) break;
              uVar5 = 0x5fc366;
              iVar2 = FUN_00407498(&local_c);
              if (*(short *)(iVar2 + -2 + iVar4 * 2) == 0x2d) break;
              iVar4 = iVar4 + 1;
            }
            FUN_00408984(local_c,1,iVar4 + -1,uVar5,&local_14);
            iVar2 = local_c;
            if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
              iVar2 = FUN_00407488(&local_c,local_c);
            }
            iVar3 = 0;
            if (iVar2 != 0) {
              iVar3 = *(int *)(iVar2 + -4);
            }
            if (iVar4 <= iVar3) {
              FUN_00408310(&local_4c,*(undefined2 *)(local_c + -2 + iVar4 * 2));
              FUN_004085b8(&local_14,local_4c);
            }
            iVar2 = FUN_0057fae0(DAT_00688644,local_10);
            iVar3 = FUN_0057fae0(DAT_00688644,local_14);
            if (local_18 < iVar2 + iVar3) break;
            FUN_004085b8(&local_10,local_14);
            FUN_00408a54(&local_c,1,iVar4);
          }
          (**(code **)(*(int *)*local_1c + 0x38))((int *)*local_1c,local_10);
        }
      }
      else {
        (**(code **)(*(int *)*local_1c + 0x38))((int *)*local_1c,local_c);
      }
      local_20 = local_24 + 1;
    } while (local_20 <= local_28);
  }
  puVar1 = puStack_5c;
  *in_FS_OFFSET = (int)piStack_64;
  puStack_5c = &LAB_005fc493;
  puStack_60 = (undefined1 *)0x5fc47e;
  thunk_FUN_004072fc(&local_4c,3,puVar1);
  puStack_60 = (undefined1 *)0x5fc48b;
  thunk_FUN_004072fc(&local_14,4);
  return;
}
