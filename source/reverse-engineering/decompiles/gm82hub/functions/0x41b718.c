// rea decompile_all
// name: FUN_0041b718
// address: 0x41b718
// body: available
// range: 0x41b718-0x41b94a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41b73e (push 0x41b94b followed by fs-segment stack chaining); handler 0x41b94b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041b718(int param_1,undefined4 param_2)

{
  short sVar1;
  bool bVar2;
  undefined1 *puVar3;
  LCID LVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *in_FS_OFFSET;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;

  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_2c = (undefined1 *)0x41b733;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_30 = &LAB_0041b94b;
  puStack_34 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_34;
  iVar7 = 1;
  puStack_2c = &stack0xfffffffc;
  FUN_00408194(param_2,0);
  puVar8 = &local_10;
  LVar4 = GetThreadLocale();
  FUN_0041b284(LVar4,0x1009,&DAT_0041b968,puVar8);
  iVar5 = FUN_0041663c(local_10,1);
  if (iVar5 - 3U < 3) {
    while( true ) {
      FUN_00407498(&local_8);
      iVar5 = FUN_00408514();
      if (iVar5 < iVar7) break;
      iVar5 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar5 = FUN_00407488(&local_8,local_8);
      }
      if ((*(ushort *)(iVar5 + -2 + iVar7 * 2) < 0xd800) ||
         (0xdfff < *(ushort *)(iVar5 + -2 + iVar7 * 2))) {
        iVar5 = FUN_00417960(local_8 + -2 + iVar7 * 2,&PTR_DAT_0041b96c,2);
        if (iVar5 == 0) {
          FUN_004085b8(param_2,&PTR_DAT_0041b980);
          iVar7 = iVar7 + 1;
        }
        else {
          iVar5 = FUN_00417960(local_8 + -2 + iVar7 * 2,L"yyyy",4);
          if (iVar5 == 0) {
            FUN_004085b8(param_2,L"eeee");
            iVar7 = iVar7 + 3;
          }
          else {
            iVar5 = FUN_00417960(local_8 + -2 + iVar7 * 2,&PTR_DAT_0041b9ac,2);
            if (iVar5 == 0) {
              FUN_004085b8(param_2,&PTR_DAT_0041b9c0);
              iVar7 = iVar7 + 1;
            }
            else {
              sVar1 = *(short *)(local_8 + -2 + iVar7 * 2);
              if ((sVar1 == 0x59) || (sVar1 == 0x79)) {
                FUN_004085b8(param_2,&LAB_0041b9d4);
              }
              else {
                FUN_00408310(&local_1c,*(undefined2 *)(local_8 + -2 + iVar7 * 2));
                FUN_004085b8(param_2,local_1c);
              }
            }
          }
        }
        iVar7 = iVar7 + 1;
      }
      else {
        uVar9 = 0x41b829;
        uVar6 = FUN_0041d68c(local_8,iVar7);
        local_c = (int)uVar6 >> 1;
        if (local_c < 0) {
          local_c = local_c + (uint)((uVar6 & 1) != 0);
        }
        puStack_34 = &local_18;
        FUN_00408984(local_8,iVar7,local_c,uVar9);
        FUN_004085b8(param_2,local_18);
        iVar7 = iVar7 + local_c;
      }
    }
  }
  else {
    if ((DAT_0068cd50 == 4) || (DAT_0068cd50 - 0x11U < 2)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      while( true ) {
        FUN_00407498(&local_8);
        iVar5 = FUN_00408514();
        if (iVar5 < iVar7) break;
        sVar1 = *(short *)(local_8 + -2 + iVar7 * 2);
        if ((sVar1 != 0x47) && (sVar1 != 0x67)) {
          FUN_00408310(&local_14,sVar1);
          FUN_004085b8(param_2,local_14);
        }
        iVar7 = iVar7 + 1;
      }
    }
    else {
      FUN_00408194(param_2,local_8);
    }
  }
  puVar3 = puStack_2c;
  *in_FS_OFFSET = (int)puStack_34;
  puStack_2c = &LAB_0041b952;
  puStack_30 = (undefined1 *)0x41b942;
  thunk_FUN_004072fc(&local_1c,4,puVar3);
  puStack_30 = (undefined1 *)0x41b94a;
  thunk_FUN_004072d8(&local_8);
  return;
}
