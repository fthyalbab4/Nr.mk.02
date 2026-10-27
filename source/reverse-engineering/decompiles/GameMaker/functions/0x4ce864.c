// rea decompile_all
// name: FUN_004ce864
// address: 0x4ce864
// body: available
// range: 0x4ce864-0x4ce9e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ce880 (push 0x4ce9e4 followed by fs-segment stack chaining); handler 0x4ce9e4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ce864(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_004ce9e4;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  iVar1 = *(int *)(param_1 + 8);
  local_8 = param_2;
  FUN_00407eb8(*(int *)(param_1 + 4) + 0x38,*(undefined4 *)(iVar1 + 0x84));
  FUN_004cf360(iVar1,&local_c);
  FUN_004d1a80(*(undefined4 *)(param_1 + 4),local_c);
  FUN_004cf2f4(iVar1,&local_10);
  FUN_004d1aa0(*(undefined4 *)(param_1 + 4),local_10);
  uVar5 = FUN_004cf350(iVar1);
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 0x54) = uVar5;
  FUN_00407eb8(iVar2 + 0x70,*(undefined4 *)(iVar1 + 0x80));
  if (*(short *)(iVar1 + 0xb2) != 0) {
    iVar2 = *(int *)(param_1 + 4);
    *(int *)(iVar2 + 0x84) = param_1;
    *(undefined1 **)(iVar2 + 0x80) = &LAB_004ce9f8;
  }
  if (*(short *)(iVar1 + 0xa2) != 0) {
    iVar2 = *(int *)(param_1 + 4);
    *(int *)(iVar2 + 0x8c) = param_1;
    *(code **)(iVar2 + 0x88) = FUN_004cea80;
  }
  if (*(short *)(iVar1 + 0x9a) != 0) {
    iVar2 = *(int *)(param_1 + 4);
    *(int *)(iVar2 + 0xa4) = param_1;
    *(undefined1 **)(iVar2 + 0xa0) = &LAB_004ceae0;
  }
  if (*(short *)(iVar1 + 0xaa) != 0) {
    iVar2 = *(int *)(param_1 + 4);
    *(int *)(iVar2 + 0xb4) = param_1;
    *(undefined1 **)(iVar2 + 0xb0) = &LAB_004ceb58;
  }
  if ((*(byte *)(iVar1 + 0x6d) & 8) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)(iVar1 + 0xac) = param_1;
    *(undefined1 **)(iVar1 + 0xa8) = &LAB_004ce9f4;
  }
  FUN_004ce65c(param_1);
  FUN_004ce80c(param_1);
  cVar4 = (**(code **)(**(int **)(param_1 + 4) + 0x40))(*(int **)(param_1 + 4),local_8);
  if (cVar4 != '\0') {
    FUN_004d1620(*(undefined4 *)(param_1 + 4),&local_14);
    FUN_004cf374(*(undefined4 *)(param_1 + 8),local_14);
    uVar5 = FUN_004d17cc(*(undefined4 *)(param_1 + 4));
    piVar6 = (int *)FUN_004cf298(*(undefined4 *)(param_1 + 8));
    (**(code **)(*piVar6 + 8))(piVar6,uVar5);
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x74) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x54);
  }
  puVar3 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004ce9eb;
  puStack_28 = (undefined1 *)0x4ce9db;
  thunk_FUN_00406e80(&local_14,2,puVar3);
  puStack_28 = (undefined1 *)0x4ce9e3;
  thunk_FUN_00406e5c(&local_c);
  return;
}
