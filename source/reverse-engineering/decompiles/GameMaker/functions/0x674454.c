// rea decompile_all
// name: FUN_00674454
// address: 0x674454
// body: available
// range: 0x674454-0x6744c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00674454(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 in_ZF;
  bool bVar3;

  FUN_00408640(*(undefined4 *)(param_1 + 0x20),param_2);
  if (!(bool)in_ZF) {
    FUN_00407eb8(param_1 + 0x20,param_2);
    iVar1 = FUN_00673fd0(param_1);
    bVar3 = iVar1 == 0;
    if ((bVar3) &&
       ((FUN_00408640(param_2,&DAT_006744d8), bVar3 || (FUN_00408640(param_2,&DAT_006744e8), bVar3))
       )) {
      cVar2 = '\x01';
    }
    else {
      cVar2 = '\0';
    }
    *(char *)(param_1 + 0x54) = cVar2;
    if (cVar2 != '\0') {
      FUN_00674340(param_1,0);
      FUN_006746ec(param_1,0);
    }
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_004ee6d8(*(int *)(param_1 + 0x44),param_2);
    }
    return;
  }
  return;
}
