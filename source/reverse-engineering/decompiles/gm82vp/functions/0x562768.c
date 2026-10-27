// rea decompile_all
// name: FUN_00562768
// address: 0x562768
// body: available
// range: 0x562768-0x562961 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00562768(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  float10 fVar6;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined1 local_34 [8];
  undefined2 uStack_2c;
  undefined1 local_24 [8];
  undefined2 uStack_1c;
  int local_18;
  undefined8 local_14;
  undefined4 local_c;
  undefined4 local_8;

  (**(code **)(*DAT_006863dc + 0x50))(DAT_006863dc,&local_4c);
  (**(code **)(*DAT_006863dc + 0x50))(DAT_006863dc,&local_4c);
  if ((double)CONCAT44(DAT_0068640c,DAT_00686408) == 0.0) {
    local_18 = FUN_004baf44(DAT_006863dc);
    if (local_18 < 1) {
      local_18 = 1;
    }
    lVar1 = (longlong)DAT_00686400 * (longlong)(param_1 - local_4c);
    uVar2 = FUN_004048b8((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
    *param_3 = uVar2;
    FUN_004baf84(DAT_006863dc);
    lVar1 = (longlong)DAT_00686404 * (longlong)(param_2 - local_48);
    uVar2 = FUN_004048b8((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
    *param_4 = uVar2;
  }
  else {
    local_14 = (double)CONCAT44(DAT_0068640c,DAT_00686408);
    if (local_14 < 0.0) {
      iVar3 = FUN_004baf44(DAT_006863dc);
      _local_24 = (float10)iVar3 / (float10)DAT_00686400;
      iVar3 = FUN_004baf84(DAT_006863dc);
      fVar6 = (float10)iVar3 / (float10)DAT_00686404;
      if (fVar6 <= _local_24) {
        local_34._0_4_ = SUB104(fVar6,0);
        local_44 = local_34._0_4_;
        local_34._4_4_ = (undefined4)((unkuint10)fVar6 >> 0x20);
        uStack_40 = local_34._4_4_;
        uStack_2c = (undefined2)((unkuint10)fVar6 >> 0x40);
        uStack_3c = uStack_2c;
      }
      else {
        local_44 = local_24._0_4_;
        uStack_40 = local_24._4_4_;
        uStack_3c = uStack_1c;
      }
      local_14 = (double)(float10)CONCAT28(uStack_3c,CONCAT44(uStack_40,local_44));
      _local_34 = fVar6;
    }
    if (local_14 == 0.0) {
      *param_3 = 0;
      *param_4 = 0;
    }
    else {
      uVar4 = FUN_004baf44(DAT_006863dc);
      uVar5 = FUN_004048b8();
      local_8 = FUN_0040976c(uVar4 - uVar5,
                             (((int)uVar4 >> 0x1f) - extraout_EDX) - (uint)(uVar4 < uVar5));
      uVar4 = FUN_004baf84(DAT_006863dc);
      uVar5 = FUN_004048b8();
      local_c = FUN_0040976c(uVar4 - uVar5,
                             (((int)uVar4 >> 0x1f) - extraout_EDX_00) - (uint)(uVar4 < uVar5));
      uVar2 = FUN_004048b8();
      *param_3 = uVar2;
      uVar2 = FUN_004048b8();
      *param_4 = uVar2;
    }
  }
  return;
}
