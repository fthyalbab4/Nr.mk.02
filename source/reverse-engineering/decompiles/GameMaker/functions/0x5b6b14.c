// rea decompile_all
// name: FUN_005b6b14
// address: 0x5b6b14
// body: available
// range: 0x5b6b14-0x5b6e1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b6b41 (push 0x5b6e3f followed by fs-segment stack chaining); handler 0x5b6e3f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b6b54 (push 0x5b6e1c followed by fs-segment stack chaining); handler 0x5b6e1c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b6b14(int *param_1,char *param_2,undefined4 *param_3,undefined4 param_4,uint *param_5)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_678;
  undefined1 *puStack_674;
  undefined1 *puStack_670;
  undefined4 uStack_66c;
  undefined1 *puStack_668;
  undefined1 *puStack_664;
  uint local_654 [256];
  uint auStack_254 [128];
  uint *local_54;
  undefined4 *local_50;
  uint local_4c;
  uint local_48;
  uint *local_44;
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  int local_34;
  uint local_30;
  undefined4 *local_2c;
  int *local_28;
  undefined1 local_24 [32];

  puStack_664 = (undefined1 *)0x5b6b36;
  local_2c = param_3;
  local_28 = param_1;
  FUN_00408d1c(local_24,&LAB_0040f2fc);
  puStack_668 = &LAB_005b6e3f;
  uStack_66c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_66c;
  local_34 = 0;
  puStack_674 = &LAB_005b6e1c;
  uStack_678 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_678;
  uVar8 = (uint)(byte)param_2[1];
  puStack_670 = &stack0xfffffffc;
  puStack_664 = &stack0xfffffffc;
  if (0x40 < uVar8) {
    puStack_670 = &stack0xfffffffc;
    puStack_664 = &stack0xfffffffc;
    FUN_0041bfec(&PTR_LAB_005b5f14,1,PTR_PTR_00781c9c);
    FUN_00406618();
  }
  if (uVar8 != 0) {
    local_38 = param_5;
    local_3c = local_654 + uVar8 * 4;
    uVar6 = 0;
    do {
      puVar1 = local_38;
      local_3c = local_3c + -4;
      local_30 = (uint)(param_2[uVar6 + 3] & 0x7f);
      bVar3 = param_2[uVar6 + 3] & 0x80;
      if (local_30 == 10) {
        *local_3c = 10;
        local_3c[2] = 0x80020004;
      }
      else {
        if (local_30 == 0x48) {
          local_40 = auStack_254 + local_34 * 2;
          if (bVar3 == 0) {
            uVar4 = FUN_00409368(*local_38);
            *local_40 = uVar4;
            local_40[1] = 0;
            *local_3c = 8;
            local_3c[2] = *local_40;
          }
          else {
            uVar4 = FUN_00409368(*(undefined4 *)*local_38);
            *local_40 = uVar4;
            local_40[1] = *local_38;
            *local_3c = 0x4008;
            local_3c[2] = (uint)local_40;
          }
          local_34 = local_34 + 1;
        }
        else if (bVar3 == 0) {
          if (local_30 == 0xc) {
            if ((short)*local_38 == 0x100) {
              local_44 = auStack_254 + local_34 * 2;
              uVar4 = FUN_00409368(local_38[2]);
              *local_44 = uVar4;
              local_44[1] = 0;
              *local_3c = 8;
              local_3c[2] = *local_44;
              local_34 = local_34 + 1;
            }
            else {
              *local_3c = *local_38;
              local_3c[1] = puVar1[1];
              local_3c[2] = puVar1[2];
              local_3c[3] = puVar1[3];
              local_38 = local_38 + 3;
            }
          }
          else {
            *local_3c = local_30;
            local_3c[2] = *local_38;
            if ((4 < (int)local_30) && ((int)local_30 < 8)) {
              local_38 = local_38 + 1;
              local_3c[3] = *local_38;
            }
          }
        }
        else {
          if ((local_30 == 0xc) && (*(short *)*local_38 == 0x100)) {
            FUN_004252bc(*local_38,*local_38,8);
          }
          *local_3c = local_30 | 0x4000;
          local_3c[2] = *local_38;
        }
        local_38 = local_38 + 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar8 != uVar6);
  }
  piVar2 = local_28;
  local_54 = local_654;
  local_50 = local_2c + 1;
  local_48 = (uint)(byte)param_2[2];
  if (*param_2 == '\x04') {
    *local_2c = 0xfffffffd;
    local_50 = local_2c;
    local_48 = local_48 + 1;
  }
  local_4c = uVar8;
  iVar5 = (**(code **)(*local_28 + 0x18))();
  iVar7 = local_34;
  if (iVar5 != 0) {
    FUN_005b70f0(iVar5,local_24);
    iVar7 = local_34;
  }
  while (iVar7 != 0) {
    iVar7 = iVar7 + -1;
    if (auStack_254[iVar7 * 2 + 1] != 0) {
      FUN_00409330(auStack_254[iVar7 * 2],auStack_254[iVar7 * 2 + 1]);
    }
  }
  *in_FS_OFFSET = piVar2;
  iVar7 = local_34;
  while (iVar7 != 0) {
    iVar7 = iVar7 + -1;
    SysFreeString((BSTR)auStack_254[iVar7 * 2]);
  }
  return;
}
