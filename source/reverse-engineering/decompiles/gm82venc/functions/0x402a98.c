// rea decompile_all
// name: FUN_00402a98
// address: 0x402a98
// body: available
// range: 0x402a98-0x402aa1 inclusive
// range: 0x402aa4-0x402ad1 inclusive
// range: 0x402ad4-0x402b01 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402a98(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;

  iVar2 = DAT_0068aa40;
  if (DAT_0068aa44 == 0) {
    return;
  }
  if ((*(byte *)(DAT_0068aa40 + -4) & 1) == 0) {
    *(uint *)(DAT_0068aa40 + -4) = *(uint *)(DAT_0068aa40 + -4) | 8;
    puVar3 = (undefined4 *)(iVar2 - DAT_0068aa44);
    uVar4 = DAT_0068aa44;
  }
  else {
    uVar4 = *(uint *)(DAT_0068aa40 + -4) & 0xfffffff0;
    if (0xb2f < uVar4) {
      FUN_004029f8();
      uVar4 = *(uint *)(DAT_0068aa40 + -4) & 0xfffffff0;
    }
    puVar3 = (undefined4 *)(DAT_0068aa40 - DAT_0068aa44);
    uVar4 = uVar4 + DAT_0068aa44;
  }
  puVar3[-1] = uVar4 + 3;
  *(uint *)((uVar4 - 8) + (int)puVar3) = uVar4;
  if (uVar4 < 0xb30) {
    return;
  }
  uVar4 = uVar4 - 0xb30 >> 8;
  uVar4 = (uVar4 - 0x3ff & -(uint)(uVar4 < 0x3ff)) + 0x3ff;
  puVar1 = (undefined4 *)(&DAT_0068aad0)[uVar4 * 2];
  *puVar3 = &DAT_0068aacc + uVar4 * 2;
  puVar3[1] = puVar1;
  *puVar1 = puVar3;
  (&DAT_0068aad0)[uVar4 * 2] = puVar3;
  if (puVar1 != &DAT_0068aacc + uVar4 * 2) {
    return;
  }
  (&DAT_0068aa4c)[(uVar4 & 0x1fffffff) >> 5 & 0xff] =
       (&DAT_0068aa4c)[(uVar4 & 0x1fffffff) >> 5 & 0xff] | 1 << ((byte)uVar4 & 0x1f);
  _DAT_0068aa48 = _DAT_0068aa48 | 1 << ((byte)(uVar4 * 8 >> 8) & 0x1f);
  return;
}
