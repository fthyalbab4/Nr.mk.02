// rea decompile_all
// name: FUN_005cf1c0
// address: 0x5cf1c0
// body: available
// range: 0x5cf1c0-0x5cf34f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5cf1e9 (push 0x5cf38a followed by fs-segment stack chaining); handler 0x5cf38a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5cf25c (push 0x5cf350 followed by fs-segment stack chaining); handler 0x5cf350 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cf1c0(undefined4 param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined2 extraout_var;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar8;
  undefined1 *puVar9;
  undefined4 uStack_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined4 local_c;
  undefined4 local_8;

  iVar7 = 5;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_20 = (undefined1 *)0x5cf1de;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  local_24 = &LAB_005cf38a;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = (undefined1 *)0x5cf1fd;
  local_20 = &stack0xfffffffc;
  uVar3 = FUN_004524c4(&DAT_004512d4,1,0x100);
  local_2c = (undefined1 *)0x5cf20b;
  FUN_00452568(uVar3,0x80000001);
  local_2c = (undefined1 *)0x5cf217;
  piVar4 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  local_2c = (undefined1 *)0x5cf226;
  FUN_0043e910(piVar4,CONCAT22(extraout_var,0x3a));
  local_2c = (undefined1 *)0x5cf231;
  FUN_0043e6d4(piVar4,local_8);
  iVar7 = 0;
  local_2c = (undefined1 *)0x5cf240;
  FUN_00407f0c(&local_8,L"\\Software\\Game Maker");
  bVar1 = true;
  local_2c = (undefined1 *)0x5cf24e;
  piVar5 = (int *)FUN_005d2d24(DAT_00789b88);
  local_30 = &LAB_005cf350;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_2c = &stack0xfffffffc;
  do {
    cVar2 = FUN_005d2dac(piVar5);
    if (cVar2 == '\0') {
      *in_FS_OFFSET = uStack_34;
      local_2c = &LAB_005cf357;
      if (piVar5 != (int *)0x0) {
        local_30 = (undefined1 *)0x5cf34f;
        (**(code **)(*piVar5 + -4))(piVar5,1);
      }
      return;
    }
    FUN_005d2d34(piVar5,&local_c);
    iVar6 = (**(code **)(*piVar4 + 0x14))();
    if (iVar6 <= iVar7) {
      iVar7 = 0;
    }
    (**(code **)(*piVar4 + 0xc))(piVar4,iVar7,&stack0xffffffe4,&DAT_005cf3e0,local_8);
    uStack_34 = unaff_EDI;
    FUN_00408480(&local_8,3);
    if (bVar1) {
      cVar2 = FUN_004527e4(uVar3,local_8);
      if (cVar2 == '\0') goto LAB_005cf311;
      FUN_004080e4(&local_20,local_c);
      cVar2 = FUN_00453668(uVar3,local_20);
      uVar8 = cVar2 == '\0';
      if ((bool)uVar8) goto LAB_005cf311;
      FUN_004080e4(&local_28,local_c);
      FUN_004530e0(uVar3,local_28,&local_24);
      puVar9 = local_24;
      FUN_005d14c0(DAT_00789b84,local_c,&local_30);
      FUN_004080e4(&local_2c,local_30);
      FUN_00408640(puVar9,local_2c);
      if (!(bool)uVar8) goto LAB_005cf311;
      bVar1 = true;
    }
    else {
LAB_005cf311:
      bVar1 = false;
    }
    FUN_00452538(uVar3);
    iVar7 = iVar7 + 1;
  } while( true );
}
