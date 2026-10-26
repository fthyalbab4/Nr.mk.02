// rea decompile_all
// name: FUN_0063f08c
// address: 0x63f08c
// body: available
// range: 0x63f08c-0x63f191 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x63f0ac (push 0x63f192 followed by fs-segment stack chaining); handler 0x63f192 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063f08c(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_0000000c;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_2c = &LAB_0063f192;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puVar1 = &stack0xfffffffc;
  if (*PTR_PTR_0068909c == '\0') {
LAB_0063f154:
    puStack_28 = puVar1;
    FUN_004083c0(&local_20,*(undefined4 *)(in_stack_0000000c + 0x10));
    FUN_00504f78(local_20);
  }
  else {
    FUN_004083c0(&local_8,*(undefined4 *)(in_stack_0000000c + 0x10));
    iVar2 = FUN_00408d44(&DAT_0063f1ac,local_8);
    if (iVar2 == 0) {
      FUN_004083c0(&local_c,*(undefined4 *)(in_stack_0000000c + 0x10));
      iVar2 = FUN_00408d44(&DAT_0063f1bc,local_c);
      if (iVar2 == 0) {
        FUN_004083c0(&local_10,*(undefined4 *)(in_stack_0000000c + 0x28));
        iVar2 = FUN_00408d44(&DAT_0063f1ac,local_10);
        if (iVar2 == 0) {
          FUN_004083c0(&local_14,*(undefined4 *)(in_stack_0000000c + 0x28));
          iVar2 = FUN_00408d44(&DAT_0063f1bc,local_14);
          puVar1 = puStack_28;
          if (iVar2 == 0) goto LAB_0063f154;
        }
      }
    }
    FUN_0040778c(&local_1c,"In Secure mode you cannot create directory ",
                 *(undefined4 *)(in_stack_0000000c + 0x10));
    FUN_004083c0(&local_18,local_1c);
    FUN_0061156c(local_18,0);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0063f199;
  puStack_2c = (undefined1 *)0x63f17c;
  thunk_FUN_004072d8(&local_20,uStack_30,puVar1);
  puStack_2c = (undefined1 *)0x63f184;
  FUN_004072d8(&local_1c);
  puStack_2c = (undefined1 *)0x63f191;
  thunk_FUN_004072fc(&local_18,5);
  return;
}
