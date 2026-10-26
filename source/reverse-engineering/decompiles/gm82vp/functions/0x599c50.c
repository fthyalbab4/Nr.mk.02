// rea decompile_all
// name: FUN_00599c50
// address: 0x599c50
// body: available
// range: 0x599c50-0x599d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00599c50(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iStack_78;
  int iStack_74;
  int local_70;
  int local_6c;
  undefined1 local_68 [16];
  int local_58;
  int local_28;

  cVar2 = FUN_004c4988(param_1);
  if (cVar2 != '\0') {
    FUN_005992f4(param_1,local_68);
    if ((((local_58 < *param_2) || (local_28 < param_2[1])) || (*param_2 < param_1[0xb2])) ||
       (param_2[1] < param_1[0xb3])) {
      local_70 = param_1[0xb2];
      local_6c = param_1[0xb3];
      FUN_00599528(param_1,param_2,local_68,&iStack_78);
      (**(code **)(*param_1 + 0x9c))();
      iVar1 = *param_2;
      if (iVar1 < param_1[0xb2]) {
        param_1[0xb2] = iVar1;
      }
      else if (local_58 < iVar1) {
        param_1[0xb2] = iStack_78;
      }
      iVar1 = param_2[1];
      if (iVar1 < param_1[0xb3]) {
        param_1[0xb3] = iVar1;
      }
      else if (local_28 < iVar1) {
        param_1[0xb3] = iStack_74;
      }
      FUN_0059b2e8(param_1,&local_70);
    }
  }
  return;
}
