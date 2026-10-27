// rea decompile_all
// name: FUN_004c0820
// address: 0x4c0820
// body: available
// range: 0x4c0820-0x4c0885 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c0853 (push 0x4c0886 followed by fs-segment stack chaining); handler 0x4c0886 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c0820(int param_1)

{
  int *piVar1;
  BOOL BVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;

  piVar1 = *(int **)(*(int *)(param_1 + 0xac) + 8);
  local_8 = param_1;
  if (piVar1 != (int *)0x0) {
    puStack_c = (undefined1 *)0x4c083e;
    (**(code **)(*piVar1 + 8))(piVar1,0);
  }
  *(uint *)(local_8 + 0x54) = *(uint *)(local_8 + 0x54) | 0x200;
  puStack_10 = &LAB_004c0886;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puStack_c = &stack0xfffffffc;
  BVar2 = DestroyWindow(*(HWND *)(local_8 + 600));
  if (BVar2 == 0) {
    FUN_0041ebf4();
  }
  *in_FS_OFFSET = uStack_14;
  *(uint *)(local_8 + 0x54) = *(uint *)(local_8 + 0x54) & 0xfffffdff;
  return;
}
