// rea decompile_all
// name: FUN_004eb840
// address: 0x4eb840
// body: available
// range: 0x4eb840-0x4eb8c2 inclusive
// range: 0x4eb8d9-0x4eb97f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4eb88a (push 0x4eb980 followed by fs-segment stack chaining); handler 0x4eb980 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4eb8a8 (push 0x4eb8c3 followed by fs-segment stack chaining); handler 0x4eb8c3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eb840(int param_1,int param_2,undefined4 *param_3)

{
  HWND hWnd;
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;

  puVar7 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x44) == 0) {
    puStack_20 = (undefined1 *)0x4eb867;
    cVar1 = thunk_FUN_0040629c(param_2,&PTR_LAB_004daca8);
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_004eb871;
    }
  }
  uVar2 = 0;
LAB_004eb871:
  *(undefined1 *)(param_1 + 0xd1) = uVar2;
  puStack_24 = &LAB_004eb980;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  piVar4 = (int *)(**(code **)(param_2 + -0xc))();
  *param_3 = piVar4;
  uVar6 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffcc;
  (**(code **)(*piVar4 + 0x2c))(piVar4,0xffffffff,param_1);
  *in_FS_OFFSET = uVar6;
  if (*(int *)(param_1 + 0x44) == 0) {
    cVar1 = FUN_004061f8(piVar4,&PTR_LAB_004daca8,puVar7);
    if (cVar1 != '\0') {
      FUN_004c45b8(piVar4);
      *(int **)(param_1 + 0x44) = piVar4;
      if (*(char *)(param_1 + 0xd3) != '\0') {
        hWnd = *(HWND *)(param_1 + 0x170);
        uVar5 = GetWindowLongW(hWnd,-0x14);
        SetWindowLongW(hWnd,-0x14,uVar5 | 0x8000000);
      }
      bVar3 = *(byte *)(param_1 + 0xd3) ^ 1;
      FUN_004df318(*(undefined4 *)(param_1 + 0x170),bVar3,bVar3);
    }
  }
  puVar7 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004eb987;
  if (*(int *)(param_1 + 0x44) == 0) {
    puStack_24 = (undefined1 *)0x4eb971;
    cVar1 = FUN_004061f8(piVar4,&PTR_LAB_004daca8,puVar7);
    if (cVar1 != '\0') {
      *(undefined1 *)(piVar4 + 0xdc) = 0;
    }
  }
  return;
}
