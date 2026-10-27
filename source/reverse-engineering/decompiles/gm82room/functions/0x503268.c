// rea decompile_all
// name: FUN_00503268
// address: 0x503268
// body: available
// range: 0x503268-0x5032b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00503268(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;

  iVar2 = (**(code **)(*param_1 + 0xec))();
  if (((-1 < iVar2) && (iVar3 = (**(code **)(*(int *)param_1[0xa0] + 0x14))(), iVar3 != 0)) &&
     (cVar1 = FUN_0047cf00(param_1,iVar2), cVar1 != '\0')) {
    (**(code **)(*(int *)param_1[0xa0] + 0xc))((int *)param_1[0xa0],iVar2,param_2);
    return;
  }
  FUN_00408194(param_2,0);
  return;
}
