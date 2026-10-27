// rea decompile_all
// name: FUN_006cda50
// address: 0x6cda50
// body: available
// range: 0x6cda50-0x6cdabf inclusive
// range: 0x6cdad9-0x6cdb2a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6cda7b (push 0x6cdb2b followed by fs-segment stack chaining); handler 0x6cdb2b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6cdaa8 (push 0x6cdac0 followed by fs-segment stack chaining); handler 0x6cdac0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cda50(undefined4 param_1,undefined4 param_2,char param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_8;

  puStack_20 = (undefined1 *)0x6cda68;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_20 = (undefined1 *)0x6cda70;
  thunk_FUN_00407660(param_4);
  puStack_24 = &LAB_006cdb2b;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  puStack_2c = (undefined1 *)0x6cda8a;
  puStack_20 = &stack0xfffffffc;
  cVar2 = FUN_00416e40(local_8);
  if (cVar2 != '\0') {
    puStack_2c = (undefined1 *)0x6cda9a;
    uVar3 = FUN_00405a4c(&LAB_0052e8fc,1);
    puStack_30 = &LAB_006cdac0;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    puStack_2c = &stack0xfffffffc;
    FUN_0043ff44(uVar3,local_8);
    puVar1 = puStack_2c;
    *in_FS_OFFSET = uStack_34;
    puStack_2c = (undefined1 *)0x6cdae3;
    FUN_0052f168(param_1,param_4,puVar1);
    if (param_3 == '\0') {
      puStack_2c = (undefined1 *)0x6cdb01;
      FUN_0052f34c(param_1,uVar3);
    }
    else {
      puStack_2c = (undefined1 *)0x0;
      puStack_30 = (undefined1 *)0x0;
      uStack_34 = 0x6cdaf5;
      FUN_0043f4f8(param_1,uVar3);
    }
    uStack_34 = 0x6cdb09;
    FUN_00405a7c(uVar3);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = puStack_30;
  puStack_28 = &LAB_006cdb32;
  puStack_2c = (undefined1 *)0x6cdb22;
  thunk_FUN_00406e5c(&local_8,puStack_30,puVar1);
  puStack_2c = (undefined1 *)0x6cdb2a;
  thunk_FUN_00406e5c(&param_4);
  return;
}
