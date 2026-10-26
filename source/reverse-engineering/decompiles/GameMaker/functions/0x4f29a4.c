// rea decompile_all
// name: FUN_004f29a4
// address: 0x4f29a4
// body: available
// range: 0x4f29a4-0x4f2ae8 inclusive
// range: 0x4f2b5f-0x4f2b7f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f2a0b (push 0x4f2b58 followed by fs-segment stack chaining); handler 0x4f2b58 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f2a85 (push 0x4f2ae9 followed by fs-segment stack chaining); handler 0x4f2ae9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f29a4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;

  if ((((char)param_1[0x7b] != '\0') && (*(char *)((int)param_1 + 0x1eb) != '\0')) &&
     (param_1[0x72] != 0)) {
    puStack_24 = (undefined1 *)0x4f29e8;
    (**(code **)(*(int *)param_1[0x72] + 0x2c))((int *)param_1[0x72],0);
  }
  puStack_28 = (undefined1 *)0x4f29ee;
  puStack_24 = &stack0xfffffffc;
  cVar2 = FUN_004f260c();
  if (cVar2 != '\0') {
    puStack_28 = &LAB_004f2b58;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    puStack_24 = &stack0xfffffffc;
    if (param_1[0x6a] == 0) {
      iVar3 = param_1[0xd];
      if ((iVar3 == 0) || (*(int *)(iVar3 + 0x1a8) == 0)) {
        puStack_30 = (undefined1 *)0x4f2a4e;
        puStack_24 = &stack0xfffffffc;
        iVar3 = FUN_00405a4c(&PTR_LAB_0042f444,1);
        param_1[0x6a] = iVar3;
      }
      else {
        param_1[0x6a] = *(int *)(iVar3 + 0x1a8);
        puStack_24 = &stack0xfffffffc;
      }
    }
    puStack_30 = (undefined1 *)0x4f2a6b;
    (**(code **)(*param_1 + 0xa0))(param_1,param_3);
    puStack_30 = (undefined1 *)0x4f2a77;
    uVar4 = FUN_00405a4c(&PTR_LAB_0042f444,1);
    puStack_34 = &LAB_004f2ae9;
    uStack_38 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_38;
    puStack_30 = &stack0xfffffffc;
    FUN_004f2480(1);
    FUN_004f2480(2);
    FUN_004f2480(3);
    FUN_004f2480(4);
    FUN_004f2480(5);
    FUN_004f2480(6);
    FUN_004f2480(0);
    FUN_00405d08(param_1);
    puVar1 = puStack_30;
    *in_FS_OFFSET = uStack_38;
    puStack_30 = &LAB_004f2af0;
    puStack_34 = (undefined1 *)0x4f2ae8;
    FUN_00405a7c(uVar4,uStack_38,puVar1);
    return;
  }
  if ((*(char *)((int)param_1 + 0x5e) != '\0') && (*(char *)((int)param_1 + 0x1ea) != '\0')) {
    puStack_28 = (undefined1 *)0x4f2b7a;
    puStack_24 = &stack0xfffffffc;
    FUN_004f28d8();
  }
  return;
}
