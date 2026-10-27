// rea decompile_all
// name: FUN_0055eb58
// address: 0x55eb58
// body: available
// range: 0x55eb58-0x55ebd5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x55eb7f (push 0x55ebe7 followed by fs-segment stack chaining); handler 0x55ebe7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x55eb97 (push 0x55ebd6 followed by fs-segment stack chaining); handler 0x55ebd6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055eb58(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;

  puStack_20 = (undefined1 *)0x55eb74;
  FUN_00408ff8(param_2,&DAT_0055915c);
  puStack_24 = &LAB_0055ebe7;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x55eb8c;
  puStack_20 = &stack0xfffffffc;
  FUN_005468a4(DAT_00711874);
  puStack_30 = &LAB_0055ebd6;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  FUN_0055d098();
  uVar2 = FUN_004090d0(param_2,&DAT_0055915c);
  FUN_0055d1c8(DAT_00686388,param_1,uVar2);
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0055ebdd;
  puStack_30 = (undefined1 *)0x55ebd5;
  FUN_005468b0(DAT_00711874,uStack_34,puVar1);
  return;
}
