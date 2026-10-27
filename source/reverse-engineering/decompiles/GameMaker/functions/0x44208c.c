// rea decompile_all
// name: FUN_0044208c
// address: 0x44208c
// body: available
// range: 0x44208c-0x44214d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4420e8 (push 0x44214e followed by fs-segment stack chaining); handler 0x44214e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044208c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;

  while( true ) {
    puStack_20 = (undefined1 *)0x4420ae;
    cVar3 = FUN_00441338(param_1);
    if (cVar3 != '\0') break;
    puStack_20 = (undefined1 *)0x4420a6;
    FUN_00442634(param_1,param_2);
  }
  puStack_20 = (undefined1 *)0x4420ba;
  FUN_00442500(param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  puStack_20 = (undefined1 *)0x4420d7;
  uVar4 = FUN_00405d08(param_2);
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  puStack_24 = &LAB_0044214e;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar5 = FUN_00405d08(param_2);
  *(int *)(param_1 + 0x28) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x18);
  }
  while( true ) {
    cVar3 = FUN_00441338(param_1);
    if (cVar3 != '\0') break;
    FUN_00441ddc(param_1,0);
  }
  FUN_00442500(param_1);
  *in_FS_OFFSET = uStack_28;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  return;
}
