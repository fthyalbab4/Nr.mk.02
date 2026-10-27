// rea decompile_all
// name: FUN_004bdbc0
// address: 0x4bdbc0
// body: available
// range: 0x4bdbc0-0x4bdc66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bdbc0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = param_1[0xa3];
  if (param_2 != iVar1) {
    if (iVar1 != 0) {
      FUN_00508208(iVar1,param_1[0xbd]);
    }
    param_1[0xa3] = param_2;
    if (param_2 == 0) {
      FUN_004baf80(param_1,0,2);
      if ((char)param_1[0xb7] != '\0') {
        FUN_004bb854(param_1,0);
        FUN_004bb854(param_1,1);
      }
    }
    else {
      FUN_004bb854(param_1,0);
      FUN_0050824c(param_1[0xa3],param_1[0xbd]);
      FUN_00448f68(param_1[0xa3],param_1);
      uVar2 = FUN_00506bcc(param_1[0xa3]);
      FUN_004baf80(param_1,uVar2,2);
    }
    (**(code **)(*param_1 + 0x90))();
  }
  return;
}
