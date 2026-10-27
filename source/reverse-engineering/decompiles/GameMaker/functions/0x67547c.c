// rea decompile_all
// name: FUN_0067547c
// address: 0x67547c
// body: available
// range: 0x67547c-0x675501 inclusive
// range: 0x675509-0x67550c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6754a5 (push 0x675502 followed by fs-segment stack chaining); handler 0x675502 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067547c(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;

  puStack_10 = &stack0xfffffffc;
  if (param_1[0x9e] != 0) {
    *(short *)(param_1 + 0x6b) = (short)param_1[0x6b] + 1;
    puStack_14 = &LAB_00675502;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    iVar2 = (**(code **)(*param_1 + 0x130))();
    iVar2 = iVar2 + -1;
    if (-1 < iVar2) {
      do {
        (**(code **)(*param_1 + 0x124))(param_1,iVar2);
        FUN_00405a7c();
        iVar2 = iVar2 + -1;
      } while (iVar2 != -1);
    }
    FUN_00672280(param_1[0x9e]);
    puVar1 = puStack_10;
    param_1[0x9e] = 0;
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x675509;
    puStack_14 = (undefined1 *)0x675501;
    FUN_004f2c1c(param_1,uStack_18,puVar1);
    return;
  }
  return;
}
