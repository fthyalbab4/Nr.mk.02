// rea decompile_all
// name: FUN_005bad20
// address: 0x5bad20
// body: available
// range: 0x5bad20-0x5bae71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bad66 (push 0x5bae72 followed by fs-segment stack chaining); handler 0x5bae72 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bad20(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24 [6];
  int local_c;
  undefined4 local_8;

  local_2c = 0;
  local_28 = 0;
  local_c = 0;
  puVar4 = local_24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  puStack_3c = (undefined1 *)0x5bad4d;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_3c = (undefined1 *)0x5bad5b;
  FUN_0040923c(local_24,&DAT_00615f70);
  puStack_40 = &LAB_005bae72;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_3c = &stack0xfffffffc;
  FUN_00408678(&local_c,local_8,&DAT_005bae8c);
  while( true ) {
    FUN_00407498(&local_c);
    iVar2 = FUN_00408514();
    if (0x13 < iVar2) break;
    FUN_004085b8(&local_c,&DAT_005bae9c);
  }
  FUN_005baaf4(local_24,&local_28);
  FUN_004085b8(&local_c,local_28);
  iVar2 = local_c;
  if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
    iVar2 = FUN_00407488(&local_c,local_c);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  if (0 < iVar3) {
    iVar2 = 1;
    do {
      iVar1 = local_c;
      if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
        iVar1 = FUN_00407488(&local_c,local_c);
      }
      if (*(short *)(iVar1 + -2 + iVar2 * 2) != 0) {
        FUN_00408310(&local_2c,*(undefined2 *)(local_c + -2 + iVar2 * 2));
        FUN_004085b8(param_1,local_2c);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar5 = *param_1;
  FUN_0040875c(param_1,3);
  *in_FS_OFFSET = &DAT_005baebc;
  thunk_FUN_004072fc(&local_2c,2,uVar5,&LAB_005bae79);
  FUN_004090d0(local_24,&DAT_00615f70);
  thunk_FUN_004072fc(&local_c,2);
  return;
}
