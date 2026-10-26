// rea decompile_all
// name: FUN_0047ac5c
// address: 0x47ac5c
// body: available
// range: 0x47ac5c-0x47ad31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047ac5c(int *param_1,int param_2)

{
  int iVar1;
  ushort uVar2;

  iVar1 = *(int *)(param_2 + 8);
  uVar2 = *(ushort *)(iVar1 + 0x10);
  if ((*(uint *)(iVar1 + 0x10) & 0x1000) != 0) {
    uVar2 = uVar2 | 0x1000;
  }
  if ((*(uint *)(iVar1 + 0x10) & 0x20) != 0) {
    uVar2 = uVar2 | 0x20;
  }
  FUN_0045d574(param_1[0x9c],*(undefined4 *)(iVar1 + 0x18));
  FUN_0045d3e0(param_1[0x9c],param_1[0x19]);
  FUN_0045d3fc(param_1[0x9c],param_1[0x70]);
  if ((-1 < *(int *)(iVar1 + 8)) && ((uVar2 & 1) != 0)) {
    FUN_0045c2e4(*(undefined4 *)(param_1[0x9c] + 0x48),0xff00000d);
    FUN_0045b790(*(undefined4 *)(param_1[0x9c] + 0x40),0xff00000e);
  }
  if (*(int *)(iVar1 + 8) < 0) {
    (**(code **)(*(int *)param_1[0x9c] + 0x4c))((int *)param_1[0x9c],iVar1 + 0x1c);
  }
  else {
    (**(code **)(*param_1 + 0x140))(param_1,*(int *)(iVar1 + 8),iVar1 + 0x1c,uVar2);
  }
  if ((uVar2 & 0x10) != 0) {
    DrawFocusRect(*(HDC *)(iVar1 + 0x18),(RECT *)(iVar1 + 0x1c));
  }
  FUN_0045d574(param_1[0x9c],0);
  return;
}
