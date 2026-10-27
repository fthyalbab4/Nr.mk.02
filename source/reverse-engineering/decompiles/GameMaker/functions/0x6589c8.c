// rea decompile_all
// name: FUN_006589c8
// address: 0x6589c8
// body: available
// range: 0x6589c8-0x658aaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006589c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;

  iVar1 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2f4));
  if (iVar1 <= *(int *)(param_1 + 0x2f0)) {
    FUN_00409be0(param_1 + 0x2f4,&DAT_00656418,1,*(int *)(param_1 + 0x2f0) + 10);
  }
  *(int *)(param_1 + 0x2f0) = *(int *)(param_1 + 0x2f0) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x2f4) + -0x18 + *(int *)(param_1 + 0x2f0) * 0x18) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0x2f4) + -0x14 + *(int *)(param_1 + 0x2f0) * 0x18) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0x2f4) + -0x10 + *(int *)(param_1 + 0x2f0) * 0x18) = param_4;
  DAT_0077f2e0 = DAT_0077f2e0 + 1;
  *(int *)(*(int *)(param_1 + 0x2f4) + -0xc + *(int *)(param_1 + 0x2f0) * 0x18) = DAT_0077f2e0;
  FUN_00407eb8(*(int *)(param_1 + 0x2f4) + -8 + *(int *)(param_1 + 0x2f0) * 0x18,0);
  *(undefined1 *)(*(int *)(param_1 + 0x2f4) + -4 + *(int *)(param_1 + 0x2f0) * 0x18) = 0;
  iVar1 = *(int *)(param_1 + 0x2f0);
  FUN_00657b48(param_1);
  return iVar1 + -1;
}
