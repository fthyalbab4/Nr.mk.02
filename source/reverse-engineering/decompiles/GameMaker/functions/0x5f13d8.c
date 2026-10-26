// rea decompile_all
// name: FUN_005f13d8
// address: 0x5f13d8
// body: available
// range: 0x5f13d8-0x5f14c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f13fa (push 0x5f14c2 followed by fs-segment stack chaining); handler 0x5f14c2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f13d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                 undefined2 *param_5)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  short *psVar3;
  undefined4 *puVar4;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  short local_24 [2];
  undefined1 local_20 [4];
  undefined1 local_1c [20];
  undefined4 local_8;

  puStack_3c = &stack0xfffffffc;
  local_2c = 0;
  local_28 = 0;
  puStack_40 = &LAB_005f14c2;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_8 = 0x1c;
  puVar4 = &local_8;
  psVar3 = local_24;
  uVar2 = (**(code **)PTR_DAT_00781820)();
  FUN_005f4444(param_1,uVar2);
  if (local_24[0] == 2) {
    FUN_005ee144(param_1,local_20,0,&local_28,param_2,psVar3);
    FUN_00407eb8(param_3,local_28);
    uVar1 = (**(code **)PTR_DAT_00781c98)();
    *param_5 = uVar1;
    *param_4 = 0;
  }
  else if (local_24[0] == 0x17) {
    FUN_005ee144(param_1,local_1c,1,&local_2c,param_2,psVar3);
    FUN_00407eb8(param_3,local_2c);
    uVar1 = (**(code **)PTR_DAT_00781c98)();
    *param_5 = uVar1;
    *param_4 = 1;
  }
  else {
    FUN_005f3db8(param_1);
  }
  *in_FS_OFFSET = param_2;
  thunk_FUN_00406e80(&local_2c,2,puVar4,&LAB_005f14c9);
  return;
}
