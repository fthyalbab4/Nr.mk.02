// rea decompile_all
// name: FUN_005f5b2c
// address: 0x5f5b2c
// body: available
// range: 0x5f5b2c-0x5f5e21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f5b53 (push 0x5f5e22 followed by fs-segment stack chaining); handler 0x5f5e22 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f5b2c(int param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  float10 fVar7;
  float10 fVar8;
  undefined4 uStack_80;
  undefined1 *puStack_7c;
  undefined1 *puStack_78;
  int local_64;
  int local_60;
  undefined1 local_54 [8];
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined1 local_34 [8];
  undefined2 uStack_2c;
  undefined1 local_24 [8];
  undefined2 uStack_1c;
  undefined8 local_14;
  undefined1 local_a;
  undefined1 local_9;
  int local_8;

  puStack_78 = (undefined1 *)0x5f5b43;
  local_9 = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_7c = &LAB_005f5e22;
  uStack_80 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_80;
  local_a = 1;
  puStack_78 = &stack0xfffffffc;
  cVar2 = FUN_00416b0c(local_8);
  if (cVar2 == '\0') {
    local_a = 0;
  }
  else {
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407488(&local_8,local_8);
    }
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4);
    }
    if (iVar4 < 0x7f) {
      FUN_005f57a4();
      PTR_FUN_00688618._0_1_ = local_9;
      FUN_00510e18(DAT_008506c8[0xe5],local_8);
      FUN_0050f904(DAT_008506c8[0xe5]);
      FUN_00510a10(DAT_008506c8[0xe5],local_54);
      FUN_00510a10(DAT_008506c8[0xe5],&local_64);
      FUN_00510a10(DAT_008506c8[0xe5],local_54);
      FUN_00510a10(DAT_008506c8[0xe5],&local_64);
      if (0.0 < (double)CONCAT44(DAT_006885d8,DAT_006885d4)) {
        local_14 = (double)CONCAT44(DAT_006885d8,DAT_006885d4);
      }
      else {
        fVar7 = (float10)*(int *)(DAT_008506c8[0xe2] + 0x48) / (float10)(local_4c - local_64);
        fVar8 = (float10)*(int *)(DAT_008506c8[0xe2] + 0x4c) / (float10)(local_48 - local_60);
        if (fVar8 <= fVar7) {
          local_34._0_4_ = SUB104(fVar8,0);
          local_44 = local_34._0_4_;
          local_34._4_4_ = (undefined4)((unkuint10)fVar8 >> 0x20);
          uStack_40 = local_34._4_4_;
          uStack_2c = (undefined2)((unkuint10)fVar8 >> 0x40);
          uStack_3c = uStack_2c;
        }
        else {
          local_24._0_4_ = SUB104(fVar7,0);
          local_44 = local_24._0_4_;
          local_24._4_4_ = (undefined4)((unkuint10)fVar7 >> 0x20);
          uStack_40 = local_24._4_4_;
          uStack_1c = (undefined2)((unkuint10)fVar7 >> 0x40);
          uStack_3c = uStack_1c;
        }
        local_14 = (double)(float10)CONCAT28(uStack_3c,CONCAT44(uStack_40,local_44));
        _local_34 = fVar8;
        _local_24 = fVar7;
      }
      uVar5 = FUN_004048b8();
      FUN_004bac98(DAT_008506c8[0xe4],uVar5);
      uVar5 = FUN_004048b8();
      FUN_004baccc(DAT_008506c8[0xe4],uVar5);
      uVar6 = *(int *)(DAT_008506c8[0xe2] + 0x48) - *(int *)(DAT_008506c8[0xe4] + 0x48);
      iVar3 = (int)uVar6 >> 1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((uVar6 & 1) != 0);
      }
      FUN_004bac30(DAT_008506c8[0xe4],iVar3);
      uVar6 = *(int *)(DAT_008506c8[0xe2] + 0x4c) - *(int *)(DAT_008506c8[0xe4] + 0x4c);
      iVar3 = (int)uVar6 >> 1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((uVar6 & 1) != 0);
      }
      FUN_004bac64(DAT_008506c8[0xe4],iVar3);
      if (((DAT_00688608 != '\0') && (DAT_006885d0 == '\0')) && ((char)PTR_FUN_006885e0 == '\0')) {
        FUN_004e1ed8(DAT_008506c8,*(undefined4 *)(DAT_008506c8[0xe4] + 0x48));
        FUN_004e1f0c(DAT_008506c8,*(undefined4 *)(DAT_008506c8[0xe4] + 0x4c));
        FUN_004bac30(DAT_008506c8[0xe4],0);
        FUN_004bac64(DAT_008506c8[0xe4],0);
      }
      FUN_00436ad0(0,0,*(undefined4 *)(DAT_008506c8[0xe4] + 0x48),local_54,
                   *(undefined4 *)(DAT_008506c8[0xe4] + 0x4c));
      FUN_00510974(DAT_008506c8[0xe5],local_54);
      FUN_004bb578(DAT_008506c8[0xe4],1);
      FUN_0050fc58(DAT_008506c8[0xe5]);
      FUN_004847fc(DAT_008506c8[0xe7],1);
      if (DAT_006885d0 == '\0') {
        if (DAT_006885f0 == '\0') {
          FUN_004e6d64(DAT_008506c8);
        }
        else {
          (**(code **)(*DAT_008506c8 + 0x110))();
        }
      }
      else {
        while ((char)PTR_FUN_0068861c != '\0') {
          FUN_00628b78();
        }
      }
    }
    else {
      local_a = 0;
    }
  }
  puVar1 = puStack_78;
  *in_FS_OFFSET = uStack_80;
  puStack_78 = &LAB_005f5e29;
  puStack_7c = (undefined1 *)0x5f5e21;
  thunk_FUN_004072d8(&local_8,uStack_80,puVar1);
  return;
}
