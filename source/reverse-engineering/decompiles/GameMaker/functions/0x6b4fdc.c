// rea decompile_all
// name: FUN_006b4fdc
// address: 0x6b4fdc
// body: available
// range: 0x6b4fdc-0x6b52f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b500f (push 0x6b52f3 followed by fs-segment stack chaining); handler 0x6b52f3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006b4fdc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined2 extraout_var;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *in_FS_OFFSET;
  float10 fVar9;
  undefined4 uVar10;
  int iStack_88;
  int iStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined4 local_60;
  undefined1 local_5c;
  int local_58;
  undefined1 local_54;
  int local_50;
  undefined1 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  double local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;

  local_48 = 0;
  local_40 = 0;
  local_44 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_70 = (undefined1 *)0x6b5004;
  local_14 = param_1;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_74 = &LAB_006b52f3;
  iStack_78 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_78;
  puStack_70 = &stack0xfffffffc;
  FUN_00488540();
  FUN_00487870();
  iVar1 = FUN_00488540();
  FUN_00407eb8(iVar1 + 0x18,L"Game Maker Code");
  FUN_00488540();
  iVar1 = FUN_00487c20();
  FUN_0045b3f4(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)PTR_DAT_007825d8);
  FUN_00488540();
  iVar1 = FUN_00487c20();
  FUN_0045b46c(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)PTR_DAT_00782700);
  FUN_00488540();
  iVar1 = FUN_00487c20();
  FUN_0045b498(*(undefined4 *)(iVar1 + 0x40),0);
  FUN_00488540();
  uVar2 = FUN_00487c20();
  local_3c = FUN_0045bea4(uVar2,&DAT_006b5340);
  fVar9 = _DAT_006b5344 * (float10)local_3c;
  local_18 = FUN_00404878();
  FUN_00488540();
  uVar2 = FUN_00487c20();
  iVar3 = FUN_0045bec4(uVar2,&DAT_006b5340);
  FUN_00488540();
  iVar1 = FUN_00487f28();
  local_20 = iVar1 / 0x14;
  FUN_00488540(local_20,iVar1 % 0x14);
  iVar1 = FUN_00487f0c();
  local_24 = (iVar1 - local_20) / local_18 + -2;
  iVar1 = FUN_00409a18(*(undefined4 *)(local_14 + 0x2d8),(iVar1 - local_20) % local_18);
  local_28 = (iVar1 + -1) / local_24 + 1;
  FUN_004199b0(local_28,(iVar1 + -1) % local_24);
  local_34 = (double)fVar9;
  FUN_0041a670(&local_c,L"ddddd tt");
  iVar1 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar1 = FUN_00407048(&local_8,local_8);
  }
  iVar8 = 0;
  if (iVar1 != 0) {
    iVar8 = *(int *)(iVar1 + -4);
  }
  iVar1 = local_c;
  if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
    iVar1 = FUN_00407048(&local_c,local_c);
  }
  iVar6 = 0;
  if (iVar1 != 0) {
    iVar6 = *(int *)(iVar1 + -4);
  }
  FUN_00488540();
  iVar1 = FUN_00487f28();
  uVar4 = (((iVar1 - local_20) / iVar3 - iVar8) - iVar6) - 0xe;
  iVar1 = (int)uVar4 >> 1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + (uint)((uVar4 & 1) != 0);
  }
  FUN_00407e58(CONCAT22((short)((uint)iVar1 >> 0x10),0x20),iVar1,&local_40,local_8);
  uVar2 = local_40;
  FUN_00407e58(CONCAT22(extraout_var,0x20),iVar1,&local_44,local_c);
  iStack_88 = local_44;
  FUN_00408480(&local_10,4);
  if (0 < local_28) {
    local_38 = local_28;
    local_2c = 1;
    do {
      iVar1 = local_20;
      local_1c = local_20;
      FUN_00488540();
      iVar3 = FUN_00487c20();
      FUN_0045b0d0(*(undefined4 *)(iVar3 + 0x40),0);
      FUN_00488540();
      iVar3 = FUN_00487c20();
      FUN_0045b498(*(undefined4 *)(iVar3 + 0x40),0);
      local_60 = local_10;
      local_5c = 0x11;
      local_58 = local_2c;
      local_54 = 0;
      local_50 = local_28;
      local_4c = 0;
      FUN_00417d4c(L"%sPage %d of %d",&local_60,2,&local_48);
      uVar10 = local_48;
      FUN_00488540();
      piVar5 = (int *)FUN_00487c20();
      (**(code **)(*piVar5 + 0x88))(piVar5,local_1c,iVar1,uVar10);
      iVar1 = iVar1 + local_18 * 2;
      iVar8 = (local_2c + -1) * local_24;
      iVar6 = FUN_00409a18(*(undefined4 *)(local_14 + 0x2d8));
      iVar7 = local_2c * local_24 + -1;
      iVar3 = iVar6 + -1;
      if (iVar7 <= iVar6 + -1) {
        iVar3 = iVar7;
      }
      if (iVar8 <= iVar3) {
        iVar3 = (iVar3 - iVar8) + 1;
        do {
          iStack_88 = iVar8;
          FUN_006b4bc4(local_14,local_1c,iVar1);
          iVar1 = iVar1 + local_18;
          iVar3 = iVar3 + -1;
          iVar8 = iStack_88 + 1;
        } while (iVar3 != 0);
      }
      if (local_2c != local_28) {
        FUN_00488540();
        FUN_0048792c();
      }
      local_2c = local_2c + 1;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  FUN_00488540();
  FUN_004878f8();
  *in_FS_OFFSET = iStack_88;
  thunk_FUN_00406e80(&local_48,3,uVar2,&LAB_006b52fa);
  thunk_FUN_00406e80(&local_10,3);
  return;
}
