// rea decompile_all
// name: FUN_005f7910
// address: 0x5f7910
// body: available
// range: 0x5f7910-0x5f793d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5f7930 to 0x5bd598 FUN_005bd598 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f7910(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iStack_14;

  uVar6 = FUN_004048b8();
  if (uVar6 != 4) {
    if (uVar6 < 0xc) {
      if (uVar6 == 0xb) {
        uVar7 = DAT_00686b00 - 1;
      }
      else {
        uVar7 = (uint)(byte)(&DAT_005f793e)[uVar6];
      }
      FUN_005bd598(uVar6,uVar7);
      return;
    }
    return;
  }
  DAT_0068753c = 0;
  iStack_14 = FUN_00571ea8();
  if (-1 < iStack_14 + -1) {
    iVar8 = 0;
    do {
      cVar1 = FUN_00571eb0(iVar8);
      if (cVar1 != '\0') {
        uVar2 = FUN_00571fac(iVar8);
        iVar3 = FUN_00571ea8();
        if (iVar8 <= iVar3 + -1) {
          iVar9 = ((iVar3 + -1) - iVar8) + 1;
          iVar3 = iVar8;
          do {
            cVar1 = FUN_00571eb0(iVar3);
            if (cVar1 != '\0') {
              uVar4 = FUN_00571fac(iVar3);
              iVar5 = FUN_0060f9dc(uVar2,4,iVar3);
              if (iVar5 == 0) {
                iVar5 = FUN_0060f9dc(uVar4,4,iVar8);
                if (iVar5 == 0) goto LAB_005bd57e;
              }
              iVar5 = FUN_00409c34(DAT_0084f578);
              if (iVar5 <= DAT_0068753c) {
                FUN_00409dfc(&DAT_0084f578,&DAT_005bd474,1,DAT_0068753c + 5);
              }
              *(int *)(DAT_0084f578 + DAT_0068753c * 8) = iVar8;
              *(int *)(DAT_0084f578 + 4 + DAT_0068753c * 8) = iVar3;
              DAT_0068753c = DAT_0068753c + 1;
            }
LAB_005bd57e:
            iVar3 = iVar3 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
      }
      iVar8 = iVar8 + 1;
      iStack_14 = iStack_14 + -1;
    } while (iStack_14 != 0);
  }
  return;
}
