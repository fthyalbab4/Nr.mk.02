// rea decompile_all
// name: FUN_00480b08
// address: 0x480b08
// body: available
// range: 0x480b08-0x480ce2 inclusive
// range: 0x480d16-0x480d36 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x480b2a (push 0x480d37 followed by fs-segment stack chaining); handler 0x480d37 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x480b59 (push 0x480cf4 followed by fs-segment stack chaining); handler 0x480cf4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x480bc1 (push 0x480ce3 followed by fs-segment stack chaining); handler 0x480ce3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00480b08(int param_1)

{
  LPBYTE pBVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  BOOL BVar4;
  undefined4 uVar5;
  short *psVar6;
  undefined4 uVar7;
  DWORD Flags;
  uint Level;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined4 local_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined4 local_40;
  undefined1 local_3c;
  short *local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  DWORD local_24;
  LPBYTE local_20;
  LPBYTE local_1c;
  undefined4 local_18;
  byte local_11;
  DWORD local_10;
  DWORD local_c;
  int local_8;

  puStack_50 = &stack0xfffffffc;
  puVar9 = &stack0xfffffffc;
  local_2c = 0;
  local_30 = 0;
  local_28 = 0;
  puStack_54 = &LAB_00480d37;
  local_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_58;
  puVar2 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x10) == 0) {
    puStack_5c = (undefined1 *)0x480b46;
    uVar3 = FUN_0043c790(&PTR_FUN_00430700,1);
    *(undefined4 *)(local_8 + 0x10) = uVar3;
    puStack_60 = &LAB_00480cf4;
    uStack_64 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_64;
    if (*(int *)PTR_DAT_0068966c == 2) {
      Flags = 6;
      local_11 = 4;
    }
    else {
      Flags = 2;
      local_11 = 5;
    }
    local_c = 0;
    Level = (uint)local_11;
    puStack_5c = &stack0xfffffffc;
    EnumPrintersW(Flags,(LPWSTR)0x0,Level,(LPBYTE)0x0,0,&local_c,&local_10);
    if (local_c == 0) {
      *in_FS_OFFSET = uStack_64;
      puVar2 = puStack_50;
    }
    else {
      local_1c = (LPBYTE)FUN_00404324(local_c);
      uVar3 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffff90;
      BVar4 = EnumPrintersW(Flags,(LPWSTR)0x0,Level,local_1c,local_c,&local_c,&local_10);
      if (BVar4 != 0) {
        local_20 = local_1c;
        if (-1 < (int)(local_10 - 1)) {
          local_24 = local_10;
          do {
            pBVar1 = local_20;
            if (local_11 == 4) {
              uVar7 = *(undefined4 *)local_20;
              uVar5 = FUN_0047fc58(&DAT_0047faf8,1,0,0,uVar7);
              FUN_00408350(&local_28,uVar7);
              (**(code **)(**(int **)(local_8 + 0x10) + 0x3c))
                        (*(int **)(local_8 + 0x10),local_28,uVar5);
              local_20 = local_20 + 0xc;
            }
            else {
              local_18 = *(undefined4 *)(local_20 + 4);
              psVar6 = (short *)FUN_0047fa24(&local_18);
              while (*psVar6 != 0) {
                uVar7 = FUN_0047fc58(&DAT_0047faf8,1,0,psVar6,*(undefined4 *)pBVar1);
                puVar8 = &local_2c;
                FUN_0040b9d0(PTR_LAB_00688a9c,&local_30);
                local_40 = *(undefined4 *)pBVar1;
                local_3c = 10;
                local_34 = 10;
                local_38 = psVar6;
                FUN_00417c88(local_30,&local_40,1,puVar8);
                (**(code **)(**(int **)(local_8 + 0x10) + 0x3c))
                          (*(int **)(local_8 + 0x10),local_2c,uVar7);
                psVar6 = (short *)FUN_0047fa24(&local_18);
              }
              local_20 = local_20 + 0x14;
            }
            local_24 = local_24 - 1;
          } while (local_24 != 0);
        }
        *in_FS_OFFSET = uVar3;
        FUN_00404340(local_1c,local_c,puVar9);
        return;
      }
      FUN_00406ba8();
      *in_FS_OFFSET = uStack_64;
      puVar2 = puStack_50;
    }
  }
  puStack_50 = puVar2;
  puVar2 = puStack_50;
  *in_FS_OFFSET = local_58;
  puStack_50 = &LAB_00480d3e;
  puStack_54 = (undefined1 *)0x480d36;
  thunk_FUN_004072fc(&local_30,3,puVar2);
  return;
}
