// rea decompile_all
// name: FUN_006b3ff8
// address: 0x6b3ff8
// body: available
// range: 0x6b3ff8-0x6b409b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b3ff8(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  FUN_0045b3f4(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x40),*(undefined4 *)PTR_DAT_007825d8);
  FUN_0045b46c(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x40),*(undefined4 *)PTR_DAT_00782700);
  FUN_0045b498(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x40),0);
  iVar1 = FUN_0045bea4(*(undefined4 *)(param_1 + 0x270),&DAT_006b40ac);
  *(int *)(param_1 + 0x2e0) = iVar1 + 1;
  uVar2 = FUN_0045bec4(*(undefined4 *)(param_1 + 0x270),&DAT_006b40ac);
  *(undefined4 *)(param_1 + 0x2dc) = uVar2;
  *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x4c) / *(int *)(param_1 + 0x2e0);
  *(int *)(param_1 + 0x2e8) = *(int *)(param_1 + 0x48) / *(int *)(param_1 + 0x2dc);
  if (*PTR_DAT_007823a4 != '\0') {
    *(int *)(param_1 + 0x2e8) = *(int *)(param_1 + 0x2e8) + -5;
  }
  return;
}
