// rea decompile_all
// name: FUN_00629b3c
// address: 0x629b3c
// body: available
// range: 0x629b3c-0x629c4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x629b66 (push 0x629c4f followed by fs-segment stack chaining); handler 0x629c4f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_00629b3c(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 **ppuVar7;
  undefined4 *in_FS_OFFSET;
  byte bVar8;
  undefined *apuStack_1830 [1524];
  undefined4 local_54;
  undefined4 local_44;
  undefined *local_40;
  undefined4 local_3c;
  int local_2c;
  undefined4 local_28;
  int local_c;
  int local_8;

  bVar8 = 0;
  apuStack_1830[0x5f3] = (undefined *)0x629b53;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  apuStack_1830[0x5f3] = (undefined *)0x629b5b;
  thunk_FUN_00407ad0(local_c);
  apuStack_1830[0x5f2] = &LAB_00629c4f;
  apuStack_1830[0x5f1] = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = apuStack_1830 + 0x5f1;
  puVar6 = (undefined4 *)(PTR_DAT_00688c5c + (uint)bVar8 * -8 + 4);
  local_54 = *(undefined4 *)PTR_DAT_00688c5c;
  *(undefined4 *)((int)&stack0xffffffb0 + (uint)bVar8 * 0xfffffffe * 4) = *puVar6;
  apuStack_1830[0x5f3] = &stack0xfffffffc;
  *(undefined4 *)(&stack0xffffffb4 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       puVar6[(uint)bVar8 * -2 + 1];
  *(undefined4 *)
   ((int)(&stack0xffffffb4 + (uint)bVar8 * -8 + (uint)bVar8 * -8) + ((uint)bVar8 * -2 + 1) * 4) =
       (puVar6 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
  local_44 = 0x10;
  local_40 = PTR_DAT_00689440;
  if (local_8 == 0) {
    iVar2 = 2;
  }
  else {
    puVar6 = (undefined4 *)(PTR_DAT_00689260 + (uint)bVar8 * -8 + 4);
    local_3c = *(undefined4 *)PTR_DAT_00689260;
    *(undefined4 *)((int)&stack0xffffffc8 + (uint)bVar8 * 0xfffffffe * 4) = *puVar6;
    *(undefined4 *)(&stack0xffffffcc + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         puVar6[(uint)bVar8 * -2 + 1];
    *(undefined4 *)
     ((int)(&stack0xffffffcc + (uint)bVar8 * -8 + (uint)bVar8 * -8) + ((uint)bVar8 * -2 + 1) * 4) =
         (puVar6 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    iVar2 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar2 = FUN_00407488(&local_8,local_8);
    }
    local_2c = 0;
    if (iVar2 != 0) {
      local_2c = *(int *)(iVar2 + -4);
    }
    local_2c = local_2c + 1;
    local_28 = FUN_00408220(local_8);
    iVar2 = 3;
  }
  ppuVar7 = apuStack_1830 + iVar2 * 6 + (uint)bVar8 * -2 + 0x5f2;
  puVar6 = (undefined4 *)(PTR_DAT_00689568 + (uint)bVar8 * -8 + 4);
  apuStack_1830[iVar2 * 6 + 0x5f1] = *(undefined1 **)PTR_DAT_00689568;
  *ppuVar7 = (undefined1 *)*puVar6;
  ppuVar7[(uint)bVar8 * -2 + 1] = (undefined1 *)puVar6[(uint)bVar8 * -2 + 1];
  (ppuVar7 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
       (undefined1 *)(puVar6 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
  iVar3 = local_c;
  if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
    iVar3 = FUN_00407488(&local_c,local_c);
  }
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + -4);
  }
  *(int *)(&stack0xffffffa4 + iVar2 * 0x18) = iVar4 + 1;
  uVar5 = FUN_00408220(local_c);
  *(undefined4 *)(&stack0xffffffa8 + iVar2 * 0x18) = uVar5;
  FUN_00629914(&stack0xffffffac,iVar2);
  puVar1 = apuStack_1830[0x5f3];
  *in_FS_OFFSET = apuStack_1830[0x5f1];
  apuStack_1830[0x5f3] = &LAB_00629c56;
  apuStack_1830[0x5f2] = (undefined *)0x629c4e;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
