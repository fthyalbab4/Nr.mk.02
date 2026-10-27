// rea decompile_all
// name: FUN_0057c5c0
// address: 0x57c5c0
// body: available
// range: 0x57c5c0-0x57c7d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057c5c0(int param_1,byte *param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int local_52c;
  int local_528;
  int *piStack_520;
  byte *pbStack_51c;
  byte *pbStack_518;
  char local_514 [256];
  int aiStack_414 [258];

  if (*param_3 == 0) {
    iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x5d4);
    *param_3 = iVar1;
  }
  iVar1 = *param_3;
  iVar7 = 1;
  *(byte **)(iVar1 + 0xd0) = param_2;
  local_52c = 0;
  pbVar5 = param_2;
  do {
    pbVar5 = pbVar5 + 1;
    pcVar2 = local_514 + local_52c;
    for (local_528 = 1; local_528 <= (int)(uint)*pbVar5; local_528 = local_528 + 1) {
      *pcVar2 = (char)iVar7;
      local_52c = local_52c + 1;
      pcVar2 = pcVar2 + 1;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x11);
  iVar7 = 0;
  local_514[local_52c] = '\0';
  iVar6 = (int)local_514[0];
  local_52c = 0;
  while (local_514[local_52c] != '\0') {
    piVar3 = aiStack_414 + local_52c + 1;
    for (pcVar2 = local_514 + local_52c; iVar6 == *pcVar2; pcVar2 = pcVar2 + 1) {
      *piVar3 = iVar7;
      piVar3 = piVar3 + 1;
      local_52c = local_52c + 1;
      iVar7 = iVar7 + 1;
    }
    iVar7 = iVar7 * 2;
    iVar6 = iVar6 + 1;
  }
  iVar7 = 1;
  local_52c = 0;
  piVar3 = (int *)(iVar1 + 0x90);
  pbVar5 = param_2;
  do {
    pbVar5 = pbVar5 + 1;
    if (*pbVar5 == 0) {
      piVar3[-0x12] = -1;
    }
    else {
      *piVar3 = local_52c;
      piVar3[-0x23] = aiStack_414[local_52c + 1];
      local_52c = local_52c + (uint)*pbVar5;
      piVar3[-0x12] = aiStack_414[local_52c];
    }
    iVar7 = iVar7 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar7 < 0x11);
  *(undefined4 *)(iVar1 + 0x88) = 0xfffff;
  FUN_00579424();
  local_52c = 0;
  iVar7 = 1;
  pbStack_518 = param_2;
  do {
    pbStack_518 = pbStack_518 + 1;
    pbStack_51c = param_2 + local_52c + 0x11;
    piStack_520 = aiStack_414 + local_52c + 1;
    for (local_528 = 1; local_528 <= (int)(uint)*pbStack_518; local_528 = local_528 + 1) {
      bVar4 = 8 - (char)iVar7;
      iVar6 = *piStack_520 << (bVar4 & 0x1f);
      pbVar5 = (byte *)(iVar1 + 0x4d4 + iVar6);
      piVar3 = (int *)(iVar1 + 0xd4 + iVar6 * 4);
      for (iVar6 = 1 << (bVar4 & 0x1f); 0 < iVar6; iVar6 = iVar6 + -1) {
        *piVar3 = iVar7;
        piVar3 = piVar3 + 1;
        *pbVar5 = *pbStack_51c;
        pbVar5 = pbVar5 + 1;
      }
      piStack_520 = piStack_520 + 1;
      pbStack_51c = pbStack_51c + 1;
      local_52c = local_52c + 1;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 9);
  return;
}
