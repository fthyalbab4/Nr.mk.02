// rea decompile_all
// name: FUN_00461b9c
// address: 0x461b9c
// body: available
// range: 0x461b9c-0x461c31 inclusive
// range: 0x461c39-0x461c3c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x461bc4 (push 0x461c32 followed by fs-segment stack chaining); handler 0x461c32 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00461b9c(int param_1)

{
  HDC hdc;
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;

  if (*(int *)(param_1 + 0x38) != 0) {
    puStack_10 = (undefined1 *)0x461bb9;
    FUN_0045c4fc(param_1);
    puStack_14 = &LAB_00461c32;
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
    FUN_0045d574(param_1,0);
    DeleteDC(hdc);
    FUN_004399c8(DAT_0067d578,param_1,1);
    puVar1 = puStack_10;
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x461c39;
    puStack_14 = (undefined1 *)0x461c31;
    FUN_0045c600(param_1,uStack_18,puVar1);
    return;
  }
  return;
}
