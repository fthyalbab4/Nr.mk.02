// rea decompile_all
// name: FUN_006b2eb8
// address: 0x6b2eb8
// body: available
// range: 0x6b2eb8-0x6b30dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b2ee0 (push 0x6b30dd followed by fs-segment stack chaining); handler 0x6b30dd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b2eb8(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined1 **local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int iVar6;
  undefined4 local_c;
  int local_8;

  local_20 = &stack0xfffffffc;
  local_8 = 8;
  do {
    local_c = 0;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  local_24 = &LAB_006b30dd;
  local_28 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  *(int *)(param_1 + 0x2f0) = param_4;
  local_2c = 0x6b2efc;
  FUN_006b2a1c(param_1);
  local_2c = 0x6b2f03;
  iVar4 = (**(code **)(*param_2 + 0x14))();
  if (iVar4 != 0) {
    local_2c = 0x6b2f17;
    (**(code **)(*param_2 + 0xc))(param_2,0,&stack0xffffffe4);
    local_30 = &local_20;
    local_34 = (undefined4 *)0x6b2f2c;
    local_2c = unaff_EDI;
    FUN_006b7d0c(param_1,0,&local_24);
    local_34 = (undefined4 *)0x6b2f3c;
    FUN_004086a8(local_24,1,param_4);
    ppuVar2 = local_30;
    local_30 = (undefined1 **)0x6b2f48;
    FUN_0040839c(&local_8,local_20,ppuVar2);
    local_30 = (undefined1 **)0x6b2f4f;
    iVar4 = (**(code **)(*param_2 + 0x14))();
    local_30 = (undefined1 **)0x6b2f5c;
    (**(code **)(*param_2 + 0xc))(param_2,iVar4 + -1,&local_28);
    local_30 = (undefined1 **)local_28;
    local_34 = &local_2c;
    local_38 = (undefined1 *)0x6b2f71;
    FUN_006b7d0c(param_1,0,&local_30);
    local_38 = (undefined1 *)0x6b2f82;
    FUN_004086a8(local_30,param_4 + 1,100000);
    puVar1 = local_34;
    local_34 = (undefined4 *)0x6b2f8e;
    FUN_0040839c(&local_c,puVar1,local_2c);
    local_34 = (undefined4 *)0x6b2f95;
    iVar4 = (**(code **)(*param_2 + 0x14))();
    if (iVar4 == 1) {
      iVar4 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        local_28 = (undefined4 *)0x6b2fb5;
        iVar4 = FUN_00407048(&local_8,local_8);
      }
      uVar5 = 0;
      if (iVar4 != 0) {
        uVar5 = *(undefined4 *)(iVar4 + -4);
      }
      *(undefined4 *)(param_1 + 0x300) = uVar5;
      *(undefined4 *)(param_1 + 0x2fc) = 0;
      local_28 = &local_38;
      local_2c = 0x6b2fde;
      FUN_006b7d0c(param_1,0,&local_3c);
      local_2c = 0x6b2fef;
      FUN_004086a8(local_3c,param_4 + 1,100000);
      local_2c = 0x6b2ffd;
      FUN_0040839c(&local_34,local_8,local_38);
      local_2c = 0x6b300a;
      FUN_006b7a68(param_1,0,local_34);
    }
    else {
      local_28 = (undefined4 *)0x6b3016;
      iVar4 = (**(code **)(*param_2 + 0x14))();
      local_28 = (undefined4 *)0x6b3023;
      (**(code **)(*param_2 + 0xc))(param_2,iVar4 + -1,&local_40);
      local_44 = local_40;
      uVar5 = 0;
      if (local_40 != 0) {
        uVar5 = *(undefined4 *)(local_40 + -4);
      }
      *(undefined4 *)(param_1 + 0x300) = uVar5;
      local_28 = (undefined4 *)0x6b3042;
      iVar4 = (**(code **)(*param_2 + 0x14))();
      *(int *)(param_1 + 0x2fc) = iVar4 + -1;
      local_28 = (undefined4 *)0x6b3059;
      FUN_006b7a68(param_1,0,local_8);
      local_28 = (undefined4 *)0x6b3060;
      iVar4 = (**(code **)(*param_2 + 0x14))();
      iVar4 = iVar4 + -2;
      if (0 < iVar4) {
        iVar6 = 1;
        do {
          local_28 = (undefined4 *)0x6b307e;
          (**(code **)(*param_2 + 0xc))(param_2,iVar6,&local_48);
          local_28 = (undefined4 *)0x6b308e;
          FUN_006b7c40(param_1,iVar6,local_48);
          iVar6 = iVar6 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_28 = (undefined1 **)0x6b309d;
      iVar4 = (**(code **)(*param_2 + 0x14))();
      local_2c = 0x6b30ad;
      FUN_006b7c40(param_1,iVar4 + -1,local_c);
    }
  }
  puVar3 = local_20;
  *in_FS_OFFSET = (int)local_28;
  local_20 = &LAB_006b30e4;
  local_24 = (undefined1 *)0x6b30c2;
  thunk_FUN_00406e5c(&local_48,local_28,puVar3);
  local_24 = (undefined1 *)0x6b30cf;
  thunk_FUN_00406e80(&local_40,10);
  local_24 = (undefined1 *)0x6b30dc;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
