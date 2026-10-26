// rea decompile_all
// name: FUN_00545dd8
// address: 0x545dd8
// body: available
// range: 0x545dd8-0x545f17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x545df4 (push 0x545f18 followed by fs-segment stack chaining); handler 0x545f18 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00545dd8(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar6;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined1 local_20 [16];
  uint local_10;
  uint local_c;
  undefined1 *local_8;

  puStack_34 = &stack0xfffffffc;
  local_24 = 0;
  puStack_38 = &LAB_00545f18;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_8 = param_1;
  uVar1 = (**(code **)(**(int **)(*(int *)(param_4 + -4) + 8) + 0x28))();
  FUN_00540cfc(*(undefined4 *)(*(int *)(param_4 + -4) + 0x20),uVar1);
  uVar2 = FUN_005449dc(*(undefined4 *)(param_4 + -4),4);
  if (-1 < (int)((uVar2 & 0xffff) - 1)) {
    local_c = 0;
    local_10 = uVar2 & 0xffff;
    do {
      if ((local_c & 0x1f) == 0) {
        uVar2 = FUN_005449dc(*(undefined4 *)(param_4 + -4),4);
        iVar3 = MulDiv(local_c,100,uVar2 & 0xffff);
        uVar1 = 0;
        FUN_00438c38(0,0,0,local_20,0);
        puVar6 = local_20;
        FUN_0040b75c(&PTR_DAT_0053b438,&local_24);
        FUN_00405d08(*(undefined4 *)(*(int *)(param_4 + -4) + 4),*(undefined4 *)(param_4 + -4),1,
                     local_24,puVar6,uVar1,iVar3);
      }
      pbVar4 = (byte *)(**(code **)**(undefined4 **)(param_4 + -8))
                                 (*(undefined4 **)(param_4 + -8),local_c);
      uVar5 = FUN_005449dc(*(undefined4 *)(param_4 + -4),3);
      uVar5 = uVar5 & 0xffff;
      iVar3 = 0;
      uVar2 = 0;
      if (uVar5 != 0) {
        do {
          if (iVar3 == 0) {
            iVar3 = 8;
            uVar2 = (uint)*pbVar4;
            pbVar4 = pbVar4 + 1;
          }
          *local_8 = (char)((uVar2 & 0x80) >> 7);
          uVar2 = uVar2 * 2;
          local_8 = local_8 + 1;
          iVar3 = iVar3 + -1;
          uVar5 = uVar5 - 1;
        } while (0 < (int)uVar5);
      }
      local_c = local_c + 1;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
  }
  puVar6 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_00545f1f;
  puStack_38 = (undefined1 *)0x545f17;
  thunk_FUN_00406e5c(&local_24,uStack_3c,puVar6);
  return;
}
