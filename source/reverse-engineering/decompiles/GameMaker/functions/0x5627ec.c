// rea decompile_all
// name: FUN_005627ec
// address: 0x5627ec
// body: available
// range: 0x5627ec-0x562897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005627ec(int param_1)

{
  int iVar1;
  int iVar2;
  float10 in_ST0;
  float10 in_ST1;

  FUN_00407eb8(param_1 + 4,0);
  iVar1 = FUN_004047b0(10000);
  *(int *)(param_1 + 8) = iVar1 + 10000;
  FUN_00407eb8(param_1 + 0xc,0);
  *(undefined4 *)(param_1 + 0x10) = 100;
  FUN_00419950();
  FUN_0041997c();
  *(double *)(param_1 + 0x18) = (double)(in_ST1 + (float10)(double)in_ST0);
  FUN_00407eb8(param_1 + 0x20,0);
  FUN_00407eb8(param_1 + 0x24,0);
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x2c);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      FUN_00405a7c(*(undefined4 *)(*(int *)(param_1 + 0x30) + iVar2 * 4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00409be0(param_1 + 0x30,&DAT_005621bc,1,0);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_0050752c(*(undefined4 *)(param_1 + 0x38));
  return;
}
