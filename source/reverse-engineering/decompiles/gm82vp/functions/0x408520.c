// rea decompile_all
// name: FUN_00408520
// address: 0x408520
// body: available
// range: 0x408520-0x4085b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408584 to 0x405ea4 FUN_00405ea4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00408520(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iStack_10;

  iVar3 = 0;
  if (0 < param_2) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      if (*(short *)(iVar1 + -10) != 2) {
        iStack_10 = 0;
        FUN_004083c0(&iStack_10,*param_1);
        LOCK();
        iVar3 = *param_1;
        *param_1 = iStack_10;
        UNLOCK();
        iVar1 = iStack_10;
      }
      if (*(int *)(iVar1 + -8) == 1) {
        iVar2 = param_2 * 2;
        if ((!SCARRY4(param_2,param_2)) && (bVar4 = SCARRY4(iVar2,0xe), iVar2 = iVar2 + 0xe, !bVar4)
           ) {
          iStack_10 = iVar1 + -0xc;
          FUN_00404358(&iStack_10);
          *param_1 = iStack_10 + 0xc;
          *(int *)(iStack_10 + 8) = param_2;
          *(undefined2 *)(iStack_10 + 0xc + param_2 * 2) = 0;
          if (iVar3 == 0) {
            return;
          }
          iStack_10 = iVar3;
          FUN_004072d8(&iStack_10);
          return;
        }
        FUN_00405ea4(iVar1 + -0xc,iVar2);
        return;
      }
    }
    iStack_10 = 0x408590;
    iVar3 = FUN_00408d00(param_2);
    iVar1 = *param_1;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + -4);
      if (param_2 <= *(int *)(iVar1 + -4)) {
        iVar2 = param_2;
      }
      iStack_10 = 0x4085aa;
      FUN_00404514(iVar1,iVar3,iVar2 << 1);
    }
  }
  iStack_10 = 0x4085b1;
  FUN_004072d8(param_1);
  *param_1 = iVar3;
  return;
}
