// rea decompile_all
// name: FUN_0064a73c
// address: 0x64a73c
// body: available
// range: 0x64a73c-0x64a8fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_0064a73c(int param_1,int param_2,ushort param_3,int param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  byte bVar12;
  undefined4 auStackY_17f4 [1520];
  undefined4 local_18;
  ushort local_6;

  bVar12 = 0;
  if (param_2 != -1) {
    local_6 = param_3;
    if ((param_3 & 1) != 0) {
      uVar4 = param_5 - *(int *)(param_1 + 4);
      uVar8 = param_4 - *(int *)(param_1 + 8);
      uVar2 = (int)uVar4 >> 0x1f;
      uVar3 = (int)uVar8 >> 0x1f;
      if ((int)((uVar4 ^ uVar2) - uVar2) < (int)((uVar8 ^ uVar3) - uVar3)) {
        cVar1 = FUN_0041066c(uVar4);
        param_5 = (int)cVar1 * ((uVar8 ^ uVar3) - uVar3) + *(int *)(param_1 + 4);
      }
      else {
        cVar1 = FUN_0041066c(uVar8);
        param_4 = (int)cVar1 * ((uVar4 ^ uVar2) - uVar2) + *(int *)(param_1 + 8);
      }
    }
    iVar5 = *(int *)(param_1 + 4);
    iVar9 = *(int *)(param_1 + 8);
    if ((local_6 & 4) != 0) {
      iVar5 = iVar5 * 2 - param_5;
      iVar9 = *(int *)(param_1 + 8) - (param_4 - *(int *)(param_1 + 8));
    }
    FUN_00649ad4(param_1 + 0x14);
    puVar10 = (undefined4 *)(param_1 + 0x28 + (uint)bVar12 * -8);
    puVar6 = (undefined4 *)(param_1 + 0x18 + (uint)bVar12 * -8);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x14);
    puVar11 = puVar10 + (uint)bVar12 * -2 + 1;
    puVar7 = puVar6 + (uint)bVar12 * -2 + 1;
    *puVar10 = *puVar6;
    *puVar11 = *puVar7;
    puVar11[(uint)bVar12 * -2 + 1] = puVar7[(uint)bVar12 * -2 + 1];
    if (*(int *)(param_1 + 0x34) == 1) {
      FUN_00630b44(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x704),iVar5,iVar9,&stack0xffffffe8,
                   *(undefined1 *)(*(int *)PTR_DAT_00781e14 + 0x74c),param_4,param_5);
      puVar6 = (undefined4 *)(param_1 + 0x18 + (uint)bVar12 * -8);
      *(undefined4 *)(param_1 + 0x14) = local_18;
      puVar7 = puVar6 + (uint)bVar12 * -2 + 1;
      *puVar6 = *(undefined4 *)((int)&stack0xffffffec + (uint)bVar12 * 0xfffffffe * 4);
      *puVar7 = *(undefined4 *)(&stack0xfffffff0 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
      puVar7[(uint)bVar12 * -2 + 1] =
           *(undefined4 *)
            ((int)(&stack0xfffffff0 + (uint)bVar12 * -8 + (uint)bVar12 * -8) +
            ((uint)bVar12 * -2 + 1) * 4);
    }
    if (*(int *)(param_1 + 0x34) == 2) {
      FUN_00630b14(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x704),iVar5,iVar9,&stack0xffffffe8,
                   *(undefined1 *)(*(int *)PTR_DAT_00781e14 + 0x74c),param_4,param_5);
      puVar6 = (undefined4 *)(param_1 + 0x18 + (uint)bVar12 * -8);
      *(undefined4 *)(param_1 + 0x14) = local_18;
      puVar7 = puVar6 + (uint)bVar12 * -2 + 1;
      *puVar6 = *(undefined4 *)((int)&stack0xffffffec + (uint)bVar12 * 0xfffffffe * 4);
      *puVar7 = *(undefined4 *)(&stack0xfffffff0 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
      puVar7[(uint)bVar12 * -2 + 1] =
           *(undefined4 *)
            ((int)(&stack0xfffffff0 + (uint)bVar12 * -8 + (uint)bVar12 * -8) +
            ((uint)bVar12 * -2 + 1) * 4);
    }
    if (*(int *)(param_1 + 0x34) == 3) {
      FUN_00630b78(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x704),iVar5,iVar9,&stack0xffffffe8,
                   *(undefined1 *)(*(int *)PTR_DAT_00781e14 + 0x74c),param_4,param_5);
      puVar6 = (undefined4 *)(param_1 + 0x18 + (uint)bVar12 * -8);
      *(undefined4 *)(param_1 + 0x14) = local_18;
      puVar7 = puVar6 + (uint)bVar12 * -2 + 1;
      *puVar6 = *(undefined4 *)((int)&stack0xffffffec + (uint)bVar12 * 0xfffffffe * 4);
      *puVar7 = *(undefined4 *)(&stack0xfffffff0 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
      puVar7[(uint)bVar12 * -2 + 1] =
           *(undefined4 *)
            ((int)(&stack0xfffffff0 + (uint)bVar12 * -8 + (uint)bVar12 * -8) +
            ((uint)bVar12 * -2 + 1) * 4);
    }
    FUN_00649a1c(param_1 + 0x14,param_1 + 0x24,&stack0xffffffe8);
    puVar6 = (undefined4 *)(param_1 + 0x28 + (uint)bVar12 * -8);
    *(undefined4 *)(param_1 + 0x24) = local_18;
    puVar7 = puVar6 + (uint)bVar12 * -2 + 1;
    *puVar6 = *(undefined4 *)((int)&stack0xffffffec + (uint)bVar12 * 0xfffffffe * 4);
    *puVar7 = *(undefined4 *)(&stack0xfffffff0 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
    puVar7[(uint)bVar12 * -2 + 1] =
         *(undefined4 *)
          ((int)(&stack0xfffffff0 + (uint)bVar12 * -8 + (uint)bVar12 * -8) +
          ((uint)bVar12 * -2 + 1) * 4);
    FUN_00644e28(*(undefined4 *)PTR_DAT_00781e14);
    FUN_004eed28(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x5dc));
    *(undefined1 *)(*(int *)PTR_DAT_00781e14 + 0x70d) = 1;
  }
  return;
}
