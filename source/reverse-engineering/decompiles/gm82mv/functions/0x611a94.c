// rea decompile_all
// name: FUN_00611a94
// address: 0x611a94
// body: available
// range: 0x611a94-0x611bc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x611ab7 (push 0x611bc3 followed by fs-segment stack chaining); handler 0x611bc3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00611a94(int *param_1,int *param_2,undefined4 param_3)

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
  puStack_30 = &LAB_00611bc3;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_14 = *param_2;
  local_d = '\0';
  local_c = param_3;
  FUN_004081e8(&local_8,0);
  local_15 = *(short *)(*param_1 + -2 + *param_2 * 2) == 0x24;
  if ((bool)local_15) {
    FUN_004085b8(&local_8,&DAT_00611be0);
    *param_2 = *param_2 + 1;
    local_d = '\x01';
  }
  while( true ) {
    FUN_00407498(param_1);
    iVar4 = FUN_00408514();
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
    FUN_00408310(&local_1c,*(undefined2 *)(*param_1 + -2 + *param_2 * 2));
    FUN_004085b8(&local_8,local_1c);
    *param_2 = *param_2 + 1;
  }
  FUN_00611a0c(1,local_8,local_14);
  puVar2 = puStack_30;
  *in_FS_OFFSET = uVar3;
  puStack_30 = &LAB_00611bca;
  uStack_34 = 0x611bba;
  thunk_FUN_004072d8(&local_1c,uVar3,puVar2);
  uStack_34 = 0x611bc2;
  thunk_FUN_004072d8(&local_8);
  return;
}
