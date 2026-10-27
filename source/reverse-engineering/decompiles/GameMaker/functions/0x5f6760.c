// rea decompile_all
// name: FUN_005f6760
// address: 0x5f6760
// body: available
// range: 0x5f6760-0x5f687c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f677f (push 0x5f687d followed by fs-segment stack chaining); handler 0x5f687d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f6760(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  undefined1 local_10;
  uint local_c;
  undefined1 local_8;

  puStack_28 = &stack0xfffffffc;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  puStack_2c = &LAB_005f687d;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  if (((*(short *)(param_1 + 0x20) == 0) && (*(short *)(param_1 + 0xc) != 0)) &&
     (*(short *)(param_1 + 0xe) != 0)) {
    if (*(ushort *)(param_1 + 0xe) < *(ushort *)(param_1 + 0xc)) {
      local_14 = (uint)*(ushort *)(param_1 + 0xc);
      local_10 = 0;
      local_c = (uint)*(ushort *)(param_1 + 0xe);
      local_8 = 0;
      puStack_28 = &stack0xfffffffc;
      FUN_0040b75c(PTR_PTR_007822c8,&local_18,param_3,1,&local_14);
      FUN_0041bef4(&PTR_LAB_005df4c8,1,local_18);
      FUN_00406618();
    }
    else {
      puStack_28 = &stack0xfffffffc;
      cVar2 = FUN_005f6da4(param_1);
      if (cVar2 == '\0') {
        local_14 = (uint)*(ushort *)(param_1 + 0xc);
        local_10 = 0;
        local_c = (uint)*(ushort *)(param_1 + 0xe);
        local_8 = 0;
        puVar4 = &local_14;
        uVar3 = 1;
        FUN_0040b75c(PTR_PTR_00782404,&local_1c);
        FUN_0041bef4(&PTR_LAB_005df40c,1,local_1c,uVar3,puVar4);
        FUN_00406618();
      }
    }
  }
  else {
    cVar2 = FUN_005f6d4c(param_1);
    if (cVar2 == '\0') {
      FUN_0040b75c(PTR_PTR_00781eb0,&local_20);
      FUN_005df5ec(&PTR_LAB_005df358,1,local_20);
      FUN_00406618();
    }
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_005f6884;
  puStack_2c = (undefined1 *)0x5f687c;
  thunk_FUN_00406e80(&local_20,3,puVar1);
  return;
}
