// rea decompile_all
// name: FUN_00440bcc
// address: 0x440bcc
// body: available
// range: 0x440bcc-0x440c42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x440be2 (push 0x440c43 followed by fs-segment stack chaining); handler 0x440c43 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00440bcc(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00440c43;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_0040b140(&local_8);
  if (param_2 != 0) {
    iVar3 = FUN_0042ce64(*(undefined4 *)**(undefined4 **)(param_1 + 0xc));
    uVar4 = FUN_0040b140(&local_8);
    cVar2 = FUN_0041efb4(param_2,iVar3 + 5,uVar4);
    if (cVar2 == '\0') {
      FUN_0040b140(&local_8);
    }
  }
  FUN_0042e2e4(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc),local_8);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00440c4a;
  puStack_18 = (undefined1 *)0x440c42;
  FUN_0040b140(&local_8,uStack_1c,puVar1);
  return;
}
