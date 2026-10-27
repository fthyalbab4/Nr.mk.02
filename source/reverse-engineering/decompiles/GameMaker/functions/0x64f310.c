// rea decompile_all
// name: FUN_0064f310
// address: 0x64f310
// body: available
// range: 0x64f310-0x64f581 inclusive
// range: 0x64f58c-0x64f5a1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x64f330 (push 0x64f5a2 followed by fs-segment stack chaining); handler 0x64f5a2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x64f562 (push 0x64f582 followed by fs-segment stack chaining); handler 0x64f582 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064f310(int param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  byte bVar7;
  undefined1 *apuStack_19dc [1522];
  undefined4 local_200;
  int *local_8;

  bVar7 = 0;
  apuStack_19dc[0x5f1] = &stack0xfffffffc;
  local_8 = (int *)0x0;
  apuStack_19dc[0x5f0] = &LAB_0064f5a2;
  apuStack_19dc[0x5ef] = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = apuStack_19dc + 0x5ef;
  puVar3 = &stack0xfffffffc;
  if ((((-1 < param_1) && (puVar3 = &stack0xfffffffc, param_1 < DAT_0077f2ac)) &&
      (puVar3 = &stack0xfffffffc, *(char *)(DAT_0078a1ac + param_1 * 0x14) != '\0')) &&
     (puVar3 = &stack0xfffffffc, *(int *)(DAT_0078a1ac + 4 + param_1 * 0x14) != 3)) {
    apuStack_19dc[0x5ee] = (undefined1 *)0x64f371;
    apuStack_19dc[0x5ee] = (undefined1 *)FUN_0040b140(&local_8);
    apuStack_19dc[0x5ed] = &LAB_0064f5b0;
    apuStack_19dc[0x5ec] = (undefined1 *)0x0;
    uVar1 = (**(code **)(**(int **)(DAT_0078a1ac + 0xc + param_1 * 0x14) + 0xc))();
    puVar3 = apuStack_19dc[0x5f1];
    if (((uVar1 & 0x80000000) == 0) && (local_8 != (int *)0x0)) {
      if (param_2 == (undefined1 *)0x0) {
        apuStack_19dc[0x5ee] = (undefined1 *)0x0;
        apuStack_19dc[0x5ed] = (undefined1 *)0x0;
        apuStack_19dc[0x5ec] = (undefined1 *)0x0;
        (**(code **)(*local_8 + 0x54))();
        puVar3 = apuStack_19dc[0x5f1];
      }
      else {
        iVar4 = 0x10;
        puVar2 = (undefined4 *)&stack0xfffffdf8;
        do {
          apuStack_19dc[0x5ee] = (undefined1 *)0x64f3e2;
          FUN_00404f08(puVar2,0x20,0);
          *puVar2 = 0x20;
          puVar2 = puVar2 + 8;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        bVar6 = ((uint)param_2 & 1) != 0;
        if (bVar6) {
          puVar2 = (undefined4 *)(PTR_DAT_00781838 + (uint)bVar7 * -8 + 4);
          local_200 = *(undefined4 *)PTR_DAT_00781838;
          *(undefined4 *)(&stack0xfffffe04 + (uint)bVar7 * -8) = *puVar2;
          apuStack_19dc[0x5ee] = param_2;
          *(undefined4 *)(&stack0xfffffe08 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               puVar2[(uint)bVar7 * -2 + 1];
          *(undefined4 *)
           ((int)(&stack0xfffffe08 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
           ((uint)bVar7 * -2 + 1) * 4) = (puVar2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
          param_2 = apuStack_19dc[0x5ee];
        }
        uVar1 = (uint)bVar6;
        if (((uint)param_2 & 2) != 0) {
          puVar5 = (undefined4 *)(&stack0xfffffe04 + (uint)bVar7 * -8 + uVar1 * 0x20);
          puVar2 = (undefined4 *)(PTR_DAT_00781778 + (uint)bVar7 * -8 + 4);
          *(undefined4 *)((int)&stack0xfffffe00 + uVar1 * 0x20) = *(undefined4 *)PTR_DAT_00781778;
          apuStack_19dc[0x5ee] = param_2;
          *puVar5 = *puVar2;
          puVar5[(uint)bVar7 * -2 + 1] = puVar2[(uint)bVar7 * -2 + 1];
          (puVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
               (puVar2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
          uVar1 = uVar1 + 1;
          param_2 = apuStack_19dc[0x5ee];
        }
        if (((uint)param_2 & 4) != 0) {
          puVar5 = (undefined4 *)(&stack0xfffffe04 + (uint)bVar7 * -8 + uVar1 * 0x20);
          puVar2 = (undefined4 *)(PTR_DAT_0078231c + (uint)bVar7 * -8 + 4);
          *(undefined4 *)((int)&stack0xfffffe00 + uVar1 * 0x20) = *(undefined4 *)PTR_DAT_0078231c;
          apuStack_19dc[0x5ee] = param_2;
          *puVar5 = *puVar2;
          puVar5[(uint)bVar7 * -2 + 1] = puVar2[(uint)bVar7 * -2 + 1];
          (puVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
               (puVar2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
          uVar1 = uVar1 + 1;
          param_2 = apuStack_19dc[0x5ee];
        }
        if (((uint)param_2 & 8) != 0) {
          puVar5 = (undefined4 *)(&stack0xfffffe04 + (uint)bVar7 * -8 + uVar1 * 0x20);
          puVar2 = (undefined4 *)(PTR_DAT_00781bf0 + (uint)bVar7 * -8 + 4);
          *(undefined4 *)((int)&stack0xfffffe00 + uVar1 * 0x20) = *(undefined4 *)PTR_DAT_00781bf0;
          apuStack_19dc[0x5ee] = param_2;
          *puVar5 = *puVar2;
          puVar5[(uint)bVar7 * -2 + 1] = puVar2[(uint)bVar7 * -2 + 1];
          (puVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
               (puVar2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
          uVar1 = uVar1 + 1;
          param_2 = apuStack_19dc[0x5ee];
        }
        puVar3 = param_2;
        if (((uint)param_2 & 0x40) != 0) {
          puVar5 = (undefined4 *)(&stack0xfffffe04 + (uint)bVar7 * -8 + uVar1 * 0x20);
          puVar2 = (undefined4 *)(PTR_DAT_00781740 + (uint)bVar7 * -8 + 4);
          *(undefined4 *)((int)&stack0xfffffe00 + uVar1 * 0x20) = *(undefined4 *)PTR_DAT_00781740;
          apuStack_19dc[0x5ee] = param_2;
          *puVar5 = *puVar2;
          puVar5[(uint)bVar7 * -2 + 1] = puVar2[(uint)bVar7 * -2 + 1];
          (puVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
               (puVar2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
          uVar1 = uVar1 + 1;
          puVar3 = apuStack_19dc[0x5ee];
        }
        if (((uint)puVar3 & 0x10) != 0) {
          puVar5 = (undefined4 *)(&stack0xfffffe04 + (uint)bVar7 * -8 + uVar1 * 0x20);
          puVar2 = (undefined4 *)(PTR_DAT_007821c4 + (uint)bVar7 * -8 + 4);
          *(undefined4 *)((int)&stack0xfffffe00 + uVar1 * 0x20) = *(undefined4 *)PTR_DAT_007821c4;
          apuStack_19dc[0x5ee] = puVar3;
          *puVar5 = *puVar2;
          puVar5[(uint)bVar7 * -2 + 1] = puVar2[(uint)bVar7 * -2 + 1];
          (puVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
               (puVar2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
          uVar1 = uVar1 + 1;
          puVar3 = apuStack_19dc[0x5ee];
        }
        if (((uint)puVar3 & 0x20) != 0) {
          puVar5 = (undefined4 *)(&stack0xfffffe04 + (uint)bVar7 * -8 + uVar1 * 0x20);
          puVar2 = (undefined4 *)(PTR_DAT_00781d58 + (uint)bVar7 * -8 + 4);
          *(undefined4 *)((int)&stack0xfffffe00 + uVar1 * 0x20) = *(undefined4 *)PTR_DAT_00781d58;
          apuStack_19dc[0x5ee] = puVar3;
          *puVar5 = *puVar2;
          puVar5[(uint)bVar7 * -2 + 1] = puVar2[(uint)bVar7 * -2 + 1];
          (puVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
               (puVar2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
          uVar1 = uVar1 + 1;
          puVar3 = apuStack_19dc[0x5ee];
        }
        if (((uint)param_2 & 0x40) != 0) {
          puVar5 = (undefined4 *)(&stack0xfffffe04 + (uint)bVar7 * -8 + uVar1 * 0x20);
          puVar2 = (undefined4 *)(PTR_DAT_00781740 + (uint)bVar7 * -8 + 4);
          *(undefined4 *)((int)&stack0xfffffe00 + uVar1 * 0x20) = *(undefined4 *)PTR_DAT_00781740;
          apuStack_19dc[0x5ee] = puVar3;
          *puVar5 = *puVar2;
          puVar5[(uint)bVar7 * -2 + 1] = puVar2[(uint)bVar7 * -2 + 1];
          (puVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
               (puVar2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
          uVar1 = uVar1 + 1;
          puVar3 = apuStack_19dc[0x5ee];
        }
        if (((uint)puVar3 & 0x80) != 0) {
          puVar5 = (undefined4 *)(&stack0xfffffe04 + (uint)bVar7 * -8 + uVar1 * 0x20);
          puVar2 = (undefined4 *)(PTR_DAT_0078245c + (uint)bVar7 * -8 + 4);
          *(undefined4 *)((int)&stack0xfffffe00 + uVar1 * 0x20) = *(undefined4 *)PTR_DAT_0078245c;
          apuStack_19dc[0x5ee] = puVar3;
          *puVar5 = *puVar2;
          puVar5[(uint)bVar7 * -2 + 1] = puVar2[(uint)bVar7 * -2 + 1];
          (puVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
               (puVar2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
          uVar1 = uVar1 + 1;
          puVar3 = apuStack_19dc[0x5ee];
        }
        if (((uint)puVar3 & 0x100) != 0) {
          puVar5 = (undefined4 *)(&stack0xfffffe04 + (uint)bVar7 * -8 + uVar1 * 0x20);
          puVar2 = (undefined4 *)(PTR_DAT_00781c14 + (uint)bVar7 * -8 + 4);
          *(undefined4 *)((int)&stack0xfffffe00 + uVar1 * 0x20) = *(undefined4 *)PTR_DAT_00781c14;
          *puVar5 = *puVar2;
          puVar5[(uint)bVar7 * -2 + 1] = puVar2[(uint)bVar7 * -2 + 1];
          (puVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
               (puVar2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
          uVar1 = uVar1 + 1;
        }
        puVar3 = apuStack_19dc[0x5f1];
        if (uVar1 != 0) {
          apuStack_19dc[0x5ed] = &LAB_0064f582;
          apuStack_19dc[0x5ec] = (undefined1 *)*in_FS_OFFSET;
          *in_FS_OFFSET = apuStack_19dc + 0x5ec;
          apuStack_19dc[0x5ee] = &stack0xfffffffc;
          (**(code **)(*local_8 + 0x54))();
          *in_FS_OFFSET = apuStack_19dc[0x5ec];
          puVar3 = apuStack_19dc[0x5f1];
        }
      }
    }
  }
  apuStack_19dc[0x5f1] = puVar3;
  puVar3 = apuStack_19dc[0x5f1];
  *in_FS_OFFSET = apuStack_19dc[0x5ef];
  apuStack_19dc[0x5f1] = &LAB_0064f5a9;
  apuStack_19dc[0x5f0] = (undefined1 *)0x64f5a1;
  FUN_0040b140(&local_8,apuStack_19dc[0x5ef],puVar3);
  return;
}
