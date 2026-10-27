// rea decompile_all
// name: FUN_005a0cc8
// address: 0x5a0cc8
// body: available
// range: 0x5a0cc8-0x5a0d66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a0cef (push 0x5a0d67 followed by fs-segment stack chaining); handler 0x5a0d67 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a0cc8(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  local_10 = 0;
  puStack_20 = (undefined1 *)0x5a0ce4;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_24 = &LAB_005a0d67;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iVar6 = 1;
  puStack_20 = &stack0xfffffffc;
  while( true ) {
    iVar3 = FUN_005a0a50(iVar6);
    if (iVar3 < local_c) break;
    iVar6 = iVar6 + 1;
    if (iVar6 == 0xb) goto LAB_005a0d49;
  }
  if (iVar6 < 10) {
    iVar5 = iVar6 + -10;
    iVar3 = 9;
    do {
      FUN_005a0a44(iVar3,&local_10);
      uVar2 = local_10;
      uVar4 = FUN_005a0a50(iVar3);
      FUN_005a0a98(iVar3 + 1,uVar2,uVar4);
      iVar3 = iVar3 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0);
  }
  FUN_005a0a98(iVar6,local_8,local_c);
LAB_005a0d49:
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005a0d6e;
  puStack_24 = (undefined1 *)0x5a0d5e;
  thunk_FUN_004072d8(&local_10,uStack_28,puVar1);
  puStack_24 = (undefined1 *)0x5a0d66;
  thunk_FUN_004072d8(&local_8);
  return;
}
