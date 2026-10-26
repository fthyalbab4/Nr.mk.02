// rea decompile_all
// name: FUN_005453dc
// address: 0x5453dc
// body: available
// range: 0x5453dc-0x545526 inclusive
// range: 0x54554e-0x545568 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5453fb (push 0x545569 followed by fs-segment stack chaining); handler 0x545569 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54542c (push 0x545538 followed by fs-segment stack chaining); handler 0x545538 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x545478 (push 0x545527 followed by fs-segment stack chaining); handler 0x545527 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005453dc(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint *in_FS_OFFSET;
  undefined1 *puVar5;
  uint uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  uint uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [16];
  int local_c;
  int local_8;

  puStack_34 = &stack0xfffffffc;
  local_24 = 0;
  local_20 = 0;
  puStack_38 = &LAB_00545569;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_3c;
  local_c = *(int *)(param_1 + 8);
  puVar5 = &stack0xfffffffc;
  local_8 = param_1;
  if (local_c == 0) {
    puStack_40 = (undefined1 *)0x545419;
    cVar2 = FUN_00544778(param_1);
    puVar5 = puStack_34;
    if (cVar2 == '\0') {
      puStack_44 = &LAB_00545538;
      uStack_48 = *in_FS_OFFSET;
      *in_FS_OFFSET = (uint)&uStack_48;
      uStack_4c = 0;
      uStack_50 = 0;
      puStack_54 = (undefined1 *)0x0;
      puStack_58 = local_1c;
      puStack_5c = (undefined1 *)0x545444;
      puStack_40 = &stack0xfffffffc;
      FUN_00438c38(0,0,0);
      puStack_54 = local_1c;
      puStack_58 = (undefined1 *)0x545455;
      FUN_0040b75c(&PTR_DAT_0053b440,&local_20);
      puStack_58 = (undefined1 *)local_20;
      puStack_5c = (undefined1 *)0x54546d;
      FUN_00405d08(*(undefined4 *)(local_8 + 4),local_8,0);
      puStack_60 = &LAB_00545527;
      uStack_64 = *in_FS_OFFSET;
      *in_FS_OFFSET = (uint)&uStack_64;
      puStack_5c = &stack0xfffffffc;
      cVar2 = FUN_0054ce80(*(undefined4 *)(local_8 + 4));
      if (cVar2 == '\0') {
        uVar3 = FUN_00544ff8(local_8);
        *(undefined4 *)(local_8 + 8) = uVar3;
      }
      else {
        uVar3 = FUN_00544a70(local_8);
        *(undefined4 *)(local_8 + 8) = uVar3;
      }
      puVar5 = puStack_5c;
      local_c = *(undefined4 *)(local_8 + 8);
      *in_FS_OFFSET = uStack_64;
      puStack_5c = &DAT_0054552e;
      puStack_60 = (undefined1 *)0x5454c3;
      iVar4 = FUN_004043a0(0,uStack_64,puVar5);
      if (iVar4 == 0) {
        puStack_60 = (undefined1 *)0x64;
      }
      else {
        puStack_60 = (undefined1 *)0x0;
      }
      iVar4 = *(int *)(local_8 + 4);
      uStack_64 = (uint)*(byte *)(iVar4 + 0x22);
      FUN_00438c38(0,0,0,local_1c,0);
      puVar5 = local_1c;
      FUN_0040b75c(&PTR_DAT_0053b440,&local_24);
      FUN_00405d08(iVar4,local_8,2,local_24,puVar5);
      piVar1 = *(int **)(local_8 + 4);
      if (*(char *)((int)piVar1 + 0x22) != '\0') {
        (**(code **)(*piVar1 + 0x10))(piVar1,local_8);
      }
      return;
    }
  }
  puStack_34 = puVar5;
  puVar5 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_00545570;
  puStack_38 = (undefined1 *)0x545568;
  thunk_FUN_00406e80(&local_24,2,puVar5);
  return;
}
