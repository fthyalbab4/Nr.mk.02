// rea decompile_all
// name: FUN_00628e90
// address: 0x628e90
// body: available
// range: 0x628e90-0x628f27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x628ebd (push 0x628f28 followed by fs-segment stack chaining); handler 0x628f28 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00628e90(undefined4 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_2c [10];

  puVar3 = local_2c;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  puStack_38 = (undefined1 *)0x628eb2;
  FUN_0040923c(local_2c,&DAT_00628dc0);
  puStack_3c = &LAB_00628f28;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_38 = &stack0xfffffffc;
  if (3999 < DAT_006887cc) {
    puStack_38 = &stack0xfffffffc;
    FUN_00628e28();
  }
  if (DAT_006887cc < 4000) {
    FUN_00409360(&DAT_0085b47c + DAT_006887cc * 0x28,local_2c,&DAT_00628dc0);
    (&DAT_008825a4)[DAT_006887cc] = 0;
    DAT_006887cc = DAT_006887cc + 1;
  }
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_00628f2f;
  puStack_3c = (undefined1 *)0x628f27;
  FUN_004090d0(local_2c,&DAT_00628dc0,puVar1);
  return;
}
