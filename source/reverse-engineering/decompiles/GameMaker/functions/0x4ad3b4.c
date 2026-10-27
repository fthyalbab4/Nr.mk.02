// rea decompile_all
// name: FUN_004ad3b4
// address: 0x4ad3b4
// body: available
// range: 0x4ad3b4-0x4ad441 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ad3d4 (push 0x4ad442 followed by fs-segment stack chaining); handler 0x4ad442 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ad3b4(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar3;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_28 = &LAB_004ad442;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  iVar2 = FUN_004ad24c(param_1);
  for (; (iVar2 != 0 && (0 < param_2)); param_2 = param_2 + -1) {
    iVar2 = FUN_004ad22c(param_1,iVar2);
  }
  if (iVar2 == 0) {
    puVar3 = &local_8;
    FUN_0040b75c(PTR_PTR_007824e4,&local_c);
    local_10 = 0;
    local_14 = param_2;
    FUN_00417d4c(local_c,&local_14,0,puVar3);
    FUN_004ac6e8(local_8);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004ad449;
  puStack_28 = (undefined1 *)0x4ad441;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
