// rea decompile_all
// name: FUN_00647d18
// address: 0x647d18
// body: available
// range: 0x647d18-0x647dad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x647d36 (push 0x647dae followed by fs-segment stack chaining); handler 0x647dae lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00647d18(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  int *in_stack_0000000c;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  int local_8;

  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_00647dae;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  *in_stack_00000004 = 0;
  if (*in_stack_0000000c == 0) {
    puStack_18 = &stack0xfffffffc;
    uVar3 = FUN_004048b8();
    uVar4 = FUN_004048b8();
    cVar2 = FUN_0062a99c(uVar4,uVar3,in_stack_0000000c + 0xc);
    local_8 = (int)cVar2;
    *(double *)(in_stack_00000004 + 2) = (double)local_8;
  }
  else {
    uVar3 = FUN_004048b8();
    FUN_004083c0(&local_c,in_stack_0000000c[4]);
    cVar2 = FUN_0062ab24(local_c,uVar3,in_stack_0000000c + 0xc);
    local_8 = (int)cVar2;
    *(double *)(in_stack_00000004 + 2) = (double)local_8;
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00647db5;
  puStack_1c = (undefined1 *)0x647dad;
  thunk_FUN_004072d8(&local_c,uStack_20,puVar1);
  return;
}
