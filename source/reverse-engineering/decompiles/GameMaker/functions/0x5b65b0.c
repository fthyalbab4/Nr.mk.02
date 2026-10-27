// rea decompile_all
// name: FUN_005b65b0
// address: 0x5b65b0
// body: available
// range: 0x5b65b0-0x5b66f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b65e1 (push 0x5b66fa followed by fs-segment stack chaining); handler 0x5b66fa lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b65b0(int param_1,undefined4 param_2,undefined4 param_3)

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
  puStack_70 = (undefined1 *)0x5b65d6;
  local_14 = param_3;
  FUN_00408d1c(&local_10,&DAT_0040f004);
  puStack_74 = &LAB_005b66fa;
  uStack_78 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_78;
  puStack_70 = &stack0xfffffffc;
  if (DAT_0077d460 == (code *)0x0) {
    puStack_70 = &stack0xfffffffc;
    FUN_0041bfec(&PTR_LAB_00410b4c,1,PTR_PTR_00781640);
    FUN_00406618();
  }
  FUN_00404f08(local_28,0x10,0);
  local_24 = FUN_00407c60(param_1);
  local_38 = 0;
  auStack_34[(uint)bVar5 * -2] = (&DAT_005b670c)[(uint)bVar5 * -2];
  auStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       (&DAT_005b6710)[(uint)bVar5 * -2 + (uint)bVar5 * -2];
  (auStack_34 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (&DAT_005b6710 + (uint)bVar5 * -2 + (uint)bVar5 * -2)[(uint)bVar5 * -2 + 1];
  local_10 = &local_38;
  FUN_0040b140(&local_c);
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
      FUN_00408130(&local_5c,param_1);
      uVar4 = local_5c;
      FUN_004080c8(&local_60,local_58,0x10);
      iVar3 = FUN_00415c5c(local_60,uVar4);
      if (iVar3 == 0) {
        uVar4 = 0x15;
        goto LAB_005b66a5;
      }
    }
    uVar4 = 0x10;
  }
LAB_005b66a5:
  ppuVar8 = &local_10;
  uVar7 = 1;
  puVar6 = local_28;
  (*DAT_0077d460)();
  FUN_005b641c();
  FUN_005b641c(local_8);
  FUN_0040b158(local_14,local_c);
  *in_FS_OFFSET = param_2;
  thunk_FUN_00406e80(&local_60,2,uVar4,&LAB_005b6701,puVar6,uVar7,ppuVar8);
  FUN_00408df4(&local_10,&DAT_0040f004);
  return;
}
