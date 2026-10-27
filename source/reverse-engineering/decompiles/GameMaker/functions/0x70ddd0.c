// rea decompile_all
// name: FUN_0070ddd0
// address: 0x70ddd0
// body: available
// range: 0x70ddd0-0x70deb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x70dde7 (push 0x70deba followed by fs-segment stack chaining); handler 0x70deba lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070ddd0(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_0070deba;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  DAT_0079099c = FUN_0052f114(param_1);
  FUN_0052f038(param_1);
  _DAT_00790994 = (double)in_ST0;
  if (DAT_0079099c != '\0') {
    DAT_00790990 = FUN_0052f024(param_1);
    FUN_00409be0(&DAT_00790988,&DAT_0070dd7c,1,DAT_00790990);
    FUN_00409be0(&DAT_0079098c,&DAT_0070dda8,1,DAT_00790990);
    if (-1 < DAT_00790990 + -1) {
      iVar2 = 0;
      iVar3 = DAT_00790990;
      do {
        FUN_0052f060(param_1,&local_8);
        FUN_00407eb8(DAT_00790988 + iVar2 * 4,local_8);
        FUN_0052f060(param_1,&local_c);
        FUN_00407eb8(DAT_0079098c + iVar2 * 4,local_c);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0070dec1;
  puStack_20 = (undefined1 *)0x70deb9;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
