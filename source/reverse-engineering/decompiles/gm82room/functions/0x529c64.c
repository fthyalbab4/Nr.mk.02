// rea decompile_all
// name: FUN_00529c64
// address: 0x529c64
// body: available
// range: 0x529c64-0x529d9e inclusive
// range: 0x529da6-0x529f6c inclusive
// range: 0x529ff9-0x52a08a inclusive
// range: 0x52a0a2-0x52a0c4 inclusive
// range: 0x52a0da-0x52a0fa inclusive
// range: 0x52a13c-0x52a183 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x529c86 (push 0x52a184 followed by fs-segment stack chaining); handler 0x52a184 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x529d5e (push 0x529d9f followed by fs-segment stack chaining); handler 0x529d9f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x529edd (push 0x529ff2 followed by fs-segment stack chaining); handler 0x529ff2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x529f0e (push 0x529f6d followed by fs-segment stack chaining); handler 0x529f6d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52a041 (push 0x52a0fb followed by fs-segment stack chaining); handler 0x52a0fb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52a073 (push 0x52a08b followed by fs-segment stack chaining); handler 0x52a08b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52a0ad (push 0x52a0c5 followed by fs-segment stack chaining); handler 0x52a0c5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00529c64(int *param_1,int *param_2)

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
  puStack_44 = &LAB_0052a184;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puVar3 = &stack0xfffffffc;
  local_10 = param_2;
  local_8 = param_1;
  if (param_2 == param_1) {
LAB_0052a169:
    puStack_40 = puVar3;
    puVar3 = puStack_40;
    *in_FS_OFFSET = uStack_48;
    puStack_40 = &LAB_0052a18b;
    puStack_44 = (undefined1 *)0x52a183;
    thunk_FUN_004072fc(&local_30,2,puVar3);
    return;
  }
  if (param_2 == (int *)0x0) {
    puStack_4c = (undefined1 *)0x529ca3;
    puStack_40 = &stack0xfffffffc;
    FUN_00527f04(param_1);
    puVar3 = puStack_40;
    goto LAB_0052a169;
  }
  puStack_4c = (undefined1 *)0x529cb6;
  cVar4 = FUN_004061f8(param_2,&PTR_LAB_0051b528);
  if (cVar4 != '\0') {
    puStack_4c = (undefined1 *)0x529cc6;
    FUN_00527f04(local_8);
    piVar1 = local_10;
    puStack_4c = (undefined1 *)0x529cd0;
    cVar4 = FUN_00527f54(local_10);
    puVar3 = puStack_40;
    if (cVar4 == '\0') {
      local_8[9] = piVar1[9];
      local_8[10] = piVar1[10];
      *(short *)(local_8 + 0xb) = (short)piVar1[0xb];
      *(char *)(local_8 + 0xd) = (char)piVar1[0xd];
      puStack_4c = (undefined1 *)0x529d01;
      FUN_005280a8(local_8);
      if ((local_8[6] != 0) && (local_10[6] != 0)) {
        puStack_4c = (undefined1 *)0x529d27;
        FUN_00404514(local_10[6],local_8[6],local_8[7]);
      }
      piVar1 = local_10;
      puStack_4c = (undefined1 *)0x529d38;
      (**(code **)(*(int *)local_8[8] + 8))((int *)local_8[8],local_10[8]);
      puStack_4c = (undefined1 *)0x529d40;
      iVar5 = FUN_00524d94(piVar1[0xc]);
      piVar2 = local_10;
      if (0 < iVar5) {
        puStack_4c = (undefined1 *)0x529d50;
        local_14 = (int *)FUN_00405fac(&LAB_004319cc,1);
        puStack_50 = &LAB_00529d9f;
        uStack_54 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_54;
        piVar1 = (int *)piVar1[0xc];
        puStack_58 = (undefined1 *)0x529d6c;
        puStack_4c = &stack0xfffffffc;
        (**(code **)(*piVar1 + 0x10))(piVar1,local_14);
        puStack_58 = (undefined1 *)0x529d78;
        (**(code **)(*local_14 + 0x14))(local_14,0,0);
        puStack_58 = (undefined1 *)0x529d89;
        (**(code **)(*(int *)local_8[0xc] + 0x14))((int *)local_8[0xc],local_14,local_8);
        puVar3 = puStack_4c;
        *in_FS_OFFSET = uStack_54;
        puStack_4c = (undefined1 *)0x529da6;
        puStack_50 = (undefined1 *)0x529d9e;
        FUN_00405fdc(local_14,uStack_54,puVar3);
        return;
      }
      puStack_4c = (undefined1 *)0x529db0;
      cVar4 = FUN_0052811c(local_10);
      puVar3 = puStack_40;
      if (cVar4 != '\0') {
        puStack_4c = (undefined1 *)0x529dc0;
        FUN_00528140(local_8);
        puStack_4c = (undefined1 *)0x529dc7;
        uVar6 = FUN_00528bb8(piVar2);
        puStack_4c = (undefined1 *)0x529dd4;
        (**(code **)(*(int *)local_8[2] + 8))((int *)local_8[2],uVar6);
        puVar3 = puStack_40;
      }
    }
    goto LAB_0052a169;
  }
  puStack_4c = (undefined1 *)0x529de7;
  cVar4 = FUN_004061f8(local_10,&PTR_FUN_00458e94);
  if (cVar4 != '\0') {
    puStack_4c = (undefined1 *)0x529df7;
    FUN_00527f04(local_8);
    piVar1 = local_10;
    puStack_4c = (undefined1 *)0x529e01;
    cVar4 = (**(code **)(*local_10 + 0x20))();
    puVar3 = puStack_40;
    if (cVar4 == '\0') {
      puStack_4c = (undefined1 *)0x529e10;
      uVar6 = (**(code **)(*piVar1 + 0x30))();
      puStack_4c = (undefined1 *)0x529e1f;
      FUN_005281e0(local_8,3,uVar6);
      puStack_4c = (undefined1 *)0x529e26;
      uVar6 = (**(code **)(*piVar1 + 0x24))();
      puStack_4c = (undefined1 *)0x529e35;
      FUN_005281e0(local_8,4,uVar6);
      puStack_4c = (undefined1 *)0x529e3c;
      uVar6 = FUN_0051f0dc(piVar1);
      if (((byte)uVar6 < 4) && ((byte)uVar6 != 0)) {
        puStack_4c = (undefined1 *)0x529e7e;
        FUN_00528140(local_8);
        puStack_4c = (undefined1 *)0x529e8c;
        (**(code **)(*(int *)local_8[2] + 8))((int *)local_8[2],local_10);
      }
      else {
        iVar5 = local_8[1];
        puStack_4c = *(undefined1 **)(iVar5 + 0x40);
        puStack_50 = (undefined1 *)0x0;
        uStack_54 = 0x529e63;
        iVar5 = FUN_00523e08(local_10,*(undefined1 *)(iVar5 + 0x3e),*(undefined1 *)(iVar5 + 0x44));
        local_8[2] = iVar5;
        uStack_54 = 0x529e72;
        uVar6 = FUN_0051f0dc(iVar5);
      }
      uStack_54 = 0x529e94;
      FUN_005280a8(local_8);
      uStack_54 = 0;
      puStack_58 = (undefined1 *)0x0;
      puStack_5c = (undefined1 *)0x0;
      puStack_60 = local_28;
      puStack_64 = (undefined1 *)0x529ea9;
      FUN_00436ad0(0,0,0);
      puStack_5c = local_28;
      puStack_60 = (undefined1 *)0x529eba;
      FUN_0040b9d0(&LAB_0051ec14,&local_2c);
      puStack_60 = local_2c;
      puStack_64 = (undefined1 *)0x529ed2;
      FUN_00406268(local_8[1],local_8,0);
      puStack_68 = &LAB_00529ff2;
      uStack_6c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_6c;
      if ((2 < (byte)((char)uVar6 - 1U)) && ((char)uVar6 != '\x06')) {
        uVar6 = CONCAT31((int3)((uint)uVar6 >> 8),6);
      }
      puStack_74 = (undefined1 *)0x529f00;
      puStack_70 = (undefined1 *)uVar6;
      puStack_64 = &stack0xfffffffc;
      local_c = FUN_0051f5f4(&PTR_LAB_0051f250,1,local_8[2]);
      puStack_74 = &LAB_00529f6d;
      uStack_78 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_78;
      cVar4 = (char)uVar6;
      if (cVar4 == '\x01') {
        puStack_70 = &stack0xfffffffc;
        FUN_005295b4(local_8[6]);
      }
      else if (cVar4 == '\x02') {
        puStack_70 = &stack0xfffffffc;
        FUN_00529474(local_8[6]);
      }
      else if (cVar4 == '\x03') {
        puStack_70 = &stack0xfffffffc;
        FUN_00529310(local_8[6]);
      }
      else {
        puStack_70 = &stack0xfffffffc;
        FUN_00529704(local_8[6]);
      }
      puVar3 = puStack_70;
      *in_FS_OFFSET = uStack_78;
      puStack_70 = &LAB_00529f74;
      puStack_74 = (undefined1 *)0x529f6c;
      FUN_00405fdc(local_c,uStack_78,puVar3);
      return;
    }
    goto LAB_0052a169;
  }
  puStack_4c = (undefined1 *)0x52a007;
  cVar4 = FUN_004061f8(local_10,&PTR_FUN_00457480);
  if (cVar4 == '\0') {
    puStack_4c = (undefined1 *)0x52a14a;
    cVar4 = FUN_004061f8(local_10,&PTR_LAB_00457b10);
    if (cVar4 == '\0') {
      puStack_4c = (undefined1 *)0x52a169;
      FUN_00439c08(local_8,local_10);
      puVar3 = puStack_40;
    }
    else {
      puStack_4c = (undefined1 *)0x52a15c;
      (**(code **)(*local_8 + 8))(local_8,local_10[3]);
      puVar3 = puStack_40;
    }
    goto LAB_0052a169;
  }
  puStack_4c = (undefined1 *)0x52a017;
  FUN_00527f04(local_8);
  puStack_4c = (undefined1 *)0x52a01f;
  cVar4 = (**(code **)(*local_10 + 0x20))();
  puVar3 = puStack_40;
  if (cVar4 != '\0') goto LAB_0052a169;
  puStack_4c = (undefined1 *)0x52a033;
  local_18 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
  puStack_50 = &LAB_0052a0fb;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_58 = (undefined1 *)0x52a052;
  puStack_4c = &stack0xfffffffc;
  cVar4 = FUN_004061f8(local_10,&PTR_LAB_004597c0);
  if (cVar4 == '\0') {
    puStack_58 = (undefined1 *)0x52a064;
    cVar4 = FUN_004061f8(local_10,&PTR_FUN_00458658);
    if (cVar4 == '\0') {
      puStack_5c = &LAB_0052a0c5;
      puStack_60 = (undefined1 *)*in_FS_OFFSET;
      *in_FS_OFFSET = &puStack_60;
      puStack_64 = (undefined1 *)0x52a0bb;
      puStack_58 = &stack0xfffffffc;
      (**(code **)(*local_18 + 8))(local_18,local_10);
      *in_FS_OFFSET = puStack_60;
      goto LAB_0052a0da;
    }
  }
  puStack_5c = &LAB_0052a08b;
  puStack_60 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_60;
  puStack_64 = (undefined1 *)0x52a081;
  puStack_58 = &stack0xfffffffc;
  FUN_005298c4(local_18,local_10);
  *in_FS_OFFSET = puStack_60;
LAB_0052a0da:
  puStack_58 = (undefined1 *)0x52a0e5;
  (**(code **)(*local_8 + 8))(local_8,local_18);
  puVar3 = puStack_4c;
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &DAT_0052a102;
  puStack_50 = (undefined1 *)0x52a0fa;
  FUN_00405fdc(local_18,uStack_54,puVar3);
  return;
}
