// rea decompile_all
// name: FUN_00621ef0
// address: 0x621ef0
// body: available
// range: 0x621ef0-0x622420 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00621ef0(int param_1,uint param_2,uint param_3,double param_4,uint param_5,uint param_6,
                 double param_7,double param_8,double param_9,double param_10,double param_11,
                 double param_12,double param_13,double param_14,double param_15)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float10 fVar13;
  float10 fVar14;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined2 uStack_bc;
  undefined1 local_b4 [8];
  undefined2 uStack_ac;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined1 local_94 [8];
  undefined2 uStack_8c;

  cVar7 = FUN_00620ff8(param_1);
  if (cVar7 != '\0') {
    iVar8 = FUN_004048b8();
    uVar9 = iVar8 << 0x18 | (param_2 & 0xff) << 0x10 | param_2 & 0xff00 | param_2 >> 0x10 & 0xff;
    iVar8 = FUN_004048b8();
    uVar10 = iVar8 << 0x18 | (param_3 & 0xff) << 0x10 | param_3 & 0xff00 | param_3 >> 0x10 & 0xff;
    if (0.0 <= (float)param_4 * 255.0) {
      _local_94 = (float10)255.0 * (float10)param_4;
    }
    else {
      _local_94 = (float10)(unkuint10)0;
    }
    if (_local_94 <= (float10)255.0) {
      local_a4 = local_94._0_4_;
      uStack_a0 = local_94._4_4_;
      uStack_9c = uStack_8c;
    }
    else {
      local_a4 = 0;
      uStack_a0 = 0xff000000;
      uStack_9c = 0x4006;
    }
    fVar13 = (float10)CONCAT28(uStack_9c,CONCAT44(uStack_a0,local_a4));
    iVar8 = FUN_004048b8();
    uVar11 = iVar8 << 0x18 | (param_6 & 0xff) << 0x10 | param_6 & 0xff00 | param_6 >> 0x10 & 0xff;
    if (0.0 <= (float)param_4 * 255.0) {
      _local_b4 = (float10)255.0 * (float10)param_4;
    }
    else {
      _local_b4 = (float10)(unkuint10)0;
    }
    if (_local_b4 <= (float10)255.0) {
      local_c4 = local_b4._0_4_;
      uStack_c0 = local_b4._4_4_;
      uStack_bc = uStack_ac;
    }
    else {
      local_c4 = 0;
      uStack_c0 = 0xff000000;
      uStack_bc = 0x4006;
    }
    fVar14 = (float10)CONCAT28(uStack_bc,CONCAT44(uStack_c0,local_c4));
    iVar8 = FUN_004048b8();
    uVar12 = iVar8 << 0x18 | (param_5 & 0xff) << 0x10 | param_5 & 0xff00 | param_5 >> 0x10 & 0xff;
    puVar1 = (undefined4 *)(DAT_0085b3c4 + param_1 * 0x18);
    dVar4 = param_9 * param_13 + -0.5;
    dVar5 = param_8 * param_12 + -0.5;
    if (_DAT_0062242c <= ABS((float10)param_7)) {
      FUN_00404874();
      dVar2 = (double)fVar14;
      FUN_00404864();
      dVar3 = (double)fVar13;
      dVar6 = dVar2 * -0.5 + dVar3 * -0.5 + param_11;
      FUN_00621608(*puVar1,uVar9,uVar10,uVar12,uVar11,(param_14 + param_12) / (double)(int)puVar1[4]
                   ,(param_15 + param_13) / (double)(int)puVar1[3],param_14 / (double)(int)puVar1[4]
                   ,param_15 / (double)(int)puVar1[3],dVar5 * dVar3 + (param_10 - dVar2 * -0.5),
                   dVar5 * dVar2 + dVar3 * -0.5 + param_11,
                   dVar5 * dVar3 + (param_10 - dVar4 * dVar2),
                   dVar5 * dVar2 + dVar4 * dVar3 + param_11,
                   dVar3 * -0.5 + (param_10 - dVar4 * dVar2),dVar2 * -0.5 + dVar4 * dVar3 + param_11
                   ,dVar3 * -0.5 + (param_10 - dVar2 * -0.5),SUB84(dVar6,0),
                   (short)((ulonglong)dVar6 >> 0x20));
    }
    else {
      FUN_00621608(*puVar1,uVar9,uVar10,uVar12,uVar11,(param_14 + param_12) / (double)(int)puVar1[4]
                   ,(param_15 + param_13) / (double)(int)puVar1[3],param_14 / (double)(int)puVar1[4]
                   ,param_15 / (double)(int)puVar1[3],param_10 + dVar5,param_11 + -0.5,
                   param_10 + dVar5,param_11 + dVar4,param_10 + -0.5,param_11 + dVar4,
                   param_10 + -0.5,SUB84(param_11 + -0.5,0),
                   (short)((ulonglong)(param_11 + -0.5) >> 0x20));
    }
  }
  return;
}
