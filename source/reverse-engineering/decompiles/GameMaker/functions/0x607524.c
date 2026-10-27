// rea decompile_all
// name: FUN_00607524
// address: 0x607524
// body: available
// range: 0x607524-0x6075f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00607524(int *param_1)

{
  int iVar1;

  iVar1 = param_1[0x36];
  (**(code **)(*param_1 + 0xd4))();
  FUN_005f6e5c(iVar1,*(undefined1 *)((int)param_1 + 0x106));
  FUN_005f6500(iVar1,1,0);
  (**(code **)(*param_1 + 0xdc))();
  if (param_1[0x37] != 0) {
    FUN_00407eb8(iVar1 + 0x18,param_1[0x37]);
  }
  *(short *)(iVar1 + 0x20) = (short)param_1[0x38];
  *(short *)(iVar1 + 0xc) = (short)param_1[0x39];
  *(undefined2 *)(iVar1 + 0xe) = *(undefined2 *)((int)param_1 + 0xe2);
  if (*(char *)((int)param_1 + 0x105) == '\x01') {
    (**(code **)(**(int **)PTR_DAT_007826d0 + 0x68))
              (*(int **)PTR_DAT_007826d0,*(undefined4 *)(param_1[0x36] + 0x10),0xffff,
               *(undefined4 *)PTR_DAT_007815b4,4);
  }
  FUN_005f6760(iVar1);
  FUN_00607a60(param_1,(char)param_1[0x41]);
  (**(code **)(*param_1 + 0xd8))();
  return;
}
