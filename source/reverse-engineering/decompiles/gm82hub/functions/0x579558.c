// rea decompile_all
// name: FUN_00579558
// address: 0x579558
// body: available
// range: 0x579558-0x5795f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x579577 (push 0x5795f3 followed by fs-segment stack chaining); handler 0x5795f3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00579558(undefined4 param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_8;

  puStack_1c = (undefined1 *)0x57956c;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_20 = &LAB_005795f3;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  bVar1 = false;
  puStack_1c = &stack0xfffffffc;
  if (-1 < DAT_00686ac4 + -1) {
    iVar4 = 0;
    iVar5 = DAT_00686ac4;
    puStack_1c = &stack0xfffffffc;
    do {
      iVar3 = FUN_00415770(local_8,*(undefined4 *)(DAT_0084efc4 + iVar4 * 0x60));
      if ((iVar3 == 0) && (*(int *)(DAT_0084efc4 + 4 + iVar4 * 0x60) != 0)) {
        if (!bVar1) {
          FreeLibrary(*(HMODULE *)(DAT_0084efc4 + 4 + iVar4 * 0x60));
        }
        bVar1 = true;
        *(undefined4 *)(DAT_0084efc4 + 4 + iVar4 * 0x60) = 0;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005795fa;
  puStack_20 = (undefined1 *)0x5795f2;
  thunk_FUN_004072d8(&local_8,uStack_24,puVar2);
  return;
}
