// rea decompile_all
// name: FUN_004477d0
// address: 0x4477d0
// body: available
// range: 0x4477d0-0x447831 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004477d0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *lpAddress;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;

  puVar3 = (undefined4 *)0x0;
  puVar1 = DAT_0068ef98;
  puVar4 = DAT_0068ef98;
  while (DAT_0068ef98 = puVar4, lpAddress = puVar1, puVar2 = puVar3, lpAddress != (undefined4 *)0x0)
  {
    puVar1 = (undefined4 *)*lpAddress;
    iVar5 = FUN_004477a0(DAT_0068ef9c,lpAddress);
    puVar3 = lpAddress;
    puVar4 = DAT_0068ef98;
    if (iVar5 == 0x13a) {
      FUN_00447764(lpAddress,(int)lpAddress + 0xffb);
      VirtualFree(lpAddress,0,0x8000);
      puVar3 = puVar2;
      puVar4 = puVar1;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = puVar1;
        puVar4 = DAT_0068ef98;
      }
    }
  }
  return;
}
