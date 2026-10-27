// rea decompile_all
// name: FUN_00620a68
// address: 0x620a68
// body: available
// range: 0x620a68-0x620cd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x620aa4 (push 0x620cd8 followed by fs-segment stack chaining); handler 0x620cd8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00620a68(undefined4 param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined **ppuVar11;
  undefined4 uVar12;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  char local_d;
  undefined4 local_c;
  undefined4 local_8;

  puStack_58 = &stack0xfffffffc;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_2c = 0;
  local_30 = 0;
  puStack_5c = &LAB_00620cd8;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  for (iVar4 = 0; (iVar4 < DAT_006886f0 && (*(char *)(DAT_0085b3c4 + 0x14 + iVar4 * 0x18) != '\0'));
      iVar4 = iVar4 + 1) {
  }
  puVar2 = &stack0xfffffffc;
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (iVar4 == DAT_006886f0) {
    FUN_00409dfc(&DAT_0085b3c4,&DAT_00620448,1,DAT_006886f0 + 1);
    DAT_006886f0 = DAT_006886f0 + 1;
    puVar2 = puStack_58;
  }
  puStack_58 = puVar2;
  local_18 = local_8;
  local_1c = local_c;
  local_20 = 1;
  local_28 = (uint)(local_d == '\0');
  uVar5 = (uint)(local_d != '\0');
  local_24 = 0x15;
  FUN_0041636c(iVar4,&local_30);
  FUN_00408678(&local_2c,&PTR_DAT_00620e18,local_30);
  FUN_004165b0(&local_38);
  ppuVar11 = &PTR_DAT_00620f0c;
  uVar12 = local_38;
  FUN_004165b0(&local_3c);
  uVar10 = local_3c;
  FUN_0040875c(&local_34,4);
  puVar8 = &local_24;
  puVar7 = &local_20;
  puVar6 = &local_1c;
  uVar1 = *(undefined4 *)PTR_DAT_00689570;
  uVar9 = local_28;
  uVar3 = (**(code **)PTR_DAT_00688fd0)();
  if ((uVar3 & 0x80000000) == 0) {
    local_14 = -1;
    FUN_0040b268(DAT_0085b3c4 + iVar4 * 0x18);
    FUN_004165b0(&local_44);
    FUN_004165b0(&local_48);
    FUN_0040875c(&local_40,4);
    FUN_0040b268(DAT_0085b3c4 + iVar4 * 0x18);
    uVar3 = (**(code **)PTR_DAT_006895bc)();
    if ((uVar3 & 0x80000000) == 0) {
      *(undefined1 *)(DAT_0085b3c4 + 0x14 + iVar4 * 0x18) = 1;
      *(undefined4 *)(DAT_0085b3c4 + 4 + iVar4 * 0x18) = local_8;
      *(undefined4 *)(DAT_0085b3c4 + 8 + iVar4 * 0x18) = local_c;
      *(undefined4 *)(DAT_0085b3c4 + 0xc + iVar4 * 0x18) = local_18;
      *(undefined4 *)(DAT_0085b3c4 + 0x10 + iVar4 * 0x18) = local_1c;
      local_14 = iVar4;
      FUN_00561704(&PTR_DAT_00620f8c);
    }
  }
  else {
    local_14 = -1;
  }
  *in_FS_OFFSET = uVar1;
  thunk_FUN_004072fc(&local_48,8,puVar6,&LAB_00620cdf,puVar7,uVar5,puVar8,uVar9,uVar10,ppuVar11,
                     uVar12);
  return;
}
