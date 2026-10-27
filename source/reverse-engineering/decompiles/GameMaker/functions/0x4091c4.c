// rea decompile_all
// name: FUN_004091c4
// address: 0x4091c4
// body: available
// range: 0x4091c4-0x4092d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40920e to 0x404478 FUN_00404478 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004091c4(int param_1,undefined4 *param_2,char *param_3,int param_4)

{
  int *piVar1;
  char cVar2;

  cVar2 = *param_3;
  if (cVar2 == '\n') {
    do {
      FUN_00406eb0(param_1,*param_2);
      param_1 = param_1 + 4;
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\v') {
    do {
      FUN_00407ab4(param_1,*param_2);
      param_1 = param_1 + 4;
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\x12') {
    do {
      FUN_00407eb8(param_1,*param_2);
      param_1 = param_1 + 4;
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\f') {
    do {
      FUN_0040906c(param_1,param_2);
      param_1 = param_1 + 0x10;
      param_2 = param_2 + 4;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\r') {
    piVar1 = (int *)(param_3 + (byte)param_3[1] + 2);
    do {
      FUN_004091c4(param_1,param_2,*(undefined4 *)piVar1[2],piVar1[1]);
      param_1 = param_1 + *piVar1;
      param_2 = (undefined4 *)((int)param_2 + *piVar1);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\x0e') {
    do {
      FUN_00409084(param_1,param_2,param_3);
      param_1 = param_1 + *(int *)(param_3 + (byte)param_3[1] + 2);
      param_2 = (undefined4 *)((int)param_2 + *(int *)(param_3 + (byte)param_3[1] + 2));
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\x0f') {
    do {
      FUN_0040b158(param_1,*param_2);
      param_1 = param_1 + 4;
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else {
    if (cVar2 != '\x11') {
      FUN_00404478(2);
      return;
    }
    do {
      FUN_00409d1c(param_1,*param_2,param_3);
      param_1 = param_1 + 4;
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}
