// rea decompile_all
// name: FUN_0057f728
// address: 0x57f728
// body: available
// range: 0x57f728-0x57f7b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057f728(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;

  iVar1 = *(int *)(param_1 + 0x1be);
  iVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x7fc);
  iVar5 = 0;
  piVar4 = (int *)(iVar2 + 0x3fc);
  uVar3 = 0;
  *(int **)(iVar1 + 0x28) = piVar4;
  piVar6 = piVar4;
  do {
    *piVar6 = iVar5;
    piVar4[-uVar3] = -iVar5;
    piVar6 = piVar6 + 1;
    uVar3 = uVar3 + 1;
    iVar5 = iVar5 + 1;
  } while ((int)uVar3 < 0x10);
  piVar6 = piVar4 + uVar3;
  while ((int)uVar3 < 0x30) {
    *piVar6 = iVar5;
    piVar4[-uVar3] = -iVar5;
    piVar6 = piVar6 + 1;
    uVar3 = uVar3 + 1;
    iVar5 = iVar5 + (uint)((uVar3 & 1) == 0);
  }
  piVar6 = piVar4 + uVar3;
  for (; (int)uVar3 < 0x100; uVar3 = uVar3 + 1) {
    *piVar6 = iVar5;
    piVar6 = piVar6 + 1;
    piVar4[-uVar3] = -iVar5;
  }
  return;
}
