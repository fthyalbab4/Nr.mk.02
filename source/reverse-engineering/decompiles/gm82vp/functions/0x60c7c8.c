// rea decompile_all
// name: FUN_0060c7c8
// address: 0x60c7c8
// body: available
// range: 0x60c7c8-0x60cc3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060c7c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte bVar9;
  int aiStackY_17fc [1482];
  undefined4 local_20;
  int local_10;

  bVar9 = 0;
  if (*(int *)(param_1 + 0x44) < 0) {
    iVar1 = FUN_005799a0(*(undefined4 *)(param_1 + 8));
  }
  else {
    iVar1 = FUN_005799a0();
  }
  if (iVar1 == 0) {
    FUN_00436ad0(0xfffe7960,0xfffe7960,0xfffe7960,&stack0xffffffe0,0x7960);
    puVar5 = (undefined4 *)(param_1 + 0xbc + (uint)bVar9 * -8);
    *(undefined4 *)(param_1 + 0xb8) = local_20;
    puVar6 = puVar5 + (uint)bVar9 * -2 + 1;
    *puVar5 = *(undefined4 *)((int)&stack0xffffffe4 + (uint)bVar9 * 0xfffffffe * 4);
    *puVar6 = *(undefined4 *)(&stack0xffffffe8 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    puVar6[(uint)bVar9 * -2 + 1] =
         *(undefined4 *)
          ((int)(&stack0xffffffe8 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
          ((uint)bVar9 * -2 + 1) * 4);
  }
  else if (*(double *)(param_1 + 0x30) == 0.0) {
    puVar7 = (undefined4 *)(param_1 + 0xbc + (uint)bVar9 * -8);
    puVar5 = (undefined4 *)(iVar1 + 0x18 + (uint)bVar9 * -8);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(iVar1 + 0x14);
    puVar8 = puVar7 + (uint)bVar9 * -2 + 1;
    puVar6 = puVar5 + (uint)bVar9 * -2 + 1;
    *puVar7 = *puVar5;
    *puVar8 = *puVar6;
    puVar8[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
    local_10 = *(int *)(param_1 + 0xb8) - *(int *)(iVar1 + 0xc);
    uVar2 = FUN_004048b8();
    *(undefined4 *)(param_1 + 0xb8) = uVar2;
    local_10 = (*(int *)(param_1 + 0xc0) - *(int *)(iVar1 + 0xc)) + 1;
    iVar3 = FUN_004048b8();
    *(int *)(param_1 + 0xc0) = iVar3;
    iVar4 = *(int *)(param_1 + 0xb8);
    if (iVar3 < iVar4) {
      *(int *)(param_1 + 0xb8) = iVar3;
      *(int *)(param_1 + 0xc0) = iVar4;
    }
    local_10 = *(int *)(param_1 + 0xbc) - *(int *)(iVar1 + 0x10);
    uVar2 = FUN_004048b8();
    *(undefined4 *)(param_1 + 0xbc) = uVar2;
    local_10 = (*(int *)(param_1 + 0xc4) - *(int *)(iVar1 + 0x10)) + 1;
    iVar4 = FUN_004048b8();
    *(int *)(param_1 + 0xc4) = iVar4;
    iVar1 = *(int *)(param_1 + 0xbc);
    if (iVar4 < iVar1) {
      *(int *)(param_1 + 0xbc) = iVar4;
      *(int *)(param_1 + 0xc4) = iVar1;
    }
  }
  else {
    puVar7 = (undefined4 *)(param_1 + 0xbc + (uint)bVar9 * -8);
    puVar5 = (undefined4 *)(iVar1 + 0x18 + (uint)bVar9 * -8);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(iVar1 + 0x14);
    puVar8 = puVar7 + (uint)bVar9 * -2 + 1;
    puVar6 = puVar5 + (uint)bVar9 * -2 + 1;
    *puVar7 = *puVar5;
    *puVar8 = *puVar6;
    puVar8[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
    iVar4 = *(int *)(param_1 + 0xbc);
    if (*(int *)(param_1 + 0xbc) <= *(int *)(param_1 + 0xc4)) {
      iVar4 = *(int *)(param_1 + 0xc4);
    }
    local_10 = (iVar4 - *(int *)(iVar1 + 0x10)) + 1;
    FUN_00404864();
    FUN_00404874();
    uVar2 = FUN_004048b8();
    *(undefined4 *)(param_1 + 0xb8) = uVar2;
    uVar2 = FUN_004048b8();
    *(undefined4 *)(param_1 + 0xc0) = uVar2;
    uVar2 = FUN_004048b8();
    *(undefined4 *)(param_1 + 0xbc) = uVar2;
    uVar2 = FUN_004048b8();
    *(undefined4 *)(param_1 + 0xc4) = uVar2;
  }
  return;
}
