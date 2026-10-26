// rea decompile_all
// name: FUN_00402b04
// address: 0x402b04
// body: available
// range: 0x402b04-0x402b7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00402b04(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;

  FUN_00402a98();
  puVar3 = VirtualAlloc((LPVOID)0x0,0x13fff0,0x1000,4);
  puVar1 = DAT_0068aa30;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &DAT_0068aa2c;
    puVar2 = puVar3;
    puVar3[1] = DAT_0068aa30;
    DAT_0068aa30 = puVar2;
    *puVar1 = puVar3;
    puVar3[0x4fffb] = 2;
    DAT_0068aa44 = 0x13ffe0 - param_1;
    DAT_0068aa40 = (int)puVar3 + (0x13fff0 - param_1);
    iVar4 = DAT_0068aa40;
    *(uint *)(DAT_0068aa40 + -4) = param_1 | 2;
    return iVar4;
  }
  DAT_0068aa44 = 0;
  return 0;
}
