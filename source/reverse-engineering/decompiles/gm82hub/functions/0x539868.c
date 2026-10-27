// rea decompile_all
// name: FUN_00539868
// address: 0x539868
// body: available
// range: 0x539868-0x5399bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x539882 (push 0x5399be followed by fs-segment stack chaining); handler 0x5399be lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00539868(int param_1)

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
  puStack_2c = &LAB_005399be;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  uVar3 = FUN_0043c790(&PTR_FUN_00430700,1);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  uVar3 = FUN_0043c790(&PTR_FUN_00430700,1);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  local_c = *(int **)(param_1 + 4);
  bVar5 = true;
  FUN_0053930c();
  piVar4 = (int *)((int)local_c + ((uint)local_e - local_1c));
  cVar2 = FUN_00415880(local_8,L"VS_VERSION_INFO",&stack0xfffffffc);
  if ((cVar2 != '\0') && (local_12 == 0x34)) {
    *(int **)(param_1 + 8) = local_c;
    bVar5 = *local_c != -0x110fb43;
    local_c = local_c + 0xd;
    thunk_FUN_00539304(&local_c);
    while ((!bVar5 && (local_c < piVar4))) {
      FUN_0053930c();
      local_c = local_c + 0xd;
      local_e = local_e - ((short)local_1c + 0x34);
      cVar2 = FUN_00415880(local_8,&PTR_DAT_00539a04,&stack0xfffffffc);
      if (cVar2 == '\0') {
        cVar2 = FUN_00415880(local_8,L"VarFileInfo");
        if (cVar2 == '\0') break;
        FUN_005397c0();
      }
      else {
        FUN_00539470(local_e);
      }
    }
    FUN_00539a48(param_1);
    FUN_00539260(param_1);
  }
  if (bVar5) {
    FUN_0041be80(&LAB_005376e8,1,PTR_LAB_00688e78);
    FUN_00406ab4();
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_005399c5;
  puStack_2c = (undefined1 *)0x5399bd;
  thunk_FUN_004072d8(&local_8,uStack_30,puVar1);
  return;
}
