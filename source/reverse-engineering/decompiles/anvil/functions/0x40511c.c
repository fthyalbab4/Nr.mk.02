// rea decompile_all
// name: FUN_0040511c
// address: 0x40511c
// body: available
// range: 0x40511c-0x405185 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0040511c(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int extraout_EDX;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  int aiStack_40 [4];
  byte local_30 [36];

  bVar6 = 0;
  aiStack_40[3] = 0;
  aiStack_40[2] = 0xffffffff;
  aiStack_40[1] = 0x10000;
  aiStack_40[0] = 0x405132;
  cVar1 = FUN_0040561c();
  if (cVar1 == '\x01') {
    uVar3 = 0;
  }
  else {
    cVar1 = ' ';
    pbVar4 = local_30;
    do {
      aiStack_40[0] = 0x405143;
      uVar2 = FUN_0040505c(param_1);
      if ((byte)uVar2 < 0x21) {
        if ((char)((ushort)uVar2 >> 8) != '\x1a') {
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        }
        break;
      }
      pbVar5 = pbVar4 + (uint)bVar6 * -2 + 1;
      *pbVar4 = (byte)uVar2;
      cVar1 = cVar1 + -1;
      pbVar4 = pbVar5;
    } while (cVar1 != '\0');
    *pbVar4 = 0;
    aiStack_40[3] = (int)pbVar4 - (int)local_30;
    aiStack_40[0] = extraout_EDX;
    uVar3 = FUN_004050c8(local_30,aiStack_40);
    if (aiStack_40[0] != 0) {
      aiStack_40[0] = 0x405171;
      uVar3 = FUN_004044ac(0x6a);
    }
  }
  return uVar3;
}
