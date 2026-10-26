// rea decompile_all
// name: FUN_0071a098
// address: 0x71a098
// body: available
// range: 0x71a098-0x71a123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x71a0b5 (push 0x71a124 followed by fs-segment stack chaining); handler 0x71a124 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0071a098(int param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;

  puStack_18 = (undefined1 *)0x71a0aa;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_1c = &LAB_0071a124;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  if (local_8 != 0) {
    iVar4 = 0x10;
    iVar3 = 0;
    bVar5 = true;
    puVar2 = &DAT_0079a8d8;
    puStack_18 = &stack0xfffffffc;
    do {
      FUN_00408640(*puVar2,local_8);
      if (bVar5) {
        iVar4 = iVar3;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
      bVar5 = iVar3 == 0x11;
    } while (!bVar5);
    if (0 < iVar4) {
      puVar2 = (undefined4 *)(&DAT_0079a8d4 + iVar4 * 4);
      do {
        FUN_00407eb8(puVar2 + 1,*puVar2);
        iVar4 = iVar4 + -1;
        puVar2 = puVar2 + -1;
      } while (iVar4 != 0);
    }
    FUN_00407eb8(&DAT_0079a8d8,local_8);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0071a12b;
  puStack_1c = (undefined1 *)0x71a123;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
