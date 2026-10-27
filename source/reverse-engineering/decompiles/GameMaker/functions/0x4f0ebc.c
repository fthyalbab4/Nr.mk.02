// rea decompile_all
// name: FUN_004f0ebc
// address: 0x4f0ebc
// body: available
// range: 0x4f0ebc-0x4f0f39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f0ebc(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;

  iVar1 = *param_2;
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  iVar4 = param_2[3];
  uVar6 = 0;
  iVar5 = (**(code **)(*param_1 + 100))();
  if (iVar5 != 0) {
    iVar5 = (**(code **)(*param_1 + 100))();
    if (iVar5 != *param_1) {
      iVar5 = (**(code **)(*param_1 + 100))();
      uVar6 = (**(code **)(iVar5 + 0x2c))(iVar5,1,*(undefined4 *)PTR_DAT_00782280);
      FUN_004edcac(uVar6,iVar2);
      FUN_004edc78(uVar6,iVar1);
      FUN_004edfa4(uVar6,iVar3 - iVar1);
      FUN_004edfe4(uVar6,iVar4 - iVar2);
    }
  }
  return uVar6;
}
