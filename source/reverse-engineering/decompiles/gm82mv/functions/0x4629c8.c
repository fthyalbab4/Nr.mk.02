// rea decompile_all
// name: FUN_004629c8
// address: 0x4629c8
// body: available
// range: 0x4629c8-0x462a57 inclusive
// range: 0x462a7e-0x462a86 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x462a02 (push 0x462a58 followed by fs-segment stack chaining); handler 0x462a58 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004629c8(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined4 local_60 [21];
  int local_c;
  undefined4 local_8;

  puVar2 = local_60;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  puStack_70 = (undefined1 *)0x4629ed;
  FUN_004635b0(param_1);
  local_8 = 0;
  local_c = 0;
  puStack_74 = &LAB_00462a58;
  uStack_78 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_78;
  puStack_70 = &stack0xfffffffc;
  iVar1 = param_3;
  if (param_3 != DAT_0068f104) {
    puStack_70 = &stack0xfffffffc;
    iVar1 = FUN_00462594(param_3);
  }
  local_c = iVar1;
  local_8 = FUN_00461f30(param_2,param_3,local_c,*(undefined4 *)(param_1 + 0x2c),local_60);
  uVar3 = 0;
  FUN_004639e4(param_1,local_8,local_c,0,*(undefined1 *)(*(int *)(param_1 + 0x28) + 0x71),local_60);
  *in_FS_OFFSET = uVar3;
  return;
}
