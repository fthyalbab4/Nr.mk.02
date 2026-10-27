// rea decompile_all
// name: FUN_005a1fe8
// address: 0x5a1fe8
// body: available
// range: 0x5a1fe8-0x5a203c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a1fe8(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;

  pbVar1 = (byte *)*param_2;
  pbVar3 = (byte *)*param_3;
  while (0 < (int)param_4) {
    if ((*pbVar1 & 0xc0) == 0xc0) {
      uVar2 = (uint)(*pbVar1 & 0x3f);
      if ((int)param_4 < (int)(uint)(*pbVar1 & 0x3f)) {
        uVar2 = param_4;
      }
      FUN_00404f08(pbVar3,uVar2,pbVar1[1]);
      pbVar1 = pbVar1 + 2;
      pbVar3 = pbVar3 + uVar2;
      param_4 = param_4 - uVar2;
    }
    else {
      *pbVar3 = *pbVar1;
      pbVar1 = pbVar1 + 1;
      pbVar3 = pbVar3 + 1;
      param_4 = param_4 - 1;
    }
  }
  return;
}
