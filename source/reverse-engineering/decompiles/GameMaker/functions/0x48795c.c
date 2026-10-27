// rea decompile_all
// name: FUN_0048795c
// address: 0x48795c
// body: available
// range: 0x48795c-0x4879c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048795c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;

  uVar1 = FUN_00487f44(param_1);
  piVar2 = (int *)FUN_00488080(param_1);
  iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,uVar1);
  uVar1 = FUN_00407f44(*(undefined4 *)(iVar3 + 8));
  FUN_004176cc(param_2,uVar1);
  uVar1 = FUN_00407f44(*(undefined4 *)(iVar3 + 4));
  FUN_004176cc(param_3,uVar1);
  uVar1 = FUN_00407f44(*(undefined4 *)(iVar3 + 0xc));
  FUN_004176cc(param_5,uVar1);
  *param_4 = *(undefined4 *)(param_1 + 0x2c);
  return;
}
