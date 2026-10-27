// rea decompile_all
// name: FUN_0061c854
// address: 0x61c854
// body: available
// range: 0x61c854-0x61c8b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x61c884 (push 0x61c8b7 followed by fs-segment stack chaining); handler 0x61c8b7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061c854(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c [6];

  puVar2 = local_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  puStack_2c = (undefined1 *)0x61c879;
  FUN_0040923c(local_1c,&DAT_00615f70);
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  *(undefined4 *)(param_1 + 0xa0) = local_1c[2];
  *(undefined4 *)(param_1 + 0xa4) = local_1c[3];
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0061c8be;
  uStack_30 = 0x61c8b6;
  FUN_004090d0(local_1c,&DAT_00615f70,&stack0xfffffffc);
  return;
}
