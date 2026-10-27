// rea decompile_all
// name: FUN_0059cde0
// address: 0x59cde0
// body: available
// range: 0x59cde0-0x59ce46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0059cde0(uint param_1,uint param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_14;

  local_14 = (uint)param_3;
  iVar5 = ((param_1 & 0xff) + (param_2 & 0xff)) - local_14;
  uVar1 = iVar5 - (param_1 & 0xff);
  uVar4 = (int)uVar1 >> 0x1f;
  iVar2 = (uVar1 ^ uVar4) - uVar4;
  uVar1 = iVar5 - (param_2 & 0xff);
  uVar4 = (int)uVar1 >> 0x1f;
  iVar3 = (uVar1 ^ uVar4) - uVar4;
  uVar1 = (int)(iVar5 - (uint)param_3) >> 0x1f;
  iVar5 = (iVar5 - (uint)param_3 ^ uVar1) - uVar1;
  if (((iVar3 < iVar2) || (iVar5 < iVar2)) && (param_1 = local_14, iVar3 <= iVar5)) {
    param_1 = param_2;
  }
  return param_1;
}
