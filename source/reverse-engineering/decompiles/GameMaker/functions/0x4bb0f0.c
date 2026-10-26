// rea decompile_all
// name: FUN_004bb0f0
// address: 0x4bb0f0
// body: available
// range: 0x4bb0f0-0x4bb207 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4bb102 (push 0x4bb22b followed by fs-segment stack chaining); handler 0x4bb22b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4bb179 (push 0x4bb208 followed by fs-segment stack chaining); handler 0x4bb208 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bb0f0(void)

{
  HWND hWnd;
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  LPARAM local_8;

  puStack_14 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004bb22b;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00409be0(&local_8,&DAT_0040bdd4,1);
  hWnd = (HWND)FUN_004f76a8(*(undefined4 *)(in_stack_00000004 + -4));
  SendMessageW(hWnd,0x103b,
               *(WPARAM *)(*(int *)(*(int *)(*(int *)(in_stack_00000004 + -4) + 0x2ac) + 8) + 8),
               local_8);
  (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -4) + 0x2ac) + 0x20))();
  uVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd8;
  iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(in_stack_00000004 + -4) + 0x2ac) + 8) + 8);
  if (-1 < iVar3 + -1) {
    iVar2 = 0;
    puVar5 = &stack0xfffffffc;
    do {
      piVar1 = (int *)FUN_004bf514(*(undefined4 *)(in_stack_00000004 + -4),
                                   *(undefined4 *)(local_8 + iVar2 * 4));
      (**(code **)(*piVar1 + 0x14))(piVar1,iVar2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(short *)(*(int *)(in_stack_00000004 + -4) + 0x352) != 0) {
    (**(code **)(*(int *)(in_stack_00000004 + -4) + 0x350))
              (*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x354),
               *(undefined4 *)(in_stack_00000004 + -4));
  }
  *in_FS_OFFSET = uVar4;
  piVar1 = *(int **)(*(int *)(in_stack_00000004 + -4) + 0x2ac);
  iVar3 = *piVar1;
  (**(code **)(iVar3 + 0x24))(piVar1,iVar3,puVar5);
  *(undefined1 *)(*(int *)(in_stack_00000004 + -4) + 0x305) = 0;
  return;
}
