// rea decompile_all
// name: FUN_005b2f20
// address: 0x5b2f20
// body: available
// range: 0x5b2f20-0x5b301f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_005b2f20(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  int aiStackY_17f8 [1521];
  undefined4 uVar7;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;

  bVar6 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00438c38(0,0,0,&stack0xffffffe4,0);
    puVar4 = (undefined4 *)(param_1 + 0x24 + (uint)bVar6 * -8);
    *(undefined4 *)(param_1 + 0x20) = local_1c;
    puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
    *puVar4 = *(undefined4 *)((int)&stack0xffffffe8 + (uint)bVar6 * 0xfffffffe * 4);
    *puVar5 = *(undefined4 *)(&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    puVar5[(uint)bVar6 * -2 + 1] =
         *(undefined4 *)
          ((int)(&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
          ((uint)bVar6 * -2 + 1) * 4);
  }
  else if (*(int *)(param_1 + 0x1c) != 2) {
    if (*(int *)(param_1 + 0x1c) == 1) {
      iVar1 = FUN_005b2edc(param_1);
      iVar1 = iVar1 + -1;
      puVar4 = &stack0xffffffe4;
      iVar2 = FUN_005b2ec4(param_1);
      FUN_00438c38(0,0,iVar2 + -1,puVar4,iVar1);
      puVar4 = (undefined4 *)(param_1 + 0x24 + (uint)bVar6 * -8);
      *(undefined4 *)(param_1 + 0x20) = local_1c;
      puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
      *puVar4 = *(undefined4 *)((int)&stack0xffffffe8 + (uint)bVar6 * 0xfffffffe * 4);
      *puVar5 = *(undefined4 *)(&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      puVar5[(uint)bVar6 * -2 + 1] =
           *(undefined4 *)
            ((int)(&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
            ((uint)bVar6 * -2 + 1) * 4);
    }
    else {
      uVar7 = 0;
      puVar4 = &stack0xffffffe4;
      iVar1 = FUN_005b2edc(param_1,param_2,param_3,puVar4,0);
      iVar2 = FUN_005b2ec4(param_1);
      FUN_00438c38(iVar2 + -1,iVar1 + -1,0,puVar4,uVar7);
      puVar4 = (undefined4 *)(param_1 + 0x24 + (uint)bVar6 * -8);
      *(undefined4 *)(param_1 + 0x20) = local_1c;
      puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
      *puVar4 = *(undefined4 *)((int)&stack0xffffffe8 + (uint)bVar6 * 0xfffffffe * 4);
      *puVar5 = *(undefined4 *)(&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      puVar5[(uint)bVar6 * -2 + 1] =
           *(undefined4 *)
            ((int)(&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
            ((uint)bVar6 * -2 + 1) * 4);
      iVar1 = *(int *)(param_1 + 4);
      if (-1 < iVar1 + -1) {
        iVar2 = 0;
        do {
          FUN_007039e0(*(undefined4 *)(*(int *)(param_1 + 0x30) + iVar2 * 4),
                       *(undefined4 *)(param_1 + 0x14),&stack0xffffffd4);
          iVar3 = *(int *)(param_1 + 0x20);
          if (local_2c <= *(int *)(param_1 + 0x20)) {
            iVar3 = local_2c;
          }
          *(int *)(param_1 + 0x20) = iVar3;
          iVar3 = *(int *)(param_1 + 0x28);
          if (*(int *)(param_1 + 0x28) <= local_24) {
            iVar3 = local_24;
          }
          *(int *)(param_1 + 0x28) = iVar3;
          iVar3 = *(int *)(param_1 + 0x24);
          if (local_28 <= *(int *)(param_1 + 0x24)) {
            iVar3 = local_28;
          }
          *(int *)(param_1 + 0x24) = iVar3;
          iVar3 = *(int *)(param_1 + 0x2c);
          if (*(int *)(param_1 + 0x2c) <= local_20) {
            iVar3 = local_20;
          }
          *(int *)(param_1 + 0x2c) = iVar3;
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
  }
  return;
}
