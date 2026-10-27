// rea decompile_all
// name: FUN_0071cb48
// address: 0x71cb48
// body: available
// range: 0x71cb48-0x71cbc5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x71cb69 (push 0x71cbc6 followed by fs-segment stack chaining); handler 0x71cbc6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0071cb48(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = (undefined1 *)0x71cb5e;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_1c = &LAB_0071cbc6;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  iVar2 = FUN_00405a4c(&DAT_0071c368,1);
  *(undefined4 *)(iVar2 + 4) = param_2;
  *(undefined4 *)(iVar2 + 8) = param_3;
  *(undefined4 *)(iVar2 + 0xc) = param_4;
  uVar3 = FUN_004ae238(*(undefined4 *)(DAT_0079a9e8 + 0x2d8),0,local_8);
  FUN_004ac9b4(uVar3,iVar2);
  FUN_004acb64(uVar3,0xffffffff);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0071cbcd;
  puStack_1c = (undefined1 *)0x71cbc5;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
