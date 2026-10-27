// rea decompile_all
// name: FUN_004f601c
// address: 0x4f601c
// body: available
// range: 0x4f601c-0x4f60e0 inclusive
// range: 0x4f6105-0x4f610b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f6073 (push 0x4f60e1 followed by fs-segment stack chaining); handler 0x4f60e1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f601c(int param_1,int param_2)

{
  int iVar1;
  HWND hWndTo;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  tagPOINT *lpPoints;
  UINT cPoints;
  undefined1 *puVar3;
  tagPOINT local_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  int local_8;

  puVar3 = &stack0xfffffffc;
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar1 = *(int *)(param_2 + 4);
    local_1c.x = *(LONG *)(iVar1 + 0x4c);
    local_1c.y = *(LONG *)(iVar1 + 0x50);
    uStack_14 = *(undefined4 *)(iVar1 + 0x54);
    uStack_10 = *(undefined4 *)(iVar1 + 0x58);
    cPoints = 2;
    lpPoints = &local_1c;
    local_c = param_2;
    local_8 = param_1;
    hWndTo = (HWND)FUN_004f76a8(param_1);
    MapWindowPoints((HWND)0x0,hWndTo,lpPoints,cPoints);
    *(short *)(local_8 + 0x1ac) = *(short *)(local_8 + 0x1ac) + 1;
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffcc;
    FUN_00405d08(*(undefined4 *)(*(int *)(local_c + 4) + 0x40),local_8,&local_1c);
    if ((*(char *)(local_8 + 0x1eb) != '\0') && (*(int *)(local_8 + 0x1c8) != 0)) {
      iVar1 = *(int *)(local_c + 4);
      (**(code **)(**(int **)(local_8 + 0x1c8) + 0x18))
                (*(int **)(local_8 + 0x1c8),*(undefined4 *)(iVar1 + 0x40),
                 *(undefined1 *)(iVar1 + 0x5c),*(undefined4 *)(iVar1 + 0x60));
    }
    *in_FS_OFFSET = uVar2;
    FUN_004f2c1c(local_8,uVar2,puVar3);
    return;
  }
  return;
}
