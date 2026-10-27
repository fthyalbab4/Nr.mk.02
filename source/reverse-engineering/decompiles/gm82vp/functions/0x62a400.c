// rea decompile_all
// name: FUN_0062a400
// address: 0x62a400
// body: available
// range: 0x62a400-0x62a4d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62a42c (push 0x62a4d3 followed by fs-segment stack chaining); handler 0x62a4d3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_0062a400(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined1 *apuStack_1820 [1518];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_44;
  int local_34;
  undefined4 local_2c;
  undefined4 local_c;
  undefined4 local_8;

  bVar5 = 0;
  apuStack_1820[0x5ed] = (undefined1 *)0x62a419;
  local_c = param_3;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  apuStack_1820[0x5ed] = (undefined1 *)0x62a421;
  thunk_FUN_00407ad0(local_c);
  apuStack_1820[0x5ec] = &LAB_0062a4d3;
  apuStack_1820[0x5eb] = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = apuStack_1820 + 0x5eb;
  apuStack_1820[0x5ed] = &stack0xfffffffc;
  if ((DAT_006887dc != 0) && (apuStack_1820[0x5ed] = &stack0xfffffffc, DAT_006887e0 < 1)) {
    apuStack_1820[0x5ed] = &stack0xfffffffc;
    FUN_00404f38(&stack0xffffffa4,0x50,0);
    local_5c = 0x50;
    puVar4 = (undefined4 *)(PTR_DAT_00689464 + (uint)bVar5 * -8 + 4);
    local_44 = *(undefined4 *)PTR_DAT_00689464;
    *(undefined4 *)((int)&stack0xffffffc0 + (uint)bVar5 * 0xfffffffe * 4) = *puVar4;
    *(undefined4 *)(&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         puVar4[(uint)bVar5 * -2 + 1];
    *(undefined4 *)
     ((int)(&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
         (puVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    local_2c = FUN_00408220(local_8);
    if (0 < param_2) {
      local_34 = param_2;
    }
    if ((char)PTR_FUN_006887f0 != '\0') {
      local_58 = 4;
    }
    iVar3 = (**(code **)(*DAT_006887e4 + 0x60))();
    if (iVar3 == 0) {
      cVar2 = FUN_0062a350(local_c);
      if (cVar2 != '\0') {
        DAT_006887e0 = 1;
      }
    }
  }
  puVar1 = apuStack_1820[0x5ed];
  *in_FS_OFFSET = apuStack_1820[0x5eb];
  apuStack_1820[0x5ed] = &LAB_0062a4da;
  apuStack_1820[0x5ec] = (undefined1 *)0x62a4d2;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
