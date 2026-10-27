// rea decompile_all
// name: FUN_00477a70
// address: 0x477a70
// body: available
// range: 0x477a70-0x477afb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x477ab4 (push 0x477afc followed by fs-segment stack chaining); handler 0x477afc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00477a70(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_c;

  puStack_20 = (undefined1 *)0x477a8a;
  iVar2 = (**(code **)(*param_1 + 0xf8))();
  puStack_20 = (undefined1 *)0x477a96;
  local_c = (**(code **)(*param_1 + 0xf4))();
  puStack_20 = (undefined1 *)0x477aa0;
  iVar3 = FUN_004bb5c8(param_1);
  puStack_20 = (undefined1 *)0x477aa6;
  iVar3 = FUN_00417b10(iVar3 + 1);
  puStack_24 = &LAB_00477afc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  uVar4 = FUN_00417b18(iVar3);
  FUN_004bb5d8(param_1,iVar3,uVar4);
  if (param_3 <= local_c) {
    local_c = param_3 + -1;
  }
  FUN_00417708(param_2,iVar2 * 2 + iVar3,local_c);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00477b03;
  puStack_24 = (undefined1 *)0x477afb;
  FUN_00417b8c(iVar3,uStack_28,puVar1);
  return;
}
