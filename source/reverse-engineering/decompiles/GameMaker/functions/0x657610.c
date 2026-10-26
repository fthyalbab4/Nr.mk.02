// rea decompile_all
// name: FUN_00657610
// address: 0x657610
// body: available
// range: 0x657610-0x657686 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x657642 (push 0x657687 followed by fs-segment stack chaining); handler 0x657687 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00657610(int param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c [6];

  puVar3 = local_1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  puStack_2c = (undefined1 *)0x657637;
  FUN_00408f60(local_1c,&DAT_00656108);
  puStack_30 = &LAB_00657687;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  if ((-1 < param_2) && (puStack_2c = &stack0xfffffffc, param_2 < *(int *)(param_1 + 0x2f0))) {
    puStack_2c = &stack0xfffffffc;
    FUN_00409084(*(int *)(param_1 + 0x2f4) + param_2 * 0x18,local_1c,&DAT_00656108);
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0065768e;
  puStack_30 = (undefined1 *)0x657686;
  FUN_00408df4(local_1c,&DAT_00656108,puVar1);
  return;
}
