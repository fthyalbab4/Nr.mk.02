// rea decompile_all
// name: FUN_005c7690
// address: 0x5c7690
// body: available
// range: 0x5c7690-0x5c783f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c76bb (push 0x5c7840 followed by fs-segment stack chaining); handler 0x5c7840 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c7690(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  int *unaff_EBX;
  int iVar6;
  int *unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar7;
  undefined1 local_64 [16];
  int *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [12];
  undefined4 uStack_38;
  int *local_34;
  int *local_30;
  undefined4 local_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int *local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = (int *)&DAT_0000000b;
  do {
    local_8 = (int *)((int)local_8 + -1);
  } while (local_8 != (int *)0x0);
  LOCK();
  UNLOCK();
  puStack_28 = &LAB_005c7840;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  local_30 = (int *)0x5c76c6;
  FUN_0040b140(0);
  local_30 = (int *)0x5c76d1;
  FUN_005c5f58(param_1,&stack0xffffffe8);
  local_30 = (int *)0x5c76d9;
  iVar5 = (**(code **)(*unaff_EBX + 0xc))();
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    do {
      local_30 = (int *)0x5c76f2;
      FUN_005c5f58(param_1,&stack0xffffffe4);
      local_34 = (int *)0x5c7702;
      local_30 = unaff_ESI;
      FUN_00429c6c(&local_2c,iVar6,0xfc);
      piVar2 = local_30;
      iVar1 = *local_30;
      local_30 = (int *)0x5c770e;
      (**(code **)(iVar1 + 0x10))(piVar2,&local_2c,&local_8);
      local_30 = (int *)0x5c7719;
      (**(code **)(*local_8 + 0x3c))(local_8,local_44);
      uStack_38 = 0x5c7724;
      FUN_0042c1fc(local_44,&local_34);
      uStack_38 = 0x5c772f;
      FUN_00408144(&local_30,local_34);
      local_34 = local_30;
      uStack_38 = 0x5c773e;
      FUN_00408144(&local_48,param_2);
      piVar2 = local_30;
      local_30 = (int *)0x5c7747;
      cVar4 = FUN_005c0644(piVar2,local_48);
      uVar7 = cVar4 == '\0';
      if (!(bool)uVar7) {
        local_30 = (int *)0x5c7756;
        (**(code **)(*local_8 + 0x48))(local_8,&local_4c);
        local_30 = (int *)0x5c7763;
        FUN_00408640(local_4c,L"xmlns");
        if (!(bool)uVar7) {
          local_30 = (int *)0x5c7770;
          (**(code **)(*local_8 + 0x34))(local_8,&local_50);
          local_30 = (int *)0x5c777d;
          FUN_00408640(local_50,L"xmlns");
          if (!(bool)uVar7) goto LAB_005c77a8;
        }
        local_30 = (int *)0x5c778a;
        FUN_005c5f58(param_1,&local_54);
        local_30 = local_54;
        local_34 = (int *)0x5c779a;
        FUN_00429c6c(local_64,iVar6,0xfc);
        piVar2 = local_30;
        iVar5 = *local_30;
        local_30 = (int *)0x5c77a6;
        (**(code **)(iVar5 + 0x10))(piVar2,local_64,0);
        break;
      }
LAB_005c77a8:
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((_ImgDelayDescr_Module_Handle_00000000 == 0) && (*(int *)(param_1 + 0x28) != 0)) {
    local_30 = (int *)0x5c77d2;
    FUN_005c7690(*(undefined4 *)(param_1 + 0x28),param_2,0);
  }
  puVar3 = puStack_24;
  *in_FS_OFFSET = local_2c;
  puStack_24 = &LAB_005c7847;
  puStack_28 = (undefined1 *)0x5c77e7;
  FUN_004249e8(local_64,local_2c,puVar3);
  puStack_28 = (undefined1 *)0x5c77ef;
  FUN_0040b140(&local_54);
  puStack_28 = (undefined1 *)0x5c77fc;
  thunk_FUN_00406e80(&local_50,2);
  puStack_28 = (undefined1 *)0x5c7804;
  FUN_00407a78(&local_48);
  puStack_28 = (undefined1 *)0x5c780c;
  FUN_004249e8(local_44);
  puStack_28 = (undefined1 *)0x5c7814;
  thunk_FUN_00406e5c(&local_34);
  puStack_28 = (undefined1 *)0x5c781c;
  FUN_00407a78(&local_30);
  puStack_28 = (undefined1 *)0x5c7824;
  FUN_004249e8(&local_2c);
  puStack_28 = (undefined1 *)0x5c7837;
  FUN_00408e44(&stack0xffffffe4,&DAT_005c0e70,2);
  puStack_28 = (undefined1 *)0x5c783f;
  FUN_0040b140(&local_8);
  return;
}
