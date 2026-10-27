// rea decompile_all
// name: FUN_0073740c
// address: 0x73740c
// body: available
// range: 0x73740c-0x737561 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x737426 (push 0x737562 followed by fs-segment stack chaining); handler 0x737562 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0073740c(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_1c;
  short local_12;
  ushort local_e;
  int *local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  puStack_2c = &LAB_00737562;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  uVar3 = FUN_0043f190(&PTR_FUN_00432364,1);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  uVar3 = FUN_0043f190(&PTR_FUN_00432364,1);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  local_c = *(int **)(param_1 + 4);
  bVar5 = true;
  FUN_00736eb0();
  piVar4 = (int *)((int)local_c + ((uint)local_e - local_1c));
  cVar2 = FUN_00415a34(local_8,L"VS_VERSION_INFO",&stack0xfffffffc);
  if ((cVar2 != '\0') && (local_12 == 0x34)) {
    *(int **)(param_1 + 8) = local_c;
    bVar5 = *local_c != -0x110fb43;
    local_c = local_c + 0xd;
    thunk_FUN_00736ea8(&local_c);
    while ((!bVar5 && (local_c < piVar4))) {
      FUN_00736eb0();
      local_c = local_c + 0xd;
      local_e = local_e - ((short)local_1c + 0x34);
      cVar2 = FUN_00415a34(local_8,L"StringFileInfo",&stack0xfffffffc);
      if (cVar2 == '\0') {
        cVar2 = FUN_00415a34(local_8,L"VarFileInfo");
        if (cVar2 == '\0') break;
        FUN_00737364();
      }
      else {
        FUN_00737014(local_e);
      }
    }
    FUN_007375ec(param_1);
    FUN_00736e04(param_1);
  }
  if (bVar5) {
    FUN_0041bfec(&PTR_LAB_0073528c,1,PTR_PTR_00781e28);
    FUN_00406618();
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00737569;
  puStack_2c = (undefined1 *)0x737561;
  thunk_FUN_00406e5c(&local_8,uStack_30,puVar1);
  return;
}
