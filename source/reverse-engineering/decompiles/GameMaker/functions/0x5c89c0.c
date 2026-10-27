// rea decompile_all
// name: FUN_005c89c0
// address: 0x5c89c0
// body: available
// range: 0x5c89c0-0x5c8c5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c89e0 (push 0x5c8c5e followed by fs-segment stack chaining); handler 0x5c8c5e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c89c0(int param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined1 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *unaff_EBX;
  undefined4 unaff_ESI;
  int *unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 local_98 [16];
  int *local_88;
  undefined4 local_84;
  undefined1 local_80 [16];
  int *local_70;
  undefined4 local_6c;
  int *local_68;
  undefined1 local_64 [16];
  int *local_54;
  undefined4 local_50;
  int *local_4c;
  undefined1 local_48 [16];
  int *local_38;
  undefined4 local_34;
  int *local_30;
  int *local_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;

  puStack_20 = &stack0xfffffffc;
  iVar7 = 0x12;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puStack_24 = &LAB_005c8c5e;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar4 = &stack0xfffffffc;
  if (param_2 != '\0') {
    bVar2 = false;
    local_2c = (int *)0x5c89f9;
    FUN_005c6acc(param_1,&stack0xffffffec);
    local_2c = (int *)0x5c8a01;
    local_10 = (**(code **)(*unaff_EBX + 0xc))();
    if (-1 < local_10 + -1) {
      iVar7 = 0;
      do {
        local_2c = (int *)0x5c8a1a;
        FUN_005c6acc(param_1,&stack0xffffffe4);
        local_30 = (int *)0x5c8a2a;
        local_2c = unaff_EDI;
        FUN_00429c6c(&local_2c,iVar7,0xfc);
        piVar3 = local_2c;
        iVar6 = *local_2c;
        local_2c = (int *)0x5c8a36;
        (**(code **)(iVar6 + 0x10))(piVar3,&local_2c,&stack0xffffffe8);
        local_2c = (int *)0x5c8a40;
        cVar5 = FUN_005c8c80(param_1,unaff_ESI);
        if (cVar5 == '\0') {
          bVar2 = true;
          break;
        }
        local_2c = (int *)0x5c8a54;
        FUN_005c6acc(param_1,&local_38);
        local_2c = local_38;
        local_30 = (int *)0x5c8a64;
        FUN_00429c6c(local_48,iVar7,0xfc);
        piVar3 = local_2c;
        iVar6 = *local_2c;
        local_2c = (int *)0x5c8a70;
        (**(code **)(iVar6 + 0x10))(piVar3,local_48,&local_34);
        local_2c = (int *)0x5c8a80;
        FUN_0040b184(&local_30,local_34,&DAT_005c8c70);
        local_2c = (int *)0x5c8a8d;
        (**(code **)(*local_30 + 0xf0))(local_30,param_1);
        iVar7 = iVar7 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    puVar4 = puStack_20;
    if (!bVar2) goto LAB_005c8bb2;
  }
  puStack_20 = puVar4;
  local_2c = *(int **)(param_1 + 0x60);
  local_30 = (int *)0x0;
  local_34 = 0;
  local_38 = (int *)0x5c8ab7;
  iVar6 = FUN_005c4e88(&DAT_005c1f60,1,param_1);
  iVar7 = iVar6;
  if (iVar6 != 0) {
    iVar7 = iVar6 + 0x24;
  }
  local_2c = (int *)0x5c8acc;
  FUN_0040b158(param_1 + 0x68,iVar7);
  local_2c = (int *)0x5c8ad6;
  FUN_005c6acc(param_1,&local_4c);
  local_2c = (int *)0x5c8ade;
  local_10 = (**(code **)(*local_4c + 0xc))();
  if (-1 < local_10 + -1) {
    iVar7 = 0;
    do {
      local_2c = (int *)0x5c8af7;
      FUN_005c6acc(param_1,&local_54);
      local_2c = local_54;
      local_30 = (int *)0x5c8b07;
      FUN_00429c6c(local_64,iVar7,0xfc);
      piVar3 = local_2c;
      iVar1 = *local_2c;
      local_2c = (int *)0x5c8b13;
      (**(code **)(iVar1 + 0x10))(piVar3,local_64,&local_50);
      local_2c = (int *)0x5c8b1d;
      cVar5 = FUN_005c8c80(param_1,local_50);
      if (cVar5 != '\0') {
        local_2c = (int *)0x5c8b2f;
        FUN_005c6acc(param_1,&local_70);
        local_2c = local_70;
        local_30 = (int *)0x5c8b3f;
        FUN_00429c6c(local_80,iVar7,0xfc);
        piVar3 = local_2c;
        iVar1 = *local_2c;
        local_2c = (int *)0x5c8b4b;
        (**(code **)(iVar1 + 0x10))(piVar3,local_80,&local_6c);
        local_2c = (int *)0x5c8b5b;
        FUN_0040b184(&local_68,local_6c,&DAT_005c8c70);
        local_2c = (int *)0x5c8b68;
        (**(code **)(*local_68 + 0xf0))(local_68,param_1);
        local_2c = (int *)0x5c8b75;
        FUN_005c6acc(param_1,&local_88);
        local_2c = local_88;
        local_30 = (int *)0x5c8b8b;
        FUN_00429c6c(local_98,iVar7,0xfc);
        piVar3 = local_2c;
        iVar1 = *local_2c;
        local_2c = (int *)0x5c8b9a;
        (**(code **)(iVar1 + 0x10))(piVar3,local_98,&local_84);
        local_2c = (int *)0x5c8ba8;
        FUN_005c5508(iVar6,0xffffffff,local_84);
      }
      iVar7 = iVar7 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
LAB_005c8bb2:
  puVar4 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005c8c68;
  puStack_24 = (undefined1 *)0x5c8bca;
  FUN_004249e8(local_98,uStack_28,puVar4);
  puStack_24 = (undefined1 *)0x5c8bd5;
  FUN_0040b140(&local_88);
  puStack_24 = (undefined1 *)0x5c8bdd;
  FUN_0040b140(&local_84);
  puStack_24 = (undefined1 *)0x5c8be5;
  FUN_004249e8(local_80);
  puStack_24 = (undefined1 *)0x5c8bed;
  FUN_0040b140(&local_70);
  puStack_24 = (undefined1 *)0x5c8bf5;
  FUN_0040b140(&local_6c);
  puStack_24 = (undefined1 *)0x5c8bfd;
  FUN_0040b140(&local_68);
  puStack_24 = (undefined1 *)0x5c8c05;
  FUN_004249e8(local_64);
  puStack_24 = (undefined1 *)0x5c8c0d;
  FUN_0040b140(&local_54);
  puStack_24 = (undefined1 *)0x5c8c15;
  FUN_0040b140(&local_50);
  puStack_24 = (undefined1 *)0x5c8c1d;
  FUN_0040b140(&local_4c);
  puStack_24 = (undefined1 *)0x5c8c25;
  FUN_004249e8(local_48);
  puStack_24 = (undefined1 *)0x5c8c2d;
  FUN_0040b140(&local_38);
  puStack_24 = (undefined1 *)0x5c8c35;
  FUN_0040b140(&local_34);
  puStack_24 = (undefined1 *)0x5c8c3d;
  FUN_0040b140(&local_30);
  puStack_24 = (undefined1 *)0x5c8c45;
  FUN_004249e8(&local_2c);
  puStack_24 = (undefined1 *)0x5c8c4d;
  FUN_0040b140(&stack0xffffffe4);
  puStack_24 = (undefined1 *)0x5c8c55;
  FUN_0040b140(&stack0xffffffe8);
  puStack_24 = (undefined1 *)0x5c8c5d;
  FUN_0040b140(&stack0xffffffec);
  return;
}
