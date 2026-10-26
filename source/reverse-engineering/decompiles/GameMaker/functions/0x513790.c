// rea decompile_all
// name: FUN_00513790
// address: 0x513790
// body: available
// range: 0x513790-0x513800 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5137aa (push 0x513801 followed by fs-segment stack chaining); handler 0x513801 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00513790(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;

  puStack_1c = &stack0xfffffffc;
  local_10 = 0;
  puStack_20 = &LAB_00513801;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar2 = FUN_00513780(param_1);
  if (iVar2 == 0) {
    local_c = *(undefined4 *)(param_1 + 8);
    local_8 = 0x11;
    puVar4 = &local_c;
    uVar3 = 0;
    FUN_0040b75c(PTR_PTR_007823d8,&local_10);
    FUN_0041bef4(&PTR_LAB_0042f068,1,local_10,uVar3,puVar4);
    FUN_00406618();
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00513808;
  puStack_20 = (undefined1 *)0x513800;
  thunk_FUN_00406e5c(&local_10,uStack_24,puVar1);
  return;
}
