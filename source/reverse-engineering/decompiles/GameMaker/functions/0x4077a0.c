// rea decompile_all
// name: FUN_004077a0
// address: 0x4077a0
// body: available
// range: 0x4077a0-0x4078e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_004077a0(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;

  if ((param_2 != 0) && (param_1 != 0)) {
    iVar6 = *(int *)(param_1 + -4);
    if ((iVar6 <= *(int *)(param_2 + -4)) && (0 < iVar6)) {
      iVar6 = iVar6 + -1;
      pcVar7 = (char *)(*(int *)(param_2 + -4) + param_2);
      pcVar5 = (char *)(param_2 + iVar6);
      pcVar3 = (char *)(param_1 + iVar6);
      iVar6 = -iVar6;
      cVar1 = *pcVar3;
      if (iVar6 != 0) {
        pcVar4 = pcVar5;
LAB_00407878:
        iVar8 = iVar6;
        if (cVar1 == *pcVar4) goto LAB_004078c7;
LAB_0040787c:
        iVar8 = iVar6;
        if (cVar1 == pcVar4[1]) goto LAB_0040789a;
        while (pcVar4 = pcVar4 + 2, pcVar4 < pcVar7 + -2) {
          while( true ) {
            iVar8 = iVar6;
            if (cVar1 == *pcVar4) goto LAB_004078c7;
            if (cVar1 == pcVar4[1]) goto LAB_0040789a;
            if (cVar1 == pcVar4[2]) {
              pcVar4 = pcVar4 + 2;
              goto LAB_004078c7;
            }
            if (cVar1 == pcVar4[3]) break;
            pcVar4 = pcVar4 + 4;
            if (pcVar7 + -2 <= pcVar4) {
              if (pcVar7 <= pcVar4) {
                return (char *)0x0;
              }
              goto LAB_00407878;
            }
          }
          pcVar4 = pcVar4 + 2;
LAB_0040789a:
          while (*(short *)(pcVar3 + iVar8) == *(short *)(pcVar4 + iVar8 + 1)) {
            bVar2 = -3 < iVar8;
            iVar8 = iVar8 + 2;
            if (bVar2) {
              if (pcVar4 + 2 <= pcVar7) {
                return pcVar4 + 2 + -(int)pcVar5;
              }
              return (char *)0x0;
            }
          }
        }
        if (pcVar7 <= pcVar4) {
          return (char *)0x0;
        }
        goto LAB_00407878;
      }
      pcVar3 = pcVar5;
      while (cVar1 != *pcVar3) {
        if (cVar1 == pcVar3[1]) {
LAB_00407834:
          pcVar4 = (char *)0x0;
          if (pcVar3 + 2 <= pcVar7) {
            pcVar4 = pcVar3 + 2 + -(int)pcVar5;
          }
          return pcVar4;
        }
        pcVar3 = pcVar3 + 2;
        if (pcVar3 < pcVar7 + -2) {
          do {
            if (cVar1 == *pcVar3) goto LAB_00407824;
            if (cVar1 == pcVar3[1]) goto LAB_00407834;
            if (cVar1 == pcVar3[2]) {
              pcVar3 = pcVar3 + 2;
              goto LAB_00407824;
            }
            if (cVar1 == pcVar3[3]) {
              pcVar3 = pcVar3 + 2;
              goto LAB_00407834;
            }
            pcVar3 = pcVar3 + 4;
          } while (pcVar3 < pcVar7 + -2);
          if (pcVar7 <= pcVar3) {
            return (char *)0x0;
          }
        }
        else if (pcVar7 <= pcVar3) {
          return (char *)0x0;
        }
      }
LAB_00407824:
      return pcVar3 + (1 - (int)pcVar5);
    }
  }
  return (char *)0x0;
LAB_004078c7:
  while (*(short *)(pcVar3 + iVar8) == *(short *)(pcVar4 + iVar8)) {
    bVar2 = -3 < iVar8;
    iVar8 = iVar8 + 2;
    if (bVar2) {
      return pcVar4 + (1 - (int)pcVar5);
    }
  }
  goto LAB_0040787c;
}
