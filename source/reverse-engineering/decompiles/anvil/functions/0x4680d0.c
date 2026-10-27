// rea decompile_all
// name: FUN_004680d0
// address: 0x4680d0
// body: available
// range: 0x4680d0-0x46816e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004680d0(int param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar4;
  char *pcVar5;
  char *pcVar3;

  pcVar4 = (char *)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x6c));
  pcVar5 = (char *)(*(int *)(param_1 + 0x38) + param_2);
  if ((*pcVar5 == *pcVar4) && (pcVar5[1] == pcVar4[1])) {
    pcVar5 = pcVar5 + 2;
    pcVar3 = pcVar4 + 2;
    while (((((pcVar2 = pcVar3 + 1, *pcVar2 == pcVar5[1] &&
              (pcVar2 = pcVar3 + 2, *pcVar2 == pcVar5[2])) &&
             (pcVar2 = pcVar3 + 3, *pcVar2 == pcVar5[3])) &&
            ((pcVar2 = pcVar3 + 4, *pcVar2 == pcVar5[4] &&
             (pcVar2 = pcVar3 + 5, *pcVar2 == pcVar5[5])))) &&
           ((pcVar2 = pcVar3 + 6, *pcVar2 == pcVar5[6] &&
            (pcVar2 = pcVar3 + 7, *pcVar2 == pcVar5[7]))))) {
      pcVar2 = pcVar3 + 8;
      pcVar5 = pcVar5 + 8;
      if ((*pcVar2 != *pcVar5) || (pcVar3 = pcVar2, pcVar4 + 0x102 <= pcVar2)) break;
    }
    uVar1 = 0x102 - ((int)(pcVar4 + 0x102) - (int)pcVar2);
    if ((int)uVar1 < 3) {
      uVar1 = 2;
    }
    else {
      *(int *)(param_1 + 0x70) = param_2;
      if (*(uint *)(param_1 + 0x74) < uVar1) {
        uVar1 = *(uint *)(param_1 + 0x74);
      }
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}
