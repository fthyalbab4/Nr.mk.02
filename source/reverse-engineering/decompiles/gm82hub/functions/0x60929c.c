// rea decompile_all
// name: FUN_0060929c
// address: 0x60929c
// body: available
// range: 0x60929c-0x609331 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060929c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  uVar1 = FUN_00571ea8();
  FUN_00409dfc(param_1 + 0x80,&DAT_006081c4,1,uVar1);
  uVar1 = FUN_00571ea8();
  FUN_00409dfc(param_1 + 0x84,&DAT_006081f4,1,uVar1);
  iVar2 = FUN_00571ea8();
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x84) + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = FUN_00571ea8();
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      FUN_00409dfc(*(int *)(param_1 + 0x80) + iVar3 * 4,&DAT_00608194,1,0);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}
