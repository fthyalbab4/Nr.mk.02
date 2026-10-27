// rea decompile_all
// name: FUN_0055fe38
// address: 0x55fe38
// body: available
// range: 0x55fe38-0x55ff05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0055fe38(int param_1,char param_2,undefined1 param_3,int param_4,undefined4 param_5,
                undefined1 param_6,int param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 extraout_CL;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;

  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    cVar3 = extraout_DL;
    param_3 = extraout_CL;
  }
  FUN_0055f170(param_1,0);
  *(undefined4 *)(param_1 + 0x28) = param_8;
  *(undefined1 *)(param_1 + 0x42) = param_6;
  *(undefined1 *)(param_1 + 0x44) = param_3;
  *(undefined4 *)(param_1 + 0x30) = param_5;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x38) = param_5;
  if (param_4 == 0) {
    uVar1 = FUN_0055b0f4();
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
  }
  else {
    *(int *)(param_1 + 0x2c) = param_4;
  }
  uVar1 = FUN_0055f9e4(DAT_0071187c);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  if (param_7 != 0) {
    iVar2 = FUN_00405fac(&DAT_0055a2c0,1);
    *(int *)(iVar2 + 4) = param_7;
    FUN_00438d04(param_1,iVar2);
  }
  if (*(char *)(param_1 + 0x42) == '\0') {
    if (*(char *)(param_1 + 0x44) == '\0') {
      FUN_00560220(param_1);
    }
    else {
      FUN_00560294(param_1);
    }
  }
  else {
    FUN_00560354(param_1);
  }
  if (cVar3 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_24;
  }
  return param_1;
}
