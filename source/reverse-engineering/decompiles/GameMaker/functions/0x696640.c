// rea decompile_all
// name: FUN_00696640
// address: 0x696640
// body: available
// range: 0x696640-0x696732 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x696657 (push 0x696733 followed by fs-segment stack chaining); handler 0x696733 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00696640(undefined4 param_1)

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
  puStack_20 = &LAB_00696733;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_006965e8();
  iVar2 = FUN_0052f024(param_1);
  if (iVar2 == 800) {
    DAT_0077f3c4 = FUN_0052f024(param_1);
    FUN_00409be0(&DAT_0078c14c,&DAT_00696594,1,DAT_0077f3c4);
    FUN_00409be0(&DAT_0078c150,&DAT_006965c0,1,DAT_0077f3c4);
    if (-1 < DAT_0077f3c4 + -1) {
      iVar3 = 0;
      iVar2 = DAT_0077f3c4;
      do {
        FUN_0052f060(param_1,&local_8);
        FUN_00407eb8(DAT_0078c14c + iVar3 * 4,local_8);
        FUN_0052f060(param_1,&local_c);
        FUN_00407eb8(DAT_0078c150 + iVar3 * 4,local_c);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_0052f038(param_1);
    _DAT_0078c15c = (double)in_ST0;
    DAT_0078c154 = 0;
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0069673a;
  puStack_20 = (undefined1 *)0x696732;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
