// rea decompile_all
// name: FUN_006ab484
// address: 0x6ab484
// body: available
// range: 0x6ab484-0x6ab559 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ab4a7 (push 0x6ab55a followed by fs-segment stack chaining); handler 0x6ab55a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ab484(int *param_1,int *param_2,undefined4 param_3)

{
  short sVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_8 = 0;
  puStack_28 = &LAB_006ab55a;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_10 = *param_2;
  sVar1 = *(short *)(*param_1 + -2 + *param_2 * 2);
  local_c = param_3;
  FUN_00407f0c(&local_8,0);
  *param_2 = *param_2 + 1;
  while( true ) {
    FUN_00407058(param_1);
    iVar4 = FUN_00408238();
    if ((iVar4 < *param_2) || (sVar1 == *(short *)(*param_1 + -2 + *param_2 * 2))) break;
    FUN_00408034(&local_14,*(undefined2 *)(*param_1 + -2 + *param_2 * 2));
    FUN_004082dc(&local_8,local_14);
    *param_2 = *param_2 + 1;
  }
  iVar4 = *param_1;
  if ((iVar4 != 0) && (*(short *)(iVar4 + -10) != 2)) {
    iVar4 = FUN_00407048(param_1,*param_1);
  }
  uVar3 = local_c;
  iVar5 = 0;
  if (iVar4 != 0) {
    iVar5 = *(int *)(iVar4 + -4);
  }
  if (*param_2 <= iVar5) {
    *param_2 = *param_2 + 1;
  }
  FUN_006ab2d8(2,local_8,local_10);
  puVar2 = puStack_28;
  *in_FS_OFFSET = uVar3;
  puStack_28 = &LAB_006ab561;
  uStack_2c = 0x6ab551;
  thunk_FUN_00406e5c(&local_14,uVar3,puVar2);
  uStack_2c = 0x6ab559;
  thunk_FUN_00406e5c(&local_8);
  return;
}
