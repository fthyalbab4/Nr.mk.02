// rea decompile_all
// name: FUN_0046b728
// address: 0x46b728
// body: available
// range: 0x46b728-0x46b795 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046b728(int param_1,uint param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  short *psVar3;
  ushort *puVar4;
  short sVar5;
  uint uVar6;
  short asStack_2c [16];

  sVar5 = 0;
  iVar2 = 1;
  psVar3 = asStack_2c;
  do {
    psVar3 = psVar3 + 1;
    sVar5 = (*param_3 + sVar5) * 2;
    *psVar3 = sVar5;
    iVar2 = iVar2 + 1;
    param_3 = param_3 + 1;
  } while (iVar2 < 0x10);
  iVar2 = 0;
  puVar4 = (ushort *)(param_1 + 2);
  if (param_2 < 0x80000000) {
    do {
      uVar6 = (uint)*puVar4;
      if (uVar6 != 0) {
        sVar5 = asStack_2c[uVar6];
        asStack_2c[uVar6] = asStack_2c[uVar6] + 1;
        uVar1 = FUN_0046d004(sVar5,uVar6);
        puVar4[-1] = uVar1;
      }
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar2 <= (int)param_2);
  }
  return;
}
