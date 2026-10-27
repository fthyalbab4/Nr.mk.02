// rea decompile_all
// name: FUN_004931bc
// address: 0x4931bc
// body: available
// range: 0x4931bc-0x49325b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004931bc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_18;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  undefined4 local_8;

  local_8 = 0;
  iVar4 = 0;
  iVar1 = *param_1;
  local_c = FUN_00492e5c(iVar1);
  local_10 = FUN_00492e5c(0);
  if ((local_c != local_10) && (0 < iVar1)) {
    do {
      iVar3 = iVar1 + iVar4 >> 1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((iVar1 + iVar4 & 1U) != 0);
      }
      local_10 = FUN_00492e5c(iVar3);
      iVar2 = iVar3;
      if ((local_10 != local_c) && (bVar5 = iVar3 == iVar4, iVar2 = iVar1, iVar4 = iVar3, bVar5)) {
        FUN_00492e5c(iVar1);
        break;
      }
      iVar1 = iVar2;
    } while (iVar4 < iVar2);
  }
  FUN_00492c10(&local_18,local_14,param_4);
  FUN_00492e5c(local_18);
  return local_8;
}
