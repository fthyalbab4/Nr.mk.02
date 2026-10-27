// rea decompile_all
// name: FUN_0046ada4
// address: 0x46ada4
// body: available
// range: 0x46ada4-0x46aee2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0046ada4(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  if ((((param_1 == 0) || (param_2 == 0)) || (*(int *)(param_2 + 0x1c) == 0)) ||
     ((*(int *)(param_2 + 0x20) == 0 || (*(int *)(param_2 + 0x24) == 0)))) {
    uVar3 = 0xfffffffe;
  }
  else {
    iVar5 = *(int *)(param_2 + 0x1c);
    iVar4 = (**(code **)(param_2 + 0x20))(*(undefined4 *)(param_2 + 0x28),1,0x2530);
    if (iVar4 == 0) {
      uVar3 = 0xfffffffc;
    }
    else {
      iVar7 = 0;
      if ((*(int *)(iVar5 + 0x34) != 0) &&
         (iVar7 = (**(code **)(param_2 + 0x20))
                            (*(undefined4 *)(param_2 + 0x28),
                             1 << ((byte)*(undefined4 *)(iVar5 + 0x24) & 0x1f),1), iVar7 == 0)) {
        (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),iVar4);
        return 0xfffffffc;
      }
      FUN_00466a10();
      FUN_00466a10();
      uVar1 = iVar5 + 0x530;
      uVar2 = *(uint *)(iVar5 + 0x4c);
      if ((uVar1 <= uVar2) && (uVar2 <= iVar5 + 0x252cU)) {
        iVar6 = uVar2 - uVar1;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 3;
        }
        *(int *)(iVar4 + 0x4c) = (iVar6 >> 2) * 4 + iVar4 + 0x530;
        iVar6 = *(int *)(iVar5 + 0x50) - uVar1;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 3;
        }
        *(int *)(iVar4 + 0x50) = (iVar6 >> 2) * 4 + iVar4 + 0x530;
      }
      iVar5 = *(int *)(iVar5 + 0x6c) - uVar1;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 3;
      }
      *(int *)(iVar4 + 0x6c) = (iVar5 >> 2) * 4 + iVar4 + 0x530;
      if (iVar7 != 0) {
        FUN_00466a10();
      }
      *(int *)(iVar4 + 0x34) = iVar7;
      *(int *)(param_1 + 0x1c) = iVar4;
      uVar3 = 0;
    }
  }
  return uVar3;
}
