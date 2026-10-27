// rea decompile_all
// name: FUN_004fa9f8
// address: 0x4fa9f8
// body: available
// range: 0x4fa9f8-0x4faa56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fa9f8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;

  iVar1 = *(int *)(param_1 + 8);
  do {
    if (iVar1 == 0) {
      return;
    }
    iVar2 = FUN_004fa980(iVar1);
    iVar3 = FUN_004fa494(iVar1);
    if (iVar2 < iVar3) {
LAB_004faa2c:
      FUN_004fa660(param_1);
      FUN_004fad3c(*(undefined4 *)(param_1 + 0x1c),param_1,extraout_ECX,&LAB_004fc910,
                   *(undefined4 *)(param_1 + 0x1c));
    }
    else {
      iVar2 = FUN_004fa980(iVar1);
      iVar3 = FUN_004fa4dc(param_1);
      if (iVar3 < iVar2) goto LAB_004faa2c;
    }
    FUN_004fa9f8(iVar1);
    iVar1 = *(int *)(iVar1 + 0xc);
  } while( true );
}
