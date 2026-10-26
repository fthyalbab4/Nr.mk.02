// rea decompile_all
// name: FUN_00665fa4
// address: 0x665fa4
// body: available
// range: 0x665fa4-0x666074 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x665fc6 (push 0x666075 followed by fs-segment stack chaining); handler 0x666075 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00665fa4(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  int aiStackY_17f0 [1519];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;
  int aiStack_10 [3];

  bVar6 = 0;
  puStack_24 = (undefined1 *)0x665fbb;
  thunk_FUN_00407660(param_4);
  puStack_28 = &LAB_00666075;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  uStack_30 = 0x665fd7;
  puStack_24 = &stack0xfffffffc;
  cVar2 = FUN_00405c98(param_1[0xd],&PTR_LAB_0066dfc0);
  if (cVar2 != '\0') {
    uStack_30 = 0x665fe2;
    iVar3 = FUN_00679e90(param_1);
    if (*(char *)(iVar3 + 0x2b0) == '\0') {
      uStack_30 = 0x665ff9;
      FUN_00407f0c(&param_4,param_1[0x84]);
    }
  }
  uStack_30 = param_4;
  FUN_00678d58(param_1,param_2,param_3);
  cVar2 = (**(code **)(*param_1 + 0xb0))();
  if (cVar2 != '\0') {
    uVar4 = FUN_004f1454(param_1,2);
    *param_3 = uVar4;
    piVar5 = param_1 + (uint)bVar6 * -2 + 0x80;
    local_14 = param_1[0x7f];
    aiStack_10[(uint)bVar6 * -2] = *piVar5;
    aiStack_10[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] = piVar5[(uint)bVar6 * -2 + 1];
    (aiStack_10 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (piVar5 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    FUN_0040c268(&local_14,(param_1[0x12] + -0x15) - param_1[0x81],0);
    FUN_00678d58(param_1,&local_14,param_3,*(undefined4 *)(param_1[0x6d] + 0x58));
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0066607c;
  uStack_2c = 0x666074;
  thunk_FUN_00406e5c(&param_4,uStack_30,puVar1);
  return;
}
