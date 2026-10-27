// rea decompile_all
// name: FUN_004f1680
// address: 0x4f1680
// body: available
// range: 0x4f1680-0x4f16d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004f1680(uint param_1,byte param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;

  uVar1 = (uint)param_2 - (param_3 & 0xff);
  uVar5 = (int)uVar1 >> 0x1f;
  iVar2 = (uVar1 ^ uVar5) - uVar5;
  uVar1 = (param_1 & 0xff) - (param_3 & 0xff);
  uVar5 = (int)uVar1 >> 0x1f;
  iVar3 = (uVar1 ^ uVar5) - uVar5;
  uVar1 = (param_1 & 0xff) + (uint)param_2 + (param_3 & 0xff) * -2;
  uVar5 = (int)uVar1 >> 0x1f;
  iVar4 = (uVar1 ^ uVar5) - uVar5;
  if (((iVar3 < iVar2) || (iVar4 < iVar2)) && (param_1 = param_3, iVar3 <= iVar4)) {
    param_1 = (uint)param_2;
  }
  return param_1;
}
