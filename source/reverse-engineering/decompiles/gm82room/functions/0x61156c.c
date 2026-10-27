// rea decompile_all
// name: FUN_0061156c
// address: 0x61156c
// body: available
// range: 0x61156c-0x61171e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x611592 (push 0x61171f followed by fs-segment stack chaining); handler 0x61171f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061156c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_84;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  wchar_t *pwVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  wchar_t *pwVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined4 uVar14;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  puStack_2c = (undefined1 *)0x611587;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_30 = &LAB_0061171f;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  if ((char)param_2 == '\0') {
    puStack_2c = &stack0xfffffffc;
    FUN_004081e8(&local_10,0);
  }
  else {
    puStack_2c = &stack0xfffffffc;
    FUN_004081e8(&local_10,L"FATAL ");
  }
  if (*(int *)PTR_DAT_006894f4 == 100000) {
    FUN_0041636c(*(int *)PTR_DAT_00689478 + 1,&local_14);
    puVar13 = &DAT_00611774;
    puVar12 = &DAT_00611784;
    pwVar10 = L"at time step ";
    uVar14 = local_14;
    FUN_0041636c(*(undefined4 *)PTR_DAT_00688bb0,&local_18);
    puVar8 = &DAT_00611774;
    puVar7 = &DAT_00611784;
    pwVar6 = L"of time line ";
    uVar9 = local_18;
    FUN_00581b54(*(undefined4 *)PTR_DAT_00689034,&local_1c);
    puVar4 = &DAT_00611810;
    puVar3 = &DAT_00611774;
    puVar2 = &DAT_00611784;
    puVar1 = &DAT_00611774;
    uStackY_84 = local_8;
    uVar5 = local_1c;
    FUN_0040875c(&local_10,0x14);
  }
  else {
    FUN_00584160(*(undefined4 *)PTR_DAT_006894f4,*(undefined4 *)PTR_DAT_00688bb0,&local_c);
    FUN_0041636c(*(int *)PTR_DAT_00689478 + 1,&local_20);
    puVar13 = &DAT_00611774;
    puVar12 = &DAT_00611784;
    ppuVar11 = &PTR_DAT_00611820;
    puVar8 = &DAT_00611774;
    puVar7 = &DAT_00611784;
    pwVar6 = L"for object ";
    uVar9 = local_c;
    uVar14 = local_20;
    FUN_00571ed0(*(undefined4 *)PTR_DAT_00689034,&local_24);
    puVar4 = &DAT_00611810;
    puVar3 = &DAT_00611774;
    puVar2 = &DAT_00611784;
    puVar1 = &DAT_00611774;
    uStackY_84 = local_8;
    uVar5 = local_24;
    FUN_0040875c(&local_10,0x14);
    pwVar10 = (wchar_t *)ppuVar11;
  }
  FUN_006113b0(local_10,param_2);
  *in_FS_OFFSET = uStackY_84;
  thunk_FUN_004072fc(&local_24,8,puVar1,&LAB_00611726,puVar2,puVar3,puVar4,uVar5,pwVar6,puVar7,
                     puVar8,uVar9,pwVar10,puVar12,puVar13,uVar14);
  return;
}
