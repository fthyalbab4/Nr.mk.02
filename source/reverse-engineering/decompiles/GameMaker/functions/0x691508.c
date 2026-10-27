// rea decompile_all
// name: FUN_00691508
// address: 0x691508
// body: available
// range: 0x691508-0x691865 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00691508(int param_1,char param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  byte bVar8;
  int aiStackY_17fc [1522];
  float local_2c;
  float local_28;
  undefined4 uStack_20;
  int aiStack_1c [4];

  bVar8 = 0;
  if (*PTR_DAT_00782020 != '\0') {
    iVar6 = *(int *)(*(int *)(param_1 + 0x5fc) + 0x48);
    aiStack_1c[3] = *(int *)(*(int *)(param_1 + 0x5fc) + 0x4c);
    if (iVar6 * aiStack_1c[3] != 0) {
      local_2c = (float)*(int *)(*(int *)(param_1 + 0x61c) + 0xc);
      local_28 = (float)iVar6;
      if ((float)aiStack_1c[3] <
          ((float)*(int *)(*(int *)(param_1 + 0x61c) + 0x10) * local_28) / local_2c) {
        local_2c = (float)*(int *)(*(int *)(param_1 + 0x61c) + 0x10);
        local_28 = (float)*(int *)(*(int *)(param_1 + 0x5fc) + 0x4c);
      }
      uVar3 = *(undefined4 *)(param_1 + 0x165c);
      *(float *)(param_1 + 0x165c) = 1.0 / (local_2c / local_28);
      if (param_2 != '\0') {
        piVar4 = (int *)FUN_00462144(&PTR_FUN_004587d4,CONCAT31((int3)((uint)iVar6 >> 8),1));
        FUN_00463dc0(piVar4,7);
        uVar5 = FUN_00410538();
        (**(code **)(*piVar4 + 0x44))(piVar4,uVar5);
        uVar5 = FUN_00410538();
        (**(code **)(*piVar4 + 0x38))(piVar4,uVar5);
        aiStack_1c[0] = 0;
        uStack_20 = 0;
        aiStack_1c[1] = (**(code **)(*piVar4 + 0x30))();
        aiStack_1c[2] = (**(code **)(*piVar4 + 0x24))();
        uVar1 = *(undefined1 *)(param_1 + 0x162f);
        uVar2 = *(undefined1 *)(param_1 + 0x1630);
        *(undefined1 *)(param_1 + 0x162f) = 1;
        *(undefined1 *)(param_1 + 0x1630) = 1;
        FUN_0068e484(param_1,piVar4,0,(short)&uStack_20);
        FUN_0068e818(param_1,piVar4,&uStack_20);
        FUN_0068e484(param_1,piVar4,1,(short)&uStack_20);
        *(undefined1 *)(param_1 + 0x162f) = uVar1;
        *(undefined1 *)(param_1 + 0x1630) = uVar2;
        piVar7 = *(int **)(*(int *)(param_1 + 0x600) + 0x1b0);
        (**(code **)(*piVar7 + 8))(piVar7,piVar4);
        FUN_00405a7c(piVar4);
      }
      uStack_20 = FUN_00410538();
      aiStack_1c[0] = FUN_00410538();
      aiStack_1c[3] = *(int *)(*(int *)(param_1 + 0x3c4) + 0x48) + *(int *)(param_1 + 0x1650);
      aiStack_1c[1] = FUN_00410538();
      aiStack_1c[3] = *(int *)(*(int *)(param_1 + 0x3c4) + 0x4c) + *(int *)(param_1 + 0x1654);
      aiStack_1c[2] = FUN_00410538();
      FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x1b0));
      iVar6 = FUN_00462a64();
      FUN_0045b850(*(undefined4 *)(iVar6 + 0x44),0xffffff);
      FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x1b0));
      iVar6 = FUN_00462a64();
      FUN_0045b954(*(undefined4 *)(iVar6 + 0x44),0xe);
      FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x1b0));
      iVar6 = FUN_00462a64();
      FUN_0045b9a4(*(undefined4 *)(iVar6 + 0x44),2);
      FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x1b0));
      iVar6 = FUN_00462a64();
      FUN_0045bda4(*(undefined4 *)(iVar6 + 0x48),1);
      if (param_2 != '\x01') {
        FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x1b0));
        uVar5 = FUN_00462a64();
        FUN_0045be64(uVar5,param_1 + 0x16ac);
      }
      piVar7 = (int *)(param_1 + 0x16b0 + (uint)bVar8 * -8);
      *(undefined4 *)(param_1 + 0x16ac) = uStack_20;
      piVar4 = piVar7 + (uint)bVar8 * -2 + 1;
      *piVar7 = aiStack_1c[(uint)bVar8 * -2];
      *piVar4 = aiStack_1c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      piVar4[(uint)bVar8 * -2 + 1] =
           (aiStack_1c + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
      FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x1b0));
      uVar5 = FUN_00462a64();
      FUN_0045be64(uVar5,param_1 + 0x16ac);
      iVar6 = *(int *)(param_1 + 0x600);
      *(uint *)(iVar6 + 0x50) = *(uint *)(iVar6 + 0x50) | 0x40;
      if (param_2 != '\x01') {
        FUN_004eed28(iVar6);
      }
      *(undefined4 *)(param_1 + 0x165c) = uVar3;
    }
  }
  return;
}
