// rea decompile_all
// name: FUN_00420fb4
// address: 0x420fb4
// body: available
// range: 0x420fb4-0x42105b inclusive
// range: 0x42107b-0x421081 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x421033 (push 0x42105c followed by fs-segment stack chaining); handler 0x42105c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00420fb4(int param_1,wchar_t *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  wchar_t **ppwStack_24;
  wchar_t *local_14;
  undefined1 local_10;
  undefined4 local_c;
  int local_8;

  local_8 = param_1;
  if ((int)param_2 < 0) {
    local_14 = L"Value";
    local_10 = 0x11;
    ppwStack_24 = &local_14;
    puStack_28 = (undefined1 *)0x0;
    uStack_2c = 0x420fea;
    FUN_0041bf50(&LAB_00411654,1,PTR_LAB_0068958c);
    uStack_2c = 0x420fef;
    FUN_00406ab4();
  }
  ppwStack_24 = (wchar_t **)0x420ff7;
  iVar1 = FUN_004200a0(local_8);
  if (iVar1 < (int)param_2) {
    local_10 = 0;
    ppwStack_24 = &local_14;
    puStack_28 = (undefined1 *)0x0;
    uStack_2c = 0x42101a;
    local_14 = param_2;
    FUN_0041bf50(&LAB_00411654,1,PTR_LAB_00689058);
    uStack_2c = 0x42101f;
    FUN_00406ab4();
  }
  local_c = *(undefined4 *)(local_8 + 8);
  puStack_28 = &LAB_0042105c;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  *(wchar_t **)(local_8 + 8) = param_2;
  ppwStack_24 = (wchar_t **)&stack0xfffffffc;
  iVar1 = FUN_00420094(local_8);
  if (iVar1 < (int)param_2) {
    FUN_00420050(local_8);
  }
  *in_FS_OFFSET = uStack_2c;
  return;
}
