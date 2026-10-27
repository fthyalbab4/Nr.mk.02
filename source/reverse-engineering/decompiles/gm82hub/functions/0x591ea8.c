// rea decompile_all
// name: FUN_00591ea8
// address: 0x591ea8
// body: available
// range: 0x591ea8-0x591f9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x591ec2 (push 0x591f9f followed by fs-segment stack chaining); handler 0x591f9f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00591ea8(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int *in_FS_OFFSET;
  undefined4 *puVar3;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_00591f9f;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  cVar2 = FUN_00592154(param_1);
  if (cVar2 == '\0') {
    puVar3 = (undefined4 *)0x591ed9;
    FUN_004bb690(param_1,param_2);
  }
  else {
    FUN_004081e8(&local_8,param_2);
    if ((char)param_1[0xab] == '\0') {
      FUN_00592f90(param_1,local_8,1,&local_14);
      puVar3 = (undefined4 *)0x591f32;
      FUN_004081e8(&local_8,local_14);
    }
    else {
      puVar3 = &local_10;
      FUN_005912c0(param_1[0xa8],local_8,(short)param_1[0xa9]);
      FUN_004081e8(&local_8,local_10);
    }
    if ((((*(byte *)((int)param_1 + 0x2ad) & 4) == 0) && ((*(byte *)(param_1 + 7) & 0x10) != 0)) &&
       ((*(byte *)(param_1 + 7) & 1) == 0)) {
      cVar2 = (**(code **)(*param_1 + 0x118))(param_1,local_8,&local_c);
      if (cVar2 == '\0') {
        FUN_0041be80(&LAB_005915cc,1,PTR_LAB_006889ac);
        FUN_00406ab4();
      }
    }
    FUN_00591d38(param_1,local_8);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = (int)puVar3;
  puStack_24 = &LAB_00591fa6;
  iStack_28 = 0x591f96;
  thunk_FUN_004072fc(&local_14,2,puVar1);
  iStack_28 = 0x591f9e;
  thunk_FUN_004072d8(&local_8);
  return;
}
