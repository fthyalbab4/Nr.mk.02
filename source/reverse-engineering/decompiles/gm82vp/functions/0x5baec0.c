// rea decompile_all
// name: FUN_005baec0
// address: 0x5baec0
// body: available
// range: 0x5baec0-0x5baf70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5baef7 (push 0x5baf71 followed by fs-segment stack chaining); handler 0x5baf71 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005baec0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 local_34 [2];
  undefined4 local_2c;
  undefined1 local_24 [28];
  undefined4 local_8;

  local_34[0] = 0;
  puStack_44 = (undefined1 *)0x5baede;
  local_2c = param_1;
  local_8 = param_3;
  thunk_FUN_00407ad0(param_3);
  puStack_44 = (undefined1 *)0x5baeec;
  FUN_00408ff8(local_24,&DAT_00615f70);
  puStack_48 = &LAB_005baf71;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  iVar3 = *(int *)PTR_DAT_00688cc0;
  puStack_44 = &stack0xfffffffc;
  if (-1 < iVar3 + -1) {
    uVar4 = iVar3 == 0;
    puVar2 = PTR_DAT_00688a08;
    puStack_44 = &stack0xfffffffc;
    do {
      FUN_00408508(local_34,puVar2);
      FUN_0040891c(local_34[0],local_8);
      if ((bool)uVar4) {
        (**(code **)(puVar2 + 0x44))(param_2,0,local_24);
        break;
      }
      puVar2 = puVar2 + 0x50;
      iVar3 = iVar3 + -1;
      uVar4 = iVar3 == 0;
    } while (!(bool)uVar4);
  }
  FUN_005bad20(local_2c,local_8,local_24);
  puVar1 = puStack_44;
  *in_FS_OFFSET = uStack_4c;
  puStack_44 = &LAB_005baf78;
  puStack_48 = (undefined1 *)0x5baf5a;
  thunk_FUN_004072d8(local_34,uStack_4c,puVar1);
  puStack_48 = (undefined1 *)0x5baf68;
  FUN_004090d0(local_24,&DAT_00615f70);
  puStack_48 = (undefined1 *)0x5baf70;
  thunk_FUN_004072d8(&local_8);
  return;
}
