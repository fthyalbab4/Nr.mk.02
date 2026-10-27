// rea decompile_all
// name: FUN_0043f3f0
// address: 0x43f3f0
// body: available
// range: 0x43f3f0-0x43f42e inclusive
// range: 0x43f455-0x43f51b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43f40b (push 0x43f51c followed by fs-segment stack chaining); handler 0x43f51c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043f3f0(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_10;
  undefined4 local_c;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  uStack_10 = 0;
  puStack_24 = &LAB_0043f51c;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  uVar2 = FUN_00440718(param_1);
  switch(uVar2 & 0x7f) {
  case 0:
    FUN_00408194(param_2,L"Null");
    break;
  default:
    FUN_0043e23c();
    break;
  case 7:
    FUN_0043e8c0(param_1,(int)&uStack_10 + 3,1);
    FUN_004073d4(&local_8,0,uStack_10._3_1_,0);
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 1)) {
      FUN_004074b8(&local_8,local_8,0);
    }
    uVar3 = thunk_FUN_00407af8(&local_8);
    FUN_0043e8c0(param_1,uVar3,uStack_10._3_1_);
    FUN_0040b7a0(local_8,&local_c);
    FUN_00408194(param_2,local_c);
    break;
  case 8:
    FUN_00408194(param_2,L"False");
    break;
  case 9:
    FUN_00408194(param_2,L"True");
    break;
  case 0xd:
    FUN_00408194(param_2,&PTR_DAT_0043f568);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0043f523;
  puStack_24 = (undefined1 *)0x43f513;
  thunk_FUN_004072d8(&local_c,uStack_28,puVar1);
  puStack_24 = (undefined1 *)0x43f51b;
  FUN_004072d8(&local_8);
  return;
}
