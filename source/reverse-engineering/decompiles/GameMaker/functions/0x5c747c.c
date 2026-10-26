// rea decompile_all
// name: FUN_005c747c
// address: 0x5c747c
// body: available
// range: 0x5c747c-0x5c7667 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c74a4 (push 0x5c7668 followed by fs-segment stack chaining); handler 0x5c7668 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c747c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *unaff_EBX;
  undefined4 unaff_ESI;
  int iVar4;
  int *unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined1 local_78 [16];
  int *local_68;
  int *local_64;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  int *local_40;
  int *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int *piStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  int *local_20;
  int local_10;
  int local_8;

  local_20 = (int *)&stack0xfffffffc;
  local_8 = 0xe;
  do {
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  puStack_24 = &LAB_005c7668;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  piStack_2c = (int *)0x5c74b1;
  FUN_00407eb8(0,0);
  piStack_2c = (int *)0x5c74b8;
  cVar3 = FUN_005c04d8(param_2);
  if (cVar3 == '\0') {
    piStack_2c = (int *)0x5c74d2;
    FUN_00407f0c(&local_8,param_2);
  }
  else {
    piStack_2c = (int *)0x5c74c6;
    FUN_005c0548(param_2,&local_8);
  }
  do {
    piVar2 = local_20;
    if ((_ImgDelayDescr_Module_Handle_00000000 != 0) || (param_1 == 0)) {
      *in_FS_OFFSET = uStack_28;
      local_20 = (int *)&LAB_005c766f;
      puStack_24 = (undefined1 *)0x5c75f7;
      FUN_004249e8(local_78,uStack_28,piVar2);
      puStack_24 = (undefined1 *)0x5c75ff;
      FUN_0040b140(&local_68);
      puStack_24 = (undefined1 *)0x5c7607;
      FUN_0040b140(&local_64);
      puStack_24 = (undefined1 *)0x5c761a;
      FUN_00408e44(local_60,&DAT_004012cc,2);
      puStack_24 = (undefined1 *)0x5c7622;
      FUN_0040b140(&local_40);
      puStack_24 = (undefined1 *)0x5c762a;
      FUN_0040b140(&local_3c);
      puStack_24 = (undefined1 *)0x5c7637;
      thunk_FUN_00406e80(&local_38,2);
      puStack_24 = (undefined1 *)0x5c763f;
      FUN_004249e8(&local_30);
      puStack_24 = (undefined1 *)0x5c7647;
      FUN_0040b140(&local_20);
      puStack_24 = (undefined1 *)0x5c764f;
      FUN_0040b140(&stack0xffffffe4);
      puStack_24 = (undefined1 *)0x5c7657;
      thunk_FUN_00406e5c(&stack0xffffffe8);
      puStack_24 = (undefined1 *)0x5c765f;
      FUN_0040b140(&stack0xffffffec);
      puStack_24 = (undefined1 *)0x5c7667;
      thunk_FUN_00406e5c(&local_8);
      return;
    }
    piStack_2c = (int *)0x5c74e3;
    FUN_005c5f58(param_1,&stack0xffffffec);
    piStack_2c = (int *)0x5c74eb;
    local_10 = (**(code **)(*unaff_EBX + 0xc))();
    if (-1 < local_10 + -1) {
      iVar4 = 0;
      uVar5 = true;
      do {
        piStack_2c = (int *)0x5c7504;
        FUN_005c5f58(param_1,&local_20);
        piStack_2c = local_20;
        local_30 = 0x5c7514;
        FUN_00429c6c(&local_30,iVar4,0xfc);
        piVar2 = piStack_2c;
        iVar1 = *piStack_2c;
        piStack_2c = (int *)0x5c7520;
        (**(code **)(iVar1 + 0x10))(piVar2,&local_30,&stack0xffffffe4);
        piStack_2c = (int *)0x5c752b;
        (**(code **)(*unaff_EDI + 0x48))(unaff_EDI,&stack0xffffffe8);
        piStack_2c = (int *)0x5c7538;
        FUN_00408640(unaff_ESI,L"xmlns");
        if ((bool)uVar5) {
          piStack_2c = (int *)0x5c7548;
          FUN_005c5f58(param_1,&local_40);
          piStack_2c = local_40;
          local_30 = 0x5c7558;
          FUN_00429c6c(local_50,iVar4,0xfc);
          piVar2 = piStack_2c;
          iVar1 = *piStack_2c;
          piStack_2c = (int *)0x5c7564;
          (**(code **)(iVar1 + 0x10))(piVar2,local_50,&local_3c);
          piStack_2c = (int *)0x5c756f;
          (**(code **)(*local_3c + 0x34))(local_3c,&local_38);
          piStack_2c = (int *)0x5c757a;
          FUN_005c0500(local_38,&local_34);
          piStack_2c = (int *)0x5c7585;
          FUN_00408640(local_8,local_34);
          if ((bool)uVar5) {
            piStack_2c = (int *)0x5c7591;
            FUN_005c5f58(param_1,&local_68);
            piStack_2c = local_68;
            local_30 = 0x5c75a1;
            FUN_00429c6c(local_78,iVar4,0xfc);
            piVar2 = piStack_2c;
            iVar4 = *piStack_2c;
            piStack_2c = (int *)0x5c75ad;
            (**(code **)(iVar4 + 0x10))(piVar2,local_78,&local_64);
            piStack_2c = (int *)0x5c75b8;
            (**(code **)(*local_64 + 0x3c))(local_64,local_60);
            piStack_2c = (int *)0x5c75c3;
            FUN_00429418(0,local_60);
            break;
          }
        }
        iVar4 = iVar4 + 1;
        local_10 = local_10 + -1;
        uVar5 = local_10 == 0;
      } while (!(bool)uVar5);
    }
    param_1 = *(int *)(param_1 + 0x28);
  } while( true );
}
