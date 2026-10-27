// rea decompile_all
// name: FUN_00639994
// address: 0x639994
// body: available
// range: 0x639994-0x6399e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00639994(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;

  uVar6 = *(undefined4 *)(param_6 + 0xc);
  uVar5 = *(undefined4 *)(param_6 + 8);
  uVar4 = *(undefined4 *)(param_6 + 0x24);
  uVar3 = *(undefined4 *)(param_6 + 0x20);
  uVar1 = FUN_004048b8();
  iVar2 = FUN_005b74e0(param_1,uVar1,extraout_ECX,uVar3,uVar4,uVar5,uVar6);
  *param_4 = 0;
  if (iVar2 == 0) {
    param_4[2] = 0;
    param_4[3] = 0xc0100000;
  }
  else {
    *(double *)(param_4 + 2) = (double)*(int *)(iVar2 + 4);
  }
  return;
}
