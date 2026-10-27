// rea decompile_all
// name: FUN_00449724
// address: 0x449724
// body: available
// range: 0x449724-0x4497b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00449724(int *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int local_14;
  undefined1 local_10;

  bVar3 = &stack0x00000000 == (undefined1 *)0x14;
  FUN_00408640(param_1[2],param_2);
  if (!bVar3) {
    if (param_2 != 0) {
      cVar2 = FUN_00416414(param_2,0);
      if (cVar2 == '\0') {
        local_10 = 0x11;
        local_14 = param_2;
        FUN_0041c0bc(&PTR_LAB_0042ef28,1,PTR_PTR_00781f48,0,&local_14);
        FUN_00406618();
      }
    }
    piVar1 = (int *)param_1[1];
    if (piVar1 == (int *)0x0) {
      (**(code **)(*param_1 + 0x20))(param_1,0,param_1[2],param_2);
    }
    else {
      (**(code **)(*piVar1 + 0x20))(piVar1,param_1,param_1[2],param_2);
    }
    FUN_004498e8(param_1,0);
    FUN_004497b4(param_1,param_2);
    FUN_004498e8(param_1,1);
  }
  return;
}
