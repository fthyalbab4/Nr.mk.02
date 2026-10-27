// rea decompile_all
// name: FUN_00429a98
// address: 0x429a98
// body: available
// range: 0x429a98-0x429b50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00429a98(undefined4 param_1,ushort *param_2,undefined4 param_3)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar4;
  undefined4 local_c;

  uVar1 = *param_2;
  local_c = param_3;
  if (uVar1 < 0xe) {
    if (uVar1 != 0xd) {
      if (uVar1 == 0) {
        FUN_0040b140(param_1);
        return;
      }
      if (uVar1 == 1) {
        if (DAT_00773e50 != '\0') {
          FUN_00424184(1,0xd);
        }
        FUN_0040b140(param_1);
        return;
      }
      if (uVar1 != 9) goto LAB_00429b19;
    }
    FUN_0040b158(param_1,*(undefined4 *)(param_2 + 4));
  }
  else {
    if (uVar1 == 0x101) {
      FUN_00429a20(param_1,param_2);
      return;
    }
    if ((uVar1 == 0x4009) || (uVar1 == 0x400d)) {
      FUN_0040b158(param_1,**(undefined4 **)(param_2 + 4));
      return;
    }
LAB_00429b19:
    cVar2 = FUN_0042c960(*param_2,&local_c);
    uVar4 = extraout_var;
    if (cVar2 != '\0') {
      uVar3 = FUN_0040b140(param_1);
      cVar2 = FUN_00405b44(local_c,&DAT_00429b54,uVar3);
      uVar4 = extraout_var_00;
      if (cVar2 != '\0') {
        return;
      }
    }
    FUN_00424184(*param_2,CONCAT22(uVar4,0xd));
  }
  return;
}
