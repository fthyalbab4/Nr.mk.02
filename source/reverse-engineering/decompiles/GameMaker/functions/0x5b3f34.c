// rea decompile_all
// name: FUN_005b3f34
// address: 0x5b3f34
// body: available
// range: 0x5b3f34-0x5b3fd2 inclusive
// range: 0x5b3fec-0x5b4009 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b3f55 (push 0x5b400a followed by fs-segment stack chaining); handler 0x5b400a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b3fbb (push 0x5b3fd3 followed by fs-segment stack chaining); handler 0x5b3fd3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b3f34(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_8;

  puStack_20 = (undefined1 *)0x5b3f4a;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_24 = &LAB_005b400a;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x5b3f64;
  puStack_20 = &stack0xfffffffc;
  uVar3 = FUN_00405a4c(&LAB_0052e8fc,1);
  puStack_2c = (undefined1 *)0x5b3f71;
  cVar2 = FUN_005b391c(param_1,uVar3,0);
  if (cVar2 == '\0') {
    puStack_2c = (undefined1 *)0x5b3f81;
    FUN_00405a7c(uVar3);
  }
  else {
    puStack_2c = (undefined1 *)0x5b3f8f;
    uVar4 = FUN_00405a4c(&LAB_0052e8fc,1);
    puStack_2c = (undefined1 *)0x5b3f9f;
    FUN_0052f12c(uVar4,0x12d591);
    puStack_2c = (undefined1 *)0x5b3fa9;
    FUN_0052f34c(uVar4,uVar3);
    puStack_2c = (undefined1 *)0x5b3fb0;
    FUN_00405a7c(uVar3);
    puStack_30 = &LAB_005b3fd3;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    puStack_2c = &stack0xfffffffc;
    FUN_0043fe70(uVar4,local_8);
    puVar1 = puStack_2c;
    *in_FS_OFFSET = uStack_34;
    puStack_2c = (undefined1 *)0x5b3ff4;
    FUN_00405a7c(uVar4,uStack_34,puVar1);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005b4011;
  puStack_24 = (undefined1 *)0x5b4009;
  thunk_FUN_00406e5c(&local_8,uStack_28,puVar1);
  return;
}
