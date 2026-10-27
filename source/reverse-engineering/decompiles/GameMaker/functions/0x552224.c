// rea decompile_all
// name: FUN_00552224
// address: 0x552224
// body: available
// range: 0x552224-0x55231a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00552224(int param_1,undefined4 *param_2)

{
  int iVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ushort local_2c;
  int local_28;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;

  iVar1 = *(int *)(param_1 + 0x1bc);
  uVar5 = *(undefined4 *)(param_1 + 0x19c);
  if (((*(int *)(param_1 + 0x114) == 0) || (*(int *)(iVar1 + 0x28) != 0)) ||
     (iVar4 = FUN_00551ce8(param_1), iVar4 != 0)) {
    local_20 = **(undefined4 **)(param_1 + 0x18);
    local_1c = (*(undefined4 **)(param_1 + 0x18))[1];
    iVar4 = *(int *)(iVar1 + 0xc);
    iVar7 = *(int *)(iVar1 + 0x10);
    local_10 = param_1;
    for (local_28 = 0; local_28 < *(int *)(param_1 + 0x164); local_28 = local_28 + 1) {
      puVar2 = (ushort *)*param_2;
      if ((iVar7 < 1) &&
         (iVar6 = FUN_00552bf0(&local_20,iVar4,iVar7,1), iVar7 = local_14, iVar4 = local_18,
         iVar6 == 0)) {
        return 0;
      }
      iVar7 = iVar7 + -1;
      if ((iVar4 >> ((byte)iVar7 & 0x1f) & 1U) != 0) {
        local_2c = (ushort)(1 << ((byte)uVar5 & 0x1f));
        *puVar2 = *puVar2 | local_2c;
      }
      param_2 = param_2 + 1;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x18);
    *puVar3 = local_20;
    puVar3[1] = local_1c;
    *(int *)(iVar1 + 0xc) = iVar4;
    *(int *)(iVar1 + 0x10) = iVar7;
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
