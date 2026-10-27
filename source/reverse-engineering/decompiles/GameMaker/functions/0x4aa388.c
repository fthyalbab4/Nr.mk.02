// rea decompile_all
// name: FUN_004aa388
// address: 0x4aa388
// body: available
// range: 0x4aa388-0x4aa41a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004aa388(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_1c;
  undefined1 local_18;
  int local_14;
  undefined1 local_10;

  if (*(int *)(param_1 + 0x274) != 0) {
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x274) + 0x2d0) + 8) + -1;
    if (iVar2 < param_2) {
      local_18 = 0;
      local_10 = 0;
      local_1c = param_2;
      local_14 = iVar2;
      FUN_0041c0bc(&PTR_LAB_0042ed5c,1,PTR_PTR_007818ec,1,&local_1c);
      FUN_00406618();
    }
    iVar2 = FUN_004aa28c(param_1);
    uVar1 = FUN_004aa270(param_1);
    FUN_0043b19c(*(undefined4 *)(*(int *)(param_1 + 0x274) + 0x2d0),uVar1,param_2);
    if (-1 < iVar2) {
      uVar1 = FUN_004aa28c(param_1);
      FUN_004aae04(*(undefined4 *)(param_1 + 0x274),iVar2,uVar1);
    }
  }
  return;
}
