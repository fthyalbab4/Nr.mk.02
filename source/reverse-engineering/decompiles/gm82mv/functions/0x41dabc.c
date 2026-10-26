// rea decompile_all
// name: FUN_0041dabc
// address: 0x41dabc
// body: available
// range: 0x41dabc-0x41db14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041dabc(void)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  int in_stack_00000004;
  byte local_5;

  GetCPInfo(0,(LPCPINFO)(in_stack_00000004 + -0x14));
  for (iVar4 = 0;
      (iVar4 < 0xc &&
      (*(char *)(in_stack_00000004 + -0xe + iVar4) != '\0' ||
       *(char *)(in_stack_00000004 + -0xd + iVar4) != '\0')); iVar4 = iVar4 + 2) {
    local_5 = *(byte *)(in_stack_00000004 + -0xe + iVar4);
    bVar1 = *(byte *)(in_stack_00000004 + -0xd + iVar4);
    if (local_5 <= bVar1) {
      cVar3 = (bVar1 - local_5) + '\x01';
      do {
        pbVar2 = (byte *)((int)&DAT_0067cbcc + ((int)(uint)local_5 >> 3));
        *pbVar2 = *pbVar2 | '\x01' << (local_5 & 7);
        local_5 = local_5 + 1;
        cVar3 = cVar3 + -1;
      } while (cVar3 != '\0');
    }
  }
  return;
}
