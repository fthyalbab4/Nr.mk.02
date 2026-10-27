// rea decompile_all
// name: FUN_0065b9f8
// address: 0x65b9f8
// body: available
// range: 0x65b9f8-0x65bae2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065b9f8(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;

  if (param_1[0x9e] != 0) {
    FUN_0044924c(param_1[0x9e],param_1);
  }
  param_1[0x9e] = param_2;
  if (param_2 != 0) {
    FUN_00448f68(param_2,param_1);
    piVar1 = (int *)param_1[0x9e];
    if (piVar1[0xd] == 0) {
      FUN_004edf30(piVar1,&local_18);
      local_20 = local_18;
      local_1c = local_14;
    }
    else {
      (**(code **)(*piVar1 + 0x54))(piVar1,&local_18);
      FUN_004ee09c(piVar1,&local_18,&local_20);
    }
    FUN_004eecdc(param_1);
    if ((char)param_1[0xa0] == '\0') {
      iVar2 = *(int *)(param_1[0x9e] + 0x4c);
      if (iVar2 < 5) {
        return;
      }
      (**(code **)(*param_1 + 0x98))
                (param_1,*(int *)(param_1[0x9e] + 0x48) + local_20,local_1c + 4,iVar2 + -4,4);
    }
    else if ((char)param_1[0xa0] == '\x01') {
      iVar2 = *(int *)(param_1[0x9e] + 0x48);
      if (iVar2 < 5) {
        return;
      }
      (**(code **)(*param_1 + 0x98))
                (param_1,local_20 + 4,*(int *)(param_1[0x9e] + 0x4c) + local_1c,4,iVar2);
    }
    FUN_004eece4(param_1);
  }
  return;
}
