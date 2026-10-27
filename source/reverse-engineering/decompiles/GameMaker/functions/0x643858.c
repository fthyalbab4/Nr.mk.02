// rea decompile_all
// name: FUN_00643858
// address: 0x643858
// body: available
// range: 0x643858-0x643967 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x643874 (push 0x643968 followed by fs-segment stack chaining); handler 0x643968 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00643858(int *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  LPCWSTR lpFileName;
  undefined4 *in_FS_OFFSET;
  undefined *puVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 auStack_c [3];
  char local_9;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_10 = 0;
  local_14 = 0;
  _auStack_c = (uint)param_2 << 0x18;
  puStack_28 = &LAB_00643968;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  iVar1 = *(int *)(*param_1 + 4);
  iVar2 = *(int *)(*param_1 + 8);
  FUN_005342d4(L".png",&local_8);
  FUN_007027fc(*param_1,local_8);
  FUN_0051acd0(*(undefined4 *)PTR_DAT_00781a58);
  uVar9 = 1;
  FUN_0041735c(*(undefined4 *)PTR_DAT_00782828,&local_10);
  puVar7 = &DAT_006439a0;
  puVar5 = &DAT_006439a0;
  uVar6 = local_8;
  uVar8 = local_10;
  FUN_00408480(&local_14,3);
  uVar3 = FUN_00533978(*(undefined4 *)PTR_DAT_00782828,local_14,puVar5,uVar6,puVar7,uVar8,uVar9);
  auStack_c = (undefined1  [3])CONCAT12(uVar3,auStack_c._0_2_);
  FUN_0051acd8(*(undefined4 *)PTR_DAT_00781a58);
  cVar4 = FUN_00416e40(local_8);
  if (cVar4 == '\0') {
    FUN_004d43f8(L"Failed to read back the image file.");
    auStack_c = (undefined1  [3])CONCAT12(0,auStack_c._0_2_);
  }
  else {
    FUN_007026a4(*param_1,local_8);
    if ((local_9 == '\0') &&
       ((iVar1 != *(int *)(*param_1 + 4) || (iVar2 != *(int *)(*param_1 + 8))))) {
      FUN_00701e14(*param_1,iVar1,iVar2);
    }
    lpFileName = (LPCWSTR)FUN_00407f44(local_8);
    DeleteFileW(lpFileName);
  }
  *in_FS_OFFSET = uVar6;
  thunk_FUN_00406e80(&local_14,2,uVar8,&LAB_0064396f);
  thunk_FUN_00406e5c(&local_8);
  return;
}
