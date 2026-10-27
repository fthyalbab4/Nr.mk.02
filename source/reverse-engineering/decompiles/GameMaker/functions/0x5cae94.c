// rea decompile_all
// name: FUN_005cae94
// address: 0x5cae94
// body: available
// range: 0x5cae94-0x5caf1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5caeab (push 0x5caf1b followed by fs-segment stack chaining); handler 0x5caf1b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cae94(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *in_FS_OFFSET;
  int in_stack_ffffffd8;
  undefined4 uVar4;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_005caf1b;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_20;
  FUN_005ca7f8(param_1);
  if (*(int *)(param_1 + 0x60) == 0) {
    uVar4 = 0;
    in_stack_ffffffd8 = param_1;
    FUN_005cae4c(param_1,&local_8);
    iVar2 = FUN_005c5adc(&PTR_LAB_005c25d8,1,local_8,in_stack_ffffffd8,uVar4);
    iVar3 = iVar2;
    if (iVar2 != 0) {
      iVar3 = iVar2 + 0x48;
    }
    FUN_0040b158(param_1 + 0x60,iVar3);
    FUN_00409d1c(iVar2 + 0x14,*(undefined4 *)(param_1 + 0x48),&DAT_005c21a0);
  }
  FUN_0040b158(param_2,*(undefined4 *)(param_1 + 0x60));
  puVar1 = puStack_20;
  *in_FS_OFFSET = in_stack_ffffffd8;
  puStack_20 = &LAB_005caf22;
  FUN_0040b140(&local_8,in_stack_ffffffd8,puVar1);
  return;
}
