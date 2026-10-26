// rea decompile_all
// name: FUN_005a0b94
// address: 0x5a0b94
// body: available
// range: 0x5a0b94-0x5a0c7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a0bb0 (push 0x5a0c7e followed by fs-segment stack chaining); handler 0x5a0c7e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a0b94(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_005a0c7e;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  DAT_0084f034 = -1;
  iVar5 = 1;
  local_8 = param_1;
  while( true ) {
    iVar2 = FUN_005a0a50(iVar5);
    if (iVar2 < local_8) break;
    iVar5 = iVar5 + 1;
    if (iVar5 == 0xb) goto LAB_005a0c19;
  }
  DAT_0084f034 = iVar5;
  if (iVar5 < 10) {
    iVar6 = iVar5 + -10;
    iVar2 = 9;
    do {
      FUN_005a0a44(iVar2,&local_c);
      uVar4 = local_c;
      uVar3 = FUN_005a0a50(iVar2);
      FUN_005a0a98(iVar2 + 1,uVar4,uVar3);
      iVar2 = iVar2 + -1;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0);
  }
  FUN_005a0a98(iVar5,0,local_8);
LAB_005a0c19:
  if (DAT_00686bb8 == '\0') {
    FUN_004e2e6c(DAT_0084f02c,0);
  }
  else {
    FUN_004e2e6c(DAT_0084f02c,3);
  }
  (**(code **)(*DAT_0084f02c + 0x110))();
  if (0 < DAT_0084f034) {
    uVar4 = FUN_005a0a50(iVar5);
    FUN_005a0a98(iVar5,DAT_0084f03c,uVar4);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005a0c85;
  puStack_20 = (undefined1 *)0x5a0c7d;
  thunk_FUN_004072d8(&local_c,uStack_24,puVar1);
  return;
}
