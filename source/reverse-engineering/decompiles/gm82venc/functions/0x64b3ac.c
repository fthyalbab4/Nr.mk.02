// rea decompile_all
// name: FUN_0064b3ac
// address: 0x64b3ac
// body: available
// range: 0x64b3ac-0x64b428 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x64b3c1 (push 0x64b429 followed by fs-segment stack chaining); handler 0x64b429 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064b3ac(void)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000004;
  int in_stack_0000000c;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0064b429;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  uVar2 = FUN_004048b8();
  if (extraout_EDX == 0) {
    if (uVar2 < 32000) {
LAB_0064b3ea:
      FUN_004083c0(&local_8,*(undefined4 *)(in_stack_0000000c + 0x10));
      uVar3 = FUN_0061e30c(local_8);
      uVar4 = FUN_004048b8();
      FUN_005725bc(uVar3,uVar4,in_stack_00000004);
      goto LAB_0064b413;
    }
  }
  else if (extraout_EDX < 0) goto LAB_0064b3ea;
  FUN_0061156c(L"Array index >= 32000",0);
LAB_0064b413:
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0064b430;
  puStack_18 = (undefined1 *)0x64b428;
  thunk_FUN_004072d8(&local_8,uStack_1c,puVar1);
  return;
}
