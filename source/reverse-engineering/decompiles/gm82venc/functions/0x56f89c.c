// rea decompile_all
// name: FUN_0056f89c
// address: 0x56f89c
// body: available
// range: 0x56f89c-0x56f905 inclusive
// range: 0x56f922-0x56f9c2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x56f8bd (push 0x56f9c3 followed by fs-segment stack chaining); handler 0x56f9c3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x56f8ee (push 0x56f906 followed by fs-segment stack chaining); handler 0x56f906 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056f89c(int param_1,undefined4 param_2)

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

  puStack_20 = (undefined1 *)0x56f8b2;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_24 = &LAB_0056f9c3;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x56f8cc;
  puStack_20 = &stack0xfffffffc;
  cVar2 = FUN_00416b0c(local_8);
  if (cVar2 != '\0') {
    puStack_2c = (undefined1 *)0x56f8e0;
    uVar3 = FUN_00405fac(&PTR_LAB_0050b4b8,1);
    puStack_30 = &LAB_0056f906;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    puStack_2c = &stack0xfffffffc;
    FUN_0043d544(uVar3,local_8);
    puVar1 = puStack_2c;
    *in_FS_OFFSET = uStack_34;
    puStack_2c = (undefined1 *)0x56f92a;
    iVar4 = FUN_0050bbe0(uVar3,uStack_34,puVar1);
    if (iVar4 == 0x12d591) {
      puStack_2c = (undefined1 *)0x56f939;
      uVar5 = FUN_0050be9c(uVar3);
      puStack_2c = (undefined1 *)0x56f942;
      FUN_0056fdf4(param_1);
      puStack_2c = (undefined1 *)0x56f949;
      iVar4 = FUN_0050bbe0(uVar5);
      if (iVar4 == 0x2c6) {
        puStack_2c = (undefined1 *)0x56f957;
        FUN_0050bcd0(uVar5);
        puStack_2c = (undefined1 *)0x56f95e;
        FUN_0050bbe0(uVar5);
        puStack_2c = (undefined1 *)0x56f965;
        FUN_0050bbe0(uVar5);
        puStack_2c = (undefined1 *)0x56f96c;
        FUN_0050bbe0(uVar5);
        puStack_2c = (undefined1 *)0x56f973;
        FUN_0050bbe0(uVar5);
        puStack_2c = (undefined1 *)0x56f97a;
        FUN_0050bbe0(uVar5);
        puStack_2c = (undefined1 *)0x56f981;
        FUN_0050bbe0(uVar5);
        puStack_2c = (undefined1 *)0x56f98b;
        FUN_00516300(*(undefined4 *)(param_1 + 4),uVar5);
        puStack_2c = (undefined1 *)0x56f993;
        FUN_0056e4f8(*(undefined4 *)(param_1 + 4));
        puStack_2c = (undefined1 *)0x56f99a;
        FUN_00405fdc(uVar5);
        puStack_2c = (undefined1 *)0x56f9a2;
        FUN_00405fdc(uVar3);
        puStack_2c = (undefined1 *)0x56f9a9;
        FUN_0056fb50(param_1);
      }
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0056f9ca;
  puStack_24 = (undefined1 *)0x56f9c2;
  thunk_FUN_004072d8(&local_8,uStack_28,puVar1);
  return;
}
