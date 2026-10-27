// rea decompile_all
// name: FUN_004f2f28
// address: 0x4f2f28
// body: available
// range: 0x4f2f28-0x4f3044 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f2f28(int param_1,int *param_2)

{
  char cVar1;
  int *piStack_14;
  int iStack_10;

  FUN_00405d08(param_2,param_1);
  piStack_14 = param_2;
  iStack_10 = param_1;
  FUN_004efb90(param_1,0xb04c,&piStack_14,1);
  if (param_1 == iStack_10) {
    FUN_004efb90(param_1,0xb02c,param_2,1);
    FUN_004f2e94(param_1,param_2);
    if ((*(byte *)(param_2 + 7) & 2) == 0) {
      FUN_004efb90(param_2,0xb009,0,0);
      FUN_004efb90(param_2,0xb008,0,0);
      FUN_004efb90(param_2,0xb023,0,0);
      FUN_004efb90(param_2,0xb03d,0,0);
      FUN_004efb90(param_2,0xb050,0,0);
      FUN_004efb90(param_2,0xb058,0,0);
      cVar1 = FUN_00405c98(param_2,&PTR_LAB_004e61b8);
      if (cVar1 == '\0') {
        cVar1 = FUN_004f7a54(param_1);
        if (cVar1 != '\0') {
          (**(code **)(*param_2 + 0x90))();
        }
      }
      else {
        FUN_004efb90(param_2,0xb011,0,0);
        FUN_004f3cf4(param_1);
      }
      FUN_004f2b80(param_1,param_2);
    }
    FUN_004efb90(param_1,0xb036,param_2,1);
  }
  return;
}
