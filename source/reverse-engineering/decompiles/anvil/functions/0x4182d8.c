// rea decompile_all
// name: FUN_004182d8
// address: 0x4182d8
// body: available
// range: 0x4182d8-0x418339 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004182d8(uint param_1,uint param_2,int param_3)

{
  char cVar3;
  uint uVar1;
  uint uVar2;
  char cVar5;
  undefined4 unaff_EBX;
  char *pcVar4;
  undefined1 *unaff_EDI;
  char *pcVar6;
  char *pcVar7;
  char local_14 [4];
  char *pcStack_10;

  *unaff_EDI = (char)param_1;
  cVar5 = (char)((uint)unaff_EBX >> 8);
  pcVar4 = unaff_EDI + 1;
  if (cVar5 != '\0') {
    param_1 = param_1 & 0xffffff00;
    pcVar4 = unaff_EDI + 2;
    unaff_EDI[1] = '\0';
  }
  if ((char)unaff_EBX == '\0') {
    param_2 = 0;
LAB_004182f6:
    cVar3 = (char)(param_1 >> 8);
    pcVar6 = pcVar4;
    if (cVar3 == '\0') goto LAB_00418305;
  }
  else {
    if (-1 < (int)param_2) goto LAB_004182f6;
    cVar3 = '-';
    param_2 = -param_2;
  }
  *pcVar4 = cVar3;
  pcVar6 = pcVar4 + 1;
  if (cVar5 != '\0') {
    pcVar6 = pcVar4 + 2;
    pcVar4[1] = '\0';
  }
LAB_00418305:
  pcVar4 = local_14;
  uVar1 = param_2;
  pcStack_10 = pcVar4;
  do {
    do {
      uVar2 = uVar1 / DAT_0067cc48;
      *pcVar4 = (char)(uVar1 % DAT_0067cc48) + '0';
      pcVar4 = pcVar4 + 1;
      param_3 = param_3 + -1;
      uVar1 = uVar2;
    } while (uVar2 != 0);
  } while (0 < param_3);
  do {
    pcVar4 = pcVar4 + -1;
    *pcVar6 = *pcVar4;
    pcVar7 = pcVar6 + 1;
    if (cVar5 != '\0') {
      pcVar7 = pcVar6 + 2;
      pcVar6[1] = '\0';
    }
    pcVar6 = pcVar7;
  } while (pcVar4 != pcStack_10);
  return param_2;
}
