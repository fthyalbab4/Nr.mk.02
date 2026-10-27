// rea decompile_all
// name: FUN_006cabf4
// address: 0x6cabf4
// body: available
// range: 0x6cabf4-0x6cacd5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6cac1a (push 0x6cacd6 followed by fs-segment stack chaining); handler 0x6cacd6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cabf4(int param_1,undefined4 param_2,char param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_270;
  undefined1 *puStack_26c;
  undefined1 *puStack_268;
  undefined1 local_25c [595];
  char local_9;
  undefined4 local_8;

  puStack_268 = (undefined1 *)0x6cac0f;
  local_9 = param_3;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_26c = &LAB_006cacd6;
  uStack_270 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_270;
  puStack_268 = &stack0xfffffffc;
  cVar2 = FUN_00416e40(local_8);
  if (cVar2 != '\0') {
    FUN_00407eb8(param_1 + 8,local_8);
    *(undefined1 *)(param_1 + 0xc) = 1;
    *(char *)(param_1 + 0x14) = local_9;
    if (local_9 == '\0') {
      FUN_0043fef4(*(undefined4 *)(param_1 + 0x18));
      *PTR_DAT_00782530 = 0;
      FUN_00404ba0(local_25c,*(undefined4 *)(param_1 + 8));
      FUN_00405284(local_25c,1);
      FUN_00404484();
      FUN_00404ebc(local_25c);
      uVar3 = FUN_00404484();
      *(undefined4 *)(param_1 + 0x10) = uVar3;
      FUN_00404d1c(local_25c);
      FUN_00404484();
      *PTR_DAT_00782530 = 2;
    }
    else {
      FUN_0043ff44(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8));
      uVar3 = (**(code **)**(undefined4 **)(param_1 + 0x18))();
      *(undefined4 *)(param_1 + 0x10) = uVar3;
    }
  }
  puVar1 = puStack_268;
  *in_FS_OFFSET = uStack_270;
  puStack_268 = &LAB_006cacdd;
  puStack_26c = (undefined1 *)0x6cacd5;
  thunk_FUN_00406e5c(&local_8,uStack_270,puVar1);
  return;
}
