// rea decompile_all
// name: FUN_005e1008
// address: 0x5e1008
// body: available
// range: 0x5e1008-0x5e107b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e1026 (push 0x5e107c followed by fs-segment stack chaining); handler 0x5e107c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e1008(undefined2 *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined2 *local_c;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_005e107c;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = param_1;
  FUN_00407eb8(param_2,0);
  iVar2 = 8;
  puVar1 = local_c;
  do {
    uVar3 = *param_2;
    FUN_004168d8(*puVar1,4,&local_10,&DAT_005e1098);
    uStack_28 = local_10;
    FUN_00408480(param_2,3);
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *in_FS_OFFSET = uStack_28;
  thunk_FUN_00406e5c(&local_10,uStack_28,uVar3,&LAB_005e1083);
  return;
}
