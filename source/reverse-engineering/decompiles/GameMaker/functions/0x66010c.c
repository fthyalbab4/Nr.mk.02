// rea decompile_all
// name: FUN_0066010c
// address: 0x66010c
// body: available
// range: 0x66010c-0x6601ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0066010c(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piStack_8;

  piVar2 = (int *)(**(code **)(*param_1 + 4))();
  if ((*(byte *)(param_1[2] + 0x1c) & 0x10) == 0) {
    piStack_8 = piVar2;
    if (piVar2[0x9e] != 0) {
      *(undefined4 *)(piVar2[0x9e] + 0x18) = 0;
      piVar2[0xdd] = 0;
      (**(code **)(*piVar2 + 0x140))(piVar2,0);
      iVar3 = FUN_0044dd7c(param_1);
      if ((iVar3 == 1) && (cVar1 = FUN_00405c98(param_1[2],&PTR_LAB_0065edf8), cVar1 == '\0')) {
        iVar3 = FUN_00660100(param_1);
        uVar4 = FUN_00405cbc(piVar2,&PTR_LAB_0065edf8);
        *(undefined4 *)(iVar3 + 0x36c) = uVar4;
        return piVar2;
      }
      piStack_8 = (int *)0x0;
      FUN_00405a7c(piVar2);
    }
  }
  else {
    piStack_8 = (int *)0x0;
    FUN_00405a7c(piVar2);
  }
  return piStack_8;
}
