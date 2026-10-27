// rea decompile_all
// name: FUN_0054c580
// address: 0x54c580
// body: available
// range: 0x54c580-0x54c5e8 inclusive
// range: 0x54c602-0x54c65f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54c59d (push 0x54c660 followed by fs-segment stack chaining); handler 0x54c660 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54c5d2 (push 0x54c5e9 followed by fs-segment stack chaining); handler 0x54c5e9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054c580(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int *local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_0054c660;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = (int *)0x0;
  puStack_28 = (undefined1 *)0x54c5b2;
  cVar3 = FUN_00405c98(param_2,&PTR_FUN_00456dc0);
  if (cVar3 == '\0') {
    puStack_28 = (undefined1 *)0x54c60f;
    cVar3 = FUN_00405c98(param_2,&PTR_LAB_00537d4c);
    piVar2 = param_2;
    if (cVar3 == '\0') {
      puStack_28 = (undefined1 *)0x54c625;
      FUN_0040b75c(&PTR_DAT_0053b3a0,&local_c);
      puStack_28 = (undefined1 *)0x54c62d;
      FUN_0053b600(local_c);
      piVar2 = local_8;
    }
  }
  else {
    puStack_28 = (undefined1 *)0x54c5c4;
    local_8 = (int *)FUN_0054462c(&PTR_LAB_00537d4c,1,param_1);
    puStack_2c = &LAB_0054c5e9;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    (**(code **)(*local_8 + 8))(local_8,param_2);
    *in_FS_OFFSET = uStack_30;
    piVar2 = local_8;
  }
  local_8 = piVar2;
  puStack_28 = (undefined1 *)0x54c638;
  FUN_005415c0(param_1[0xb],local_8);
  puStack_28 = (undefined1 *)0x54c641;
  FUN_0054c55c(param_1);
  puStack_28 = (undefined1 *)0x54c64a;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0054c667;
  puStack_20 = (undefined1 *)0x54c65f;
  thunk_FUN_00406e5c(&local_c,uStack_24,puVar1);
  return;
}
