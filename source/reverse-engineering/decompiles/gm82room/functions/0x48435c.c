// rea decompile_all
// name: FUN_0048435c
// address: 0x48435c
// body: available
// range: 0x48435c-0x4843e7 inclusive
// range: 0x4843ef-0x48444d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x484376 (push 0x48444e followed by fs-segment stack chaining); handler 0x48444e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4843a2 (push 0x4843e8 followed by fs-segment stack chaining); handler 0x4843e8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048435c(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  int *local_c;
  int local_8;

  puStack_18 = &stack0xfffffffc;
  local_10 = 0;
  puStack_1c = &LAB_0048444e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_8 = param_1;
  if (*(int *)(*(int *)(param_1 + 0x1b0) + 0xc) == 0) {
    puStack_24 = (undefined1 *)0x484394;
    puStack_18 = &stack0xfffffffc;
    local_c = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
    puStack_28 = &LAB_004843e8;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    puStack_24 = &stack0xfffffffc;
    (**(code **)(*local_c + 0x44))(local_c,*(undefined4 *)(local_8 + 0x48));
    (**(code **)(*local_c + 0x38))(local_c,*(undefined4 *)(local_8 + 0x4c));
    FUN_0045fd6c(*(undefined4 *)(local_8 + 0x1b0),local_c);
    puVar2 = puStack_24;
    *in_FS_OFFSET = uStack_2c;
    puStack_24 = (undefined1 *)0x4843ef;
    puStack_28 = (undefined1 *)0x4843e7;
    FUN_00405fdc(local_c,uStack_2c,puVar2);
    return;
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1b0) + 0xc);
  puStack_24 = (undefined1 *)0x484408;
  cVar3 = FUN_004061f8(uVar1,&PTR_FUN_00458e94);
  if (cVar3 == '\0') {
    puStack_24 = (undefined1 *)0x484424;
    FUN_0040b9d0(PTR_LAB_00688b50,&local_10);
    puStack_24 = (undefined1 *)0x484433;
    FUN_0041bd4c(&LAB_0042dc24,1,local_10);
    puStack_24 = (undefined1 *)0x484438;
    FUN_00406ab4();
  }
  else {
    puStack_24 = (undefined1 *)0x484413;
    FUN_00463124(uVar1);
  }
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00484455;
  puStack_1c = (undefined1 *)0x48444d;
  thunk_FUN_004072d8(&local_10,uStack_20,puVar2);
  return;
}
