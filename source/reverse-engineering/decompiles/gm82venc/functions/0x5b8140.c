// rea decompile_all
// name: FUN_005b8140
// address: 0x5b8140
// body: available
// range: 0x5b8140-0x5b820a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b815e (push 0x5b820b followed by fs-segment stack chaining); handler 0x5b820b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b8140(int param_1,undefined4 param_2,char param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined3 uStack_8;
  char local_5;

  puStack_20 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  uStack_8 = 0;
  puStack_24 = &LAB_005b820b;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_5 = param_3;
  cVar2 = FUN_00571eb0(param_2);
  if (cVar2 == '\0') {
    FUN_0041636c(param_2,&local_10);
    FUN_00408678(&local_c,&PTR_DAT_005b8228,local_10);
    FUN_0061156c(local_c,0);
  }
  else {
    if (local_5 != '\0') {
      FUN_0058a738(param_1,param_1,1,0);
    }
    uVar3 = FUN_0060a934(*(undefined4 *)PTR_DAT_0068939c,param_2);
    FUN_0060d4e0(uVar3,param_1);
    FUN_0060cfb4(uVar3,param_2);
    *(undefined1 *)(param_1 + 0x108) = 1;
    if (local_5 != '\0') {
      FUN_0058a738(uVar3,uVar3,0,0);
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005b8212;
  puStack_24 = (undefined1 *)0x5b820a;
  thunk_FUN_004072fc(&local_10,2,puVar1);
  return;
}
