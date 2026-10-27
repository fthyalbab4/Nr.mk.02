// rea decompile_all
// name: FUN_00661bcc
// address: 0x661bcc
// body: available
// range: 0x661bcc-0x661c64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00661bcc(int param_1)

{
  int iVar1;
  int *piVar2;

  piVar2 = (int *)0x0;
  iVar1 = FUN_00660100(*(undefined4 *)(*(int *)(param_1 + 0x33c) + 900));
  if (*(int *)(iVar1 + 0x36c) != 0) {
    iVar1 = FUN_00660100(*(undefined4 *)(*(int *)(param_1 + 0x33c) + 900));
    piVar2 = *(int **)(iVar1 + 0x36c);
    iVar1 = piVar2[0xe7];
    piVar2[0xe7] = 0;
    FUN_00405a7c(iVar1);
    *(undefined1 *)(piVar2 + 0xc6) = 0;
    *(undefined1 *)((int)piVar2 + 0x319) = 0;
    (**(code **)(*piVar2 + 0x98))(piVar2,0,0,0x32,0x96);
  }
  if (piVar2 == (int *)0x0) {
    iVar1 = FUN_00405d08(param_1);
    piVar2 = (int *)(**(code **)(iVar1 + 0x2c))(iVar1,1,param_1);
  }
  FUN_006601ac(*(undefined4 *)(param_1 + 900),piVar2);
  return piVar2;
}
