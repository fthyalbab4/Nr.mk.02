// rea decompile_all
// name: FUN_006684b8
// address: 0x6684b8
// body: available
// range: 0x6684b8-0x66850d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006684b8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  iVar2 = FUN_00409a20(*(undefined4 *)(param_1 + 0x2fc));
  uVar3 = FUN_006767e4(param_1);
  iVar4 = FUN_00672cc0(uVar3,iVar2);
  iVar4 = *(int *)(*(int *)(iVar4 + 0x44) + 0x4c);
  iVar1 = *(int *)(*(int *)(param_1 + 0x2fc) + iVar2 * 4);
  while( true ) {
    iVar5 = FUN_004edfcc(param_1);
    if (iVar5 <= (iVar4 + iVar1) - *(int *)(*(int *)(param_1 + 0x2fc) + iVar2 * 4)) break;
    iVar2 = iVar2 + -1;
  }
  FUN_006686cc(param_1,iVar2 + 1);
  return;
}
