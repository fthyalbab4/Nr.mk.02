// rea decompile_all
// name: FUN_00409120
// address: 0x409120
// body: available
// range: 0x409120-0x40922e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x409225 to 0x404480 FUN_00404480 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00409120(int param_1,char *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;

  if (param_3 != 0) {
    cVar1 = *param_2;
    uVar4 = (uint)(byte)param_2[1];
    if (cVar1 == '\n') {
      if (param_3 < 2) {
        FUN_004072d8();
      }
      else {
        FUN_004072fc(param_1,param_3);
      }
    }
    else if (cVar1 == '\x12') {
      if (param_3 < 2) {
        thunk_FUN_004072d8();
      }
      else {
        thunk_FUN_004072fc(param_1,param_3);
      }
    }
    else if (cVar1 == '\v') {
      if (param_3 < 2) {
        FUN_00407dd0();
      }
      else {
        FUN_00407de8(param_1,param_3);
      }
    }
    else {
      iVar3 = param_1;
      if (cVar1 == '\f') {
        do {
          FUN_00409108(iVar3);
          iVar6 = param_3 + -1;
          bVar2 = 0 < param_3;
          iVar3 = iVar3 + 0x10;
          param_3 = iVar6;
        } while (iVar6 != 0 && bVar2);
      }
      else if (cVar1 == '\r') {
        do {
          iVar6 = *(int *)(param_2 + uVar4 + 2);
          FUN_00409120(iVar3,**(undefined4 **)(param_2 + uVar4 + 10),
                       *(undefined4 *)(param_2 + uVar4 + 6));
          iVar5 = param_3 + -1;
          bVar2 = 0 < param_3;
          iVar3 = iVar3 + iVar6;
          param_3 = iVar5;
        } while (iVar5 != 0 && bVar2);
      }
      else if (cVar1 == '\x0e') {
        do {
          iVar6 = *(int *)(param_2 + uVar4 + 2);
          FUN_004090d0(iVar3,param_2);
          iVar5 = param_3 + -1;
          bVar2 = 0 < param_3;
          iVar3 = iVar3 + iVar6;
          param_3 = iVar5;
        } while (iVar5 != 0 && bVar2);
      }
      else if (cVar1 == '\x0f') {
        do {
          FUN_0040b268(iVar3);
          iVar6 = param_3 + -1;
          bVar2 = 0 < param_3;
          iVar3 = iVar3 + 4;
          param_3 = iVar6;
        } while (iVar6 != 0 && bVar2);
      }
      else {
        if (cVar1 != '\x11') {
          iVar3 = FUN_00404480(2);
          return iVar3;
        }
        do {
          FUN_00409e08(iVar3,param_2);
          iVar6 = param_3 + -1;
          bVar2 = 0 < param_3;
          iVar3 = iVar3 + 4;
          param_3 = iVar6;
        } while (iVar6 != 0 && bVar2);
      }
    }
  }
  return param_1;
}
