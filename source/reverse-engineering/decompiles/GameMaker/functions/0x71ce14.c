// rea decompile_all
// name: FUN_0071ce14
// address: 0x71ce14
// body: available
// range: 0x71ce14-0x71cea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x71ce32 (push 0x71cea8 followed by fs-segment stack chaining); handler 0x71cea8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0071ce14(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = (undefined1 *)0x71ce27;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_18 = &LAB_0071cea8;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  uVar2 = FUN_0071cde4(param_1);
  piVar3 = (int *)FUN_0071cb48(local_8,2,uVar2);
  iVar4 = FUN_0071cdcc(param_1);
  if ((iVar4 == 1) || (iVar4 == 2)) {
    (**(code **)(*piVar3 + 0x10))(piVar3,param_1,2);
  }
  else {
    (**(code **)(*piVar3 + 0x10))(piVar3,param_1,4);
  }
  FUN_004ad828(piVar3);
  FUN_004b0584(DAT_0079a9e8,piVar3);
  puVar1 = puStack_18;
  DAT_0077f5f4 = 1;
  *in_FS_OFFSET = 0;
  puStack_18 = &LAB_0071ceaf;
  uStack_1c = 0x71cea7;
  thunk_FUN_00406e5c(&local_8,0,puVar1);
  return;
}
