// rea decompile_all
// name: FUN_005098b4
// address: 0x5098b4
// body: available
// range: 0x5098b4-0x509921 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005098b4(int param_1,uint param_2,short *param_3)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  short *psVar4;
  ushort *puVar5;
  short sVar6;
  uint uVar7;
  short asStack_2c [16];

  sVar6 = 0;
  iVar3 = 1;
  psVar4 = asStack_2c;
  do {
    psVar4 = psVar4 + 1;
    sVar1 = *param_3;
    param_3 = param_3 + 1;
    iVar3 = iVar3 + 1;
    sVar6 = (sVar1 + sVar6) * 2;
    *psVar4 = sVar6;
  } while (iVar3 < 0x10);
  iVar3 = 0;
  puVar5 = (ushort *)(param_1 + 2);
  if (param_2 < 0x80000000) {
    do {
      uVar7 = (uint)*puVar5;
      if (uVar7 != 0) {
        sVar6 = asStack_2c[uVar7];
        asStack_2c[uVar7] = asStack_2c[uVar7] + 1;
        uVar2 = FUN_0050b1a0(sVar6,uVar7);
        puVar5[-1] = uVar2;
      }
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar3 <= (int)param_2);
  }
  return;
}
