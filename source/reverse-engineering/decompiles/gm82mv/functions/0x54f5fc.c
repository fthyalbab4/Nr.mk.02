// rea decompile_all
// name: FUN_0054f5fc
// address: 0x54f5fc
// body: available
// range: 0x54f5fc-0x54f6d2 inclusive
// range: 0x54f6da-0x54f6f5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54f616 (push 0x54f6f6 followed by fs-segment stack chaining); handler 0x54f6f6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54f6ac (push 0x54f6d3 followed by fs-segment stack chaining); handler 0x54f6d3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054f5fc(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0054f6f6;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x20) == 0) {
    puStack_24 = (undefined1 *)0x54f632;
    uVar3 = FUN_0043c790(&PTR_FUN_00430700,1);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    puStack_24 = (undefined1 *)0x54f64a;
    iVar4 = FUN_0054f558(param_1,0x18,1);
    if (iVar4 != 0) {
      puStack_24 = (undefined1 *)0x54f689;
      uVar3 = FUN_0054f0d8(iVar4);
      puStack_24 = (undefined1 *)0x54f690;
      uVar3 = FUN_0054f42c(uVar3,0);
      puStack_24 = (undefined1 *)0x54f69e;
      uVar3 = FUN_0054ee84(&LAB_005487d0,1,uVar3);
      puStack_28 = &LAB_0054f6d3;
      uStack_2c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_2c;
      puStack_24 = &stack0xfffffffc;
      (**(code **)(**(int **)(param_1 + 0x20) + 0x70))(*(int **)(param_1 + 0x20),uVar3);
      puVar1 = puStack_24;
      *in_FS_OFFSET = uStack_2c;
      puStack_24 = (undefined1 *)0x54f6da;
      puStack_28 = (undefined1 *)0x54f6d2;
      FUN_00405fdc(uVar3,uStack_2c,puVar1);
      return;
    }
    puStack_24 = (undefined1 *)0x54f666;
    FUN_00408678(&local_8,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14),&PTR_DAT_0054f710);
    puStack_24 = (undefined1 *)0x54f66e;
    cVar2 = FUN_00538a14(local_8);
    puVar1 = puStack_18;
    if (cVar2 != '\0') {
      puStack_24 = (undefined1 *)0x54f680;
      (**(code **)(**(int **)(param_1 + 0x20) + 0x68))(*(int **)(param_1 + 0x20),local_8);
      puVar1 = puStack_18;
    }
  }
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0054f6fd;
  puStack_1c = (undefined1 *)0x54f6f5;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
