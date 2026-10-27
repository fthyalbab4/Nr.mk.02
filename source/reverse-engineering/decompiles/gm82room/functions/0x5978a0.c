// rea decompile_all
// name: FUN_005978a0
// address: 0x5978a0
// body: available
// range: 0x5978a0-0x59794b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5978b7 (push 0x59794c followed by fs-segment stack chaining); handler 0x59794c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005978a0(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int *in_FS_OFFSET;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_0059794c;
  puStack_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_24;
  FUN_00591ea8(param_1,0);
  iVar1 = *(int *)(param_1 + 0x2c0);
  FUN_00406268(iVar1,*(undefined4 *)(iVar1 + 0x288),*(undefined4 *)(iVar1 + 0x28c),&local_8);
  FUN_00592254(param_1,local_8);
  iVar1 = *(int *)(param_1 + 0x2c0);
  FUN_00406268(iVar1,*(undefined4 *)(iVar1 + 0x288),*(undefined4 *)(iVar1 + 0x28c));
  FUN_00591ea8(param_1,local_c);
  uVar3 = FUN_00406268(*(undefined4 *)(param_1 + 0x2c0));
  FUN_00592328(param_1,uVar3);
  puVar2 = puStack_24;
  *in_FS_OFFSET = (int)&local_c;
  puStack_24 = &LAB_00597953;
  thunk_FUN_004072fc(&local_c,2,puVar2);
  return;
}
