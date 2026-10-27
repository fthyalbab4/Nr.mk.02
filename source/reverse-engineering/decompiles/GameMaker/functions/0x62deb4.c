// rea decompile_all
// name: FUN_0062deb4
// address: 0x62deb4
// body: available
// range: 0x62deb4-0x62e0a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062deb4(int param_1,int *param_2,int param_3,float param_4,double param_5,double param_6,
                 char param_7,char param_8,undefined4 param_9,undefined4 param_10,int param_11,
                 int param_12,int param_13)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  undefined2 uVar6;
  undefined2 uStack_3a;
  undefined1 local_28 [16];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;

  if (((((*(int *)(*(int *)(param_1 + 4) + 4) != 0) && (*(int *)(*(int *)(param_1 + 4) + 8) != 0))
       && (param_12 != 0)) && ((param_11 != 0 && (0.0 < param_6)))) && (0.0 < param_5)) {
    local_c = param_3;
    local_8 = param_2;
    local_18 = FUN_00410538();
    iVar1 = FUN_00410538();
    if ((local_18 != 0) && (iVar1 != 0)) {
      piVar2 = (int *)FUN_00462a64(local_8);
      (**(code **)(*piVar2 + 0x10))(piVar2,local_28);
      local_10 = local_c;
      local_14 = param_13;
      if ((param_8 != '\0') && (local_c < 0)) {
        uVar3 = FUN_00410538();
        uVar6 = (undefined2)uVar3;
        uStack_3a = (undefined2)((uint)uVar3 >> 0x10);
        iVar1 = FUN_0062db94(param_1);
        iVar4 = CONCAT22(uStack_3a,uVar6) % iVar1;
        fVar5 = (float10)iVar4 * (float10)param_4;
        local_10 = FUN_00410538(CONCAT22(uStack_3a,uVar6) / iVar1,iVar4,iVar1,SUB104(fVar5,0),
                                (int)((unkuint10)fVar5 >> 0x20),(short)((unkuint10)fVar5 >> 0x40));
      }
      if ((param_7 != '\0') && (param_13 < 0)) {
        uVar3 = FUN_00410538();
        uVar6 = (undefined2)uVar3;
        uStack_3a = (undefined2)((uint)uVar3 >> 0x10);
        iVar1 = FUN_0062db9c(param_1);
        iVar4 = CONCAT22(uStack_3a,uVar6) % iVar1;
        fVar5 = (float10)iVar4 * (float10)param_4;
        local_14 = FUN_00410538(CONCAT22(uStack_3a,uVar6) / iVar1,iVar4,iVar1,SUB104(fVar5,0),
                                (int)((unkuint10)fVar5 >> 0x20),(short)((unkuint10)fVar5 >> 0x40));
      }
      param_12 = param_12 + local_c;
      param_11 = param_11 + param_13;
      iVar1 = (**(code **)(*local_8 + 0x30))();
      if (iVar1 <= param_12) {
        param_12 = (**(code **)(*local_8 + 0x30))();
      }
      iVar1 = (**(code **)(*local_8 + 0x24))();
      if (iVar1 <= param_11) {
        param_11 = (**(code **)(*local_8 + 0x24))();
      }
      if ((0 < param_12) && (0 < param_11)) {
        iVar1 = *(int *)(param_1 + 4);
        FUN_00703fc4(iVar1,local_8,local_10,param_11,param_12,param_7,param_8,1,
                     *(undefined4 *)(*(int *)(param_1 + 4) + 8),
                     *(undefined4 *)(*(int *)(param_1 + 4) + 4),param_9,param_10,
                     (float)*(int *)(iVar1 + 8) * (float)param_5,
                     (float)*(int *)(iVar1 + 4) * (float)param_6,(short)local_14);
      }
    }
  }
  return;
}
