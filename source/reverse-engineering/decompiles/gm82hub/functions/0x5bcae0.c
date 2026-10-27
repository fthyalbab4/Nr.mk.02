// rea decompile_all
// name: FUN_005bcae0
// address: 0x5bcae0
// body: available
// range: 0x5bcae0-0x5bcbef inclusive
// range: 0x5bcbf7-0x5bcc0c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bcb03 (push 0x5bcc0d followed by fs-segment stack chaining); handler 0x5bcc0d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bcbb8 (push 0x5bcbf0 followed by fs-segment stack chaining); handler 0x5bcbf0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bcae0(undefined4 param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  char local_9;
  undefined4 local_8;

  puStack_24 = (undefined1 *)0x5bcaf3;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_28 = &LAB_005bcc0d;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  if (DAT_0084f054 == 0) goto LAB_005bcbf7;
  puStack_24 = &stack0xfffffffc;
  if (DAT_00687528 == 0) {
    puStack_30 = (undefined1 *)0x5bcb2a;
    puStack_24 = &stack0xfffffffc;
    DAT_00687528 = FUN_004e0f04(&PTR_LAB_005b8fc0,1,DAT_0084f054);
    puStack_30 = (undefined1 *)0x5bcb38;
    FUN_004bb690(DAT_00687528,&PTR_DAT_005bcc28);
  }
  if (*(char *)(DAT_00687528 + 0x29d) == '\0') {
    puStack_30 = (undefined1 *)0x5bcb56;
    (**(code **)(**(int **)(DAT_00687528 + 0x398) + 0x110))
              (*(int **)(DAT_00687528 + 0x398),local_18);
    puStack_30 = (undefined1 *)0x5bcb6c;
    iVar3 = (**(code **)(**(int **)(*(int *)(DAT_00687528 + 0x398) + 0x2c0) + 0x14))();
    if (local_14 != iVar3) goto LAB_005bcb70;
    local_9 = '\x01';
  }
  else {
LAB_005bcb70:
    local_9 = '\0';
  }
  piVar1 = *(int **)(*(int *)(DAT_00687528 + 0x398) + 0x2c0);
  puStack_30 = (undefined1 *)0x5bcb8f;
  (**(code **)(*piVar1 + 0x38))(piVar1,local_8);
  if (local_9 != '\0') {
    local_10 = *(int *)(DAT_00687528 + 0x398);
    local_9 = *(undefined1 *)(local_10 + 0x2d0);
    puStack_34 = &LAB_005bcbf0;
    uStack_38 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_38;
    puStack_30 = &stack0xfffffffc;
    FUN_0048f27c(local_10,0);
    FUN_004bcb48(local_10,0xb7,0,0);
    puVar2 = puStack_30;
    *in_FS_OFFSET = uStack_38;
    puStack_30 = (undefined1 *)0x5bcbf7;
    puStack_34 = (undefined1 *)0x5bcbef;
    FUN_0048f27c(local_10,local_9,puVar2);
    return;
  }
LAB_005bcbf7:
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_005bcc14;
  puStack_28 = (undefined1 *)0x5bcc0c;
  thunk_FUN_004072d8(&local_8,uStack_2c,puVar2);
  return;
}
