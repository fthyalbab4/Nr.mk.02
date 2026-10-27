// rea decompile_all
// name: FUN_00545c98
// address: 0x545c98
// body: available
// range: 0x545c98-0x545dca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x545cb2 (push 0x545dcb followed by fs-segment stack chaining); handler 0x545dcb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00545c98(byte *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar6;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_20;
  undefined1 local_1c [16];
  uint local_c;
  uint local_8;

  puStack_2c = &stack0xfffffffc;
  local_20 = 0;
  puStack_30 = &LAB_00545dcb;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  uVar1 = (**(code **)(**(int **)(*(int *)(param_4 + -4) + 8) + 0x28))();
  FUN_00540cfc(*(undefined4 *)(*(int *)(param_4 + -4) + 0x20),uVar1);
  uVar2 = FUN_005449dc(*(undefined4 *)(param_4 + -4),4);
  if (-1 < (int)((uVar2 & 0xffff) - 1)) {
    local_8 = 0;
    local_c = uVar2 & 0xffff;
    do {
      if ((local_8 & 0x1f) == 0) {
        uVar2 = FUN_005449dc(*(undefined4 *)(param_4 + -4),4);
        iVar3 = MulDiv(local_8,100,uVar2 & 0xffff);
        uVar1 = 0;
        FUN_00438c38(0,0,0,local_1c,0);
        puVar6 = local_1c;
        FUN_0040b75c(&PTR_DAT_0053b438,&local_20);
        FUN_00405d08(*(undefined4 *)(*(int *)(param_4 + -4) + 4),*(undefined4 *)(param_4 + -4),1,
                     local_20,puVar6,uVar1,iVar3);
      }
      pbVar4 = (byte *)(**(code **)**(undefined4 **)(param_4 + -8))
                                 (*(undefined4 **)(param_4 + -8),local_8);
      uVar2 = FUN_005449dc(*(undefined4 *)(param_4 + -4),3);
      uVar2 = uVar2 & 0xffff;
      if (-1 < (int)(uVar2 - 1)) {
        bVar5 = false;
        do {
          if (bVar5) {
            *param_1 = *pbVar4 & 0xf;
            pbVar4 = pbVar4 + 1;
          }
          else {
            *param_1 = *pbVar4 >> 4;
          }
          param_1 = param_1 + 1;
          bVar5 = (bool)(bVar5 ^ 1);
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      local_8 = local_8 + 1;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  puVar6 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00545dd2;
  puStack_30 = (undefined1 *)0x545dca;
  thunk_FUN_00406e5c(&local_20,uStack_34,puVar6);
  return;
}
