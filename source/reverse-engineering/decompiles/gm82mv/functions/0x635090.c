// rea decompile_all
// name: FUN_00635090
// address: 0x635090
// body: available
// range: 0x635090-0x63512c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6350a9 (push 0x63512d followed by fs-segment stack chaining); handler 0x63512d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00635090(void)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  int *in_stack_0000000c;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0063512d;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  *in_stack_00000004 = 1;
  FUN_004072d8(in_stack_00000004 + 4);
  iVar2 = FUN_004048b8();
  if ((*in_stack_0000000c == 1) && (0 < iVar2)) {
    FUN_004083c0(&local_8,in_stack_0000000c[4]);
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407488(&local_8,local_8);
    }
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4);
    }
    if (iVar2 <= iVar4) {
      FUN_00407580(in_stack_00000004 + 4,*(undefined2 *)(local_8 + -2 + iVar2 * 2),0xfde9);
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00635134;
  puStack_1c = (undefined1 *)0x63512c;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
