// rea decompile_all
// name: FUN_00405188
// address: 0x405188
// body: available
// range: 0x405188-0x405206 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00405188(int param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar6;
  int unaff_EBX;
  byte bVar7;
  int iVar8;
  int iVar5;

  bVar7 = 0;
  iVar8 = param_3;
  if (((*(short *)(param_1 + 4) == -0x284f) || (cVar2 = FUN_00405020(), cVar2 != '\0')) &&
     (unaff_EBX = param_1, 0 < param_3)) {
    pbVar6 = (byte *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x14));
    iVar5 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc);
    do {
      while( true ) {
        iVar4 = iVar5 + -1;
        if (iVar5 < 1) {
          *(byte **)(param_1 + 0xc) = pbVar6;
          uVar3 = FUN_0040505c(param_1,pbVar6,iVar4,iVar8);
          iVar4 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc);
          pbVar6 = (byte *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x14));
          if ((char)(uVar3 >> 8) != '\0') {
            return param_1;
          }
        }
        else {
          uVar3 = (uint)*pbVar6;
          pbVar6 = pbVar6 + 1;
        }
        cVar2 = (char)uVar3;
        if (cVar2 == '\n') goto LAB_004051dc;
        iVar5 = iVar4;
        if (cVar2 == '\r') break;
        if ((cVar2 == '\x1a') && ((*(ushort *)(param_1 + 6) & 1) != 0)) goto LAB_004051dd;
        *param_2 = cVar2;
        iVar4 = param_3 + -1;
        bVar1 = param_3 < 1;
        param_3 = iVar4;
        param_2 = param_2 + (uint)bVar7 * -2 + 1;
        if (iVar4 == 0 || bVar1) goto LAB_004051dd;
      }
    } while (*pbVar6 != 10);
LAB_004051dc:
    pbVar6 = pbVar6 + -1;
LAB_004051dd:
    *(int *)(param_1 + 0xc) = (int)pbVar6 - *(int *)(param_1 + 0x14);
  }
  return unaff_EBX;
}
