// rea decompile_all
// name: FUN_0054f404
// address: 0x54f404
// body: available
// range: 0x54f404-0x54f525 inclusive
// range: 0x54f52d-0x54f545 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54f4ac (push 0x54f526 followed by fs-segment stack chaining); handler 0x54f526 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054f404(int *param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  undefined4 uStack_2c8;
  undefined1 *puStack_2c4;
  undefined1 *puStack_2c0;
  undefined4 *local_2b0 [7];
  undefined4 local_294;
  undefined4 local_290;
  int local_288;
  undefined4 local_e0 [53];
  undefined4 local_c;
  int *local_8;

  bVar7 = 0;
  puStack_2c0 = (undefined1 *)0x54f420;
  local_c = param_3;
  local_8 = param_1;
  FUN_0054f3b0(param_1);
  puStack_2c0 = (undefined1 *)0x54f42b;
  FUN_00405a7c(local_8[0xb]);
  local_8[0xb] = 0;
  iVar3 = local_8[10];
  puStack_2c0 = (undefined1 *)0x54f445;
  uVar2 = FUN_00405a4c(&LAB_00433630,1);
  *(undefined4 *)(iVar3 + 8) = uVar2;
  puStack_2c0 = (undefined1 *)(param_2 >> 0x1f);
  uStack_2c8 = 0x54f456;
  puStack_2c4 = (undefined1 *)param_2;
  FUN_0043f2b8(uVar2);
  puStack_2c0 = (undefined1 *)0x54f466;
  FUN_0043f488(local_c,*(undefined4 *)(*(int *)(iVar3 + 8) + 4),param_2);
  if (0 < param_2) {
    ppuVar5 = &PTR_FUN_0077b6b0;
    puVar6 = local_e0;
    for (iVar4 = 0x35; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *ppuVar5;
      ppuVar5 = ppuVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    local_2b0[0] = local_e0;
    puStack_2c0 = (undefined1 *)0x54f4a1;
    FUN_0054f7d0(local_2b0,0x3e,0x1d0);
    puStack_2c4 = &LAB_0054f526;
    uStack_2c8 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c8;
    puStack_2c0 = &stack0xfffffffc;
    FUN_0043f254(*(undefined4 *)(iVar3 + 8));
    FUN_00550f3c(local_2b0,*(undefined4 *)(iVar3 + 8));
    FUN_0054fa98(local_2b0,0xffffffff);
    *(undefined4 *)(iVar3 + 0x10) = local_294;
    *(undefined4 *)(iVar3 + 0xc) = local_290;
    *(bool *)(iVar3 + 0x14) = local_288 == 1;
    iVar3 = FUN_0054fbe4(local_2b0);
    puVar1 = puStack_2c0;
    *(char *)((int)local_8 + 0x41) = '\x01' - (iVar3 == 0);
    *in_FS_OFFSET = uStack_2c8;
    puStack_2c0 = (undefined1 *)0x54f52d;
    puStack_2c4 = (undefined1 *)0x54f525;
    FUN_0054f8a0(local_2b0,uStack_2c8,puVar1);
    return;
  }
  *(undefined1 *)((int)local_8 + 0x22) = 1;
  puStack_2c0 = (undefined1 *)0x54f53f;
  (**(code **)(*local_8 + 0x10))(local_8,local_8);
  return;
}
