// rea decompile_all
// name: FUN_005a2750
// address: 0x5a2750
// body: available
// range: 0x5a2750-0x5a27e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a2750(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;

  param_2 = param_2 << (0x20U - (char)param_3 & 0x1f);
  iVar2 = 0;
  for (; 0 < param_3; param_3 = param_3 + -1) {
    bVar3 = param_2 < 0;
    param_2 = param_2 << 1;
    iVar1 = *(int *)(*param_1 + iVar2 * 0xc + (uint)bVar3 * 4);
    if (iVar1 == 0) {
      iVar1 = FUN_00409a18(*param_1);
      *(int *)(*param_1 + iVar2 * 0xc + (uint)bVar3 * 4) = iVar1;
      iVar2 = FUN_00409a18(*param_1);
      FUN_00409be0(param_1,&DAT_005a067c,1,iVar2 + 1);
    }
    iVar2 = iVar1;
  }
  *(undefined4 *)(*param_1 + 8 + iVar2 * 0xc) = param_4;
  return;
}
