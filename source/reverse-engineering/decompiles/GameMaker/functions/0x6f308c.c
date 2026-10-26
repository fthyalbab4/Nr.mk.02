// rea decompile_all
// name: FUN_006f308c
// address: 0x6f308c
// body: available
// range: 0x6f308c-0x6f321f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_006f308c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 byte param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  int aiStackY_17f8 [1522];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;

  bVar7 = 0;
  if ((*(int *)(*(int *)(param_1 + 0x420) + 0x1c) == 2) &&
     (((param_6 & 8) != 0 || ((param_6 & 0x10) != 0)))) {
    iVar2 = (param_5 * 100) / *(int *)(param_1 + 0x440);
    iVar3 = (param_4 * 100) / *(int *)(param_1 + 0x440);
    FUN_00438c38(iVar2,iVar3,iVar2,&stack0xffffffe4,iVar3);
    *(int *)(param_1 + 0x438) = iVar2;
    *(int *)(param_1 + 0x43c) = iVar3;
    if ((param_6 & 0x10) != 0) {
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x420) + 0x24 + (uint)bVar7 * -8);
      local_1c = *(int *)(*(int *)(param_1 + 0x420) + 0x20);
      puVar6 = puVar5 + (uint)bVar7 * -2 + 1;
      (&stack0xffffffe8)[(uint)bVar7 * 0xfffffffe] = *puVar5;
      *(undefined4 *)((int)&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8) = *puVar6;
      ((undefined4 *)((int)&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8))
      [(uint)bVar7 * -2 + 1] = puVar6[(uint)bVar7 * -2 + 1];
      local_8 = local_14 - local_1c;
      local_c = local_10 - local_18;
      iVar4 = (int)local_8 >> 1;
      if (iVar4 < 0) {
        iVar4 = iVar4 + (uint)((local_8 & 1) != 0);
      }
      iVar2 = iVar2 - iVar4;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      iVar4 = FUN_005b2ec4(*(undefined4 *)(param_1 + 0x420));
      local_1c = (iVar4 - local_8) + -1;
      if (iVar2 <= local_1c) {
        local_1c = iVar2;
      }
      iVar2 = (int)local_c >> 1;
      if (iVar2 < 0) {
        iVar2 = iVar2 + (uint)((local_c & 1) != 0);
      }
      iVar3 = iVar3 - iVar2;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      iVar2 = FUN_005b2edc(*(undefined4 *)(param_1 + 0x420));
      local_18 = (iVar2 - local_c) + -1;
      if (iVar3 <= local_18) {
        local_18 = iVar3;
      }
      local_14 = local_1c + local_8;
      local_10 = local_18 + local_c;
    }
    iVar2 = *(int *)(param_1 + 0x420);
    puVar5 = (undefined4 *)(iVar2 + 0x24 + (uint)bVar7 * -8);
    *(int *)(iVar2 + 0x20) = local_1c;
    puVar6 = puVar5 + (uint)bVar7 * -2 + 1;
    *puVar5 = (&stack0xffffffe8)[(uint)bVar7 * 0xfffffffe];
    *puVar6 = *(undefined4 *)((int)&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    puVar6[(uint)bVar7 * -2 + 1] =
         ((undefined4 *)((int)&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8))
         [(uint)bVar7 * -2 + 1];
    FUN_00530760(*(undefined4 *)(param_1 + 0x3f4),*(undefined4 *)(iVar2 + 0x20));
    FUN_00530760(*(undefined4 *)(param_1 + 0x3f8),*(undefined4 *)(*(int *)(param_1 + 0x420) + 0x28))
    ;
    FUN_00530760(*(undefined4 *)(param_1 + 0x3fc),*(undefined4 *)(*(int *)(param_1 + 0x420) + 0x24))
    ;
    FUN_00530760(*(undefined4 *)(param_1 + 0x400),*(undefined4 *)(*(int *)(param_1 + 0x420) + 0x2c))
    ;
    cVar1 = (**(code **)(**(int **)(param_1 + 0x3b8) + 0xec))();
    if (cVar1 != '\0') {
      FUN_006f28f8(param_1);
    }
    *PTR_DAT_00781980 = 1;
    *(undefined1 *)(param_1 + 0x428) = 1;
  }
  return;
}
