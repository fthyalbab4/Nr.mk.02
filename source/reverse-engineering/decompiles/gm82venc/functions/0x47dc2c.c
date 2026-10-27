// rea decompile_all
// name: FUN_0047dc2c
// address: 0x47dc2c
// body: available
// range: 0x47dc2c-0x47dce5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047dc2c(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;

  iVar2 = *(int *)(param_2 + 8);
  uVar1 = *(ushort *)(iVar2 + 0x10);
  FUN_0045d574(param_1[0xa4],*(undefined4 *)(iVar2 + 0x18));
  FUN_0045d3e0(param_1[0xa4],param_1[0x19]);
  FUN_0045d3fc(param_1[0xa4],param_1[0x70]);
  if ((-1 < *(int *)(iVar2 + 8)) && ((uVar1 & 1) != 0)) {
    FUN_0045c2e4(*(undefined4 *)(param_1[0xa4] + 0x48),0xff00000d);
    FUN_0045b790(*(undefined4 *)(param_1[0xa4] + 0x40),0xff00000e);
  }
  if (*(int *)(iVar2 + 8) < 0) {
    (**(code **)(*(int *)param_1[0xa4] + 0x4c))((int *)param_1[0xa4],iVar2 + 0x1c);
  }
  else {
    (**(code **)(*param_1 + 0x11c))(param_1,*(undefined4 *)(iVar2 + 8),iVar2 + 0x1c,uVar1);
  }
  if ((uVar1 & 0x10) != 0) {
    DrawFocusRect(*(HDC *)(iVar2 + 0x18),(RECT *)(iVar2 + 0x1c));
  }
  FUN_0045d574(param_1[0xa4],0);
  return;
}
