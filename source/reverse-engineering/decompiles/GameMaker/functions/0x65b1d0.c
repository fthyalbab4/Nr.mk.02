// rea decompile_all
// name: FUN_0065b1d0
// address: 0x65b1d0
// body: available
// range: 0x65b1d0-0x65b243 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65b1f1 (push 0x65b244 followed by fs-segment stack chaining); handler 0x65b244 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065b1d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  puStack_18 = (undefined1 *)0x65b1e6;
  FUN_0065a870(param_1);
  puStack_1c = &LAB_0065b244;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  iVar2 = FUN_0065b2bc(param_1);
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      uVar4 = param_4;
      uVar5 = param_5;
      uVar3 = FUN_0065b2a8(param_1,iVar2);
      FUN_0065a7a0(uVar3,param_2,param_3,uVar4,uVar5);
      if (*(char *)(param_1 + 0x3c) != '\0') break;
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0065b24b;
  puStack_1c = (undefined1 *)0x65b243;
  FUN_0065b254(param_1,uStack_20,puVar1);
  return;
}
