// rea decompile_all
// name: FUN_004078e4
// address: 0x4078e4
// body: available
// range: 0x4078e4-0x40797a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407947 to 0x405944 FUN_00405944 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004078e4(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_14;

  iVar3 = 0;
  if (0 < param_2) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      if (*(short *)(iVar1 + -10) != 1) {
        iStack_14 = 0;
        FUN_0040810c(&iStack_14,*param_1,param_3);
        LOCK();
        iVar3 = *param_1;
        *param_1 = iStack_14;
        UNLOCK();
        iVar1 = iStack_14;
      }
      if (*(int *)(iVar1 + -8) == 1) {
        if (SCARRY4(param_2,0xd)) {
          FUN_00405944(iVar1 + -0xc,param_2 + 0xd);
          return;
        }
        iStack_14 = iVar1 + -0xc;
        FUN_00404350(&iStack_14);
        *param_1 = iStack_14 + 0xc;
        *(int *)(iStack_14 + 8) = param_2;
        *(undefined1 *)(param_2 + iStack_14 + 0xc) = 0;
        if (iVar3 == 0) {
          return;
        }
        iStack_14 = iVar3;
        FUN_00406e5c(&iStack_14);
        return;
      }
    }
    iStack_14 = 0x407955;
    iVar3 = FUN_00406f48(param_2,param_3);
    iVar1 = *param_1;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + -4);
      if (param_2 <= *(int *)(iVar1 + -4)) {
        iVar2 = param_2;
      }
      iStack_14 = 0x40796d;
      FUN_0040450c(iVar1,iVar3,iVar2);
    }
  }
  iStack_14 = 0x407974;
  FUN_00406e5c(param_1);
  *param_1 = iVar3;
  return;
}
