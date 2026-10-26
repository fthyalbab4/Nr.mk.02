// rea decompile_all
// name: FUN_0043dc9c
// address: 0x43dc9c
// body: available
// range: 0x43dc9c-0x43dcfa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0043dc9c(int param_1)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;

  uVar2 = 0;
  psVar1 = (short *)FUN_00408220(*(undefined4 *)(param_1 + 0x14));
  for (psVar4 = psVar1; (*psVar4 != 0 && (*psVar4 != 0x2e)); psVar4 = psVar4 + 1) {
  }
  if (*psVar4 != 0) {
    iVar3 = (int)psVar4 - (int)psVar1 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)(((int)psVar4 - (int)psVar1 & 1U) != 0);
    }
    FUN_004082d0(param_1 + 0x10,psVar1,iVar3);
    FUN_00408a54(param_1 + 0x14,1,iVar3 + 1);
    uVar2 = CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  return uVar2;
}
