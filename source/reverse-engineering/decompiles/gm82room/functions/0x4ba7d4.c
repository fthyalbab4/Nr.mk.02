// rea decompile_all
// name: FUN_004ba7d4
// address: 0x4ba7d4
// body: available
// range: 0x4ba7d4-0x4ba882 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ba7d4(int *param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;

  param_1[0x15] = param_1[0x15] | 8;
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  cVar2 = FUN_004061f8(uVar1,&PTR_LAB_004b3174);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x78))(param_1,uVar1);
  }
  FUN_004465dc(param_1,param_2);
  param_1[0x15] = param_1[0x15] & 0xfffffff7;
  if (param_1[0xd] != 0) {
    FUN_004bcb48(param_1,0xb009,0,0);
    FUN_004bcb48(param_1,0xb008,0,0);
    FUN_004bcb48(param_1,0xb023,0,0);
    FUN_004bcb48(param_1,0xb035,0,0);
    FUN_004bcb48(param_1,0xb03d,0,0);
    FUN_004bcb48(param_1,0xb050,0,0);
    FUN_004bcb48(param_1,0xb058,0,0);
  }
  return;
}
