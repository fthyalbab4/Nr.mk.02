// rea decompile_all
// name: FUN_00621c20
// address: 0x621c20
// body: available
// range: 0x621c20-0x621eda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00621c20(int param_1,uint param_2,undefined4 param_3,double param_4,double param_5,
                 double param_6,double param_7,double param_8,double param_9,double param_10,
                 double param_11,double param_12,double param_13)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar9;
  float10 in_ST0;
  float10 fVar10;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined1 local_44 [8];
  undefined2 uStack_3c;

  cVar7 = FUN_00620ff8(param_1);
  if (cVar7 != '\0') {
    if (0.0 <= (float)param_4 * 255.0) {
      _local_44 = (float10)255.0 * (float10)param_4;
    }
    else {
      _local_44 = (float10)(unkuint10)0;
    }
    if (_local_44 <= (float10)255.0) {
      local_54 = local_44._0_4_;
      uStack_50 = local_44._4_4_;
      uStack_4c = uStack_3c;
    }
    else {
      local_54 = 0;
      uStack_50 = 0xff000000;
      uStack_4c = 0x4006;
    }
    fVar10 = (float10)CONCAT28(uStack_4c,CONCAT44(uStack_50,local_54));
    iVar8 = FUN_004048b8();
    uVar9 = iVar8 << 0x18 | (param_2 & 0xff) << 0x10 | param_2 & 0xff00 | param_2 >> 0x10 & 0xff;
    puVar1 = (undefined4 *)(DAT_0085b3c4 + param_1 * 0x18);
    dVar4 = param_7 * param_11 + -0.5;
    dVar5 = param_6 * param_10 + -0.5;
    if (_DAT_00621ee4 <= ABS((float10)param_5)) {
      FUN_00404874();
      dVar2 = (double)fVar10;
      FUN_00404864();
      dVar3 = (double)in_ST0;
      dVar6 = dVar2 * -0.5 + dVar3 * -0.5 + param_9;
      FUN_006214a8(*puVar1,uVar9,extraout_ECX_00,(param_12 + param_10) / (double)(int)puVar1[4],
                   (param_13 + param_11) / (double)(int)puVar1[3],param_12 / (double)(int)puVar1[4],
                   param_13 / (double)(int)puVar1[3],dVar5 * dVar3 + (param_8 - dVar2 * -0.5),
                   dVar5 * dVar2 + dVar3 * -0.5 + param_9,dVar5 * dVar3 + (param_8 - dVar4 * dVar2),
                   dVar5 * dVar2 + dVar4 * dVar3 + param_9,dVar3 * -0.5 + (param_8 - dVar4 * dVar2),
                   dVar2 * -0.5 + dVar4 * dVar3 + param_9,dVar3 * -0.5 + (param_8 - dVar2 * -0.5),
                   SUB84(dVar6,0),(short)((ulonglong)dVar6 >> 0x20));
    }
    else {
      FUN_00621348(*puVar1,uVar9,extraout_ECX,(param_12 + param_10) / (double)(int)puVar1[4],
                   (param_13 + param_11) / (double)(int)puVar1[3],param_12 / (double)(int)puVar1[4],
                   param_13 / (double)(int)puVar1[3],param_8 + dVar5,param_9 + dVar4,param_8 + -0.5,
                   SUB84(param_9 + -0.5,0),(short)((ulonglong)(param_9 + -0.5) >> 0x20));
    }
  }
  return;
}
