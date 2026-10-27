// rea decompile_all
// name: FUN_004154dc
// address: 0x4154dc
// body: available
// range: 0x4154dc-0x415552 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004154dc(ushort *param_1,undefined4 *param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;

  if (param_1 == (ushort *)0x0) {
    uVar1 = 2;
  }
  else {
    uVar1 = param_1[-5];
  }
  if (uVar1 == 2) {
    iVar3 = 0;
    if (param_1 != (ushort *)0x0) {
      iVar3 = *(int *)(param_1 + -2);
    }
    FUN_00408520(param_2,iVar3,param_3,param_3);
    if ((0 < iVar3) && (puVar2 = (ushort *)*param_2, 0 < iVar3)) {
      do {
        uVar1 = *param_1;
        if ((ushort)(uVar1 - 0x61) < 0x1a) {
          uVar1 = uVar1 ^ 0x20;
        }
        *puVar2 = uVar1;
        puVar2 = puVar2 + 1;
        param_1 = param_1 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    FUN_0041548c(param_1,param_2);
  }
  return;
}
