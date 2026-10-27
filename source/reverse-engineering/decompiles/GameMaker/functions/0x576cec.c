// rea decompile_all
// name: FUN_00576cec
// address: 0x576cec
// body: available
// range: 0x576cec-0x576d99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x576d00 (push 0x576d9a followed by fs-segment stack chaining); handler 0x576d9a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00576cec(void)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  int in_stack_00000004;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_00576d9a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x398);
  puVar2 = &stack0xfffffffc;
  if (iVar1 != 0) {
    cVar3 = FUN_0047d960(iVar1);
    uVar4 = cVar3 == '\0';
    puVar2 = puStack_18;
    if (!(bool)uVar4) {
      FUN_00567578(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x398),&local_8);
      FUN_005739c0(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x398));
      FUN_00567578(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x398),&local_c);
      FUN_00408640(local_8,local_c);
      puVar2 = puStack_18;
      if (!(bool)uVar4) {
        FUN_0047dc74(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x398));
        puVar2 = puStack_18;
      }
    }
  }
  puStack_18 = puVar2;
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00576da1;
  puStack_1c = (undefined1 *)0x576d99;
  thunk_FUN_00406e80(&local_c,2,puVar2);
  return;
}
