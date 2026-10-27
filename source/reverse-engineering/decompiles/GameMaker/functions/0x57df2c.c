// rea decompile_all
// name: FUN_0057df2c
// address: 0x57df2c
// body: available
// range: 0x57df2c-0x57dfca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0057df2c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iStack_1c;
  int *piStack_18;
  byte *pbStack_14;

  piVar1 = (int *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  iVar5 = param_2 * 0x200 + -0x200;
  iStack_1c = 0;
  pbStack_14 = &DAT_0077c1b4;
  piStack_18 = piVar1;
  do {
    iVar7 = 0;
    pbVar4 = pbStack_14;
    piVar6 = piStack_18;
    do {
      iVar3 = (uint)*pbVar4 * -2 + 0xff;
      iVar2 = iVar3 * 0xff;
      if (iVar2 < 0) {
        iVar2 = -((iVar3 * -0xff) / iVar5);
      }
      else {
        iVar2 = iVar2 / iVar5;
      }
      *piVar6 = iVar2;
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 1;
      pbVar4 = pbVar4 + 1;
    } while (iVar7 < 0x10);
    iStack_1c = iStack_1c + 1;
    pbStack_14 = pbStack_14 + 0x10;
    piStack_18 = piStack_18 + 0x10;
  } while (iStack_1c < 0x10);
  return piVar1;
}
