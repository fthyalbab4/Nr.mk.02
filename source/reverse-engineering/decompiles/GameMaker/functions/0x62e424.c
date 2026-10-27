// rea decompile_all
// name: FUN_0062e424
// address: 0x62e424
// body: available
// range: 0x62e424-0x62e489 inclusive
// range: 0x62e4a3-0x62e4ec inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62e445 (push 0x62e4ed followed by fs-segment stack chaining); handler 0x62e4ed lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62e472 (push 0x62e48a followed by fs-segment stack chaining); handler 0x62e48a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062e424(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_8;

  puStack_20 = (undefined1 *)0x62e43a;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_24 = &LAB_0062e4ed;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x62e454;
  puStack_20 = &stack0xfffffffc;
  cVar2 = FUN_00416e40(local_8);
  if (cVar2 != '\0') {
    puStack_2c = (undefined1 *)0x62e464;
    uVar3 = FUN_00405a4c(&LAB_0052e8fc,1);
    puStack_30 = &LAB_0062e48a;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    puStack_2c = &stack0xfffffffc;
    FUN_0043ff44(uVar3,local_8);
    puVar1 = puStack_2c;
    *in_FS_OFFSET = uStack_34;
    puStack_2c = (undefined1 *)0x62e4ab;
    iVar4 = FUN_0052f024(uVar3,uStack_34,puVar1);
    if (iVar4 == 0x12d591) {
      puStack_2c = (undefined1 *)0x62e4ba;
      uVar5 = FUN_0052f2e4(uVar3);
      puStack_2c = (undefined1 *)0x62e4c5;
      FUN_0062e260(param_1,uVar5);
      puStack_2c = (undefined1 *)0x62e4cf;
      FUN_00405a7c(uVar5);
      puStack_2c = (undefined1 *)0x62e4d7;
      FUN_00405a7c(uVar3);
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0062e4f4;
  puStack_24 = (undefined1 *)0x62e4ec;
  thunk_FUN_00406e5c(&local_8,uStack_28,puVar1);
  return;
}
