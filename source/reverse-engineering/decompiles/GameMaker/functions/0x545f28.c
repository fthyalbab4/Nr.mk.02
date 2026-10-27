// rea decompile_all
// name: FUN_00545f28
// address: 0x545f28
// body: available
// range: 0x545f28-0x5460d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x545f43 (push 0x5460da followed by fs-segment stack chaining); handler 0x5460da lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_00545f28(byte *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar10;
  undefined4 uStack_80;
  undefined1 *puStack_7c;
  undefined1 *puStack_78;
  undefined4 local_6c;
  undefined1 local_68 [16];
  uint auStack_58 [16];
  uint local_18;
  uint local_14;
  uint3 *local_10;
  byte *local_c;
  uint local_8;

  puStack_78 = &stack0xfffffffc;
  local_6c = 0;
  puStack_7c = &LAB_005460da;
  uStack_80 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_80;
  iVar4 = 0;
  puVar7 = auStack_58 + 1;
  local_c = param_1;
  do {
    *puVar7 = 0xffffffff;
    iVar4 = iVar4 + 1;
    puVar7 = puVar7 + 2;
  } while (iVar4 != 8);
  uVar9 = 0;
  uVar5 = FUN_005449dc(*(undefined4 *)(param_4 + -4),4);
  if (-1 < (int)((uVar5 & 0xffff) - 1)) {
    local_14 = 0;
    local_18 = uVar5 & 0xffff;
    do {
      if ((local_14 & 0x1f) == 0) {
        uVar5 = FUN_005449dc(*(undefined4 *)(param_4 + -4),4);
        iVar4 = MulDiv(local_14,100,uVar5 & 0xffff);
        uVar10 = 0;
        FUN_00438c38(0,0,0,local_68,0);
        puVar8 = local_68;
        FUN_0040b75c(&PTR_DAT_0053b438,&local_6c);
        FUN_00405d08(*(undefined4 *)(*(int *)(param_4 + -4) + 4),*(undefined4 *)(param_4 + -4),1,
                     local_6c,puVar8,uVar10,iVar4);
      }
      local_10 = (uint3 *)(**(code **)**(undefined4 **)(param_4 + -8))
                                    (*(undefined4 **)(param_4 + -8),local_14);
      uVar6 = FUN_005449dc(*(undefined4 *)(param_4 + -4),3);
      uVar6 = uVar6 & 0xffff;
      uVar5 = uVar9;
      if (-1 < (int)(uVar6 - 1)) {
        do {
          local_8 = (uint)*local_10;
          uVar9 = uVar5;
          do {
            if (auStack_58[uVar9 * 2 + 1] == 0xffffffff) break;
            if (auStack_58[uVar9 * 2] == local_8) {
              *local_c = (byte)auStack_58[uVar9 * 2 + 1];
              goto LAB_00546084;
            }
            if (uVar9 == 0) {
              uVar9 = 7;
            }
            else {
              uVar9 = uVar9 - 1;
            }
          } while (uVar5 != uVar9);
          bVar3 = FUN_00540ff4(*(undefined4 *)(*(int *)(param_4 + -4) + 0x20),local_8);
          *local_c = bVar3;
          uVar9 = uVar5 + 1 & 7;
          auStack_58[uVar9 * 2] = local_8;
          auStack_58[uVar9 * 2 + 1] = (uint)*local_c;
LAB_00546084:
          local_c = local_c + 1;
          local_10 = (uint3 *)((int)local_10 + 3);
          uVar6 = uVar6 - 1;
          uVar5 = uVar9;
        } while (uVar6 != 0);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 - 1;
    } while (local_18 != 0);
  }
  puVar2 = puStack_78;
  iVar4 = *(int *)(*(int *)(param_4 + -4) + 0x20);
  puVar8 = *(undefined1 **)(iVar4 + 4);
  for (iVar4 = *(int *)(iVar4 + 8); 0 < iVar4; iVar4 = iVar4 + -1) {
    uVar1 = *puVar8;
    *puVar8 = puVar8[2];
    puVar8[2] = uVar1;
    puVar8 = puVar8 + 3;
  }
  *in_FS_OFFSET = uStack_80;
  puStack_78 = &LAB_005460e1;
  puStack_7c = (undefined1 *)0x5460d9;
  thunk_FUN_00406e5c(&local_6c,uStack_80,puVar2);
  return;
}
