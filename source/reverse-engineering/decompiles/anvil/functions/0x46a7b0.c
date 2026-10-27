// rea decompile_all
// name: FUN_0046a7b0
// address: 0x46a7b0
// body: available
// range: 0x46a7b0-0x46a86a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0046a7b0(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;

  if ((param_1 == 0) || (*(int *)(param_1 + 0x1c) == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x1c);
    if ((piVar1[2] == 0) || (*piVar1 == 10)) {
      if (*piVar1 == 10) {
        uVar2 = FUN_00466a54(0,0,0);
        iVar3 = FUN_00466a54(uVar2,param_2,param_3);
        if (iVar3 != piVar1[6]) {
          return 0xfffffffd;
        }
      }
      iVar3 = FUN_004691a0(param_1,*(undefined4 *)(param_1 + 0x10));
      if (iVar3 == 0) {
        if ((uint)piVar1[10] < param_3) {
          FUN_00466a40();
          piVar1[0xb] = piVar1[10];
        }
        else {
          FUN_00466a40();
          piVar1[0xb] = param_3;
        }
        piVar1[3] = 1;
        uVar2 = 0;
      }
      else {
        *piVar1 = 0x1c;
        uVar2 = 0xfffffffc;
      }
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}
