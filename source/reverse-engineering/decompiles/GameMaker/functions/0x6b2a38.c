// rea decompile_all
// name: FUN_006b2a38
// address: 0x6b2a38
// body: available
// range: 0x6b2a38-0x6b2ce2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b2a58 (push 0x6b2ce3 followed by fs-segment stack chaining); handler 0x6b2ce3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b2a38(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *in_FS_OFFSET;
  undefined1 **ppuVar7;
  undefined4 ****ppppuVar8;
  undefined4 ***local_30;
  undefined4 ***local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined4 **local_20;
  int iVar9;
  int iVar10;
  int local_10;
  int local_c;
  undefined4 local_8;

  local_20 = (undefined4 **)&stack0xfffffffc;
  local_10 = 5;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_006b2ce3;
  local_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  local_2c = (undefined4 ***)0x6b2a62;
  cVar2 = FUN_006b288c(param_1);
  if (cVar2 != '\0') {
    iVar3 = *(int *)(param_1 + 0x2ec);
    iVar10 = *(int *)(param_1 + 0x2fc);
    iVar9 = iVar3;
    if (iVar10 < iVar3) {
      iVar6 = *(int *)(param_1 + 0x300);
      iVar5 = *(int *)(param_1 + 0x2f0);
    }
    else if (iVar3 < iVar10) {
      iVar6 = *(int *)(param_1 + 0x2f0);
      iVar5 = *(int *)(param_1 + 0x300);
      iVar9 = iVar10;
      iVar10 = iVar3;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x2f0);
      iVar5 = *(int *)(param_1 + 0x300);
      iVar6 = iVar3;
      if (iVar5 < iVar3) {
        iVar6 = iVar5;
      }
      if (iVar5 <= iVar3) {
        iVar5 = iVar3;
      }
    }
    *(int *)(param_1 + 0x2ec) = iVar10;
    *(int *)(param_1 + 0x2f0) = iVar6;
    *(int *)(param_1 + 0x2fc) = iVar10;
    *(int *)(param_1 + 0x300) = iVar6;
    if (iVar10 == iVar9) {
      local_2c = (undefined4 ***)0x6b2aff;
      FUN_006b7d0c(param_1,iVar10,&local_8);
      local_2c = &local_20;
      local_30 = (undefined4 ***)0x6b2b12;
      FUN_004086a8(local_8,1,iVar6);
      local_30 = &local_20;
      ppuVar7 = &local_24;
      FUN_004086a8(local_8,iVar5 + 1,100000);
      FUN_004082dc(ppuVar7,local_24);
      FUN_006b7a68(param_1,iVar10,local_20);
    }
    else {
      local_2c = (undefined4 ***)0x6b2b52;
      FUN_006b7d0c(param_1,iVar10,&local_c);
      iVar3 = local_c;
      if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
        local_2c = (undefined4 ***)0x6b2b6f;
        iVar3 = FUN_00407048(&local_c,local_c);
      }
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + -4);
      }
      if (iVar4 < iVar6) {
        iVar3 = local_c;
        if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
          local_2c = (undefined4 ***)0x6b2b99;
          iVar3 = FUN_00407048(&local_c,local_c);
        }
        iVar4 = 0;
        if (iVar3 != 0) {
          iVar4 = *(int *)(iVar3 + -4);
        }
        local_2c = (undefined4 ***)0x6b2bbe;
        FUN_00407e58(CONCAT22((short)((uint)iVar4 >> 0x10),0x20),iVar6 - iVar4,&local_28);
        local_2c = (undefined4 ***)0x6b2bc9;
        FUN_004082dc(&local_c,local_28);
      }
      local_2c = (undefined4 ***)0x6b2bd6;
      FUN_006b7d0c(param_1,iVar9,&local_10);
      local_2c = &local_2c;
      local_30 = (undefined4 ***)0x6b2be9;
      FUN_004086a8(local_c,1,iVar6);
      local_30 = &local_2c;
      ppppuVar8 = &local_30;
      FUN_004086a8(local_10,iVar5 + 1,100000);
      FUN_004082dc(ppppuVar8,local_30);
      FUN_006b7a68(param_1,iVar10,local_2c);
      iVar3 = iVar10 + 1;
      if (iVar3 <= iVar9) {
        iVar6 = (iVar9 - iVar3) + 1;
        do {
          FUN_00409be0(*(int *)(param_1 + 0x2d8) + 4 + iVar3 * 0x10,&DAT_006aecd0,1,0);
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar6 = iVar9 + 1;
      iVar3 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
      if (iVar6 <= iVar3 + -1) {
        iVar3 = ((iVar3 + -1) - iVar6) + 1;
        do {
          FUN_00409084(*(int *)(param_1 + 0x2d8) + ((iVar6 - iVar9) + iVar10) * 0x10,
                       *(int *)(param_1 + 0x2d8) + iVar6 * 0x10,&DAT_006aed08);
          iVar6 = iVar6 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
      FUN_00409be0(param_1 + 0x2d8,&DAT_006aef44,1,(iVar3 - iVar9) + iVar10);
    }
  }
  puVar1 = local_28;
  *in_FS_OFFSET = (int)local_30;
  local_28 = &LAB_006b2cea;
  local_2c = (undefined4 ***)0x6b2cd5;
  thunk_FUN_00406e80(&local_30,5,puVar1);
  local_2c = (undefined4 ***)0x6b2ce2;
  thunk_FUN_00406e80(&local_10,3);
  return;
}
