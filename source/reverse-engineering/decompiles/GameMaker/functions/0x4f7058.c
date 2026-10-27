// rea decompile_all
// name: FUN_004f7058
// address: 0x4f7058
// body: available
// range: 0x4f7058-0x4f7103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f707a (push 0x4f7104 followed by fs-segment stack chaining); handler 0x4f7104 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f7058(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = &stack0xfffffffc;
  *(short *)(param_1 + 0x1ac) = *(short *)(param_1 + 0x1ac) + 1;
  puStack_18 = &LAB_004f7104;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_004f6f8c(param_1,param_2,param_3);
  if (((param_3 != param_2) && ((*(byte *)(param_1 + 0x1c) & 2) != 0)) &&
     ((*(byte *)(param_1 + 0x88) & 0x20) != 0)) {
    iVar2 = MulDiv(*(int *)(param_1 + 0x264),param_2,param_3);
    *(int *)(param_1 + 0x264) = iVar2;
    iVar2 = MulDiv(*(int *)(param_1 + 0x268),param_2,param_3);
    *(int *)(param_1 + 0x268) = iVar2;
  }
  FUN_004ee2a8(param_1,param_2,param_3);
  FUN_004f6fd4(param_1,param_2,param_3);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004f710b;
  puStack_18 = (undefined1 *)0x4f7103;
  FUN_004f2c1c(param_1,uStack_1c,puVar1);
  return;
}
