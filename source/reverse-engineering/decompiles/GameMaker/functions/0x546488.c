// rea decompile_all
// name: FUN_00546488
// address: 0x546488
// body: available
// range: 0x546488-0x5465c2 inclusive
// range: 0x5465ca-0x546790 inclusive
// range: 0x54681d-0x5468ae inclusive
// range: 0x5468c6-0x5468e8 inclusive
// range: 0x5468fe-0x54691e inclusive
// range: 0x546960-0x5469a7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5464aa (push 0x5469a8 followed by fs-segment stack chaining); handler 0x5469a8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x546582 (push 0x5465c3 followed by fs-segment stack chaining); handler 0x5465c3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x546701 (push 0x546816 followed by fs-segment stack chaining); handler 0x546816 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x546732 (push 0x546791 followed by fs-segment stack chaining); handler 0x546791 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x546865 (push 0x54691f followed by fs-segment stack chaining); handler 0x54691f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x546897 (push 0x5468af followed by fs-segment stack chaining); handler 0x5468af lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5468d1 (push 0x5468e9 followed by fs-segment stack chaining); handler 0x5468e9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00546488(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined1 local_28 [16];
  int *local_18;
  int *local_14;
  int *local_10;
  undefined4 local_c;
  int *local_8;

  puStack_40 = &stack0xfffffffc;
  local_30 = 0;
  local_2c = (undefined1 *)0x0;
  puStack_44 = &LAB_005469a8;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puVar3 = &stack0xfffffffc;
  local_10 = param_2;
  local_8 = param_1;
  if (param_2 == param_1) {
LAB_0054698d:
    puStack_40 = puVar3;
    puVar3 = puStack_40;
    *in_FS_OFFSET = uStack_48;
    puStack_40 = &LAB_005469af;
    puStack_44 = (undefined1 *)0x5469a7;
    thunk_FUN_00406e80(&local_30,2,puVar3);
    return;
  }
  if (param_2 == (int *)0x0) {
    puStack_4c = (undefined1 *)0x5464c7;
    puStack_40 = &stack0xfffffffc;
    FUN_00544728(param_1);
    puVar3 = puStack_40;
    goto LAB_0054698d;
  }
  puStack_4c = (undefined1 *)0x5464da;
  cVar4 = FUN_00405c98(param_2,&PTR_LAB_00537d4c);
  if (cVar4 != '\0') {
    puStack_4c = (undefined1 *)0x5464ea;
    FUN_00544728(local_8);
    piVar1 = local_10;
    puStack_4c = (undefined1 *)0x5464f4;
    cVar4 = FUN_00544778(local_10);
    puVar3 = puStack_40;
    if (cVar4 == '\0') {
      local_8[9] = piVar1[9];
      local_8[10] = piVar1[10];
      *(short *)(local_8 + 0xb) = (short)piVar1[0xb];
      *(char *)(local_8 + 0xd) = (char)piVar1[0xd];
      puStack_4c = (undefined1 *)0x546525;
      FUN_005448cc(local_8);
      if ((local_8[6] != 0) && (local_10[6] != 0)) {
        puStack_4c = (undefined1 *)0x54654b;
        FUN_0040450c(local_10[6],local_8[6],local_8[7]);
      }
      piVar1 = local_10;
      puStack_4c = (undefined1 *)0x54655c;
      (**(code **)(*(int *)local_8[8] + 8))((int *)local_8[8],local_10[8]);
      puStack_4c = (undefined1 *)0x546564;
      iVar5 = FUN_005415b8(piVar1[0xc]);
      piVar2 = local_10;
      if (0 < iVar5) {
        puStack_4c = (undefined1 *)0x546574;
        local_14 = (int *)FUN_00405a4c(&LAB_00433630,1);
        puStack_50 = &LAB_005465c3;
        uStack_54 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_54;
        piVar1 = (int *)piVar1[0xc];
        puStack_58 = (undefined1 *)0x546590;
        puStack_4c = &stack0xfffffffc;
        (**(code **)(*piVar1 + 0x10))(piVar1,local_14);
        puStack_58 = (undefined1 *)0x54659c;
        (**(code **)(*local_14 + 0x14))(local_14,0,0);
        puStack_58 = (undefined1 *)0x5465ad;
        (**(code **)(*(int *)local_8[0xc] + 0x14))((int *)local_8[0xc],local_14,local_8);
        puVar3 = puStack_4c;
        *in_FS_OFFSET = uStack_54;
        puStack_4c = (undefined1 *)0x5465ca;
        puStack_50 = (undefined1 *)0x5465c2;
        FUN_00405a7c(local_14,uStack_54,puVar3);
        return;
      }
      puStack_4c = (undefined1 *)0x5465d4;
      cVar4 = FUN_00544940(local_10);
      puVar3 = puStack_40;
      if (cVar4 != '\0') {
        puStack_4c = (undefined1 *)0x5465e4;
        FUN_00544964(local_8);
        puStack_4c = (undefined1 *)0x5465eb;
        uVar6 = FUN_005453dc(piVar2);
        puStack_4c = (undefined1 *)0x5465f8;
        (**(code **)(*(int *)local_8[2] + 8))((int *)local_8[2],uVar6);
        puVar3 = puStack_40;
      }
    }
    goto LAB_0054698d;
  }
  puStack_4c = (undefined1 *)0x54660b;
  cVar4 = FUN_00405c98(local_10,&PTR_FUN_004587d4);
  if (cVar4 != '\0') {
    puStack_4c = (undefined1 *)0x54661b;
    FUN_00544728(local_8);
    piVar1 = local_10;
    puStack_4c = (undefined1 *)0x546625;
    cVar4 = (**(code **)(*local_10 + 0x20))();
    puVar3 = puStack_40;
    if (cVar4 == '\0') {
      puStack_4c = (undefined1 *)0x546634;
      uVar6 = (**(code **)(*piVar1 + 0x30))();
      puStack_4c = (undefined1 *)0x546643;
      FUN_00544a04(local_8,3,uVar6);
      puStack_4c = (undefined1 *)0x54664a;
      uVar6 = (**(code **)(*piVar1 + 0x24))();
      puStack_4c = (undefined1 *)0x546659;
      FUN_00544a04(local_8,4,uVar6);
      puStack_4c = (undefined1 *)0x546660;
      uVar6 = FUN_0053b900(piVar1);
      if (((byte)uVar6 < 4) && ((byte)uVar6 != 0)) {
        puStack_4c = (undefined1 *)0x5466a2;
        FUN_00544964(local_8);
        puStack_4c = (undefined1 *)0x5466b0;
        (**(code **)(*(int *)local_8[2] + 8))((int *)local_8[2],local_10);
      }
      else {
        iVar5 = local_8[1];
        puStack_4c = *(undefined1 **)(iVar5 + 0x40);
        puStack_50 = (undefined1 *)0x0;
        uStack_54 = 0x546687;
        iVar5 = FUN_0054062c(local_10,*(undefined1 *)(iVar5 + 0x3e),*(undefined1 *)(iVar5 + 0x44));
        local_8[2] = iVar5;
        uStack_54 = 0x546696;
        uVar6 = FUN_0053b900(iVar5);
      }
      uStack_54 = 0x5466b8;
      FUN_005448cc(local_8);
      uStack_54 = 0;
      puStack_58 = (undefined1 *)0x0;
      puStack_5c = (undefined1 *)0x0;
      puStack_60 = local_28;
      puStack_64 = (undefined1 *)0x5466cd;
      FUN_00438c38(0,0,0);
      puStack_5c = local_28;
      puStack_60 = (undefined1 *)0x5466de;
      FUN_0040b75c(&PTR_DAT_0053b438,&local_2c);
      puStack_60 = local_2c;
      puStack_64 = (undefined1 *)0x5466f6;
      FUN_00405d08(local_8[1],local_8,0);
      puStack_68 = &LAB_00546816;
      uStack_6c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_6c;
      if ((2 < (byte)((char)uVar6 - 1U)) && ((char)uVar6 != '\x06')) {
        uVar6 = CONCAT31((int3)((uint)uVar6 >> 8),6);
      }
      puStack_74 = (undefined1 *)0x546724;
      puStack_70 = (undefined1 *)uVar6;
      puStack_64 = &stack0xfffffffc;
      local_c = FUN_0053be18(&PTR_LAB_0053ba74,1,local_8[2]);
      puStack_74 = &LAB_00546791;
      uStack_78 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_78;
      cVar4 = (char)uVar6;
      if (cVar4 == '\x01') {
        puStack_70 = &stack0xfffffffc;
        FUN_00545dd8(local_8[6]);
      }
      else if (cVar4 == '\x02') {
        puStack_70 = &stack0xfffffffc;
        FUN_00545c98(local_8[6]);
      }
      else if (cVar4 == '\x03') {
        puStack_70 = &stack0xfffffffc;
        FUN_00545b34(local_8[6]);
      }
      else {
        puStack_70 = &stack0xfffffffc;
        FUN_00545f28(local_8[6]);
      }
      puVar3 = puStack_70;
      *in_FS_OFFSET = uStack_78;
      puStack_70 = &LAB_00546798;
      puStack_74 = (undefined1 *)0x546790;
      FUN_00405a7c(local_c,uStack_78,puVar3);
      return;
    }
    goto LAB_0054698d;
  }
  puStack_4c = (undefined1 *)0x54682b;
  cVar4 = FUN_00405c98(local_10,&PTR_FUN_00456dc0);
  if (cVar4 == '\0') {
    puStack_4c = (undefined1 *)0x54696e;
    cVar4 = FUN_00405c98(local_10,&PTR_LAB_00457450);
    if (cVar4 == '\0') {
      puStack_4c = (undefined1 *)0x54698d;
      FUN_0043c550(local_8,local_10);
      puVar3 = puStack_40;
    }
    else {
      puStack_4c = (undefined1 *)0x546980;
      (**(code **)(*local_8 + 8))(local_8,local_10[3]);
      puVar3 = puStack_40;
    }
    goto LAB_0054698d;
  }
  puStack_4c = (undefined1 *)0x54683b;
  FUN_00544728(local_8);
  puStack_4c = (undefined1 *)0x546843;
  cVar4 = (**(code **)(*local_10 + 0x20))();
  puVar3 = puStack_40;
  if (cVar4 != '\0') goto LAB_0054698d;
  puStack_4c = (undefined1 *)0x546857;
  local_18 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
  puStack_50 = &LAB_0054691f;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_58 = (undefined1 *)0x546876;
  puStack_4c = &stack0xfffffffc;
  cVar4 = FUN_00405c98(local_10,&PTR_LAB_00459100);
  if (cVar4 == '\0') {
    puStack_58 = (undefined1 *)0x546888;
    cVar4 = FUN_00405c98(local_10,&PTR_FUN_00457f98);
    if (cVar4 == '\0') {
      puStack_5c = &LAB_005468e9;
      puStack_60 = (undefined1 *)*in_FS_OFFSET;
      *in_FS_OFFSET = &puStack_60;
      puStack_64 = (undefined1 *)0x5468df;
      puStack_58 = &stack0xfffffffc;
      (**(code **)(*local_18 + 8))(local_18,local_10);
      *in_FS_OFFSET = puStack_60;
      goto LAB_005468fe;
    }
  }
  puStack_5c = &LAB_005468af;
  puStack_60 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_60;
  puStack_64 = (undefined1 *)0x5468a5;
  puStack_58 = &stack0xfffffffc;
  FUN_005460e8(local_18,local_10);
  *in_FS_OFFSET = puStack_60;
LAB_005468fe:
  puStack_58 = (undefined1 *)0x546909;
  (**(code **)(*local_8 + 8))(local_8,local_18);
  puVar3 = puStack_4c;
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &DAT_00546926;
  puStack_50 = (undefined1 *)0x54691e;
  FUN_00405a7c(local_18,uStack_54,puVar3);
  return;
}
