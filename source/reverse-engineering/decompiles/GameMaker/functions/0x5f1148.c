// rea decompile_all
// name: FUN_005f1148
// address: 0x5f1148
// body: available
// range: 0x5f1148-0x5f12dc inclusive
// range: 0x5f12e4-0x5f1301 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f116a (push 0x5f1302 followed by fs-segment stack chaining); handler 0x5f1302 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f128d (push 0x5f12dd followed by fs-segment stack chaining); handler 0x5f12dd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f1148(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  int *in_FS_OFFSET;
  int iStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  int *piStack_50;
  int iStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 local_34;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  int local_10;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined4 local_8;

  puStack_44 = &stack0xfffffffc;
  local_34 = 0;
  local_8 = 0;
  puStack_48 = &LAB_005f1302;
  iStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_4c;
  bVar4 = (byte)param_3;
  if (*PTR_DAT_0078252c == '\0') {
    if (bVar4 == 0) {
      piStack_50 = (int *)0x5f1196;
      puStack_44 = &stack0xfffffffc;
      FUN_0040810c(&local_8,param_2,0);
      piStack_50 = (int *)0x5f119e;
      piStack_50 = (int *)FUN_00407670(local_8);
      puStack_54 = (undefined1 *)0x5f11a8;
      iVar2 = (**(code **)PTR_DAT_00781df4)();
      if (iVar2 == 0) {
        iStack_4c = 0x5f11b5;
        FUN_005f44b4(param_1);
      }
      puVar1 = (undefined1 *)**(undefined4 **)(iVar2 + 0xc);
      local_c = *puVar1;
      local_b = puVar1[1];
      local_a = puVar1[2];
      local_9 = puVar1[3];
      iStack_4c = param_4;
      piStack_50 = (int *)0x5f11e5;
      FUN_005ee144(param_1,&local_c,0);
    }
    else if (bVar4 == 1) {
      piStack_50 = (int *)0x5f11f7;
      puStack_44 = &stack0xfffffffc;
      FUN_0040b75c(PTR_PTR_007824a8,&local_34);
      piStack_50 = (int *)0x5f1206;
      FUN_005df5ec(&PTR_LAB_005ee834,1,local_34);
      piStack_50 = (int *)0x5f120b;
      FUN_00406618();
    }
    else {
      piStack_50 = (int *)0x5f1217;
      puStack_44 = &stack0xfffffffc;
      FUN_005f3db8(param_1);
    }
    puVar1 = puStack_44;
    *in_FS_OFFSET = iStack_4c;
    puStack_44 = &LAB_005f1309;
    puStack_48 = (undefined1 *)0x5f12f9;
    thunk_FUN_00406e5c(&local_34,iStack_4c,puVar1);
    puStack_48 = (undefined1 *)0x5f1301;
    FUN_00406e5c(&local_8);
    return;
  }
  puVar1 = &stack0xfffffffc;
  if (1 < bVar4) {
    piStack_50 = (int *)0x5f1229;
    FUN_005f3db8(param_1);
    puVar1 = puStack_44;
  }
  puStack_44 = puVar1;
  piStack_50 = (int *)0x5f1236;
  FUN_0040ea34(local_30,0x20);
  local_2c = *(undefined4 *)(PTR_DAT_007821e0 + (param_3 & 0xff) * 4);
  local_28 = 1;
  local_10 = 0;
  piStack_50 = &local_10;
  puStack_54 = local_30;
  uStack_58 = 0;
  uStack_5c = 0x5f1262;
  uStack_5c = FUN_00407f44(param_2);
  puStack_60 = (undefined1 *)0x5f126c;
  iVar2 = (**(code **)PTR_DAT_00782518)();
  if (iVar2 != 0) {
    puStack_60 = (undefined1 *)0x5f1279;
    uVar3 = FUN_005ece50(iVar2);
    puStack_60 = (undefined1 *)0x5f1282;
    (**(code **)(*param_1 + 0x4c))(param_1,uVar3);
  }
  puStack_64 = &LAB_005f12dd;
  iStack_68 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_68;
  if (bVar4 == 0) {
    puStack_60 = &stack0xfffffffc;
    FUN_005ee144(param_1,*(int *)(local_10 + 0x18) + 4,param_3);
  }
  else {
    puStack_60 = &stack0xfffffffc;
    FUN_005ee144(param_1,*(int *)(local_10 + 0x18) + 8,param_3);
  }
  puVar1 = puStack_64;
  *in_FS_OFFSET = param_4;
  puStack_64 = (undefined1 *)0x5f12e4;
  iStack_68 = local_10;
  (**(code **)PTR_DAT_00781eb4)(*(code **)PTR_DAT_00781eb4,param_4,puVar1);
  return;
}
