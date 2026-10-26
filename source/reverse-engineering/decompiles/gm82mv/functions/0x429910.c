// rea decompile_all
// name: FUN_00429910
// address: 0x429910
// body: available
// range: 0x429910-0x4299c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00429910(undefined4 param_1,ushort *param_2,undefined4 param_3)

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
        FUN_0040b268(param_1);
        return;
      }
      if (uVar1 == 1) {
        if (DAT_0067ce6c != '\0') {
          FUN_00424264(1,0xd);
        }
        FUN_0040b268(param_1);
        return;
      }
      if (uVar1 != 9) goto LAB_00429991;
    }
    FUN_0040b280(param_1,*(undefined4 *)(param_2 + 4));
  }
  else {
    if (uVar1 == 0x101) {
      FUN_00429898(param_1,param_2);
      return;
    }
    if ((uVar1 == 0x4009) || (uVar1 == 0x400d)) {
      FUN_0040b280(param_1,**(undefined4 **)(param_2 + 4));
      return;
    }
LAB_00429991:
    cVar2 = FUN_0042b560(*param_2,&local_c);
    uVar4 = extraout_var;
    if (cVar2 != '\0') {
      uVar3 = FUN_0040b268(param_1);
      cVar2 = FUN_004060a4(local_c,&DAT_004299cc,uVar3);
      uVar4 = extraout_var_00;
      if (cVar2 != '\0') {
        return;
      }
    }
    FUN_00424264(*param_2,CONCAT22(uVar4,0xd));
  }
  return;
}
