// rea decompile_all
// name: FUN_0062d298
// address: 0x62d298
// body: available
// range: 0x62d298-0x62d332 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62d2b3 (push 0x62d333 followed by fs-segment stack chaining); handler 0x62d333 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062d298(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_0062d333;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_0062d234(param_1);
  iVar2 = FUN_0052f024(param_2);
  if (iVar2 == 800) {
    FUN_0052f060(param_2,&local_8);
    FUN_00407eb8(param_1 + 4,local_8);
    FUN_0052f060(param_2,&local_c);
    FUN_00407eb8(param_1 + 8,local_c);
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    FUN_0052f060(param_2,&local_10);
    FUN_00407eb8(param_1 + 0xc,local_10);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0062d33a;
  puStack_24 = (undefined1 *)0x62d332;
  thunk_FUN_00406e80(&local_10,3,puVar1);
  return;
}
