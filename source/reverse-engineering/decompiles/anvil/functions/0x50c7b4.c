// rea decompile_all
// name: FUN_0050c7b4
// address: 0x50c7b4
// body: available
// range: 0x50c7b4-0x50c965 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x50c7d2 (push 0x50c966 followed by fs-segment stack chaining); handler 0x50c966 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050c7b4(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwVar9;
  undefined4 uVar10;
  wchar_t *pwVar11;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;

  puStack_30 = &stack0xfffffffc;
  local_20 = 0;
  puStack_34 = &LAB_0050c966;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_18 = param_1[1] + param_2;
  local_8 = param_1;
  iVar5 = (**(code **)*param_1)();
  local_1c = (iVar5 - param_2) + -0xc;
  pwVar11 = L"_MJD";
  FUN_004165b0(&local_20);
  pwVar9 = L"#RWK";
  uVar10 = local_20;
  FUN_0040875c(&DAT_0068fd54,3);
  iVar5 = DAT_0068fd54;
  iVar6 = DAT_0068fd54;
  if ((DAT_0068fd54 != 0) && (*(short *)(DAT_0068fd54 + -10) != 2)) {
    iVar6 = FUN_00407488(&DAT_0068fd54,DAT_0068fd54);
  }
  iVar8 = 0;
  if (iVar6 != 0) {
    iVar8 = *(int *)(iVar6 + -4);
  }
  local_14 = FUN_0050c734(local_8,iVar5,iVar8 * 2,pwVar9,uVar10);
  iVar5 = local_18;
  local_10 = *(int *)(local_18 + 4);
  iVar8 = local_18 + 0xc;
  local_c = local_10;
  for (iVar6 = (local_14 & 0xff) + 6; iVar6 < local_1c + -5; iVar6 = iVar6 + 4) {
    uVar1 = *(undefined1 *)(iVar8 + iVar6);
    uVar2 = *(undefined1 *)(iVar5 + 0xd + iVar6);
    uVar3 = *(undefined1 *)(iVar5 + 0xe + iVar6);
    uVar4 = *(undefined1 *)(iVar5 + 0xf + iVar6);
    uVar7 = FUN_0050c774(local_8,&local_10,&local_14);
    uVar7 = CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1))) ^ uVar7;
    *(char *)(iVar8 + iVar6) = (char)uVar7;
    *(char *)(iVar5 + 0xd + iVar6) = (char)(uVar7 >> 8);
    *(char *)(iVar5 + 0xe + iVar6) = (char)(uVar7 >> 0x10);
    *(char *)(iVar5 + 0xf + iVar6) = (char)(uVar7 >> 0x18);
  }
  iVar5 = FUN_0050c734(local_8,local_18 + 0xc,local_1c,pwVar9,uVar10);
  if (iVar5 != local_c) {
    FUN_00407100();
  }
  *in_FS_OFFSET = pwVar9;
  thunk_FUN_004072d8(&local_20,pwVar9,pwVar11,&LAB_0050c96d);
  return;
}
