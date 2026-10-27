// rea decompile_all
// name: FUN_0052fc0c
// address: 0x52fc0c
// body: available
// range: 0x52fc0c-0x52fd86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52fc2a (push 0x52fd87 followed by fs-segment stack chaining); handler 0x52fd87 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052fc0c(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwVar10;
  undefined4 uVar11;
  wchar_t *pwVar12;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  int local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 *local_8;

  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  puStack_2c = &LAB_0052fd87;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = param_1;
  FUN_0052fb44(param_1);
  iVar8 = local_8[1] + param_2;
  iVar5 = (**(code **)*local_8)();
  local_14 = (iVar5 - param_2) + -0xc;
  pwVar12 = L"_MJD";
  FUN_004168b0(&local_18);
  pwVar10 = L"#RWK";
  uVar11 = local_18;
  FUN_00408480(&DAT_0078894c,3);
  iVar5 = DAT_0078894c;
  iVar6 = DAT_0078894c;
  if ((DAT_0078894c != 0) && (*(short *)(DAT_0078894c + -10) != 2)) {
    iVar6 = FUN_00407048(&DAT_0078894c,DAT_0078894c);
  }
  iVar9 = 0;
  if (iVar6 != 0) {
    iVar9 = *(int *)(iVar6 + -4);
  }
  local_10 = FUN_0052fb8c(local_8,iVar5,iVar9 * 2,pwVar10,uVar11);
  local_c = *(undefined4 *)(iVar8 + 4);
  for (iVar5 = (local_10 & 0xff) + 6; iVar5 < local_14 + -5; iVar5 = iVar5 + 4) {
    uVar1 = *(undefined1 *)(iVar8 + 0xc + iVar5);
    uVar2 = *(undefined1 *)(iVar8 + 0xd + iVar5);
    uVar3 = *(undefined1 *)(iVar8 + 0xe + iVar5);
    uVar4 = *(undefined1 *)(iVar8 + 0xf + iVar5);
    uVar7 = FUN_0052fbcc(local_8,&local_c,&local_10);
    uVar7 = CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1))) ^ uVar7;
    *(char *)(iVar8 + 0xc + iVar5) = (char)uVar7;
    *(char *)(iVar8 + 0xd + iVar5) = (char)(uVar7 >> 8);
    *(char *)(iVar8 + 0xe + iVar5) = (char)(uVar7 >> 0x10);
    *(char *)(iVar8 + 0xf + iVar5) = (char)(uVar7 >> 0x18);
  }
  *in_FS_OFFSET = pwVar10;
  thunk_FUN_00406e5c(&local_18,pwVar10,pwVar12,&LAB_0052fd8e);
  return;
}
