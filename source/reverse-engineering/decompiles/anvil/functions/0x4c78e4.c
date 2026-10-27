// rea decompile_all
// name: FUN_004c78e4
// address: 0x4c78e4
// body: available
// range: 0x4c78e4-0x4c7942 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c78e4(int param_1)

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
    iVar2 = FUN_004c786c(iVar1);
    iVar3 = FUN_004c7380(iVar1);
    if (iVar2 < iVar3) {
LAB_004c7918:
      FUN_004c754c(param_1);
      FUN_004c7c28(*(undefined4 *)(param_1 + 0x1c),param_1,extraout_ECX,&LAB_004c97fc,
                   *(undefined4 *)(param_1 + 0x1c));
    }
    else {
      iVar2 = FUN_004c786c(iVar1);
      iVar3 = FUN_004c73c8(param_1);
      if (iVar3 < iVar2) goto LAB_004c7918;
    }
    FUN_004c78e4(iVar1);
    iVar1 = *(int *)(iVar1 + 0xc);
  } while( true );
}
