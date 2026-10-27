// rea decompile_all
// name: FUN_0054e8f0
// address: 0x54e8f0
// body: available
// range: 0x54e8f0-0x54eaf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54e917 (push 0x54eaf4 followed by fs-segment stack chaining); handler 0x54eaf4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054e8f0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  undefined4 *local_24;
  ushort *local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_50 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_54 = &LAB_0054eaf4;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  cVar4 = FUN_005513cc(uVar1);
  if (cVar4 != '\0') {
    FUN_00550530(uVar1,0,&local_38);
    local_2c = local_38;
    local_30 = local_38 + local_34;
    iVar5 = FUN_00550148(uVar1,0);
    *(int *)(param_1 + 0x20) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar5 + 0x10);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x14);
      local_1c = FUN_00551120(uVar1,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1c));
      local_20 = (ushort *)FUN_00551120(uVar1,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x24));
      local_24 = (undefined4 *)FUN_00551120(uVar1,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x20));
      FUN_004391a4(param_1,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x18));
      local_3c = *(int *)(*(int *)(param_1 + 0x20) + 0x18);
      if (-1 < local_3c + -1) {
        local_28 = 0;
        do {
          uVar2 = *(uint *)((uint)*local_20 * 4 + local_1c);
          if ((uVar2 < local_2c) || (local_30 < uVar2)) {
            uVar7 = 0x54ea32;
            FUN_004081e8(&local_c,0);
          }
          else {
            *(undefined1 *)(param_1 + 0x18) = 1;
            uVar6 = FUN_00551120(uVar1,uVar2);
            uVar7 = 0x54e9f5;
            FUN_00407590(&local_8,uVar6,0);
            uStack_58 = 0x54e9fd;
            uVar6 = FUN_00407dd0(&local_14);
            uStack_58 = 0x54ea07;
            cVar4 = FUN_00534b38(local_8,uVar6);
            uStack_58 = 0x54ea15;
            FUN_0040840c(&local_c,local_14);
            if (cVar4 == '\0') {
              uStack_58 = 0x54ea26;
              FUN_004083c0(&local_c,local_8);
            }
          }
          uVar6 = FUN_00551120(uVar1,*local_24);
          FUN_00407590(&local_8,uVar6,0,uVar7);
          uVar7 = FUN_00407dd0(&local_18);
          cVar4 = FUN_00534b38(local_8,uVar7);
          FUN_0040840c(&local_10,local_18);
          if (cVar4 == '\0') {
            FUN_004083c0(&local_10,local_8);
          }
          uVar7 = FUN_0054e18c(&DAT_00547cbc,1,param_1,0,*local_20 + *(short *)(param_1 + 0x1c),
                               local_28 & 0xffff,uVar2,local_c,local_10);
          *(undefined4 *)(*(int *)(param_1 + 4) + local_28 * 4) = uVar7;
          local_20 = local_20 + 1;
          local_24 = local_24 + 1;
          local_28 = local_28 + 1;
          local_3c = local_3c + -1;
        } while (local_3c != 0);
      }
    }
  }
  puVar3 = puStack_50;
  *in_FS_OFFSET = uStack_58;
  puStack_50 = &LAB_0054eafb;
  puStack_54 = (undefined1 *)0x54eade;
  FUN_00407de8(&local_18,2,puVar3);
  puStack_54 = (undefined1 *)0x54eaeb;
  thunk_FUN_004072fc(&local_10,2);
  puStack_54 = (undefined1 *)0x54eaf3;
  FUN_004072d8(&local_8);
  return;
}
