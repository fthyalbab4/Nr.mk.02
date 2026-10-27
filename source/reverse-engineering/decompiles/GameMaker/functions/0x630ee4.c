// rea decompile_all
// name: FUN_00630ee4
// address: 0x630ee4
// body: available
// range: 0x630ee4-0x630f43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x630eff (push 0x630f44 followed by fs-segment stack chaining); handler 0x630f44 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00630ee4(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = (undefined1 *)0x630ef4;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_14 = &LAB_00630f44;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  iVar2 = FUN_00462a64(DAT_0077f0e4);
  (**(code **)(**(int **)(iVar2 + 0x40) + 8))(*(int **)(iVar2 + 0x40),DAT_0078a0f8);
  uVar3 = FUN_00462a64(DAT_0077f0e4);
  FUN_0045bea4(uVar3,local_8);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00630f4b;
  puStack_14 = (undefined1 *)0x630f43;
  thunk_FUN_00406e5c(&local_8,uStack_18,puVar1);
  return;
}
