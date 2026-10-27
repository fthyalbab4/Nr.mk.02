// rea decompile_all
// name: FUN_00405374
// address: 0x405374
// body: available
// range: 0x405374-0x4053dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00405374(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  int extraout_EDX;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  int aiStack_60 [4];
  byte local_50 [68];

  bVar5 = 0;
  aiStack_60[3] = 0;
  aiStack_60[2] = 0xffffffff;
  aiStack_60[1] = 0x10000;
  aiStack_60[0] = 0x40538a;
  cVar1 = FUN_0040561c();
  if (cVar1 != '\x01') {
    cVar1 = '@';
    pbVar3 = local_50;
    do {
      aiStack_60[0] = 0x40539b;
      uVar2 = FUN_0040505c(param_1);
      if ((byte)uVar2 < 0x21) {
        if ((char)((ushort)uVar2 >> 8) != '\x1a') {
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        }
        break;
      }
      pbVar4 = pbVar3 + (uint)bVar5 * -2 + 1;
      *pbVar3 = (byte)uVar2;
      cVar1 = cVar1 + -1;
      pbVar3 = pbVar4;
    } while (cVar1 != '\0');
    *pbVar3 = 0;
    aiStack_60[3] = (int)pbVar3 - (int)local_50;
    aiStack_60[0] = extraout_EDX;
    FUN_00405314(local_50,aiStack_60);
    if (aiStack_60[0] != 0) {
      aiStack_60[0] = 0x4053c9;
      FUN_004044ac(0x6a);
    }
  }
  return;
}
