// rea decompile_all
// name: FUN_00705298
// address: 0x705298
// body: available
// range: 0x705298-0x705309 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7052ad (push 0x70530a followed by fs-segment stack chaining); handler 0x70530a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00705298(undefined4 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0070530a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar3 = FUN_0052f024(param_1);
  if ((iVar3 == 0x1b8) && (iVar3 = FUN_0052f024(param_1), -1 < iVar3 + -1)) {
    do {
      cVar2 = FUN_0052f114(param_1);
      if (cVar2 != '\0') {
        FUN_0052f060(param_1,&local_8);
        cVar2 = FUN_0070520c(param_1);
        if (cVar2 == '\0') break;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00705311;
  puStack_1c = (undefined1 *)0x705309;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
