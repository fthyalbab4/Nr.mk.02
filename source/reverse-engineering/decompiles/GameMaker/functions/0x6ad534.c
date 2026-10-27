// rea decompile_all
// name: FUN_006ad534
// address: 0x6ad534
// body: available
// range: 0x6ad534-0x6ad5c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ad554 (push 0x6ad5c2 followed by fs-segment stack chaining); handler 0x6ad5c2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ad534(undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = (undefined1 *)0x6ad549;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_18 = &LAB_006ad5c2;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  iVar4 = FUN_006ad4ac(local_8,param_2,param_3);
  cVar1 = *PTR_DAT_00781dc4;
  puVar3 = puStack_14;
  while ((cVar1 == '\0' &&
         ((((iVar2 = *(int *)(*(int *)(param_2 + 4) + iVar4 * 0xc), iVar2 == 0x65 ||
            (iVar2 - 0xc9U < 2)) || (iVar2 - 0xccU < 0x10)) || (iVar2 - 0xddU < 2))))) {
    puStack_14 = puVar3;
    iVar4 = FUN_006ad4ac(local_8,param_2,iVar4 + 1);
    cVar1 = *PTR_DAT_00781dc4;
    puVar3 = puStack_14;
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_006ad5c9;
  puStack_18 = (undefined1 *)0x6ad5c1;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar3);
  return;
}
