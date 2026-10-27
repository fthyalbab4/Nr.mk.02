// rea decompile_all
// name: FUN_00754694
// address: 0x754694
// body: available
// range: 0x754694-0x75472f inclusive
// range: 0x754747-0x75475c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7546b1 (push 0x75475d followed by fs-segment stack chaining); handler 0x75475d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7546f5 (push 0x754730 followed by fs-segment stack chaining); handler 0x754730 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00754694(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  puStack_20 = &LAB_0075475d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  *param_2 = 0;
  puStack_28 = (undefined1 *)0x7546ca;
  FUN_00417288(*(undefined4 *)(param_1 + 0x14),L".tds",&local_8);
  puStack_28 = (undefined1 *)0x7546d2;
  cVar2 = FUN_007365b8(local_8);
  if (cVar2 != '\0') {
    puStack_28 = (undefined1 *)0x40;
    puStack_2c = (undefined1 *)0x7546e7;
    puVar3 = (undefined4 *)FUN_007361c8(&PTR_LAB_00735d50,1,local_8);
    puStack_2c = &LAB_00754730;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    uVar4 = (**(code **)*puVar3)();
    cVar2 = FUN_007541f4(&PTR_LAB_00752a60,puVar3[1],uVar4);
    if (cVar2 == '\0') {
      FUN_00405a7c(puVar3);
    }
    else {
      *param_2 = puVar3;
    }
    *in_FS_OFFSET = uStack_30;
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00754764;
  puStack_20 = (undefined1 *)0x75475c;
  thunk_FUN_00406e5c(&local_8,uStack_24,puVar1);
  return;
}
