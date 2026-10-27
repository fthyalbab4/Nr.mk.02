// rea decompile_all
// name: FUN_00621974
// address: 0x621974
// body: available
// range: 0x621974-0x621c06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00621974(int param_1,uint param_2,undefined4 param_3,double param_4,double param_5,
                 double param_6,double param_7,double param_8,double param_9,double param_10,
                 double param_11)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  int iVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar11;
  float10 in_ST0;
  float10 fVar12;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined1 local_44 [8];
  undefined2 uStack_3c;

  cVar9 = FUN_00620ff8(param_1);
  if (cVar9 != '\0') {
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
    fVar12 = (float10)CONCAT28(uStack_4c,CONCAT44(uStack_50,local_54));
    iVar10 = FUN_004048b8();
    uVar11 = iVar10 << 0x18 | (param_2 & 0xff) << 0x10 | param_2 & 0xff00 | param_2 >> 0x10 & 0xff;
    puVar1 = (undefined4 *)(DAT_0085b3c4 + param_1 * 0x18);
    dVar4 = -param_7 * param_11 - 0.5;
    dVar5 = -param_6 * param_10 - 0.5;
    dVar6 = (double)(int)puVar1[1] * param_7 + dVar4;
    dVar7 = (double)(int)puVar1[2] * param_6 + dVar5;
    if (_DAT_00621c14 <= ABS((float10)param_5)) {
      FUN_00404874();
      dVar2 = (double)fVar12;
      FUN_00404864();
      dVar3 = (double)in_ST0;
      dVar8 = dVar5 * dVar2 + dVar4 * dVar3 + param_9;
      FUN_006214a8(*puVar1,uVar11,extraout_ECX_00,(double)(int)puVar1[2] / (double)(int)puVar1[4],
                   (double)(int)puVar1[1] / (double)(int)puVar1[3],0,0,0,0,
                   dVar7 * dVar3 + (param_8 - dVar4 * dVar2),dVar7 * dVar2 + dVar4 * dVar3 + param_9
                   ,dVar7 * dVar3 + (param_8 - dVar6 * dVar2),
                   dVar7 * dVar2 + dVar6 * dVar3 + param_9,dVar5 * dVar3 + (param_8 - dVar6 * dVar2)
                   ,dVar5 * dVar2 + dVar6 * dVar3 + param_9,
                   dVar5 * dVar3 + (param_8 - dVar4 * dVar2),SUB84(dVar8,0),
                   (short)((ulonglong)dVar8 >> 0x20));
    }
    else {
      FUN_00621348(*puVar1,uVar11,extraout_ECX,(double)(int)puVar1[2] / (double)(int)puVar1[4],
                   (double)(int)puVar1[1] / (double)(int)puVar1[3],0,0,0,0,param_8 + dVar7,
                   param_9 + dVar6,param_8 + dVar5,SUB84(param_9 + dVar4,0),
                   (short)((ulonglong)(param_9 + dVar4) >> 0x20));
    }
  }
  return;
}
