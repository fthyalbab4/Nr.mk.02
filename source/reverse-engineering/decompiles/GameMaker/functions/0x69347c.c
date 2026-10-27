// rea decompile_all
// name: FUN_0069347c
// address: 0x69347c
// body: available
// range: 0x69347c-0x6934da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x693499 (push 0x6934db followed by fs-segment stack chaining); handler 0x6934db lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069347c(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = (undefined1 *)0x69348e;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_1c = &LAB_006934db;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  if (-1 < DAT_0077f3bc + -1) {
    bVar4 = DAT_0077f3bc == 0;
    puVar3 = &DAT_0078a204;
    iVar2 = DAT_0077f3bc;
    puStack_18 = &stack0xfffffffc;
    do {
      FUN_00408640(*puVar3,local_8);
      if (bVar4) break;
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
      bVar4 = iVar2 == 0;
    } while (!bVar4);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_006934e2;
  puStack_1c = (undefined1 *)0x6934da;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
