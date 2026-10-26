// rea decompile_all
// name: FUN_0041a5d0
// address: 0x41a5d0
// body: available
// range: 0x41a5d0-0x41a669 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41a5f1 (push 0x41a66a followed by fs-segment stack chaining); handler 0x41a66a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041a5d0(int param_1,int *param_2,short param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;

  puStack_18 = (undefined1 *)0x41a5e6;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_1c = &LAB_0041a66a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_0041a3bc(local_8,param_2);
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar2 = FUN_00407488(&local_8,local_8);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  if (*param_2 <= iVar3) {
    iVar2 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar2 = FUN_00407488(&local_8,local_8);
    }
    if (param_3 == *(short *)(iVar2 + -2 + *param_2 * 2)) {
      *param_2 = *param_2 + 1;
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0041a671;
  puStack_1c = (undefined1 *)0x41a669;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
