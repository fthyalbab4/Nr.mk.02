// rea decompile_all
// name: FUN_00663d50
// address: 0x663d50
// body: available
// range: 0x663d50-0x663dff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00663d50(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;

  if (param_1[0xe7] == 0) {
    iVar2 = (**(code **)(*param_1 + 0x1cc))();
    piVar3 = (int *)(**(code **)(iVar2 + 0x2c))(iVar2,1,param_1);
    param_1[0xe7] = (int)piVar3;
    FUN_004ed948(piVar3,6);
    *(undefined1 *)(piVar3 + 0x85) = 1;
    (**(code **)(*piVar3 + 0x78))(piVar3,param_1);
    FUN_00667d0c(piVar3,2);
    FUN_0040b75c(PTR_PTR_00781b8c,piVar3 + 0x20);
    FUN_00667d24(piVar3,1);
    FUN_00667d3c(piVar3,3);
    cVar1 = FUN_0067240c(param_1[0x9e]);
    if ((cVar1 == '\0') || ((byte)(*(char *)(param_1[0x9e] + 0x14) - 3U) < 2)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    FUN_00679318(piVar3,uVar4);
    piVar3[0x83] = (int)param_1;
    piVar3[0x82] = (int)&LAB_00663934;
  }
  return;
}
