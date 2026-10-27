// rea decompile_all
// name: FUN_007228a0
// address: 0x7228a0
// body: available
// range: 0x7228a0-0x72291d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7228bd (push 0x72291e followed by fs-segment stack chaining); handler 0x72291e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007228a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = (undefined1 *)0x7228b2;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_14 = &LAB_0072291e;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  if (((-1 < param_1) && (puStack_10 = &stack0xfffffffc, param_1 < DAT_0077f618)) &&
     (puStack_10 = &stack0xfffffffc, *(int *)(DAT_0077f608 + param_1 * 4) != 0)) {
    puStack_10 = &stack0xfffffffc;
    FUN_00407eb8(DAT_0077f610 + param_1 * 4,local_8);
    iVar1 = *(int *)(DAT_0077f60c + param_1 * 4);
    if (iVar1 != 0) {
      FUN_004ee6d8(*(undefined4 *)(iVar1 + 0x390),local_8);
    }
    DAT_007a4658 = 1;
  }
  puVar2 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00722925;
  puStack_14 = (undefined1 *)0x72291d;
  thunk_FUN_00406e5c(&local_8,uStack_18,puVar2);
  return;
}
