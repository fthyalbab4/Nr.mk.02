// rea decompile_all
// name: FUN_005ff0c0
// address: 0x5ff0c0
// body: available
// range: 0x5ff0c0-0x5ff2ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ff0e6 (push 0x5ff2ff followed by fs-segment stack chaining); handler 0x5ff2ff lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ff1d6 (push 0x5ff2cf followed by fs-segment stack chaining); handler 0x5ff2cf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005ff0f5) */

void FUN_005ff0c0(int *param_1,undefined4 *param_2,char param_3,uint param_4,int param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  uint uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  int *local_c;
  undefined4 local_8;

  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  local_18 = 0;
  local_8 = 0;
  puStack_30 = &LAB_005ff2ff;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_c = param_1;
  if ((param_5 == 0) || (-1 < param_5)) {
    puVar1 = &stack0xfffffffc;
    if ((param_5 == 0) && (puVar1 = &stack0xfffffffc, param_4 == 0)) {
      iStack_38 = 0x5ff140;
      param_4 = (**(code **)*param_2)();
      iStack_38 = 0;
      uStack_3c = 0;
      puStack_40 = (undefined1 *)0x5ff151;
      FUN_0043f254(param_2);
      param_5 = extraout_EDX_02;
      puVar1 = puStack_2c;
    }
  }
  else {
    iStack_38 = 0x5ff100;
    puStack_2c = &stack0xfffffffc;
    local_14 = FUN_0043f234(param_2);
    iStack_38 = 0x5ff10c;
    local_10 = extraout_EDX;
    uVar2 = (**(code **)*param_2)();
    param_4 = uVar2 - local_14;
    param_5 = (extraout_EDX_00 - local_10) - (uint)(uVar2 < local_14);
    if (SBORROW4(extraout_EDX_00,local_10) !=
        SBORROW4(extraout_EDX_00 - local_10,(uint)(uVar2 < local_14))) {
      iStack_38 = 0x5ff119;
      param_4 = FUN_00405944();
      param_5 = extraout_EDX_01;
    }
    iStack_38 = local_10;
    uStack_3c = local_14;
    puStack_40 = (undefined1 *)0x5ff12c;
    FUN_0043f254(param_2);
    puVar1 = puStack_2c;
  }
  puStack_2c = puVar1;
  if (param_5 == 0) {
    if (param_4 < 0x80000000) goto LAB_005ff18a;
  }
  else if (param_5 < 1) goto LAB_005ff18a;
  if ((char)local_c[0x24] == '\0') {
    iStack_38 = 0x5ff17d;
    FUN_0040b75c(PTR_PTR_00781cac,&local_18);
    iStack_38 = 0x5ff18a;
    FUN_005df624(&PTR_LAB_005fbb4c,local_18);
  }
LAB_005ff18a:
  if (param_3 != '\0') {
    if ((char)local_c[0x24] == '\0') {
      iStack_38 = 0x5ff1bb;
      FUN_005fe01c(local_c,param_4,1);
    }
    else {
      iStack_38 = param_5;
      uStack_3c = param_4;
      puStack_40 = (undefined1 *)0x5ff1aa;
      FUN_005fe090(local_c,1);
    }
  }
  iStack_38 = param_5;
  uStack_3c = param_4;
  puStack_40 = (undefined1 *)0x5ff1cb;
  (**(code **)(*local_c + 0x38))(local_c,1);
  puStack_44 = &LAB_005ff2cf;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_40 = &stack0xfffffffc;
  do {
    if (param_5 == 0) {
      if (param_4 == 0) goto LAB_005ff2a9;
    }
    else if (param_5 < 1) {
LAB_005ff2a9:
      *in_FS_OFFSET = uStack_48;
      puStack_40 = &LAB_005ff2d6;
      puStack_44 = (undefined1 *)0x5ff2c0;
      (**(code **)(*local_c + 0x40))(local_c,1);
      puStack_44 = (undefined1 *)0x5ff2ce;
      FUN_00409ce0(&local_8,&DAT_004108f8);
      return;
    }
    FUN_00409be0(&local_8,&DAT_004108f8,1,local_c[0x32]);
    iVar3 = FUN_005e188c();
    if (iVar3 >> 0x1f != extraout_EDX_03) {
      iVar3 = thunk_FUN_00404478();
    }
    uVar2 = FUN_005df820(&LAB_005df694,param_2,&local_8,0,iVar3);
    if (uVar2 == 0) {
      FUN_0040b75c(PTR_PTR_007819c4,&local_1c);
      FUN_005df5ec(&PTR_LAB_005fa9ac,1,local_1c);
      FUN_00406618();
    }
    FUN_00409be0(&local_8,&DAT_004108f8,1,uVar2);
    (**(code **)(*local_c + 0x80))(local_c,local_8,0xffffffff,0);
    bVar4 = param_4 < uVar2;
    param_4 = param_4 - uVar2;
    param_5 = (param_5 - ((int)uVar2 >> 0x1f)) - (uint)bVar4;
  } while( true );
}
