// rea decompile_all
// name: FUN_0043ebc8
// address: 0x43ebc8
// body: available
// range: 0x43ebc8-0x43ec2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043ebc8(int *param_1)

{
  int iVar1;
  int iVar2;

  if (param_1[8] != 0) {
    (**(code **)(*param_1 + 0x94))();
    if (((char)param_1[0x10] != '\0') && (iVar1 = param_1[8], -1 < iVar1 + -1)) {
      iVar2 = 0;
      do {
        (**(code **)(*param_1 + 0x18))(param_1,iVar2);
        FUN_00405a7c();
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00408e44(param_1[7],&DAT_00432228,param_1[8]);
    param_1[8] = 0;
    (**(code **)(*param_1 + 0x28))(param_1,0);
    (**(code **)(*param_1 + 0x90))();
  }
  return;
}
