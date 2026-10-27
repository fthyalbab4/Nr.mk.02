// rea decompile_all
// name: FUN_0060fe1c
// address: 0x60fe1c
// body: available
// range: 0x60fe1c-0x60fe97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x60fe3a (push 0x60fe98 followed by fs-segment stack chaining); handler 0x60fe98 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060fe1c(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = (undefined1 *)0x60fe2f;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_18 = &LAB_0060fe98;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  iVar2 = FUN_00409c34(*(undefined4 *)(param_1 + 4));
  if (iVar2 <= *(int *)(param_1 + 8)) {
    FUN_00409dfc(param_1 + 4,&DAT_0060fb58,1,*(int *)(param_1 + 8) + 5);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  uVar3 = FUN_00610408(&LAB_00610078,1,local_8);
  puVar1 = puStack_14;
  *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 4) = uVar3;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0060fe9f;
  puStack_18 = (undefined1 *)0x60fe97;
  thunk_FUN_004072d8(&local_8,uStack_1c,puVar1);
  return;
}
