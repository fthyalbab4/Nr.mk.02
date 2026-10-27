// rea decompile_all
// name: FUN_00446930
// address: 0x446930
// body: available
// range: 0x446930-0x4469bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00446930(int *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int local_14;
  undefined1 local_10;

  bVar3 = &stack0x00000000 == (undefined1 *)0x14;
  FUN_0040891c(param_1[2],param_2);
  if (!bVar3) {
    if (param_2 != 0) {
      cVar2 = FUN_00416114(param_2,0);
      if (cVar2 == '\0') {
        local_10 = 0x11;
        local_14 = param_2;
        FUN_0041bf50(&LAB_0042dae4,1,PTR_LAB_00688f30,0,&local_14);
        FUN_00406ab4();
      }
    }
    piVar1 = (int *)param_1[1];
    if (piVar1 == (int *)0x0) {
      (**(code **)(*param_1 + 0x20))(param_1,0,param_1[2],param_2);
    }
    else {
      (**(code **)(*piVar1 + 0x20))(piVar1,param_1,param_1[2],param_2);
    }
    FUN_00446af4(param_1,0);
    FUN_004469c0(param_1,param_2);
    FUN_00446af4(param_1,1);
  }
  return;
}
