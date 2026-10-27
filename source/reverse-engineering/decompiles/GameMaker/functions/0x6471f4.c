// rea decompile_all
// name: FUN_006471f4
// address: 0x6471f4
// body: available
// range: 0x6471f4-0x6472ac inclusive
// range: 0x6472d9-0x647313 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x647283 (push 0x6472ad followed by fs-segment stack chaining); handler 0x6472ad lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006471f4(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int *piStack_20;
  wchar_t *pwStack_1c;
  int local_c;
  int local_8;

  pwStack_1c = L"莋܄";
  FUN_00643eac(param_1);
  local_8 = *(int *)(*(int *)(param_1 + 0x704) + 4);
  if (local_8 == 0) {
    local_8 = 0x40;
  }
  local_c = *(int *)(*(int *)(param_1 + 0x704) + 8);
  if (local_c == 0) {
    local_8 = 0x40;
  }
  if (*(char *)(param_1 + 0x70c) != '\0') {
    pwStack_1c = L"Height:";
    piStack_20 = &local_c;
    puStack_24 = (undefined1 *)0x64725c;
    cVar2 = FUN_0062ef90(L"Create a new image",L"Width:",&local_8);
    if (cVar2 == '\0') {
      return;
    }
    if (local_8 < 1) {
      return;
    }
    if (local_c < 1) {
      return;
    }
  }
  puStack_28 = &LAB_006472ad;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  uVar3 = FUN_00701c94(&DAT_00700d94,1,local_8,*(undefined4 *)PTR_DAT_007819d0,local_c);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = (undefined1 *)0x6472e0;
  FUN_00644610(param_1,uStack_2c,puVar1);
  puStack_24 = (undefined1 *)0x6472eb;
  FUN_00405a7c(*(undefined4 *)(param_1 + 0x704));
  *(undefined4 *)(param_1 + 0x704) = uVar3;
  puStack_24 = (undefined1 *)0x6472f8;
  FUN_00644aa0(param_1);
  puStack_24 = (undefined1 *)0x6472ff;
  FUN_00644e28(param_1);
  puStack_24 = (undefined1 *)0x647306;
  FUN_00645298(param_1);
  *(undefined1 *)(param_1 + 0x70d) = 1;
  return;
}
