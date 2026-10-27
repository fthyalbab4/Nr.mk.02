// rea decompile_all
// name: FUN_00410510
// address: 0x410510
// body: available
// range: 0x410510-0x4105eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00410510(undefined4 param_1,undefined4 param_2,undefined4 param_3,double param_4,double param_5,
            double param_6)

{
  undefined2 uVar2;
  undefined4 uVar1;
  float10 fVar3;
  float10 fVar4;
  undefined1 local_44 [16];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined2 uStack_c;

  uVar2 = (undefined2)((uint)param_1 >> 0x10);
  if (param_4 == 0.0) {
    fVar3 = ABS((float10)param_6);
    fVar4 = ABS((float10)param_5);
    if (fVar4 <= fVar3) {
      local_24 = SUB104(fVar4,0);
      local_34 = local_24;
      uStack_20 = (undefined4)((unkuint10)fVar4 >> 0x20);
      uStack_30 = uStack_20;
      uStack_1c = (undefined2)((unkuint10)fVar4 >> 0x40);
      uVar2 = (undefined2)((unkuint10)fVar4 >> 0x30);
      uStack_2c = uStack_1c;
    }
    else {
      local_14 = SUB104(fVar3,0);
      local_34 = local_14;
      uStack_10 = (undefined4)((unkuint10)fVar3 >> 0x20);
      uStack_30 = uStack_10;
      uStack_c = (undefined2)((unkuint10)fVar3 >> 0x40);
      uVar2 = (undefined2)((unkuint10)fVar3 >> 0x30);
      uStack_2c = uStack_c;
    }
    if (_DAT_004105f0 * (float10)CONCAT28(uStack_2c,CONCAT44(uStack_30,local_34)) <= _DAT_004105f0)
    {
      local_44._8_2_ = 0x3fd7;
      local_44._0_8_ = 0x8cbccc096f5088cc;
    }
    else {
      local_44._0_10_ = _DAT_004105f0 * (float10)CONCAT28(uStack_2c,CONCAT44(uStack_30,local_34));
    }
    param_4 = (double)(float10)local_44._0_10_;
  }
  if (param_6 <= param_5) {
    param_5 = param_5 - param_6;
    uVar1 = CONCAT31((int3)(CONCAT22(uVar2,(ushort)(param_5 < param_4) << 8 |
                                           (ushort)(NAN(param_5) || NAN(param_4)) << 10 |
                                           (ushort)(param_5 == param_4) << 0xe) >> 8),
                     param_5 < param_4 != 0 || (param_5 == param_4) != 0);
  }
  else {
    param_6 = param_6 - param_5;
    uVar1 = CONCAT31((int3)(CONCAT22(uVar2,(ushort)(param_6 < param_4) << 8 |
                                           (ushort)(NAN(param_6) || NAN(param_4)) << 10 |
                                           (ushort)(param_6 == param_4) << 0xe) >> 8),
                     param_6 < param_4 != 0 || (param_6 == param_4) != 0);
  }
  return uVar1;
}
