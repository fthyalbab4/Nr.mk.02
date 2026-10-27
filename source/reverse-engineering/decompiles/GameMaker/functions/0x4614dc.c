// rea decompile_all
// name: FUN_004614dc
// address: 0x4614dc
// body: available
// range: 0x4614dc-0x461571 inclusive
// range: 0x461579-0x46157c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x461504 (push 0x461572 followed by fs-segment stack chaining); handler 0x461572 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004614dc(int param_1)

{
  HDC hdc;
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;

  if (*(int *)(param_1 + 0x38) != 0) {
    puStack_10 = (undefined1 *)0x4614f9;
    FUN_0045be3c(param_1);
    puStack_14 = &LAB_00461572;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    if (*(HGDIOBJ *)(param_1 + 0x5c) != (HGDIOBJ)0x0) {
      puStack_10 = &stack0xfffffffc;
      SelectObject(*(HDC *)(param_1 + 0x38),*(HGDIOBJ *)(param_1 + 0x5c));
    }
    if (*(HPALETTE *)(param_1 + 0x60) != (HPALETTE)0x0) {
      SelectPalette(*(HDC *)(param_1 + 0x38),*(HPALETTE *)(param_1 + 0x60),-1);
    }
    hdc = *(HDC *)(param_1 + 0x38);
    FUN_0045ceb4(param_1,0);
    DeleteDC(hdc);
    FUN_0043bb4c(DAT_00774538,param_1,1);
    puVar1 = puStack_10;
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x461579;
    puStack_14 = (undefined1 *)0x461571;
    FUN_0045bf40(param_1,uStack_18,puVar1);
    return;
  }
  return;
}
