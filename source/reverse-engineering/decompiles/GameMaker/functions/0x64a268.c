// rea decompile_all
// name: FUN_0064a268
// address: 0x64a268
// body: available
// range: 0x64a268-0x64a39e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064a268(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  uint auStack_1808 [1527];
  undefined1 *local_2c;
  uint auStack_28 [3];
  undefined1 local_1c [16];

  puVar1 = PTR_DAT_00781e14;
  bVar8 = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    if (*(int *)(param_1 + 0x34) == 0) {
      *(undefined4 *)PTR_DAT_00782130 = *(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x715);
      *(undefined4 *)PTR_DAT_00781ea8 = *(undefined4 *)(*(int *)puVar1 + 0x719);
    }
    else {
      *(undefined4 *)PTR_DAT_00782130 = *(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x719);
      *(undefined4 *)PTR_DAT_00781ea8 = *(undefined4 *)(*(int *)puVar1 + 0x715);
    }
    *(int *)PTR_DAT_007824a4 = *(int *)(*(int *)puVar1 + 0x72c) * 2 + 1;
    if (*(char *)(*(int *)puVar1 + 0x74d) == '\0') {
      *(undefined4 *)PTR_DAT_007824a4 = 0;
      *(undefined4 *)PTR_DAT_00781ea8 = *(undefined4 *)PTR_DAT_00782130;
    }
    *PTR_DAT_00782194 = *(undefined1 *)(*(int *)puVar1 + 0x754);
    *(undefined4 *)PTR_DAT_00781e5c = *(undefined4 *)(*(int *)puVar1 + 0x760);
    auStack_28[2] = 0x64a327;
    FUN_00649ad4(param_1 + 0x14);
    puVar4 = (undefined4 *)(param_1 + 0x28 + (uint)bVar8 * -8);
    puVar2 = (undefined4 *)(param_1 + 0x18 + (uint)bVar8 * -8);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x14);
    puVar5 = puVar4 + (uint)bVar8 * -2 + 1;
    puVar3 = puVar2 + (uint)bVar8 * -2 + 1;
    *puVar4 = *puVar2;
    *puVar5 = *puVar3;
    puVar5[(uint)bVar8 * -2 + 1] = puVar3[(uint)bVar8 * -2 + 1];
    auStack_28[2] = *(undefined4 *)(param_1 + 0x38);
    auStack_28[1] = 0;
    auStack_28[0] = (uint)*(byte *)(*(int *)puVar1 + 0x74c);
    local_2c = local_1c;
    FUN_00630bd4(*(undefined4 *)(*(int *)puVar1 + 0x704),param_1 + 0x3c,1000);
    puVar6 = (uint *)(param_1 + 0x18 + (uint)bVar8 * -8);
    *(undefined1 **)(param_1 + 0x14) = local_2c;
    puVar7 = puVar6 + (uint)bVar8 * -2 + 1;
    *puVar6 = auStack_28[(uint)bVar8 * -2];
    *puVar7 = auStack_28[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    puVar7[(uint)bVar8 * -2 + 1] =
         (auStack_28 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    FUN_00649a1c(param_1 + 0x14,param_1 + 0x24,auStack_1808 + 0x5f7);
    puVar6 = (uint *)(param_1 + 0x28 + (uint)bVar8 * -8);
    *(undefined1 **)(param_1 + 0x24) = local_2c;
    puVar7 = puVar6 + (uint)bVar8 * -2 + 1;
    *puVar6 = auStack_28[(uint)bVar8 * -2];
    *puVar7 = auStack_28[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    puVar7[(uint)bVar8 * -2 + 1] =
         (auStack_28 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    FUN_00644e28(*(undefined4 *)puVar1);
    FUN_004eed28(*(undefined4 *)(*(int *)puVar1 + 0x5dc));
  }
  return;
}
