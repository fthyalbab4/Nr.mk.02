// rea decompile_all
// name: FUN_004e1ff4
// address: 0x4e1ff4
// body: available
// range: 0x4e1ff4-0x4e20a3 inclusive
// range: 0x4e20ab-0x4e20af inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4e2038 (push 0x4e20a4 followed by fs-segment stack chaining); handler 0x4e20a4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e1ff4(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  bool bVar2;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  if ((param_2 != (int *)param_1[0xd]) && (param_2 != param_1)) {
    bVar2 = (int *)param_1[0xd] == (int *)0x0;
    if (bVar2) {
      puStack_14 = (undefined1 *)0x4e202d;
      FUN_004c6490(param_1,1);
    }
    puStack_18 = &LAB_004e20a4;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_14 = &stack0xfffffffc;
    if (bVar2) {
      puStack_14 = &stack0xfffffffc;
      (**(code **)(*param_1 + 0xc0))();
    }
    if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
      param_1[0xa4] = 0;
    }
    param_1[0xa5] = 0;
    FUN_004c655c(param_1,param_2);
    if (param_1[0xd] == 0) {
      FUN_004c0cac(param_1);
    }
    puVar1 = puStack_14;
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x4e20ab;
    if (bVar2) {
      puStack_18 = (undefined1 *)0x4e20a3;
      FUN_004c6490(param_1,0,puVar1);
    }
    return;
  }
  return;
}
