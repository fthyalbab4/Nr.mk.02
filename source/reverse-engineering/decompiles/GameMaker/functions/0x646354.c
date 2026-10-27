// rea decompile_all
// name: FUN_00646354
// address: 0x646354
// body: available
// range: 0x646354-0x6463ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00646354(int param_1,undefined4 param_2,undefined1 param_3,int param_4,int param_5,
                 undefined2 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  *(undefined1 *)(param_1 + 0x774) = 0;
  ReleaseCapture();
  iVar2 = (param_5 + *(int *)(param_1 + 0x6f4)) * 100;
  iVar1 = *(int *)(param_1 + 0x710);
  iVar3 = iVar2 / iVar1;
  if (*PTR_DAT_00781d9c != '\0') {
    iVar3 = FUN_00404878(PTR_DAT_007828c8,iVar2 % iVar1);
    iVar3 = iVar3 * *(int *)PTR_DAT_007828c8;
  }
  iVar2 = (param_4 + *(int *)(param_1 + 0x6f8)) * 100;
  iVar4 = iVar2 / iVar1;
  if (*PTR_DAT_00781d9c != '\0') {
    iVar4 = FUN_00404878(PTR_DAT_007827a8,iVar2 % iVar1);
    iVar4 = iVar4 * *(int *)PTR_DAT_007827a8;
  }
  FUN_006440c0(param_1,param_3,param_6,iVar4,iVar3);
  return;
}
