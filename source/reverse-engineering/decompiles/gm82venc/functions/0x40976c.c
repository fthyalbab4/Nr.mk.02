// rea decompile_all
// name: FUN_0040976c
// address: 0x40976c
// body: available
// range: 0x40976c-0x4097fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040976c(uint param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  uVar8 = (int)param_2 >> 0x1f;
  uVar3 = (param_1 ^ uVar8) - uVar8;
  uVar6 = ((param_2 ^ uVar8) - uVar8) - (uint)((param_1 ^ uVar8) < uVar8);
  uVar8 = (int)param_5 >> 0x1f;
  uVar9 = (int)(param_2 ^ param_5) >> 0x1f;
  uVar7 = (param_4 ^ uVar8) - uVar8;
  uVar8 = ((param_5 ^ uVar8) - uVar8) - (uint)((param_4 ^ uVar8) < uVar8);
  if (uVar8 == 0) {
    if (uVar7 <= uVar6) {
      uVar6 = uVar6 % uVar7;
    }
    uVar3 = (uint)(CONCAT44(uVar6,uVar3) / (ulonglong)uVar7);
  }
  else {
    bVar10 = (uVar8 & 1) != 0;
    iVar4 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    bVar5 = (byte)iVar4;
    uVar1 = CONCAT44((uVar6 >> 1) >> (bVar5 & 0x1f),
                     (uint)(CONCAT14((uVar6 & 1) != 0,uVar3) >> 1) >> (bVar5 & 0x1f) |
                     (uVar6 >> 1) << 0x20 - (bVar5 & 0x1f)) /
            (ulonglong)
            ((uint)(CONCAT14(bVar10,uVar7) >> 1) >> (bVar5 & 0x1f) |
            (uVar8 >> 1 | (uint)bVar10 << 0x1f) << 0x20 - (bVar5 & 0x1f));
    iVar4 = (int)uVar1;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)uVar7;
    uVar8 = (int)((ulonglong)lVar2 >> 0x20) + ((uVar8 >> 1) << 1 | (uint)bVar10) * iVar4;
    uVar3 = iVar4 - (uint)(uVar6 < uVar8 || uVar6 - uVar8 < (uint)(uVar3 < (uint)lVar2));
  }
  return (uVar3 ^ uVar9) - uVar9;
}
