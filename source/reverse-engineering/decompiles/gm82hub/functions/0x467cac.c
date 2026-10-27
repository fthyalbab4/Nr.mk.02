// rea decompile_all
// name: FUN_00467cac
// address: 0x467cac
// body: available
// range: 0x467cac-0x467e40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00467cac(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;

  if (((param_2 == 0) || (param_1 == 0)) || (*(int *)(param_2 + 0x1c) == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x1c);
    FUN_00466a40();
    piVar3 = (int *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x16c0);
    if (piVar3 == (int *)0x0) {
      uVar2 = 0xfffffffc;
    }
    else {
      *(int **)(param_1 + 0x1c) = piVar3;
      FUN_00466a40();
      *piVar3 = param_1;
      iVar4 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar3[0xb],2);
      piVar3[0xe] = iVar4;
      iVar4 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar3[0xb],2);
      piVar3[0x10] = iVar4;
      iVar4 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar3[0x13],2);
      piVar3[0x11] = iVar4;
      iVar4 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar3[0x5a7],4);
      piVar3[2] = iVar4;
      if (((piVar3[0xe] == 0) || (piVar3[0x10] == 0)) || ((piVar3[0x11] == 0 || (piVar3[2] == 0))))
      {
        FUN_00467bf8(param_1);
        uVar2 = 0xfffffffc;
      }
      else {
        FUN_00466a40();
        FUN_00466a40();
        FUN_00466a40();
        FUN_00466a40();
        piVar3[4] = (*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 8)) + piVar3[2];
        piVar3[0x5a9] = iVar4 + (piVar3[0x5a7] & 0xfffffffeU);
        piVar3[0x5a6] = piVar3[0x5a7] * 3 + piVar3[2];
        piVar3[0x2c6] = (int)(piVar3 + 0x25);
        piVar3[0x2c9] = (int)(piVar3 + 0x262);
        piVar3[0x2cc] = (int)(piVar3 + 0x29f);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
