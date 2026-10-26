// rea decompile_all
// name: FUN_0062a5a8
// address: 0x62a5a8
// body: available
// range: 0x62a5a8-0x62a6a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62a5ce (push 0x62a6a4 followed by fs-segment stack chaining); handler 0x62a6a4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_0062a5a8(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  undefined1 *apuStack_1830 [1522];
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_44;
  undefined4 local_2c;
  undefined4 local_c;
  undefined4 local_8;

  bVar6 = 0;
  local_c = 0;
  apuStack_1830[0x5f1] = (undefined1 *)0x62a5c3;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  apuStack_1830[0x5f0] = &LAB_0062a6a4;
  apuStack_1830[0x5ef] = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = apuStack_1830 + 0x5ef;
  apuStack_1830[0x5f1] = &stack0xfffffffc;
  if ((((DAT_006887dc != 0) && (apuStack_1830[0x5f1] = &stack0xfffffffc, DAT_006887e0 < 1)) &&
      (apuStack_1830[0x5f1] = &stack0xfffffffc, -1 < param_1)) &&
     (apuStack_1830[0x5f1] = &stack0xfffffffc, param_1 < DAT_00883550)) {
    apuStack_1830[0x5f1] = &stack0xfffffffc;
    FUN_00404f38(&stack0xffffffa4,0x50,0);
    local_5c = 0x50;
    puVar4 = (undefined4 *)(PTR_DAT_00689464 + (uint)bVar6 * -8 + 4);
    local_44 = *(undefined4 *)PTR_DAT_00689464;
    *(undefined4 *)(&stack0xffffffc0 + (uint)bVar6 * -8) = *puVar4;
    *(undefined4 *)(&stack0xffffffc4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         puVar4[(uint)bVar6 * -2 + 1];
    *(undefined4 *)
     ((int)(&stack0xffffffc4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4) =
         (puVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    puVar4 = (undefined4 *)(DAT_00883554 + param_1 * 0x10);
    puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
    local_54 = *puVar4;
    *(undefined4 *)((int)&stack0xffffffb0 + (uint)bVar6 * 0xfffffffe * 4) = *puVar5;
    *(undefined4 *)(&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         puVar5[(uint)bVar6 * -2 + 1];
    *(undefined4 *)
     ((int)(&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4) =
         (puVar5 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    FUN_004083e8(&local_c,*(undefined4 *)(DAT_00883558 + param_1 * 4),0xfde9);
    local_2c = local_c;
    iVar3 = (**(code **)(*DAT_006887e4 + 0x60))();
    if (iVar3 == 0) {
      cVar2 = FUN_0062a350(local_8);
      if (cVar2 != '\0') {
        DAT_006887e0 = 2;
      }
    }
  }
  puVar1 = apuStack_1830[0x5f1];
  *in_FS_OFFSET = apuStack_1830[0x5ef];
  apuStack_1830[0x5f1] = &LAB_0062a6ab;
  apuStack_1830[0x5f0] = (undefined1 *)0x62a69b;
  FUN_004072d8(&local_c,apuStack_1830[0x5ef],puVar1);
  apuStack_1830[0x5f0] = (undefined1 *)0x62a6a3;
  thunk_FUN_004072d8(&local_8);
  return;
}
