// rea decompile_all
// name: FUN_00406db0
// address: 0x406db0
// body: available
// range: 0x406db0-0x406e01 inclusive
// range: 0x406e16-0x406e1b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x406dd5 (push 0x406e02 followed by fs-segment stack chaining); handler 0x406e02 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00406db0(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  puStack_18 = &stack0xfffffffc;
  if (DAT_0068caf4 != (int *)0x0) {
    iVar1 = *DAT_0068caf4;
    iVar4 = 0;
    iVar2 = DAT_0068caf4[1];
    puStack_1c = &LAB_00406e02;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    if (0 < iVar1) {
      do {
        pcVar3 = *(code **)(iVar2 + iVar4 * 8);
        iVar4 = iVar4 + 1;
        DAT_0068caf8 = iVar4;
        if ((pcVar3 != (code *)0x0) && (*(int *)pcVar3 != 0)) {
          (*pcVar3)();
        }
      } while (iVar4 < iVar1);
    }
    *in_FS_OFFSET = uStack_20;
  }
  return;
}
