// rea decompile_all
// name: FUN_006405e0
// address: 0x6405e0
// body: available
// range: 0x6405e0-0x6406d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6405fd (push 0x6406d3 followed by fs-segment stack chaining); handler 0x6406d3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006405e0(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  int in_stack_0000000c;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_28 = &LAB_006406d3;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  if (*PTR_PTR_0068909c == '\0') {
    uVar4 = FUN_00452b40(&DAT_00451994,1);
    FUN_00452c28(uVar4,DAT_00688820);
    FUN_004083c0(&local_8,*(undefined4 *)(in_stack_0000000c + 0x10));
    cVar3 = FUN_00452d70(uVar4,local_8,1);
    if (cVar3 == '\0') {
      FUN_00405fdc(uVar4);
    }
    else {
      FUN_004083c0(&local_14,*(undefined4 *)(in_stack_0000000c + 0x40));
      uVar2 = local_14;
      FUN_004083c0(&local_18,*(undefined4 *)(in_stack_0000000c + 0x28));
      FUN_00453688(uVar4,local_18,uVar2);
      FUN_00452bf8(uVar4);
      FUN_00405fdc(uVar4);
    }
  }
  else {
    puStack_24 = &stack0xfffffffc;
    FUN_0040778c(&local_10,"In Secure mode you cannot write registry entries in ",
                 *(undefined4 *)(in_stack_0000000c + 0x10));
    FUN_004083c0(&local_c,local_10);
    FUN_0061156c(local_c,0);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_006406da;
  puStack_28 = (undefined1 *)0x6406bd;
  thunk_FUN_004072fc(&local_18,2,puVar1);
  puStack_28 = (undefined1 *)0x6406c5;
  FUN_004072d8(&local_10);
  puStack_28 = (undefined1 *)0x6406d2;
  thunk_FUN_004072fc(&local_c,2);
  return;
}
