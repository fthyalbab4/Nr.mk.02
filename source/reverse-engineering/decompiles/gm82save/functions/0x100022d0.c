// rea decompile_all
// name: FUN_100022d0
// address: 0x100022d0
// body: available
// range: 0x100022d0-0x100022e6 inclusive
// range: 0x100022f0-0x10002381 inclusive
// range: 0x10002390-0x1000241a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __fastcall FUN_100022d0(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;

  iVar9 = 0;
  do {
    iVar8 = iVar9;
    if (iVar8 == param_2) {
      iVar9 = 0;
      iVar8 = 0;
      iVar12 = param_2;
      break;
    }
    pbVar10 = (byte *)(iVar8 + param_1);
    bVar1 = *pbVar10;
    uVar6 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if (bVar1 < 0xe0) {
        pbVar11 = pbVar10 + 2;
        uVar6 = (uVar6 & 0x1f) << 6 | pbVar10[1] & 0x3f;
      }
      else {
        uVar7 = pbVar10[2] & 0x3f | (pbVar10[1] & 0x3f) << 6;
        if (bVar1 < 0xf0) {
          pbVar11 = pbVar10 + 3;
          uVar6 = uVar7 | (uVar6 & 0x1f) << 0xc;
        }
        else {
          pbVar11 = pbVar10 + 4;
          uVar6 = pbVar10[3] & 0x3f | uVar7 << 6 | (uVar6 & 7) << 0x12;
        }
      }
    }
    else {
      pbVar11 = pbVar10 + 1;
    }
    iVar9 = (int)pbVar11 - param_1;
    iVar12 = iVar9;
  } while (uVar6 == 0x2e);
  do {
    while( true ) {
      iVar3 = iVar9;
      if (iVar12 == param_2) goto LAB_1000240d;
      iVar4 = param_2 + param_1;
      uVar6 = (uint)*(char *)(iVar4 + -1);
      iVar3 = param_2;
      if ((int)uVar6 < 0) break;
      param_2 = iVar4 + -1 + -param_1;
      if (uVar6 != 0x2e) goto LAB_1000240d;
    }
    bVar1 = *(byte *)(iVar4 + -2);
    if ((char)bVar1 < -0x40) {
      bVar2 = *(byte *)(iVar4 + -3);
      if ((char)bVar2 < -0x40) {
        iVar5 = iVar4 + -4;
        uVar7 = (bVar2 & 0x3f) + (*(byte *)(iVar4 + -4) & 7) * 0x40;
      }
      else {
        iVar5 = iVar4 + -3;
        uVar7 = bVar2 & 0xf;
      }
      uVar7 = bVar1 & 0x3f | uVar7 << 6;
    }
    else {
      iVar5 = iVar4 + -2;
      uVar7 = bVar1 & 0x1f;
    }
    param_2 = iVar5 + -param_1;
  } while ((uVar6 & 0x3f | uVar7 << 6) == 0x2e);
LAB_1000240d:
  return CONCAT44(iVar3 - iVar8,param_1 + iVar8);
}
