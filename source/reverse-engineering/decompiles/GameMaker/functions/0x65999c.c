// rea decompile_all
// name: FUN_0065999c
// address: 0x65999c
// body: available
// range: 0x65999c-0x659bbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6599d3 (push 0x659bc0 followed by fs-segment stack chaining); handler 0x659bc0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065999c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int iVar5;
  int *in_FS_OFFSET;
  undefined1 local_d8 [16];
  undefined1 local_c8 [8];
  undefined4 local_c0;
  undefined1 local_b0 [28];
  int local_94;
  undefined1 local_88 [8];
  undefined4 local_80;
  undefined1 local_70 [8];
  undefined4 local_68;
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  int iStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  undefined1 *local_24;
  undefined1 *local_20;

  iVar4 = 0x1a;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  LOCK();
  UNLOCK();
  local_24 = (undefined1 *)0x0;
  local_20 = (undefined1 *)0x6599c8;
  FUN_00408d1c(&stack0xffffffe4,&DAT_00656108);
  local_24 = &LAB_00659bc0;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  local_30 = (double)CONCAT44(&LAB_00659bc0,param_5);
  local_38 = (double)CONCAT44(param_4,0x6599ed);
  local_20 = &stack0xfffffffc;
  FUN_00659768(param_1,&stack0xfffffffc,0);
  local_30 = (double)CONCAT44(0x6599f6,(undefined4)local_30);
  FUN_00658d14(param_1,0);
  local_30 = (double)CONCAT44(0x659a01,(undefined4)local_30);
  FUN_00659210(param_1,0,0);
  iVar4 = 0;
  local_30 = (double)CONCAT44(0x659a0f,(undefined4)local_30);
  FUN_006575dc(param_1,0,local_70);
  local_30 = (double)CONCAT44(0x659a17,(undefined4)local_30);
  local_28 = FUN_0062cd94(local_68);
  iVar5 = 0;
  do {
    while( true ) {
      while( true ) {
        if ((*(int *)(param_1 + 0x2f0) <= iVar4) && (*(int *)(param_1 + 0x2f8) <= iVar5)) {
          local_30 = (double)CONCAT44(local_24,param_5);
          local_38 = (double)CONCAT44(param_4,0x659b7d);
          FUN_00659768(param_1,local_20,1);
          puVar1 = local_20;
          *in_FS_OFFSET = local_28;
          local_20 = &LAB_00659bc7;
          local_24 = (undefined1 *)0x659b9b;
          FUN_00408df4(local_c8,&DAT_00656108,puVar1);
          local_24 = (undefined1 *)0x659bb1;
          FUN_00408e44(local_88,&DAT_00656108,2);
          local_24 = (undefined1 *)0x659bbf;
          FUN_00408df4(&stack0xffffffe4,&DAT_00656108);
          return;
        }
        if ((*(int *)(param_1 + 0x2f0) <= iVar4) || (local_28 != 0)) break;
        iVar4 = iVar4 + 1;
        local_30 = (double)CONCAT44(0x659a3f,(undefined4)local_30);
        FUN_006575dc(param_1,iVar4,local_88);
        local_30 = (double)CONCAT44(0x659a47,(undefined4)local_30);
        local_28 = FUN_0062cd94(local_80);
      }
      if (iVar5 != *(int *)(param_1 + 0x2f8)) break;
LAB_00659a7c:
      local_30 = (double)CONCAT44(0x659a88,(undefined4)local_30);
      FUN_006575dc(param_1,iVar4,&stack0xffffffe4);
      local_30 = (double)CONCAT44(0x659a93,(undefined4)local_30);
      iVar2 = FUN_006f5b30(*(undefined4 *)(local_28 + 4));
      local_30 = (double)CONCAT44(iVar2,(undefined4)local_30);
      if (iVar2 != 0) {
        local_30 = (double)CONCAT44(unaff_ESI,-(int)local_24);
        local_38 = (double)CONCAT44(-param_5,param_4);
        iStack_3c = 0x659abd;
        FUN_005b3504(unaff_ESI,local_20,unaff_EDI);
      }
      iVar4 = iVar4 + 1;
      local_30 = (double)CONCAT44(0x659acd,(undefined4)local_30);
      FUN_006575dc(param_1,iVar4,local_c8);
      local_30 = (double)CONCAT44(0x659ad8,(undefined4)local_30);
      local_28 = FUN_0062cd94(local_c0);
    }
    if (iVar4 < *(int *)(param_1 + 0x2f0)) {
      local_30 = (double)CONCAT44(0x659a6e,(undefined4)local_30);
      FUN_00657698(param_1,iVar5,local_b0);
      if (local_94 < *(int *)(local_28 + 0xc)) goto LAB_00659a7c;
    }
    local_30 = (double)CONCAT44(0x659ae9,(undefined4)local_30);
    FUN_00657698(param_1,iVar5,&local_58);
    local_30 = (double)CONCAT44(0x659af1,(undefined4)local_30);
    uVar3 = FUN_0064e048(local_50);
    iVar2 = local_48;
    local_30 = (double)(ulonglong)uVar3;
    if (uVar3 != 0) {
      local_30 = (double)local_58;
      local_38 = (double)local_54;
      iStack_3c = -param_5;
      local_40 = local_40 + local_48;
      local_44 = local_d8;
      local_48 = 0x659b33;
      FUN_0040c114(local_4c,iVar2,local_44 + local_4c);
      local_40 = local_d8;
      local_44 = (undefined1 *)param_4;
      local_48 = 0x659b4d;
      FUN_0062dd24((undefined4)local_30,local_20,-(int)local_24);
    }
    iVar5 = iVar5 + 1;
  } while( true );
}
