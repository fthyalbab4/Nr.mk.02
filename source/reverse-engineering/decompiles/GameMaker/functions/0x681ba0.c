// rea decompile_all
// name: FUN_00681ba0
// address: 0x681ba0
// body: available
// range: 0x681ba0-0x681cea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x681bd1 (push 0x681ceb followed by fs-segment stack chaining); handler 0x681ceb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00681ba0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  char local_d;
  undefined4 *local_c;
  undefined4 local_8;

  local_14 = 0;
  puStack_24 = (undefined1 *)0x681bc1;
  local_c = param_2;
  local_8 = param_3;
  thunk_FUN_00407660(param_3);
  puStack_28 = &LAB_00681ceb;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_004ee6d8(DAT_0078a1f4,local_8);
  FUN_004ee5c0(DAT_0078a1f4[0xee],param_5);
  if ((char)param_5 != '\0') {
    FUN_006819a8(*local_c);
  }
  FUN_004ee5c0(DAT_0078a1f4[0xe5],param_4);
  *(undefined1 *)(DAT_0078a1f4 + 0x110) = 0;
  *(undefined1 *)((int)DAT_0078a1f4 + 0x441) = 0;
  iVar1 = DAT_0078a1f4[0x10f];
  *(undefined1 *)(iVar1 + 0x32e) = param_4;
  FUN_006b83b8(iVar1,*param_1);
  iVar1 = DAT_0078a1f4[0x10f];
  *(int **)(iVar1 + 0x2d4) = DAT_0078a1f4;
  *(undefined1 **)(iVar1 + 0x2d0) = &LAB_00681dac;
  FUN_00681d00(DAT_0078a1f4);
  FUN_0048e1e4(DAT_0078a1f4[0xfd],1);
  (**(code **)(*DAT_0078a1f4 + 0x110))();
  FUN_0048e1e4(DAT_0078a1f4[0xfd],0);
  if ((*(char *)((int)DAT_0078a1f4 + 0x441) == '\0') || ((char)DAT_0078a1f4[0x110] == '\0')) {
    local_d = '\0';
  }
  else {
    local_d = '\x01';
  }
  if (local_d != '\0') {
    if ((char)param_5 != '\0') {
      uVar3 = FUN_00681aa0();
      *local_c = uVar3;
    }
    FUN_006b8444(DAT_0078a1f4[0x10f],&local_14);
    FUN_00407eb8(param_1,local_14);
  }
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00681cf2;
  puStack_28 = (undefined1 *)0x681ce2;
  thunk_FUN_00406e5c(&local_14,uStack_2c,puVar2);
  puStack_28 = (undefined1 *)0x681cea;
  thunk_FUN_00406e5c(&local_8);
  return;
}
