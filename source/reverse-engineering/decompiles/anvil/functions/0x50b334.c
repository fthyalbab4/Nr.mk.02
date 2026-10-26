// rea decompile_all
// name: FUN_0050b334
// address: 0x50b334
// body: available
// range: 0x50b334-0x50b45c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0050b334(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;

  uVar17 = param_1 >> 0x10;
  param_1 = param_1 & 0xffff;
  if (param_2 == (byte *)0x0) {
    param_1 = 1;
  }
  else {
    while (param_3 != 0) {
      uVar1 = param_3;
      if (0x15af < param_3) {
        uVar1 = 0x15b0;
      }
      param_3 = param_3 - uVar1;
      for (; 0xf < (int)uVar1; uVar1 = uVar1 - 0x10) {
        iVar2 = param_1 + *param_2;
        iVar3 = iVar2 + (uint)param_2[1];
        iVar4 = iVar3 + (uint)param_2[2];
        iVar5 = iVar4 + (uint)param_2[3];
        iVar6 = iVar5 + (uint)param_2[4];
        iVar7 = iVar6 + (uint)param_2[5];
        iVar8 = iVar7 + (uint)param_2[6];
        iVar9 = iVar8 + (uint)param_2[7];
        iVar10 = iVar9 + (uint)param_2[8];
        iVar11 = iVar10 + (uint)param_2[9];
        iVar12 = iVar11 + (uint)param_2[10];
        iVar13 = iVar12 + (uint)param_2[0xb];
        iVar14 = iVar13 + (uint)param_2[0xc];
        iVar15 = iVar14 + (uint)param_2[0xd];
        iVar16 = iVar15 + (uint)param_2[0xe];
        param_1 = iVar16 + (uint)param_2[0xf];
        param_2 = param_2 + 0x10;
        uVar17 = uVar17 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
                 iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + param_1;
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        param_1 = param_1 + *param_2;
        param_2 = param_2 + 1;
        uVar17 = uVar17 + param_1;
      }
      param_1 = param_1 % 0xfff1;
      uVar17 = uVar17 % 0xfff1;
    }
    param_1 = uVar17 << 0x10 | param_1;
  }
  return param_1;
}
