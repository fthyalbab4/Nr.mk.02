// rea decompile_all
// name: FUN_0062cc14
// address: 0x62cc14
// body: available
// range: 0x62cc14-0x62ccab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62cc31 (push 0x62ccac followed by fs-segment stack chaining); handler 0x62ccac lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062cc14(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = (undefined1 *)0x62cc26;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  bVar4 = true;
  puStack_1c = &LAB_0062ccac;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_00408640(local_8,L"self");
  if (((!bVar4) && (FUN_00408640(local_8,L"other"), !bVar4)) && (-1 < DAT_0077f0e0 + -1)) {
    iVar2 = 0;
    iVar3 = DAT_0077f0e0;
    do {
      bVar4 = *(int *)(DAT_0077f0d0 + iVar2 * 4) == 0;
      if ((!bVar4) && (FUN_00408640(*(undefined4 *)(DAT_0077f0d8 + iVar2 * 4),local_8), bVar4))
      break;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0062ccb3;
  puStack_1c = (undefined1 *)0x62ccab;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
