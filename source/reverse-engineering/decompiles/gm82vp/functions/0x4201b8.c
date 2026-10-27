// rea decompile_all
// name: FUN_004201b8
// address: 0x4201b8
// body: available
// range: 0x4201b8-0x42033b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4201db (push 0x42033c followed by fs-segment stack chaining); handler 0x42033c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004201b8(int param_1,wchar_t *param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  wchar_t *local_10;
  undefined1 local_c;
  int local_8;

  puStack_20 = (undefined1 *)0x4201d0;
  local_8 = param_3;
  thunk_FUN_00407ad0(param_3);
  puStack_24 = &LAB_0042033c;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  if ((int)param_2 < 0) {
    local_10 = L"Index";
    local_c = 0x11;
    puStack_20 = &stack0xfffffffc;
    FUN_0041bf50(&LAB_00411654,1,PTR_LAB_0068958c,0,&local_10);
    FUN_00406ab4();
  }
  if (*(int *)(param_1 + 8) < (int)param_2) {
    local_c = 0;
    local_10 = param_2;
    FUN_0041bf50(&LAB_00411654,1,PTR_LAB_00689324,0,&local_10);
    FUN_00406ab4();
  }
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar2 = FUN_00407488(&local_8,local_8);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  FUN_00420fb4(param_1,*(int *)(param_1 + 8) + iVar3);
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar2 = FUN_00407488(&local_8,local_8);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar2 = FUN_00407488(&local_8,local_8);
  }
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = *(int *)(iVar2 + -4);
  }
  FUN_00404514(*(int *)(param_1 + 4) + (int)param_2 * 2,
               *(int *)(param_1 + 4) + (iVar3 + (int)param_2) * 2,
               ((*(int *)(param_1 + 8) - iVar4) - (int)param_2) * 2);
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar2 = FUN_00407488(&local_8,local_8);
  }
  iVar3 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar3 = FUN_00407488(&local_8,local_8);
  }
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + -4);
  }
  FUN_00404514(iVar2,*(int *)(param_1 + 4) + (int)param_2 * 2,iVar4 * 2);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00420343;
  puStack_24 = (undefined1 *)0x42033b;
  thunk_FUN_004072d8(&local_8,uStack_28,puVar1);
  return;
}
