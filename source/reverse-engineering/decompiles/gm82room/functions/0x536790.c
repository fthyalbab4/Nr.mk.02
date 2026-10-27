// rea decompile_all
// name: FUN_00536790
// address: 0x536790
// body: available
// range: 0x536790-0x5368d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5367c1 (push 0x5368da followed by fs-segment stack chaining); handler 0x5368da lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00536790(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 auStackY_1814 [1507];
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 **ppuVar8;
  undefined4 uStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined4 local_60;
  undefined4 local_5c;
  WCHAR local_58 [16];
  undefined4 local_38;
  undefined4 auStack_34 [3];
  undefined1 local_28 [4];
  undefined4 local_24;
  DWORD local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;

  bVar5 = 0;
  local_5c = 0;
  local_60 = 0;
  puStack_70 = (undefined1 *)0x5367b6;
  local_14 = param_3;
  FUN_00408ff8(&local_10,&DAT_0040f0f8);
  puStack_74 = &LAB_005368da;
  uStack_78 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_78;
  puStack_70 = &stack0xfffffffc;
  if (DAT_00684854 == (code *)0x0) {
    puStack_70 = &stack0xfffffffc;
    FUN_0041be80(&LAB_004109ac,1,PTR_LAB_006888f8);
    FUN_00406ab4();
  }
  FUN_00404f38(local_28,0x10,0);
  local_24 = FUN_00407fb8(param_1);
  local_38 = 0;
  auStack_34[(uint)bVar5 * -2] = (&DAT_005368ec)[(uint)bVar5 * -2];
  auStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       (&DAT_005368f0)[(uint)bVar5 * -2 + (uint)bVar5 * -2];
  (auStack_34 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (&DAT_005368f0 + (uint)bVar5 * -2 + (uint)bVar5 * -2)[(uint)bVar5 * -2 + 1];
  local_10 = &local_38;
  FUN_0040b268(&local_c);
  local_8 = 0;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + -4) >> 1;
  }
  if (uVar1 == 0) {
    uVar4 = 0x15;
  }
  else {
    local_18 = 0x20;
    BVar2 = GetComputerNameW(local_58,&local_18);
    if (BVar2 != 0) {
      FUN_0040840c(&local_5c,param_1);
      uVar4 = local_5c;
      FUN_004083a4(&local_60,local_58,0x10);
      iVar3 = FUN_00415a90(local_60,uVar4);
      if (iVar3 == 0) {
        uVar4 = 0x15;
        goto LAB_00536885;
      }
    }
    uVar4 = 0x10;
  }
LAB_00536885:
  ppuVar8 = &local_10;
  uVar7 = 1;
  puVar6 = local_28;
  (*DAT_00684854)();
  FUN_005365fc();
  FUN_005365fc(local_8);
  FUN_0040b280(local_14,local_c);
  *in_FS_OFFSET = param_2;
  thunk_FUN_004072fc(&local_60,2,uVar4,&LAB_005368e1,puVar6,uVar7,ppuVar8);
  FUN_004090d0(&local_10,&DAT_0040f0f8);
  return;
}
