// rea decompile_all
// name: FUN_004894fc
// address: 0x4894fc
// body: available
// range: 0x4894fc-0x48956a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x489517 (push 0x48956b followed by fs-segment stack chaining); handler 0x48956b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004894fc(void)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  short sVar5;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;

  puStack_10 = (undefined1 *)0x48950c;
  (**(code **)(**(int **)(in_stack_00000004 + -4) + 0x18))();
  puStack_14 = &LAB_0048956b;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  uVar4 = EnumClipboardFormats(0);
  sVar5 = (short)uVar4;
  while ((sVar5 != 0 && (cVar3 = FUN_0045f990(&PTR_LAB_00457450,uVar4), cVar3 == '\0'))) {
    uVar4 = EnumClipboardFormats(uVar4 & 0xffff);
    sVar5 = (short)uVar4;
  }
  puVar2 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00489572;
  iVar1 = **(int **)(in_stack_00000004 + -4);
  puStack_14 = (undefined1 *)0x48956a;
  (**(code **)(iVar1 + 0x14))(*(int **)(in_stack_00000004 + -4),iVar1,puVar2);
  return;
}
