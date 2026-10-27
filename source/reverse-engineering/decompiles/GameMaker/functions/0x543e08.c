// rea decompile_all
// name: FUN_00543e08
// address: 0x543e08
// body: available
// range: 0x543e08-0x543e9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00543e08(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  FUN_00543dec(param_1);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x6c);
  iVar2 = 1;
  do {
    if (param_2 < 1) {
LAB_00543e94:
      FUN_00543df4(param_1);
      return;
    }
    if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0x70) = 1;
      FUN_00543d04(param_1,*(undefined4 *)(param_1 + 0x6c));
      iVar1 = -1;
    }
    else {
      if (param_2 < iVar2) {
        if (param_2 == 1) {
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
          FUN_00543d04(param_1,*(undefined4 *)(param_1 + 0x6c));
        }
        else {
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
          FUN_00543d04(param_1,*(short *)(param_1 + 0x4a) + param_2 + -2);
        }
        goto LAB_00543e94;
      }
      *(int *)(param_1 + 0x70) = iVar2;
      FUN_00543d04(param_1,*(short *)(param_1 + 0x4a) + iVar2 + -2);
      iVar1 = -iVar2;
    }
    param_2 = param_2 + iVar1;
    if (*(int *)(param_1 + 0x78) == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = iVar2 + 1;
    }
  } while( true );
}
