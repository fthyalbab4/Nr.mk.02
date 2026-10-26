// rea decompile_all
// name: FUN_00592d3c
// address: 0x592d3c
// body: available
// range: 0x592d3c-0x592d9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x592d6e (push 0x592d9d followed by fs-segment stack chaining); handler 0x592d9d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00592d3c(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int *in_FS_OFFSET;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 uStack_8;

  for (iVar2 = param_3 * 2 + 1; -1 < iVar2; iVar2 = iVar2 + -1) {
  }
  puStack_14 = (undefined1 *)0x592d63;
  uStack_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_18 = &LAB_00592d9d;
  puStack_1c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_0041bef4(&PTR_LAB_0045419c,1,uStack_8,param_3,&stack0xfffffff0);
  FUN_00406618();
  puVar1 = puStack_1c;
  *in_FS_OFFSET = param_3;
  puStack_1c = &LAB_00592da4;
  thunk_FUN_00406e5c(&uStack_8,param_3,puVar1);
  return;
}
