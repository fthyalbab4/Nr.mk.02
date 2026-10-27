// rea decompile_all
// name: FUN_005cb240
// address: 0x5cb240
// body: available
// range: 0x5cb240-0x5cb458 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5cb264 (push 0x5cb459 followed by fs-segment stack chaining); handler 0x5cb459 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cb240(void)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  int *unaff_EBX;
  int iVar6;
  int *unaff_ESI;
  undefined4 *puVar7;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar8;
  int in_stack_00000004;
  undefined1 local_88 [16];
  int *local_78;
  int *local_74;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined1 local_5c [16];
  int *local_4c;
  int *local_48;
  undefined4 local_44;
  int *local_40;
  undefined1 local_3c [12];
  undefined4 uStack_30;
  int *local_2c;
  undefined4 local_28;
  undefined4 *puStack_24;
  undefined1 *puStack_20;
  int *local_10;
  int local_c;
  int *local_8;

  puStack_20 = &stack0xfffffffc;
  local_10 = (int *)&DAT_00000010;
  do {
    local_8 = (int *)0x0;
    local_10 = (int *)((int)local_10 + -1);
  } while (local_10 != (int *)0x0);
  puVar7 = (undefined4 *)(in_stack_00000004 + -0xc);
  puStack_24 = &DAT_005cb459;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = (int *)0x5cb274;
  FUN_00407eb8(*(undefined4 *)(in_stack_00000004 + -8),0);
  local_2c = (int *)0x5cb27e;
  FUN_005cabf8(*puVar7,&local_10);
  local_2c = (int *)0x5cb286;
  iVar5 = (**(code **)(*local_10 + 0xc))();
  if (-1 < iVar5 + -1) {
    local_c = 0;
    do {
      local_2c = (int *)0x5cb2a3;
      FUN_005cabf8(*puVar7,&stack0xffffffe8);
      uStack_30 = 0x5cb2b4;
      local_2c = unaff_ESI;
      FUN_00429c6c(&local_28,local_c,0xfc);
      piVar2 = local_2c;
      iVar6 = *local_2c;
      local_2c = (int *)0x5cb2c0;
      (**(code **)(iVar6 + 0x10))(piVar2,&local_28,&stack0xffffffec);
      local_2c = (int *)0x5cb2c8;
      cVar4 = (**(code **)(*unaff_EBX + 0x38))();
      if (cVar4 == '\n') {
        local_2c = (int *)0x5cb2da;
        FUN_005cabf8(*puVar7,&local_2c);
        uStack_30 = 0x5cb2eb;
        FUN_00429c6c(local_3c,local_c,0xfc);
        piVar2 = local_2c;
        iVar5 = *local_2c;
        local_2c = (int *)0x5cb2f7;
        (**(code **)(iVar5 + 0x10))(piVar2,local_3c,&local_8);
        local_2c = (int *)0x5cb302;
        (**(code **)(*local_8 + 0x10))(local_8,&local_40);
        local_2c = (int *)0x5cb30a;
        iVar5 = (**(code **)(*local_40 + 0xc))();
        if (-1 < iVar5 + -1) {
          iVar6 = 0;
          uVar8 = 1;
          goto LAB_005cb318;
        }
        break;
      }
      local_c = local_c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  goto LAB_005cb3c0;
  while( true ) {
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + -1;
    uVar8 = 0;
    if (iVar5 == 0) break;
LAB_005cb318:
    local_2c = (int *)0x5cb323;
    (**(code **)(*local_8 + 0x10))(local_8,&local_4c);
    local_2c = local_4c;
    uStack_30 = 0x5cb333;
    FUN_00429c6c(local_5c,iVar6,0xfc);
    piVar2 = local_2c;
    iVar1 = *local_2c;
    local_2c = (int *)0x5cb33f;
    (**(code **)(iVar1 + 0x10))(piVar2,local_5c,&local_48);
    local_2c = (int *)0x5cb34a;
    (**(code **)(*local_48 + 0x34))(local_48,&local_44);
    local_2c = (int *)0x5cb357;
    FUN_00408640(local_44,L"SYSTEM");
    if ((bool)uVar8) {
      local_2c = (int *)0x5cb364;
      (**(code **)(*local_8 + 0x10))(local_8,&local_78);
      local_2c = local_78;
      uStack_30 = 0x5cb377;
      FUN_00429c6c(local_88,iVar6,0xfc);
      piVar2 = local_2c;
      iVar5 = *local_2c;
      local_2c = (int *)0x5cb386;
      (**(code **)(iVar5 + 0x10))(piVar2,local_88,&local_74);
      local_2c = (int *)0x5cb391;
      (**(code **)(*local_74 + 0x3c))(local_74,local_70);
      local_2c = (int *)0x5cb39c;
      FUN_0042c240(local_70,&local_60);
      local_2c = (int *)0x5cb3aa;
      FUN_00408130(*(undefined4 *)(in_stack_00000004 + -8),local_60);
      break;
    }
  }
LAB_005cb3c0:
  puVar3 = puStack_20;
  *in_FS_OFFSET = local_28;
  puStack_20 = &LAB_005cb463;
  puStack_24 = (undefined4 *)0x5cb3d8;
  FUN_004249e8(local_88,local_28,puVar3);
  puStack_24 = (undefined4 *)0x5cb3e0;
  FUN_0040b140(&local_78);
  puStack_24 = (undefined4 *)0x5cb3e8;
  FUN_0040b140(&local_74);
  puStack_24 = (undefined4 *)0x5cb3f0;
  FUN_004249e8(local_70);
  puStack_24 = (undefined4 *)0x5cb3f8;
  FUN_00407a78(&local_60);
  puStack_24 = (undefined4 *)0x5cb400;
  FUN_004249e8(local_5c);
  puStack_24 = (undefined4 *)0x5cb408;
  FUN_0040b140(&local_4c);
  puStack_24 = (undefined4 *)0x5cb410;
  FUN_0040b140(&local_48);
  puStack_24 = (undefined4 *)0x5cb418;
  thunk_FUN_00406e5c(&local_44);
  puStack_24 = (undefined4 *)0x5cb420;
  FUN_0040b140(&local_40);
  puStack_24 = (undefined4 *)0x5cb428;
  FUN_004249e8(local_3c);
  puStack_24 = (undefined4 *)0x5cb430;
  FUN_0040b140(&local_2c);
  puStack_24 = (undefined4 *)0x5cb438;
  FUN_004249e8(&local_28);
  puStack_24 = (undefined4 *)0x5cb440;
  FUN_0040b140(&stack0xffffffe8);
  puStack_24 = (undefined4 *)0x5cb448;
  FUN_0040b140(&stack0xffffffec);
  puStack_24 = (undefined4 *)0x5cb450;
  FUN_0040b140(&local_10);
  puStack_24 = (undefined4 *)0x5cb458;
  FUN_0040b140(&local_8);
  return;
}
