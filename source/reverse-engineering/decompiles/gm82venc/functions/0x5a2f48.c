// rea decompile_all
// name: FUN_005a2f48
// address: 0x5a2f48
// body: available
// range: 0x5a2f48-0x5a3069 inclusive
// range: 0x5a3071-0x5a3089 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a2ff0 (push 0x5a306a followed by fs-segment stack chaining); handler 0x5a306a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a2f48(int *param_1,int param_2,undefined4 param_3)

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
  puStack_2c0 = (undefined1 *)0x5a2f64;
  local_c = param_3;
  local_8 = param_1;
  FUN_005a2ef4(param_1);
  puStack_2c0 = (undefined1 *)0x5a2f6f;
  FUN_00405fdc(local_8[0xb]);
  local_8[0xb] = 0;
  iVar3 = local_8[10];
  puStack_2c0 = (undefined1 *)0x5a2f89;
  uVar2 = FUN_00405fac(&LAB_004319cc,1);
  *(undefined4 *)(iVar3 + 8) = uVar2;
  puStack_2c0 = (undefined1 *)(param_2 >> 0x1f);
  uStack_2c8 = 0x5a2f9a;
  puStack_2c4 = (undefined1 *)param_2;
  FUN_0043c8b8(uVar2);
  puStack_2c0 = (undefined1 *)0x5a2faa;
  FUN_0043ca88(local_c,*(undefined4 *)(*(int *)(iVar3 + 8) + 4),param_2);
  if (0 < param_2) {
    ppuVar5 = &PTR_FUN_00686bd8;
    puVar6 = local_e0;
    for (iVar4 = 0x35; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *ppuVar5;
      ppuVar5 = ppuVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    local_2b0[0] = local_e0;
    puStack_2c0 = (undefined1 *)0x5a2fe5;
    FUN_005a3314(local_2b0,0x3e,0x1d0);
    puStack_2c4 = &LAB_005a306a;
    uStack_2c8 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c8;
    puStack_2c0 = &stack0xfffffffc;
    FUN_0043c854(*(undefined4 *)(iVar3 + 8));
    FUN_005a4a80(local_2b0,*(undefined4 *)(iVar3 + 8));
    FUN_005a35dc(local_2b0,0xffffffff);
    *(undefined4 *)(iVar3 + 0x10) = local_294;
    *(undefined4 *)(iVar3 + 0xc) = local_290;
    *(bool *)(iVar3 + 0x14) = local_288 == 1;
    iVar3 = FUN_005a3728(local_2b0);
    puVar1 = puStack_2c0;
    *(char *)((int)local_8 + 0x41) = '\x01' - (iVar3 == 0);
    *in_FS_OFFSET = uStack_2c8;
    puStack_2c0 = (undefined1 *)0x5a3071;
    puStack_2c4 = (undefined1 *)0x5a3069;
    FUN_005a33e4(local_2b0,uStack_2c8,puVar1);
    return;
  }
  *(undefined1 *)((int)local_8 + 0x22) = 1;
  puStack_2c0 = (undefined1 *)0x5a3083;
  (**(code **)(*local_8 + 0x10))(local_8,local_8);
  return;
}
