// rea decompile_all
// name: FUN_00619ad8
// address: 0x619ad8
// body: available
// range: 0x619ad8-0x619b51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x619b06 (push 0x619b52 followed by fs-segment stack chaining); handler 0x619b52 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00619ad8(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_1c [6];

  puVar4 = local_1c;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  puStack_34 = (undefined1 *)0x619afb;
  FUN_0040923c(local_1c,&DAT_00615f70);
  puStack_38 = &LAB_00619b52;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  uVar2 = FUN_004048b8();
  puVar1 = puStack_34;
  *PTR_DAT_00689610 = 0.5 < (float)CONCAT44(extraout_EDX,uVar2);
  *PTR_PTR_00689198 = 1;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_00619b59;
  puStack_38 = (undefined1 *)0x619b51;
  FUN_004090d0(local_1c,&DAT_00615f70,puVar1);
  return;
}
