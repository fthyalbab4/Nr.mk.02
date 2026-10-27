// rea decompile_all
// name: FUN_006ab334
// address: 0x6ab334
// body: available
// range: 0x6ab334-0x6ab462 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ab357 (push 0x6ab463 followed by fs-segment stack chaining); handler 0x6ab463 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ab334(int *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  char local_15;
  int local_14;
  char local_d;
  undefined4 local_c;
  undefined4 local_8;

  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  local_8 = 0;
  puStack_30 = &LAB_006ab463;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_14 = *param_2;
  local_d = '\0';
  local_c = param_3;
  FUN_00407f0c(&local_8,0);
  local_15 = *(short *)(*param_1 + -2 + *param_2 * 2) == 0x24;
  if ((bool)local_15) {
    FUN_004082dc(&local_8,&DAT_006ab480);
    *param_2 = *param_2 + 1;
    local_d = '\x01';
  }
  while( true ) {
    FUN_00407058(param_1);
    iVar4 = FUN_00408238();
    uVar3 = local_c;
    if (iVar4 < *param_2) break;
    bVar1 = true;
    if ((local_d == '\0') && (*(short *)(*param_1 + -2 + *param_2 * 2) == 0x2e)) {
      bVar1 = false;
    }
    if ((local_15 != '\0') && ((ushort)(*(short *)(*param_1 + -2 + *param_2 * 2) - 0x41U) < 6)) {
      bVar1 = false;
    }
    if ((local_15 != '\0') && ((ushort)(*(short *)(*param_1 + -2 + *param_2 * 2) - 0x61U) < 6)) {
      bVar1 = false;
    }
    if ((ushort)(*(short *)(*param_1 + -2 + *param_2 * 2) - 0x30U) < 10) {
      bVar1 = false;
    }
    if (bVar1) break;
    FUN_00408034(&local_1c,*(undefined2 *)(*param_1 + -2 + *param_2 * 2));
    FUN_004082dc(&local_8,local_1c);
    *param_2 = *param_2 + 1;
  }
  FUN_006ab2d8(1,local_8,local_14);
  puVar2 = puStack_30;
  *in_FS_OFFSET = uVar3;
  puStack_30 = &LAB_006ab46a;
  uStack_34 = 0x6ab45a;
  thunk_FUN_00406e5c(&local_1c,uVar3,puVar2);
  uStack_34 = 0x6ab462;
  thunk_FUN_00406e5c(&local_8);
  return;
}
