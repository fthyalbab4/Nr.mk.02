// rea decompile_all
// name: FUN_00409284
// address: 0x409284
// body: available
// range: 0x409284-0x409346 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4092c1 to 0x404480 FUN_00404480 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00409284(undefined4 *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;

  if (param_3 == 0) {
    return;
  }
  cVar1 = *param_2;
  uVar4 = (uint)(byte)param_2[1];
  if (cVar1 != '\n') {
    if (cVar1 == '\v') {
      do {
        FUN_0040815c(param_1);
        iVar6 = param_3 + -1;
        bVar3 = 0 < param_3;
        param_1 = param_1 + 1;
        param_3 = iVar6;
      } while (iVar6 != 0 && bVar3);
      return;
    }
    if (cVar1 != '\x12') {
      if (cVar1 == '\f') {
        do {
          FUN_0040926c(param_1);
          iVar6 = param_3 + -1;
          bVar3 = 0 < param_3;
          param_1 = param_1 + 4;
          param_3 = iVar6;
        } while (iVar6 != 0 && bVar3);
        return;
      }
      if (cVar1 == '\r') {
        do {
          iVar6 = *(int *)(param_2 + uVar4 + 2);
          FUN_00409284(param_1,**(undefined4 **)(param_2 + uVar4 + 10),
                       *(undefined4 *)(param_2 + uVar4 + 6));
          iVar5 = param_3 + -1;
          bVar3 = 0 < param_3;
          param_1 = (undefined4 *)((int)param_1 + iVar6);
          param_3 = iVar5;
        } while (iVar5 != 0 && bVar3);
        return;
      }
      if (cVar1 == '\x0e') {
        do {
          iVar6 = *(int *)(param_2 + uVar4 + 2);
          FUN_0040923c(param_1,param_2);
          iVar5 = param_3 + -1;
          bVar3 = 0 < param_3;
          param_1 = (undefined4 *)((int)param_1 + iVar6);
          param_3 = iVar5;
        } while (iVar5 != 0 && bVar3);
        return;
      }
      if (cVar1 != '\x0f') {
        if (cVar1 == '\x11') {
          do {
            uVar2 = *param_1;
            param_1 = param_1 + 1;
            FUN_00409e6c(uVar2);
            iVar6 = param_3 + -1;
            bVar3 = 0 < param_3;
            param_3 = iVar6;
          } while (iVar6 != 0 && bVar3);
          return;
        }
        FUN_00404480(2);
        return;
      }
      do {
        uVar2 = *param_1;
        param_1 = param_1 + 1;
        FUN_0040b2dc(uVar2);
        iVar6 = param_3 + -1;
        bVar3 = 0 < param_3;
        param_3 = iVar6;
      } while (iVar6 != 0 && bVar3);
      return;
    }
  }
  do {
    uVar2 = *param_1;
    param_1 = param_1 + 1;
    FUN_00407ad0(uVar2);
    iVar6 = param_3 + -1;
    bVar3 = 0 < param_3;
    param_3 = iVar6;
  } while (iVar6 != 0 && bVar3);
  return;
}
