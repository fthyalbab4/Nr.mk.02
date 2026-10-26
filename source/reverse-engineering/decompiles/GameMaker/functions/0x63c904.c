// rea decompile_all
// name: FUN_0063c904
// address: 0x63c904
// body: available
// range: 0x63c904-0x63c9c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063c904(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_18;
  undefined4 local_14;

  iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0xc);
  iVar2 = *(int *)(param_1 + 0x38);
  iVar3 = *(int *)(iVar2 + 0xc);
  iVar4 = *(int *)(iVar2 + 4);
  iVar2 = *(int *)(iVar2 + 8);
  if (-1 < iVar2 + -1) {
    iVar7 = 0;
    local_18 = iVar2;
    do {
      if (-1 < iVar4 + -1) {
        iVar6 = 0;
        local_14 = iVar4;
        do {
          if ((((*(char *)(iVar3 + 2 + (iVar7 * iVar4 + iVar6) * 4) != '\0') &&
               (iVar5 = *(int *)(param_1 + 0x4c) + iVar7, -1 < iVar5)) && (iVar5 < iVar2)) &&
             ((iVar5 = *(int *)(param_1 + 0x48) + iVar6, -1 < iVar5 && (iVar5 < iVar4)))) {
            FUN_007028b0(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x704),iVar5,
                         *(int *)(param_1 + 0x4c) + iVar7,
                         *(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x760),
                         *(undefined4 *)(iVar1 + (iVar7 * iVar4 + iVar6) * 4));
          }
          iVar6 = iVar6 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      iVar7 = iVar7 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return;
}
