// rea decompile_all
// name: FUN_005e8000
// address: 0x5e8000
// body: available
// range: 0x5e8000-0x5e8057 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e8000(undefined4 param_1,undefined4 *param_2,int *param_3,undefined4 param_4,int param_5
                 )

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;

  pbVar3 = (byte *)*param_2;
  iVar4 = *param_3;
  while (0 < param_5) {
    uVar1 = (uint)*pbVar3;
    pbVar2 = pbVar3 + 1;
    if (uVar1 < 0x80) {
      FUN_00404514(pbVar2,iVar4,uVar1);
      pbVar3 = pbVar2 + uVar1;
      param_5 = (param_5 + -1) - uVar1;
    }
    else {
      uVar1 = uVar1 - 0x80;
      FUN_00404f38(iVar4,uVar1,*pbVar2);
      pbVar3 = pbVar3 + 2;
      param_5 = param_5 + -2;
    }
    iVar4 = iVar4 + uVar1;
  }
  return;
}
