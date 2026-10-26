// rea decompile_all
// name: FUN_005fa1f4
// address: 0x5fa1f4
// body: available
// range: 0x5fa1f4-0x5fa29d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5fa214 (push 0x5fa29e followed by fs-segment stack chaining); handler 0x5fa29e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fa1f4(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 *local_8;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  puStack_28 = &LAB_005fa29e;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_8 = param_2;
  for (; param_2 != (undefined4 *)0x0; param_2 = (undefined4 *)param_2[0xe]) {
    if (param_1 == param_2) {
      FUN_00405954(*param_1,&local_14);
      local_10 = local_14;
      local_c = 0x11;
      puVar3 = &local_10;
      uVar2 = 0;
      FUN_0040b75c(PTR_PTR_00782470,&local_18);
      FUN_0041bef4(&PTR_LAB_005f9c18,1,local_18,uVar2,puVar3);
      FUN_00406618();
    }
  }
  if (param_1[0xe] != 0) {
    FUN_0044924c(param_1[0xe],param_1);
  }
  param_1[0xe] = local_8;
  if (local_8 != (undefined4 *)0x0) {
    FUN_00448f68(local_8,param_1);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_005fa2a5;
  puStack_28 = (undefined1 *)0x5fa29d;
  thunk_FUN_00406e80(&local_18,2,puVar1);
  return;
}
